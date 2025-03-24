// AbilityTask_SpawnSafeActor.cpp

#include "AbilityTask_SpawnSafeActor.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "WorldCollision.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "Engine/Engine.h"

UAbilityTask_SpawnSafeActor::UAbilityTask_SpawnSafeActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UAbilityTask_SpawnSafeActor* UAbilityTask_SpawnSafeActor::SpawnSafeActor(
    UGameplayAbility* OwningAbility, FName TaskInstanceName, TSubclassOf<AActor> ActorClass, FVector Location,
    FRotator Rotation, bool bMoveEncroachingActors
)
{
    UAbilityTask_SpawnSafeActor* MyTask = NewAbilityTask<UAbilityTask_SpawnSafeActor>(OwningAbility, TaskInstanceName);
    MyTask->MyActorClass = ActorClass;
    MyTask->CachedSpawnLocation = Location;  
    MyTask->CachedSpawnRotation = Rotation;
    MyTask->bMoveEncroachingActors = bMoveEncroachingActors;
    return MyTask;
}

void UAbilityTask_SpawnSafeActor::Activate()
{
    Super::Activate();

    AActor* SpawnedActor = nullptr;
    if (BeginSpawningActor(Ability, MyActorClass, CachedSpawnLocation, CachedSpawnRotation, SpawnedActor))
    {
        FinishSpawningActor(Ability, CachedSpawnLocation, CachedSpawnRotation, SpawnedActor);
    }
    else
    {
        // If spawning failed, broadcast failure and end the task.
        DidNotSpawn.Broadcast(nullptr);
        EndTask();
    }
}

bool UAbilityTask_SpawnSafeActor::BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation, AActor*& SpawnedActor)
{
    // Only proceed on the network authority.
    if (Ability && Ability->GetCurrentActorInfo()->IsNetAuthority())
    {
        UWorld* const World = GEngine->GetWorldFromContextObject(OwningAbility, EGetWorldErrorMode::LogAndReturnNull);
        if (World)
        {
            FTransform SpawnTransform(Rotation, Location);
            SpawnedActor = World->SpawnActorDeferred<AActor>(ActorClass, SpawnTransform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
        }
    }
    
    if (SpawnedActor == nullptr)
    {
        DidNotSpawn.Broadcast(nullptr);
        return false;
    }

    return true;
}

void UAbilityTask_SpawnSafeActor::FinishSpawningActor(UGameplayAbility* OwningAbility, FVector Location, FRotator Rotation, AActor* SpawnedActor)
{
    if (SpawnedActor)
    {
        FTransform SpawnTransform(Rotation, Location);
        TArray<AActor*> EncroachingActors;
        // Try to resolve encroachment. If bMoveEncroachingActors is false, this simply checks for overlaps.
        if (ResolveEncroachment(SpawnedActor, SpawnTransform, EncroachingActors))
        {
            OnPreFinishSpawning.Broadcast(SpawnedActor);  
            SpawnedActor->FinishSpawning(SpawnTransform);
            Success.Broadcast(SpawnedActor);
        }
        else
        {
            // Encroachment could not be resolved; clean up the spawned actor.
            SpawnedActor->Destroy();
            DidNotSpawn.Broadcast(nullptr);
        }
    }

    EndTask();
}

void UAbilityTask_SpawnSafeActor::GetEncroachingActors(AActor* ActorToSpawn, const FTransform& SpawnTransform, TArray<AActor*>& OutEncroachingActors)
{
    // Simply check for overlaps without modifying any flags.
    ResolveEncroachment(ActorToSpawn, SpawnTransform, OutEncroachingActors);
}

bool UAbilityTask_SpawnSafeActor::HasEncroachment(AActor* ActorToCheck, const FTransform& Transform) const
{
    TArray<FOverlapResult> Overlaps;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(HasEncroachment), false, ActorToCheck);
    UWorld* World = GetWorld();
    if (!World)
    {
        return false;
    }
    
    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(ActorToCheck->GetRootComponent());
    if (RootComp)
    {
        FCollisionShape CollisionShape = RootComp->GetCollisionShape();
        return World->OverlapMultiByObjectType(
            Overlaps,
            Transform.GetLocation(),
            Transform.GetRotation(),
            FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
            CollisionShape,
            Params
        );
    }
    else
    {
        // Fallback: use a sphere with a reasonable radius.
        FCollisionShape Sphere = FCollisionShape::MakeSphere(500.0f);
        return World->OverlapMultiByObjectType(
            Overlaps,
            Transform.GetLocation(),
            FQuat::Identity,
            FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
            Sphere,
            Params
        );
    }
}

bool UAbilityTask_SpawnSafeActor::ResolveEncroachment(
    AActor* ActorToSpawn,
    const FTransform& SpawnTransform,
    TArray<AActor*>& OutEncroachingActors
) const
{
    if (!ActorToSpawn || !GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("ResolveEncroachment: Invalid actor or world."));
        return false;
    }

    // First, check if any overlaps exist at the desired spawn location.
    if (HasEncroachment(ActorToSpawn, SpawnTransform))
    {
        // If we're not allowed to move encroaching actors, then we fail immediately.
        if (!bMoveEncroachingActors)
        {
            UE_LOG(LogTemp, Warning, TEXT("ResolveEncroachment: Overlap detected and bMoveEncroachingActors is false."));
            return false;
        }
    }
    else
    {
        // No encroachment detected, so we’re good to go.
        return true;
    }

    // If movement is allowed, attempt to adjust the actor's position.
    UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(ActorToSpawn->GetRootComponent());
    if (!RootComp)
    {
        // Without a primitive component, we cannot adjust accurately.
        UE_LOG(LogTemp, Warning, TEXT("ResolveEncroachment: Actor lacks a primitive root component for collision adjustment."));
        return false;
    }

    FCollisionShape CollisionShape = RootComp->GetCollisionShape();
    TArray<FOverlapResult> Overlaps;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(ResolveEncroachment), false, ActorToSpawn);
    GetWorld()->OverlapMultiByObjectType(
        Overlaps,
        SpawnTransform.GetLocation(),
        SpawnTransform.GetRotation(),
        FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
        CollisionShape,
        Params
    );

    FVector TotalAdjustment(0.f);
    for (const FOverlapResult& Overlap : Overlaps)
    {
        AActor* OtherActor = Overlap.GetActor();
        if (!OtherActor || OtherActor == ActorToSpawn)
        {
            continue;
        }

        OutEncroachingActors.Add(OtherActor);

        UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
        if (!PrimComp || !PrimComp->IsQueryCollisionEnabled())
        {
            continue;
        }

        FMTDResult MTDResult;
        if (PrimComp->GetBodyInstance()->OverlapTest(SpawnTransform.GetLocation(), SpawnTransform.GetRotation(), CollisionShape, &MTDResult))
        {
            TotalAdjustment += MTDResult.Direction * MTDResult.Distance;
        }
    }

    // First try adjusting only in the Z-direction.
    FVector ZAdjustment(0.f, 0.f, TotalAdjustment.Z);
    ActorToSpawn->AddActorWorldOffset(ZAdjustment, true);

    // Create a new transform based on the adjusted location.
    FTransform AdjustedTransform = ActorToSpawn->GetTransform();
    if (!HasEncroachment(ActorToSpawn, AdjustedTransform))
    {
        return true; // Z adjustment resolved the issue.
    }

    // If not resolved, try applying the remaining adjustment.
    FVector FullAdjustment = TotalAdjustment - ZAdjustment;
    ActorToSpawn->AddActorWorldOffset(FullAdjustment, true);

    // Re-check for any remaining encroachment.
    AdjustedTransform = ActorToSpawn->GetTransform();
    bool bResolved = !HasEncroachment(ActorToSpawn, AdjustedTransform);
    if (!bResolved)
    {
        UE_LOG(LogTemp, Warning, TEXT("ResolveEncroachment: Unable to fully resolve overlaps after adjustments."));
    }
    return bResolved;
}

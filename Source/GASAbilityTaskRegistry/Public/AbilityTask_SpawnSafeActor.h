// AbilityTask_SpawnSafeActor.h

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_SpawnSafeActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnActorDelegate, AActor*, SpawnedActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreFinishSpawnDelegate, AActor*, SpawnedActor);

UCLASS()
class GASABILITYTASKREGISTRY_API UAbilityTask_SpawnSafeActor : public UAbilityTask
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FSpawnActorDelegate Success;

    /** Called when the actor cannot be spawned (on clients or when server fails to spawn) */
    UPROPERTY(BlueprintAssignable)
    FSpawnActorDelegate DidNotSpawn;

    /** Called before finishing spawning the actor to allow for custom logic */
    UPROPERTY(BlueprintAssignable)
    FPreFinishSpawnDelegate OnPreFinishSpawning;

    UAbilityTask_SpawnSafeActor(const FObjectInitializer& ObjectInitializer);

    // Public function to spawn the actor with encroachment handling
    UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "Spawn Safe Actor", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility"))
    static UAbilityTask_SpawnSafeActor* SpawnSafeActor(
        UGameplayAbility* OwningAbility, 
        FName TaskInstanceName, 
        TSubclassOf<AActor> ActorClass,
        FVector Location,  
        FRotator Rotation,
        bool bMoveEncroachingActors
    );

    virtual void Activate() override;

protected:
    // Internal functions to handle the spawning and encroachment
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation, AActor*& SpawnedActor);
    void FinishSpawningActor(UGameplayAbility* OwningAbility, FVector Location, FRotator Rotation, AActor* SpawnedActor);

    // Function to get all encroaching actors without moving them
    void GetEncroachingActors(AActor* ActorToSpawn, const FTransform& SpawnTransform, TArray<AActor*>& OutEncroachingActors);

    // Function to check and resolve any encroachment
    bool ResolveEncroachment(AActor* ActorToSpawn, const FTransform& SpawnTransform, TArray<AActor*>& OutEncroachingActors) const;

    // Helper function to simply check for overlaps (without moving the actor)
    bool HasEncroachment(AActor* ActorToCheck, const FTransform& Transform) const;

    // Properties
    TSubclassOf<AActor> MyActorClass;
    FVector CachedSpawnLocation;
    FRotator CachedSpawnRotation;
    bool bMoveEncroachingActors;
};

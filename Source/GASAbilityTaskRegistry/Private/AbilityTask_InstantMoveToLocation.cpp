// Copyright Games By Moshi 2025. All Rights Reserved.

#include "AbilityTask_InstantMoveToLocation.h"
#include "AbilitySystemComponent.h"
#include "Components/SceneComponent.h"
#include "AbilitySystemLog.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_InstantMoveToLocation)

UAbilityTask_InstantMoveToLocation::UAbilityTask_InstantMoveToLocation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DestinationLocation = FVector::ZeroVector;
}


UAbilityTask_InstantMoveToLocation* UAbilityTask_InstantMoveToLocation::InstantMoveToLocation(UGameplayAbility* OwningAbility, FVector TargetLocation, FRotator TargetRotation, bool bSweep, bool bStopAtCollision, bool bSetRotation)
{
	UAbilityTask_InstantMoveToLocation* Task = NewAbilityTask<UAbilityTask_InstantMoveToLocation>(OwningAbility);
	Task->DestinationLocation = TargetLocation;
	Task->DestinationRotation = TargetRotation;
	Task->bDoSweep = bSweep;
	Task->bStopAtCollision = bStopAtCollision;
	Task->bSetRotation = bSetRotation;
	
	return Task;
}

void UAbilityTask_InstantMoveToLocation::ExecuteMove()
{
	AActor* MyActor = GetAvatarActor();
	if (!MyActor)
	{
		ABILITY_LOG(Warning, TEXT("UAbilityTask_InstantMoveToLocation called in Ability %s but AvatarActor is null."),
			Ability ? *Ability->GetName() : TEXT("NULL"));
		EndTask();
		return;
	}

	FHitResult Hit;
	const bool bTeleportSuccess = bDoSweep ? MyActor->SetActorLocation(DestinationLocation, true, &Hit, ETeleportType::TeleportPhysics) 
										   : MyActor->SetActorLocation(DestinationLocation, false, nullptr, ETeleportType::TeleportPhysics);

	// Check for unsuccessful teleport due to blocking hit
	if (!bTeleportSuccess)
	{
		if (bStopAtCollision && Hit.bBlockingHit)
		{
			// Adjust the destination to the hit location or handle as needed
			FVector AdjustedLocation = Hit.Location; // Customize this adjustment as required
			MyActor->SetActorLocation(AdjustedLocation, false, nullptr, ETeleportType::TeleportPhysics);
		}
		else
		{
			// Handle cases where teleport fails but no blocking hit is involved
			OnFail.Broadcast();
			EndTask();
			return;
		}
	}

	// Apply rotation if needed
	if (bSetRotation)
	{
		MyActor->SetActorRotation(DestinationRotation);
	}

	// Broadcast successful move completion
	OnInstantMoveCompleted.Broadcast(DestinationLocation);
	EndTask();
}



void UAbilityTask_InstantMoveToLocation::Activate()
{
	// Define the collision shape, perhaps based on the actor's bounding box or a custom shape
	const FCollisionShape CollisionShape = FCollisionShape::MakeSphere(50.0f);

	if (bDoSweep)
	{
		// If sweeping is enabled, directly execute the move
		ExecuteMove();
	}
	else if (!CheckCollisionAtDestination(DestinationLocation, CollisionShape))
	{
		// If no collision at destination, execute the move
		ExecuteMove();
	}
	else if (bStopAtCollision)
	{
		// If no collision at destination, execute the move
		ExecuteMove();
	}
	else
	{
		// Collision detected and not stopping at collision
		OnFail.Broadcast();
		EndTask();
	}
}



bool UAbilityTask_InstantMoveToLocation::CheckCollisionAtDestination(const FVector& TargetLocation, const FCollisionShape& CollisionShape)
{
	AActor* MyActor = GetAvatarActor();
	if (!MyActor)
	{
		return false;
	}

	// Setup query parameters
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(MyActor);

	// Check for overlap at the target location
	bool bCollision = GetWorld()->OverlapBlockingTestByChannel(TargetLocation, FQuat::Identity, ECC_Visibility, CollisionShape, QueryParams);

#if WITH_EDITOR
	if (GEngine)
	{
		const FString CollisionResult = bCollision ? TEXT("True, Collision detected") : TEXT("False, No collision");
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Collision Check: %s"), *CollisionResult));
		DrawDebugSphere(GetWorld(), TargetLocation, CollisionShape.GetSphereRadius(), 32, bCollision ? FColor::Red : FColor::Green, false, 5.0f);
	}
#endif

	return bCollision;
}



void UAbilityTask_InstantMoveToLocation::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(UAbilityTask_InstantMoveToLocation, DestinationLocation);
	DOREPLIFETIME(UAbilityTask_InstantMoveToLocation, DestinationRotation);
}

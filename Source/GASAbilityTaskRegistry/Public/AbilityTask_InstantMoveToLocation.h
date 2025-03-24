// Copyright Games By Moshi 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_InstantMoveToLocation.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstantMoveCompletedDelegate, FVector, NewLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInstantMoveFailedDelegate);


UCLASS(meta=(HasAnyClassFlags=CLASS_Replacable))
class GASABILITYTASKREGISTRY_API UAbilityTask_InstantMoveToLocation : public UAbilityTask
{
	GENERATED_UCLASS_BODY()
	
	UPROPERTY(BlueprintAssignable)
	FInstantMoveCompletedDelegate OnInstantMoveCompleted;

	UPROPERTY(BlueprintAssignable)
	FInstantMoveFailedDelegate OnFail;

	UFUNCTION()
	void ExecuteMove();

	virtual void Activate() override;
	bool CheckCollisionAtDestination(const FVector& TargetLocation, const FCollisionShape& CollisionShape);

	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_InstantMoveToLocation* InstantMoveToLocation(UGameplayAbility* OwningAbility, FVector TargetLocation, FRotator TargetRotation, bool bSweep, bool bStopAtCollision, bool bSetRotation = true);
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	
protected:
	FVector DestinationLocation;
	FRotator DestinationRotation;
	bool bDoSweep;
	bool bStopAtCollision;
	bool bSetRotation;
};

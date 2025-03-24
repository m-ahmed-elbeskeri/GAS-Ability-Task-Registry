// Copyright Games By Moshi 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_MoveRandomly.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoveRandomlyEndDelegate);

UCLASS()
class GASABILITYTASKREGISTRY_API UAbilityTask_MoveRandomly : public UAbilityTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_MoveRandomly* MoveRandomlyTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, float DirectionChangeInterval, float TotalDuration);

	virtual void Activate() override;
	virtual void OnDestroy(bool AbilityEnded) override;

protected:
	float DirectionChangeInterval;
	float TotalDuration;
	float TimePassed;
	float TimeSinceLastDirectionChange;

	FTimerHandle TimerHandle;

	void MoveCharacter();
	void ChangeDirection();
	void HandleMoveRandomlyEnd();

	// Delegate for end of movement
	UPROPERTY(BlueprintAssignable)
	FOnMoveRandomlyEndDelegate OnMoveRandomlyEnd;

private:
	UPROPERTY()
	UGameplayAbility* OwningAbility;

	FVector CurrentMoveDirection;
};

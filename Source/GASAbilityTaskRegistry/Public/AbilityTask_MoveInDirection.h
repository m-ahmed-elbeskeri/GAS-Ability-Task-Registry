// Copyright Games By Moshi 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_MoveInDirection.generated.h"

/**
 * 
 */
UCLASS()
class GASABILITYTASKREGISTRY_API UAbilityTask_MoveInDirection : public UAbilityTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_MoveInDirection* MoveInDirectionTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Direction, float Interval, float Duration);

	virtual void Activate() override;
	virtual void OnDestroy(bool AbilityEnded) override;

protected:
	FVector MoveDirection;
	float MoveInterval;
	float MoveDuration;
	float TimePassed;

	FTimerHandle TimerHandle;

	void MoveCharacter();

private:
	UPROPERTY()
	UGameplayAbility* OwningAbility;
};

// Author: Tom Werner (dc: majort), 2026

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Abilities/Tasks/AbilityTask.h"

#include "AbilityTask_WaitForEnhancedInput.generated.h"

class UObject;
class UInputAction;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnhancedInputEventDelegate, FInputActionValue, ActionValue);

/** Ability task that waits for an enhanced input event. */
UCLASS(MinimalAPI)
class UAbilityTask_WaitForEnhancedInput : public UAbilityTask
{
	GENERATED_BODY()

public:
	UAbilityTask_WaitForEnhancedInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputStarted;

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputOngoing;

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputFirstTriggered;

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputTriggered;

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputCanceled;

	UPROPERTY(BlueprintAssignable)
	FEnhancedInputEventDelegate OnInputCompleted;

	/**
	 * Starts waiting for any enhanced input action events using the specified input action.
	 * @param bOnePressEventOnly If true, will only listen for the first input event and then close the gate
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta=(HidePin=OwningAbility,DefaultToSelf=OwningAbility,BlueprintInternalUseOnly=true))
	static UAbilityTask_WaitForEnhancedInput* WaitForEnhancedInput(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputAction* InputAction, bool bOnePressEventOnly);

protected:
	//~ Begin UAbilityTask Interface
	virtual void Activate() override;
	virtual void ExternalCancel() override;
	virtual FString GetDebugString() const override;
	virtual void OnDestroy(bool bInOwnerFinished) override;
	//~ End UAbilityTask Interface

	/** Bind Action handlers. */
	void HandleInputStarted(const FInputActionValue& ActionValue);
	void HandleInputOngoing(const FInputActionValue& ActionValue);
	void HandleInputTriggered(const FInputActionValue& ActionValue);
	void HandleInputCanceled(const FInputActionValue& ActionValue);
	void HandleInputCompleted(const FInputActionValue& ActionValue);

private:
	bool bOnePressEventOnly;

	TWeakObjectPtr<UInputAction> InputAction;
	TWeakObjectPtr<UEnhancedInputComponent> EnhancedInput;
	bool bHasBeenTriggered = false;
};
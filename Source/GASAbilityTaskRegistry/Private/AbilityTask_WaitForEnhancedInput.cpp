// Author: Tom Werner (dc: majort), 2026


#include "AbilityTask_WaitForEnhancedInput.h"

#include "EnhancedInputComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_WaitForEnhancedInput)

UAbilityTask_WaitForEnhancedInput::UAbilityTask_WaitForEnhancedInput(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UAbilityTask_WaitForEnhancedInput* UAbilityTask_WaitForEnhancedInput::WaitForEnhancedInput(
	UGameplayAbility* OwningAbility,
	FName TaskInstanceName,
	UInputAction* InputAction,
	bool bOnePressEventOnly)
{
	UAbilityTask_WaitForEnhancedInput* NewTask = NewAbilityTask<ThisClass>(OwningAbility, TaskInstanceName);
	NewTask->InputAction = InputAction;
	NewTask->bOnePressEventOnly = bOnePressEventOnly;
	return NewTask;
}

void UAbilityTask_WaitForEnhancedInput::Activate()
{
	Super::Activate();

	if (!IsValid(Ability) || !AbilitySystemComponent.IsValid() || !InputAction.IsValid())
	{
		return;
	}

	const APlayerController* PC = Ability->GetActorInfo().PlayerController.Get();
	if (!IsValid(PC))
	{
		return;
	}

	EnhancedInput = Cast<UEnhancedInputComponent>(PC->InputComponent);
	if (EnhancedInput.IsValid())
	{
		EnhancedInput->BindAction(InputAction.Get(), ETriggerEvent::Started, this, &ThisClass::HandleInputStarted);
		EnhancedInput->BindAction(InputAction.Get(), ETriggerEvent::Ongoing, this, &ThisClass::HandleInputOngoing);
		EnhancedInput->BindAction(InputAction.Get(), ETriggerEvent::Triggered, this, &ThisClass::HandleInputTriggered);
		EnhancedInput->BindAction(InputAction.Get(), ETriggerEvent::Canceled, this, &ThisClass::HandleInputCanceled);
		EnhancedInput->BindAction(InputAction.Get(), ETriggerEvent::Completed, this, &ThisClass::HandleInputCompleted);
	}
}

void UAbilityTask_WaitForEnhancedInput::ExternalCancel()
{
	Super::ExternalCancel();
}

FString UAbilityTask_WaitForEnhancedInput::GetDebugString() const
{
	return Super::GetDebugString();
}

void UAbilityTask_WaitForEnhancedInput::OnDestroy(bool bInOwnerFinished)
{
	if (EnhancedInput.IsValid())
	{
		EnhancedInput->ClearBindingsForObject(this);
	}

	Super::OnDestroy(bInOwnerFinished);
}

void UAbilityTask_WaitForEnhancedInput::HandleInputStarted(const FInputActionValue& ActionValue)
{
	if (bOnePressEventOnly && bHasBeenTriggered)
	{
		return;
	}
	bHasBeenTriggered = true;
	OnInputStarted.Broadcast(ActionValue);
}

void UAbilityTask_WaitForEnhancedInput::HandleInputOngoing(const FInputActionValue& ActionValue)
{
	if (bOnePressEventOnly && bHasBeenTriggered)
	{
		return;
	}
	bHasBeenTriggered = true;
	OnInputOngoing.Broadcast(ActionValue);
}

void UAbilityTask_WaitForEnhancedInput::HandleInputTriggered(const FInputActionValue& ActionValue)
{
	if (bOnePressEventOnly && bHasBeenTriggered)
	{
		return;
	}

	// Not triggered yet? -> so its the first time
	if (!bHasBeenTriggered)
	{
		OnInputFirstTriggered.Broadcast(ActionValue);
		return;
	}

	bHasBeenTriggered = true;
	OnInputTriggered.Broadcast(ActionValue);
}

void UAbilityTask_WaitForEnhancedInput::HandleInputCanceled(const FInputActionValue& ActionValue)
{
	if (bOnePressEventOnly && bHasBeenTriggered)
	{
		return;
	}
	bHasBeenTriggered = true;
	OnInputCanceled.Broadcast(ActionValue);
}

void UAbilityTask_WaitForEnhancedInput::HandleInputCompleted(const FInputActionValue& ActionValue)
{
	if (bOnePressEventOnly && bHasBeenTriggered)
	{
		return;
	}
	bHasBeenTriggered = true;
	OnInputCompleted.Broadcast(ActionValue);
}

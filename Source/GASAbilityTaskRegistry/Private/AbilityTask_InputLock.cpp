// Copyright Games By Moshi 2025. All Rights Reserved.

#include "AbilityTask_InputLock.h"
#include "AbilitySystemComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

UAbilityTask_InputLock::UAbilityTask_InputLock(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, LockDuration(0.f)
	, bLockMoveInput(true)
	, bLockLookInput(true)
	, bIsLocking(true)
	, InputLockType(EInputLockType::Timed)
{
}

APlayerController* UAbilityTask_InputLock::GetPlayerController() const
{
	if (AActor* Avatar = GetAvatarActor())
	{
		return Cast<APlayerController>(Avatar->GetInstigatorController());
	}
	return nullptr;
}

UAbilityTask_InputLock* UAbilityTask_InputLock::SetInputLockState(UGameplayAbility* OwningAbility, bool bShouldLock, EInputLockType LockType, float Duration, bool bLockMove, bool bLockLook)
{
	if (!OwningAbility)
	{
		UE_LOG(LogTemp, Warning, TEXT("SetInputLockState: OwningAbility is null"));
		return nullptr;
	}

	UAbilityTask_InputLock* Task = NewAbilityTask<UAbilityTask_InputLock>(OwningAbility);
	Task->LockDuration = Duration;
	Task->bLockMoveInput = bLockMove;
	Task->bLockLookInput = bLockLook;
	Task->bIsLocking = bShouldLock;
	Task->InputLockType = LockType;
	return Task;
}

void UAbilityTask_InputLock::Activate()
{
	APlayerController* PC = GetPlayerController();
	if (!PC)
	{
		UE_LOG(LogTemp, Warning, TEXT("SetInputLockState: Unable to find a valid PlayerController."));
		EndTask();
		return;
	}

	if (bIsLocking)
	{
		// Lock the input as specified.
		PC->SetIgnoreMoveInput(bLockMoveInput);
		PC->SetIgnoreLookInput(bLockLookInput);

		// If using the timed lock option, set a timer to unlock input after the duration expires.
		if (InputLockType == EInputLockType::Timed)
		{
			if (LockDuration > 0.f)
			{
				if (UWorld* World = GetWorld())
				{
					World->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityTask_InputLock::ReEnableInput, LockDuration, false);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("SetInputLockState: World context is invalid; unlocking input immediately."));
					ReEnableInput();
				}
			}
			else
			{
				// If no valid duration provided, immediately unlock input.
				ReEnableInput();
			}
		}
		// For a permanent lock, no timer is set.
	}
	else
	{
		// When unlocking, only unlock the inputs that were originally locked.
		ReEnableInput();
	}
}

void UAbilityTask_InputLock::ReEnableInput()
{
	APlayerController* PC = GetPlayerController();
	if (PC)
	{
		// Only unlock input for those that were originally locked.
		if (bLockMoveInput)
		{
			PC->SetIgnoreMoveInput(false);
		}
		if (bLockLookInput)
		{
			PC->SetIgnoreLookInput(false);
		}
	}

	// Notify listeners that the input lock state change has been completed.
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnInputLockStateChanged.Broadcast();
	}

	EndTask();
}

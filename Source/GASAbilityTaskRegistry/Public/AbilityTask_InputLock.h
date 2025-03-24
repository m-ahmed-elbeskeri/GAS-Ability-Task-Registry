#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_InputLock.generated.h"

/** Enum that determines whether the input lock is timed or permanent */
UENUM(BlueprintType)
enum class EInputLockType : uint8
{
	/** Lock input for a specified duration */
	Timed UMETA(DisplayName = "Timed"),

	/** Lock input permanently until explicitly unlocked */
	Permanent UMETA(DisplayName = "Permanent")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputLockStateChangedDelegate);

UCLASS()
class GASABILITYTASKREGISTRY_API UAbilityTask_InputLock : public UAbilityTask
{
	GENERATED_BODY()

public:
	/** Constructor */
	UAbilityTask_InputLock(const FObjectInitializer& ObjectInitializer);

	/**
	 * Delegate called when the input lock state change has been completed.
	 * This occurs when a timed lock expires or when unlocking is applied.
	 */
	UPROPERTY(BlueprintAssignable, Category = "Ability|Input")
	FInputLockStateChangedDelegate OnInputLockStateChanged;

	/**
	 * Sets the input lock state.
	 * @param OwningAbility	The ability that owns this task.
	 * @param bShouldLock	If true, input will be locked; if false, input will be unlocked.
	 * @param LockType		Specifies whether the lock is timed or permanent (Timed = duration applies).
	 * @param Duration		The duration for which to lock input (only used if LockType is Timed).
	 * @param bLockMove		Whether to lock move input (only used when locking).
	 * @param bLockLook		Whether to lock look input (only used when locking).
	 * @return				The created AbilityTask.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_InputLock* SetInputLockState(UGameplayAbility* OwningAbility, bool bShouldLock = true, EInputLockType LockType = EInputLockType::Timed, float Duration = 0.f, bool bLockMove = true, bool bLockLook = true);

	virtual void Activate() override;

private:
	/** Duration for which input is locked (only valid when LockType is Timed) */
	float LockDuration;

	/** Timer handle for managing the lock duration */
	FTimerHandle TimerHandle;

	/** Cached flags for input locking options */
	bool bLockMoveInput;
	bool bLockLookInput;

	/** Determines whether we are applying a lock (true) or unlocking input (false) */
	bool bIsLocking;

	/** Specifies if the lock type is Timed or Permanent */
	EInputLockType InputLockType;

	/** Called by the timer to unlock input (or finish the unlocking process) */
	UFUNCTION()
	void ReEnableInput();

	/** Helper method to get the PlayerController from the avatar */
	APlayerController* GetPlayerController() const;
};

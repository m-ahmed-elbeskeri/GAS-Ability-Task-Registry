// Copyright Games By Moshi 2025. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitInputReleaseWithTimeLimit.generated.h"

/** Structure containing detailed information about the input release event */
USTRUCT(BlueprintType)
struct FInputReleaseInfo
{
    GENERATED_BODY()

    /** Duration the input was held before being released (in seconds) */
    UPROPERTY(BlueprintReadOnly, Category = "Input")
    float TimeHeld = 0.0f;

    /** Maximum time that was allowed for the input to be released (0 = no limit) */
    UPROPERTY(BlueprintReadOnly, Category = "Input")
    float TimeLimit = 0.0f;

    /** Whether the time limit was reached (true) or input was released naturally (false) */
    UPROPERTY(BlueprintReadOnly, Category = "Input")
    bool bTimedOut = false;
};

/** Delegate for when input is released, with detailed information */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputReleaseWithLimitDelegate, const FInputReleaseInfo&, ReleaseInfo);

/**
 * Waits until the input that activated the ability is released, with an optional time limit.
 * Provides detailed timing information and supports proper client-server replication.
 *
 * Improvements over standard WaitInputRelease:
 * - Optional time limit with automatic timeout
 * - Enhanced timing information
 * - Automatic detection of the input that activated the ability
 * - Full replication support across client-server
 */
UCLASS()
class GASABILITYTASKREGISTRY_API UAbilityTask_WaitInputReleaseWithTimeLimit : public UAbilityTask
{
    GENERATED_BODY()

public:
    /** Constructor */
    UAbilityTask_WaitInputReleaseWithTimeLimit(const FObjectInitializer& ObjectInitializer);

    /**
     * Delegate fired when input is released, either naturally or due to time limit expiration.
     * Provides detailed information about the release event.
     */
    UPROPERTY(BlueprintAssignable)
    FInputReleaseWithLimitDelegate OnRelease;

    /**
     * Wait until the user releases the input button for this ability's activation.
     * Auto-detects which input(s) activated the ability.
     * 
     * @param OwningAbility The ability that owns this task.
     * @param bTestAlreadyReleased If true, check immediately if input is already released.
     * @param TimeLimit Maximum time to wait for input release (0 = wait indefinitely).
     * @return The created AbilityTask.
     */
    UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
    static UAbilityTask_WaitInputReleaseWithTimeLimit* WaitInputReleaseWithTimeLimit(
        UGameplayAbility* OwningAbility,
        bool bTestAlreadyReleased = false,
        float TimeLimit = 0.0f);

    /** Callback for when input is released */
    UFUNCTION()
    void OnReleaseCallback();

    /** Called when the time limit is reached */
    UFUNCTION()
    void OnTimeExpired();

    virtual void Activate() override;
    virtual void ExternalCancel() override;
    virtual void OnDestroy(bool bInOwnerFinished) override;

protected:
    /** Time when the task was activated */
    float StartTime;
    
    /** Whether to check if input is already released when the task starts */
    bool bTestInitialState;
    
    /** Maximum time to wait for input release (0 = wait indefinitely) */
    float MaxTimeLimit;
    
    /** Timer handle for the time limit */
    FTimerHandle TimeLimitHandle;

    /** Handle for the replicated event delegate */
    FDelegateHandle DelegateHandle;
    
    /** Completes the task with release information */
    void CompleteTask(float TimeHeld, bool bTimedOut);
};

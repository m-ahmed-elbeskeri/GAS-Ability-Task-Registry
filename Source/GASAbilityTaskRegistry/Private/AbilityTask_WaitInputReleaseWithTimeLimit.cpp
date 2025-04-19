// Copyright Games By Moshi 2025. All Rights Reserved.
#include "AbilityTask_WaitInputReleaseWithTimeLimit.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(AbilityTask_WaitInputReleaseWithTimeLimit)

UAbilityTask_WaitInputReleaseWithTimeLimit::UAbilityTask_WaitInputReleaseWithTimeLimit(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    StartTime = 0.0f;
    bTestInitialState = false;
    MaxTimeLimit = 0.0f;
}

UAbilityTask_WaitInputReleaseWithTimeLimit* UAbilityTask_WaitInputReleaseWithTimeLimit::WaitInputReleaseWithTimeLimit(
    UGameplayAbility* OwningAbility,
    bool bTestAlreadyReleased,
    float TimeLimit)
{
    UAbilityTask_WaitInputReleaseWithTimeLimit* Task = NewAbilityTask<UAbilityTask_WaitInputReleaseWithTimeLimit>(OwningAbility);
    Task->bTestInitialState = bTestAlreadyReleased;
    Task->MaxTimeLimit = TimeLimit;
    return Task;
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::Activate()
{
    UWorld* World = GetWorld();
    StartTime = World ? World->GetTimeSeconds() : 0.0f;
    
    UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
    if (!ASC || !Ability)
    {
        EndTask();
        return;
    }

    // Check if input is already released if requested
    if (bTestInitialState && IsLocallyControlled())
    {
        FGameplayAbilitySpec* Spec = Ability->GetCurrentAbilitySpec();
        if (Spec && !Spec->InputPressed)
        {
            // Input is already released, finish immediately
            CompleteTask(0.0f, false);
            return;
        }
    }

    // Set up time limit if specified
    if (MaxTimeLimit > 0.0f && World)
    {
        World->GetTimerManager().SetTimer(
            TimeLimitHandle,
            this,
            &UAbilityTask_WaitInputReleaseWithTimeLimit::OnTimeExpired,
            MaxTimeLimit,
            false
        );
    }

    // Register for input release event
    DelegateHandle = ASC->AbilityReplicatedEventDelegate(
        EAbilityGenericReplicatedEvent::InputReleased,
        GetAbilitySpecHandle(),
        GetActivationPredictionKey()
    ).AddUObject(this, &UAbilityTask_WaitInputReleaseWithTimeLimit::OnReleaseCallback);

    // Handle remote clients
    if (IsForRemoteClient())
    {
        if (!ASC->CallReplicatedEventDelegateIfSet(
                EAbilityGenericReplicatedEvent::InputReleased,
                GetAbilitySpecHandle(),
                GetActivationPredictionKey()))
        {
            SetWaitingOnRemotePlayerData();
        }
    }
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::OnReleaseCallback()
{
    float ElapsedTime = 0.0f;
    if (UWorld* World = GetWorld())
    {
        ElapsedTime = World->GetTimeSeconds() - StartTime;
    }

    UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
    if (!Ability || !ASC)
    {
        EndTask();
        return;
    }

    // Clear our delegate and timer
    ASC->AbilityReplicatedEventDelegate(
        EAbilityGenericReplicatedEvent::InputReleased,
        GetAbilitySpecHandle(),
        GetActivationPredictionKey()
    ).Remove(DelegateHandle);

    if (MaxTimeLimit > 0.0f)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            World->GetTimerManager().ClearTimer(TimeLimitHandle);
        }
    }

    // Handle prediction
    FScopedPredictionWindow ScopedPrediction(ASC, IsPredictingClient());
    
    if (IsPredictingClient())
    {
        // Tell the server about this
        ASC->ServerSetReplicatedEvent(
            EAbilityGenericReplicatedEvent::InputReleased,
            GetAbilitySpecHandle(),
            GetActivationPredictionKey(),
            ASC->ScopedPredictionKey
        );
    }
    else
    {
        ASC->ConsumeGenericReplicatedEvent(
            EAbilityGenericReplicatedEvent::InputReleased,
            GetAbilitySpecHandle(),
            GetActivationPredictionKey()
        );
    }

    // Complete the task
    CompleteTask(ElapsedTime, false);
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::OnTimeExpired()
{
    // Time limit reached before input was released
    CompleteTask(MaxTimeLimit, true);
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::CompleteTask(float TimeHeld, bool bTimedOut)
{
    // Prepare the release info
    FInputReleaseInfo ReleaseInfo;
    ReleaseInfo.TimeHeld = TimeHeld;
    ReleaseInfo.TimeLimit = MaxTimeLimit;
    ReleaseInfo.bTimedOut = bTimedOut;
    
    // Broadcast the delegate if appropriate
    if (ShouldBroadcastAbilityTaskDelegates())
    {
        OnRelease.Broadcast(ReleaseInfo);
    }
    
    EndTask();
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::ExternalCancel()
{
    Super::ExternalCancel();
    
    UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
    if (ASC)
    {
        ASC->AbilityReplicatedEventDelegate(
            EAbilityGenericReplicatedEvent::InputReleased,
            GetAbilitySpecHandle(),
            GetActivationPredictionKey()
        ).Remove(DelegateHandle);
    }
    
    // Clear any timers
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TimeLimitHandle);
    }
    
    EndTask();
}

void UAbilityTask_WaitInputReleaseWithTimeLimit::OnDestroy(bool bInOwnerFinished)
{
    UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
    if (ASC)
    {
        ASC->AbilityReplicatedEventDelegate(
            EAbilityGenericReplicatedEvent::InputReleased,
            GetAbilitySpecHandle(),
            GetActivationPredictionKey()
        ).Remove(DelegateHandle);
    }
    
    // Clear any timers
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TimeLimitHandle);
    }
    
    Super::OnDestroy(bInOwnerFinished);
}

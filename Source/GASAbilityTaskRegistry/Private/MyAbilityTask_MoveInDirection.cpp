#include "AbilityTask_MoveInDirection.h"

// MyAbilityTask_MoveInDirection.cpp

#include "AbilityTask_MoveInDirection.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

UAbilityTask_MoveInDirection* UAbilityTask_MoveInDirection::MoveInDirectionTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Direction, float Interval, float Duration)
{
	UAbilityTask_MoveInDirection* MyTask = NewAbilityTask<UAbilityTask_MoveInDirection>(OwningAbility, TaskInstanceName);
	MyTask->MoveDirection = Direction.GetSafeNormal();
	MyTask->MoveInterval = Interval;
	MyTask->MoveDuration = Duration;
	MyTask->OwningAbility = OwningAbility;
	MyTask->TimePassed = 0.0f;
	return MyTask;
}

void UAbilityTask_MoveInDirection::Activate()
{
	Super::Activate();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityTask_MoveInDirection::MoveCharacter, MoveInterval, true);
}

void UAbilityTask_MoveInDirection::MoveCharacter()
{
	TimePassed += MoveInterval;
	if (TimePassed >= MoveDuration)
	{
		OnDestroy(false);
		return;
	}

	ACharacter* Character = Cast<ACharacter>(OwningAbility->GetAvatarActorFromActorInfo());
	if (Character)
	{
		Character->AddMovementInput(MoveDirection, 1.0f);
	}
}

void UAbilityTask_MoveInDirection::OnDestroy(bool AbilityEnded)
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	Super::OnDestroy(AbilityEnded);
}

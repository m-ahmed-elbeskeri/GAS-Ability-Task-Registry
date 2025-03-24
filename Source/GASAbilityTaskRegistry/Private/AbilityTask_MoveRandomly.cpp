// AbilityTask_MoveRandomly.cpp

#include "AbilityTask_MoveRandomly.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

UAbilityTask_MoveRandomly* UAbilityTask_MoveRandomly::MoveRandomlyTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, float DirectionChangeInterval, float TotalDuration)
{
	UAbilityTask_MoveRandomly* MyTask = NewAbilityTask<UAbilityTask_MoveRandomly>(OwningAbility, TaskInstanceName);
	MyTask->DirectionChangeInterval = DirectionChangeInterval;
	MyTask->TotalDuration = TotalDuration;
	MyTask->OwningAbility = OwningAbility;
	MyTask->TimePassed = 0.0f;
	MyTask->TimeSinceLastDirectionChange = 0.0f;
	MyTask->CurrentMoveDirection = FVector::ZeroVector;
	return MyTask;
}

void UAbilityTask_MoveRandomly::Activate()
{
	Super::Activate();
	ChangeDirection();  // Set initial direction
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityTask_MoveRandomly::MoveCharacter, 0.015f, true);
}

void UAbilityTask_MoveRandomly::MoveCharacter()
{
	TimePassed += 0.015f;
	TimeSinceLastDirectionChange += 0.015f;

	if (TimePassed >= TotalDuration)
	{
		HandleMoveRandomlyEnd();
		return;
	}

	if (TimeSinceLastDirectionChange >= DirectionChangeInterval)
	{
		ChangeDirection();
	}

	ACharacter* Character = Cast<ACharacter>(OwningAbility->GetAvatarActorFromActorInfo());
	if (Character)
	{
		Character->AddMovementInput(CurrentMoveDirection, 1.0f);
	}
}

void UAbilityTask_MoveRandomly::ChangeDirection()
{
	CurrentMoveDirection = FMath::VRand().GetSafeNormal();
	TimeSinceLastDirectionChange = 0.0f;
}

void UAbilityTask_MoveRandomly::HandleMoveRandomlyEnd()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnMoveRandomlyEnd.Broadcast();
	}
	OnDestroy(false);
}

void UAbilityTask_MoveRandomly::OnDestroy(bool AbilityEnded)
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	Super::OnDestroy(AbilityEnded);
}

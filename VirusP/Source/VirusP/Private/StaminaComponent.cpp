// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "VirusP/VirusPCharacter.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	DefaultStamina = 100.f;
	Stamina = DefaultStamina;
}


// Called when the game starts
void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<AVirusPCharacter>(GetOwner());

}

void UStaminaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	
	if (Stamina == 0)
	{
		bIsTired = true;

		StaminaColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
	}

	if (Stamina == DefaultStamina)
	{
		bIsTired = false;

		StaminaColor = FLinearColor(1.0f, 0.8f, 0.0f, 1.0f);		
	}

	if (bIsSprinting)
	{
		if (bIsTired)
		{
			Stamina = FMath::Clamp(Stamina + StaminaRegenRate/2 * DeltaTime, 0.f, DefaultStamina);

			Owner->GetCharacterMovement()->MaxWalkSpeed = TiredSpeed;			
		}
		else
		{
			Stamina = FMath::Clamp(Stamina - StaminaRegenRate * DeltaTime, 0.f, DefaultStamina);
			Owner->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;	
		}
		
	}
	else
	{
		if (bIsTired)
		{
			Stamina = FMath::Clamp(Stamina + StaminaRegenRate/2 * DeltaTime, 0.f, DefaultStamina);

			Owner->GetCharacterMovement()->MaxWalkSpeed = TiredSpeed;
		}
		else
		{
			Stamina = FMath::Clamp(Stamina + StaminaRegenRate * DeltaTime, 0.f, DefaultStamina);

			Owner->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		}		
	}

	
}


void UStaminaComponent::SetIsSprinting(bool tempbIsSprinting)
{
	bIsSprinting = tempbIsSprinting;
}

bool UStaminaComponent::GetIsTired()
{
	return bIsTired;
}

void UStaminaComponent::SetSpeeds(float newRunSpeed, float newWalkSpeed)
{
	RunSpeed = newRunSpeed;
	WalkSpeed = newWalkSpeed;
}

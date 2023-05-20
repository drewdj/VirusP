	// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultHealth = 100.f;
	Health = DefaultHealth;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	if (Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}
}

void UHealthComponent::Heal(float HealAmount)
{
	Health = FMath::Clamp(Health + HealAmount, 0.f, DefaultHealth);
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{

	if(Health <= 0 || Damage <= 0)
	{
		return;
	}
	
	Health = FMath::Clamp(Health - Damage, 0.f, DefaultHealth);

	OnHealthChanged.Broadcast();

	if (Health <= 0)
	{

		// Haz un cast a ACharacter
		ACharacter* Character = Cast<ACharacter>(DamagedActor);
		if (Character)
		{
			// Obten el componente de esqueleto del actor dañado
			USkeletalMeshComponent* SkeletalComp = Character->GetMesh();
			if (SkeletalComp)
			{
				OnDeath.Broadcast();
				// Activa la simulación de física para todos los huesos, activando el ragdoll
				SkeletalComp->SetSimulatePhysics(true);
				bIsDead = true;
				
			}

		}
		return;
	}
}






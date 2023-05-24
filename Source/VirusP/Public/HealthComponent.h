// Fill out your copyright notice in the Description page of Project Settings.
#include "GameFramework/Character.h"

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathEventSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VIRUSP_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();
	
	UPROPERTY(BlueprintAssignable)
	FOnDeathEventSignature OnDeath;

	UPROPERTY(BlueprintAssignable)
	FOnDeathEventSignature OnHealthChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	bool bIsDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float DefaultHealth = 100.f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	float Health;

	UFUNCTION(BlueprintCallable)
	void Heal(float HealAmount);

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
};

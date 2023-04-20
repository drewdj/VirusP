// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VirusP/VirusPCharacter.h"
#include "StaminaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VIRUSP_API UStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStaminaComponent();


protected:
	AVirusPCharacter* Owner;
	
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float DefaultStamina = 100.f;

	UPROPERTY(BlueprintReadOnly)
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float RunSpeed = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float WalkSpeed = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	float TiredSpeed = 100.0f;

	UPROPERTY(EditAnywhere)
	float StaminaRegenRate = 20.f;

	UPROPERTY(EditAnywhere)
	bool bIsSprinting = false;

	UPROPERTY(EditAnywhere)
	bool bIsTired = false;

	//FLinearColor StaminaColor yellow
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina")
	FLinearColor StaminaColor = FLinearColor(1.0f, 0.8f, 0.0f, 1.0f);

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetIsSprinting(bool tempbIsSprinting);
	bool GetIsTired();
	void SetSpeeds(float newRunSpeed, float newWalkSpeed);

		
};

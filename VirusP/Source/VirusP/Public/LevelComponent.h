// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VIRUSP_API ULevelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULevelComponent();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	int CurrentLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	float CurrentExperience = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	float ExperienceToNextLevel = 100;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void LevelUp();
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void AddExperience(float Experience);

		
};

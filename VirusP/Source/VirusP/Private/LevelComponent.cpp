// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelComponent.h"

// Sets default values for this component's properties
ULevelComponent::ULevelComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULevelComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void ULevelComponent::LevelUp()
{
	CurrentLevel++;
	CurrentExperience = CurrentExperience - ExperienceToNextLevel;
	ExperienceToNextLevel = ExperienceToNextLevel * 1.5;
	if (CurrentExperience >= ExperienceToNextLevel)
	{
		LevelUp();
	}

}

void ULevelComponent::AddExperience(float Experience)
{
	CurrentExperience += Experience;
	if (CurrentExperience >= ExperienceToNextLevel)
	{
		LevelUp();
	}
	OnXPEvent.Broadcast();
}


// Called every frame
void ULevelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


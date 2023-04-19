// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	StartPos = GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("Door Name: %s"), *DoorName);

	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveDoor(DeltaTime);
	
}

void ADoor::MoveDoor(float DTime)
{
	FVector CurrentPos = GetActorLocation();
	FVector NewPos = CurrentPos + Axes * Speed * DTime;
	if(FVector::Dist(StartPos, NewPos) <= MaxDistance)
	{
		SetActorLocation(NewPos);
	}

}
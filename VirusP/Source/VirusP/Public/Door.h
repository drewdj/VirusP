// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class VIRUSP_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveDoor(float DTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FString DoorName= "Default Door";

	UPROPERTY(EditAnywhere);
	FVector Axes = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere);
	float Speed;

	UPROPERTY(EditAnywhere);
	float MaxDistance;

	UPROPERTY(EditAnywhere);
	FVector StartPos = FVector(0.0f, 0.0f, 0.0f);
};

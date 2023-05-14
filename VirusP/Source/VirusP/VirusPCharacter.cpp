// Copyright Epic Games, Inc. All Rights Reserved.

#include "VirusPCharacter.h"

#include "HealthComponent.h"
#include "StaminaComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AVirusPCharacter

AVirusPCharacter::AVirusPCharacter()
{
	PrimaryActorTick.bCanEverTick = true;




	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Establece la distancia objetivo de la cámara al valor inicial
	TargetCameraDistance = CameraBoom->TargetArmLength;
	// Establece la velocidad de interpolación (puedes ajustar este valor según lo desees)
	CameraInterpSpeed = 1.0f;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
	
}

//////////////////////////////////////////////////////////////////////////
// Input

void AVirusPCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AVirusPCharacter::StaminaJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);	

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AVirusPCharacter::Run);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AVirusPCharacter::StopRunning);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AVirusPCharacter::Crouch);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AVirusPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AVirusPCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AVirusPCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AVirusPCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AVirusPCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AVirusPCharacter::TouchStopped);


}

void AVirusPCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (!StaminaComponent->GetIsTired())
	{
		Jump();
	}

}

void AVirusPCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void AVirusPCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AVirusPCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AVirusPCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AVirusPCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AVirusPCharacter::Run()
{
	StaminaComponent->SetIsSprinting(true);
}

void AVirusPCharacter::StopRunning()
{
	StaminaComponent->SetIsSprinting(false);
}

void AVirusPCharacter::Crouch()
{
	bCrouched = !bCrouched;
	StaminaComponent->SetSpeeds(bCrouched ? 500 : 1000, bCrouched ? 350 : 500);
	SetTargetCameraDistance(bCrouched ? 550.0f : 400);
	ACharacter::Crouch();
	
}



void AVirusPCharacter::StaminaJump()
{	
	if (!StaminaComponent->GetIsTired()&&!GetCharacterMovement()->IsFalling())
	{
		StaminaComponent->ModifyStamina(-20);
		ACharacter::Jump();
	}

}

void AVirusPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Interpola la distancia de la cámara hacia la distancia objetivo
	CameraBoom->TargetArmLength = FMath::FInterpTo(
		CameraBoom->TargetArmLength,
		TargetCameraDistance,
		DeltaTime,
		CameraInterpSpeed
	);
}


void AVirusPCharacter::SetTargetCameraDistance(float NewDistance)
{
	TargetCameraDistance = NewDistance;
}


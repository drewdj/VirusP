// Copyright Epic Games, Inc. All Rights Reserved.

#include "VirusPGameMode.h"
#include "VirusPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVirusPGameMode::AVirusPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/VirusP_Character/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

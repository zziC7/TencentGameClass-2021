// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyUIProjectGameMode.h"
#include "MyUIProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyUIProjectGameMode::AMyUIProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

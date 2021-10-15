// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTencentGameClassGameMode.h"
#include "MyTencentGameClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTencentGameClassGameMode::AMyTencentGameClassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

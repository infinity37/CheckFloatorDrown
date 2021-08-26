// Copyright Epic Games, Inc. All Rights Reserved.

#include "LittleToolGameMode.h"
#include "LittleToolCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALittleToolGameMode::ALittleToolGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

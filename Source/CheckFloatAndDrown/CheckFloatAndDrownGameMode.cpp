// Copyright Epic Games, Inc. All Rights Reserved.

#include "CheckFloatAndDrownGameMode.h"
#include "CheckFloatAndDrownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACheckFloatAndDrownGameMode::ACheckFloatAndDrownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

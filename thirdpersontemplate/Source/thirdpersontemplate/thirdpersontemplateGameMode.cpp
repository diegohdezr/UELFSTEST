// Copyright Epic Games, Inc. All Rights Reserved.

#include "thirdpersontemplateGameMode.h"
#include "thirdpersontemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthirdpersontemplateGameMode::AthirdpersontemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

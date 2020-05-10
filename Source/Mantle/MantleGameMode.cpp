// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MantleGameMode.h"
#include "MantlePlayerController.h"
#include "MantleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMantleGameMode::AMantleGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMantlePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Invaders3DGameMode.h"
#include "Invaders3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInvaders3DGameMode::AInvaders3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

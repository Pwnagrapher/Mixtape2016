// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Fire.h"
#include "FireGameMode.h"
#include "FireHUD.h"
#include "FireCharacter.h"

AFireGameMode::AFireGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFireHUD::StaticClass();
}

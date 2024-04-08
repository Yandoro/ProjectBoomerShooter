// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectBoomerShooterGameMode.h"
#include "ProjectBoomerShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectBoomerShooterGameMode::AProjectBoomerShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

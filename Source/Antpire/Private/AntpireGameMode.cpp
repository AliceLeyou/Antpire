// Copyright Epic Games, Inc. All Rights Reserved.

#include "AntpireGameMode.h"
#include "AntpireCharacter.h"

AAntpireGameMode::AAntpireGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AAntpireCharacter::StaticClass();	
}

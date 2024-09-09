// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShopSystemGameMode.h"
#include "ShopSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShopSystemGameMode::AShopSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

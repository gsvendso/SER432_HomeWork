// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Assignment_1.h"
#include "Assignment_1GameMode.h"
#include "Assignment_1Character.h"
#include "Kismet/GameplayStatics.h"

AAssignment_1GameMode::AAssignment_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
    
    // Base Decay Rate
    DecayRate = 0.01f;
}

void AAssignment_1GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Check that we using the Character
    AAssignment_1Character * MyCharacter = Cast<AAssignment_1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (MyCharacter)
    {
        // If the character's power is positive
        if (MyCharacter->GetCurrentPower() > 0.f)
        {
            // Decrease the Character's power using the decay rate
            MyCharacter->UpdatePower(-DeltaTime * DecayRate*(MyCharacter->GetInitialPower()));
        }
    }
}
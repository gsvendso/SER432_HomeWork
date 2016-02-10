// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Assignment_1.h"
#include "Assignment_1GameMode.h"
#include "Assignment_1Character.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

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

void AAssignment_1GameMode::BeginPlay()
{
    Super::BeginPlay();
    SetCurrentState(EBatteryPlayState::EPlaying);
    
    // Set the score to beat
    AAssignment_1Character * MyCharacter = Cast<AAssignment_1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (MyCharacter)
    {
        PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
    }
    
    if (HUDWidgetClass != nullptr)
    {
        CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
        if (CurrentWidget != nullptr)
        {
            CurrentWidget->AddToViewport();
        }
    }
}

void AAssignment_1GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Check that we using the Character
    AAssignment_1Character * MyCharacter = Cast<AAssignment_1Character>(UGameplayStatics::GetPlayerPawn(this, 0));
    if (MyCharacter)
    {
        // If our power is greater than needed to win, Set the games state to won
        if (MyCharacter->GetCurrentPower() > PowerToWin)
        {
            SetCurrentState(EBatteryPlayState::EWon);
        }
        // If the character's power is positive
        else if (MyCharacter->GetCurrentPower() > 0.f)
        {
            // Decrease the Character's power using the decay rate
            MyCharacter->UpdatePower(-DeltaTime * DecayRate*(MyCharacter->GetInitialPower()));
        }
        else
        {
            SetCurrentState(EBatteryPlayState::EGameOver);
        }
    }
}

float AAssignment_1GameMode::GetPowerToWin() const
{
    return PowerToWin;
}

EBatteryPlayState AAssignment_1GameMode::GetCurrentState() const
{
    return CurrentState;
}

void AAssignment_1GameMode::SetCurrentState(EBatteryPlayState NewState)
{
    CurrentState = NewState;
}
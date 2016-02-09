// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "Assignment_1GameMode.generated.h"

UCLASS(minimalapi)
class AAssignment_1GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AAssignment_1GameMode();
    
    virtual void Tick(float DeltaTime) override;
    
    /** Returns power needed to win - needed for the HUD */
    UFUNCTION(BlueprintPure, Category = "Power")
    float GetPowerToWin() const;
    
    virtual void BeginPlay() override;
    
protected:
    /** The rate at which the character loses power */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (Blueprintprotected = "true"))
    float DecayRate;
    
    /** The power needed to win the game */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (Blueprintprotected = "true"))
    float PowerToWin;
    
    /** The Widget class to use for our HUD screen */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (Blueprintprotected = "true"))
    TSubclassOf<class UUserWidget> HUDWidgetClass;
    
    /** The instance of the HUD  */
    UPROPERTY()
    class UUserWidget* CurrentWidget;
};




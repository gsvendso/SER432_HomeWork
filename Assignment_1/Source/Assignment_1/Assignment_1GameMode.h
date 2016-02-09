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
    
protected:
    /** The rate at which the character loses power */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power")
    float DecayRate;
};




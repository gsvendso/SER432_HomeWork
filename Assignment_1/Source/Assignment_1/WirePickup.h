// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pickup.h"
#include "WirePickup.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT_1_API AWirePickup : public APickup
{
    GENERATED_BODY()
    
public:
    
    // Sets default values for this actor's properties
    AWirePickup();
    
    /** Override the WasCollected function - use Implementation because it's a Blueprint Native Event */
    void WasCollected_Implementation() override;
    
    /** Public way to access the Wire's power level */
    float GetDrain();
    
protected:
    
    /** Set the amount of power the Wire drains from the character */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
    float DrainPower;
};

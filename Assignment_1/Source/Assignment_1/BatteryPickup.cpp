// Fill out your copyright notice in the Description page of Project Settings.

#include "Assignment_1.h"
#include "BatteryPickup.h"


// Set Default Value
ABatteryPickup::ABatteryPickup()
{
    GetMesh()->SetSimulatePhysics(true);
    
}

void ABatteryPickup::WasCollected_Implementation()
{
    // Use the base pickup behavior
    Super::WasCollected_Implementation();
    
    // Destroy the battery
    Destroy();
}
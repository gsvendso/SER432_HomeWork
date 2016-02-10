// Fill out your copyright notice in the Description page of Project Settings.

#include "Assignment_1.h"
#include "WirePickup.h"


// Set Default Value
AWirePickup::AWirePickup()
{
    GetMesh()->SetSimulatePhysics(true);
    
    // Drain power level of the Wire
    DrainPower = 50.f;
    
    ConstructorHelpers::FObjectfinder<UParticleSystem> ArbitraryParticleName
}

void AWirePickup::BeginPlay()
{
    Super::BeginPlay();
}

void AWirePickup::WasCollected_Implementation()
{
    // Use the base pickup behavior
    Super::WasCollected_Implementation();
    
    // Destroy the Wire
    Destroy();
}

// Report the Drain Power level of the Wire
float AWirePickup::GetDrain()
{
    return DrainPower;
}





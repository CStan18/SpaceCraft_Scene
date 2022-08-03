// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipController.h"

// Sets default values
ASpaceshipController::ASpaceshipController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceshipController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceshipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpaceshipController::KeyPitch(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAxisValue)
	{
		ASpaceshipController::ProcessPitch(AxisValue * KeyToMouseOffset);
	}
}

void ASpaceshipController::KeyRoll(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAxisValue)
	{
		ASpaceshipController::ProcessRoll(AxisValue * KeyToMouseOffset);
	}
}

void ASpaceshipController::ProcessMouseYInput(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAxisValue)
	{
		ASpaceshipController::ProcessPitch(AxisValue);
	}
}

void ASpaceshipController::ProcessMouseXInput(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAxisValue)
	{
		ASpaceshipController::ProcessRoll(AxisValue);
	}
}

void ASpaceshipController::ProcessRoll(float AxisValue)
{

}

void ASpaceshipController::ProcessPitch(float AxisValue)
{
	
}

void ASpaceshipController::Boost(float AxisValue)
{

}

// Called to bind functionality to input
void ASpaceshipController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &ASpaceshipController::ProcessMouseXInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ASpaceshipController::ProcessMouseYInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ASpaceshipController::ProcessRoll);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ASpaceshipController::ProcessPitch);
	PlayerInputComponent->BindAxis("Boost", this, &ASpaceshipController::Boost);
}


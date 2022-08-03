// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ASpaceshipController::ASpaceshipController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));
	RootComponent =  CapsuleComp;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));
	CameraComp->SetupAttachment(SpringArm);

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

	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;

	AddActorLocalRotation(DeltaRotation);


}

void ASpaceshipController::KeyPitch(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAbsAxisValue)
	{
		ASpaceshipController::ProcessPitch(AxisValue * KeyToMouseOffset);
	}
}

void ASpaceshipController::KeyRoll(float AxisValue)
{
	if (FMath::Abs(AxisValue) > MinAbsAxisValue)
	{
		ASpaceshipController::ProcessRoll(AxisValue * KeyToMouseOffset);
	}
}

void ASpaceshipController::ProcessMouseYInput(float AxisValue)
{
	ASpaceshipController::ProcessPitch(AxisValue);
}

void ASpaceshipController::ProcessMouseXInput(float AxisValue)
{
	ASpaceshipController::ProcessRoll(AxisValue);
}

void ASpaceshipController::ProcessRoll(float AxisValue)
{
	float TargetRollSpeed = AxisValue * RollRateMultiplier;
	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), RollInterpRate);
}

void ASpaceshipController::ProcessPitch(float AxisValue)
{
	float TargetPitchSpeed = AxisValue * PitchRateMultiplier;
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), PitchInterpRate);
}

void ASpaceshipController::Boost(float AxisValue)
{
	CurrentSpeed += BoostValue;
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


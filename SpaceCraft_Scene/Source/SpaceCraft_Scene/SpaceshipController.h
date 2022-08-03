// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpaceshipController.generated.h"

UCLASS()
class SPACECRAFT_SCENE_API ASpaceshipController : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Acceleration = 60.f;
	UPROPERTY(EditAnywhere)
	float MinSpeed = 100.f;
	UPROPERTY(EditAnywhere)
	float MaxSpeed = 10000.f;
	UPROPERTY(EditAnywhere)
	float CurrentSpeed = 500.f;
	UPROPERTY(EditAnywhere)
	float BoostValue = 250.f;

	UPROPERTY(EditAnywhere)
	float CurrentYawSpeed;
	
	UPROPERTY(EditAnywhere)
	float CurrentPitchSpeed;
	UPROPERTY(EditAnywhere)
	float PitchRateMultiplier = 200.f;
	UPROPERTY(EditAnywhere)
	float PitchInterpRate = .2f;

	UPROPERTY(EditAnywhere)
	float CurrentRollSpeed;
	UPROPERTY(EditAnywhere)
	float RollRateMultiplier = 200.f;
	UPROPERTY(EditAnywhere)
	float RollInterpRate = .2f;

	// To balance mouse vs key inputs
	UPROPERTY(EditAnywhere)
	float KeyToMouseOffset = 2.f;

	// Reduces axis function calls by checking if key is pressed
	UPROPERTY(EditAnywhere)
	float MinAbsAxisValue = .2f;

	UPROPERTY(EditAnywhere)
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* CameraComp;

public:
	// Sets default values for this pawn's properties
	ASpaceshipController();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void KeyPitch(float AxisValue);
	void KeyRoll(float AxisValue);

	void ProcessMouseYInput(float AxisValue);
	void ProcessMouseXInput(float AxisValue);

	void ProcessRoll(float AxisValue);
	void ProcessPitch(float AxisValue);

	void Boost(float AxisValue);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

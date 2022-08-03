// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpaceshipController.generated.h"

UCLASS()
class SPACECRAFT_SCENE_API ASpaceshipController : public APawn
{
	GENERATED_BODY()

	float Acceleration = 60.f;
	float MinSpeed = 100.f;
	float MaxSpeed = 10000.f;
	float CurrentSpeed = 500.f;

	float CurrentYaw;
	float CurrentPitch;
	float CurrentRoll;
	UPROPERTY(EditAnywhere)
	float KeyToMouseOffset = 2.f;
	UPROPERTY(EditAnywhere)
	float MinAxisValue = .2f;
	

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

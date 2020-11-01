// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "MovementLabCharacterMovementComp.generated.h"



/**
 * 
 */
UENUM()
enum ECustomMovementMode
{
	CMOVE_None,
	CMOVE_InfiniteWalk
};

/**
 * 
 */
UCLASS()
class MOVEMENTLAB_API UMovementLabCharacterMovementComp : public UCharacterMovementComponent
{
	GENERATED_BODY()


	UMovementLabCharacterMovementComp();

	class FSavedMove_MovementLabCharacter : public FSavedMove_Character
	{
	public:
		typedef FSavedMove_Character Super;

		virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;
		virtual void Clear() override;
		virtual uint8 GetCompressedFlags() const override;
		virtual void SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character& ClientData) override;
		virtual void PrepMoveFor(class ACharacter* Character) override;

		uint8 bSavedRequestMovementModeChange : 1;

		uint8 bSavedRequestMaxWalkSpeedChange : 1;
	};
	class FNetworkPredictionData_Client_MovementLabCharacter : public FNetworkPredictionData_Client_Character
	{
	public:
		FNetworkPredictionData_Client_MovementLabCharacter(const UCharacterMovementComponent& ClientMovement);

		typedef FNetworkPredictionData_Client_Character Super;

		virtual FSavedMovePtr AllocateNewMove() override;
	};

public:
	UFUNCTION()
		void RequestSetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode = 0);

	UFUNCTION()
		void RequestSetMaxWalkSpeed(float NewMaxWalkSpeed);

protected:
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;

	virtual void OnMovementUpdated(float deltaTime, const FVector& OldLocation, const FVector& OldVelocity) override;
	virtual void SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode = 0) override;
	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode) override;
	virtual void PhysCustom(float deltaTime, int32 Iterations) override;

	//ECustomMovementMode CustomMovementMode;
	TEnumAsByte<ECustomMovementMode> CustomMovementMode;

	// infinite walk mode
	virtual void PhysInfiniteWalk(float deltaTime, int32 Iterations);
	
	// prediction requests
	uint8 bRequestMovementModeChange : 1;
	UFUNCTION(Unreliable, Server, WithValidation)
		void Server_RequestSetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode = 0);
	EMovementMode PendingMovementMode;
	ECustomMovementMode PendingCustomMovementMode;

	uint8 bRequestMaxWalkSpeedChange : 1;
	UFUNCTION(Unreliable, Server, WithValidation)
		void Server_RequestSetMaxWalkSpeed(const float NewMaxWalkSpeed);
	float PendingNewMaxWalkSpeed;

};

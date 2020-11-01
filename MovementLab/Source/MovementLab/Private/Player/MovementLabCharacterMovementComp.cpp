// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementLabCharacterMovementComp.h"

#include "MovementLabCharacter.h"

#include "Kismet/KismetSystemLibrary.h"



DEFINE_LOG_CATEGORY_STATIC(LogCharacterMovementCustom, Log, All);


UMovementLabCharacterMovementComp::UMovementLabCharacterMovementComp()
{

}

void UMovementLabCharacterMovementComp::OnMovementUpdated(float deltaTime, const FVector& OldLocation, const FVector& OldVelocity)
{
	//Super::OnMovementUpdated(deltaTime, OldLocation, OldVelocity);

	if (!CharacterOwner)
	{
		return;
	}


	// MOVEMENT MODES
	//switch (CustomMovementMode)
	//{
	//case ECustomMovementMode::CMOVE_None:
	//	SetMovementMode(EMovementMode::MOVE_Custom, ECustomMovementMode::CMOVE_None);
	//	break;
	//case ECustomMovementMode::CMOVE_InfiniteWalk:
	//	SetMovementMode(EMovementMode::MOVE_Custom, ECustomMovementMode::CMOVE_InfiniteWalk);
	//	break;
	//}
	if (bRequestMovementModeChange)
	{
		bRequestMovementModeChange = false;
		SetMovementMode(PendingMovementMode, PendingCustomMovementMode);
	}

	// MOVEMENT FLAGS
	if (bRequestMaxWalkSpeedChange)
	{
		bRequestMaxWalkSpeedChange = false;
		MaxWalkSpeed = PendingNewMaxWalkSpeed;
	}
}

void UMovementLabCharacterMovementComp::OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PreviousMovementMode, PreviousCustomMode);


}

void UMovementLabCharacterMovementComp::PhysCustom(float deltaTime, int32 Iterations)
{
	Super::PhysCustom(deltaTime, Iterations);


	UKismetSystemLibrary::PrintString(this, "PhysCustom");
	switch (CustomMovementMode)
	{
	case CMOVE_None:
		break;
	case CMOVE_InfiniteWalk:
		PhysInfiniteWalk(deltaTime, Iterations);
		break;
	default:
		UE_LOG(LogCharacterMovementCustom, Warning, TEXT("%s has unsupported custom movement mode %d"), *CharacterOwner->GetName(), int32(CustomMovementMode));
		SetMovementMode(EMovementMode::MOVE_Custom, ECustomMovementMode::CMOVE_None);
		break;
	}
}

void UMovementLabCharacterMovementComp::SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode)
{
	Super::SetMovementMode(NewMovementMode, NewCustomMode);


	CustomMovementMode = static_cast<TEnumAsByte<ECustomMovementMode>>(NewCustomMode);
}

void UMovementLabCharacterMovementComp::PhysInfiniteWalk(float deltaTime, int32 Iterations)
{
	PhysWalking(deltaTime, Iterations);
	UKismetSystemLibrary::PrintString(this, "InfiniteWalk");
}

void UMovementLabCharacterMovementComp::UpdateFromCompressedFlags(uint8 Flags)//Client only
{
	Super::UpdateFromCompressedFlags(Flags);

	bRequestMaxWalkSpeedChange = (Flags & FSavedMove_Character::FLAG_Custom_0) != 0;
}

class FNetworkPredictionData_Client* UMovementLabCharacterMovementComp::GetPredictionData_Client() const
{
	check(PawnOwner != NULL);
	check(PawnOwner->GetLocalRole() < ROLE_Authority);

	if (!ClientPredictionData)
	{
		UMovementLabCharacterMovementComp* MutableThis = const_cast<UMovementLabCharacterMovementComp*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_MovementLabCharacter(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}

	return ClientPredictionData;
}

void UMovementLabCharacterMovementComp::FSavedMove_MovementLabCharacter::Clear()
{
	Super::Clear();


	bSavedRequestMaxWalkSpeedChange = false;
}

uint8 UMovementLabCharacterMovementComp::FSavedMove_MovementLabCharacter::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	if (bSavedRequestMaxWalkSpeedChange)
	{
		Result |= FLAG_Custom_0;
	}

	return Result;
}

bool UMovementLabCharacterMovementComp::FSavedMove_MovementLabCharacter::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	//Set which moves can be combined together. This will depend on the bit flags that are used.	
	if (bSavedRequestMaxWalkSpeedChange != ((FSavedMove_MovementLabCharacter*)&NewMove)->bSavedRequestMaxWalkSpeedChange)
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void UMovementLabCharacterMovementComp::FSavedMove_MovementLabCharacter::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character& ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	UMovementLabCharacterMovementComp* CharacterMovement = Cast<UMovementLabCharacterMovementComp>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{
		bSavedRequestMaxWalkSpeedChange = CharacterMovement->bRequestMaxWalkSpeedChange;
	}
}

void UMovementLabCharacterMovementComp::FSavedMove_MovementLabCharacter::PrepMoveFor(class ACharacter* Character)
{
	Super::PrepMoveFor(Character);

	UMovementLabCharacterMovementComp* CharacterMovement = Cast<UMovementLabCharacterMovementComp>(Character->GetCharacterMovement());
	if (CharacterMovement)
	{

	}
}

UMovementLabCharacterMovementComp::FNetworkPredictionData_Client_MovementLabCharacter::FNetworkPredictionData_Client_MovementLabCharacter(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{

}

FSavedMovePtr UMovementLabCharacterMovementComp::FNetworkPredictionData_Client_MovementLabCharacter::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_MovementLabCharacter());
}


#pragma region Prediction Requests
bool UMovementLabCharacterMovementComp::Server_RequestSetMovementMode_Validate(EMovementMode NewMovementMode, uint8 NewCustomMode)
{
	return true;
}

void UMovementLabCharacterMovementComp::Server_RequestSetMovementMode_Implementation(EMovementMode NewMovementMode, uint8 NewCustomMode)
{
	PendingMovementMode = NewMovementMode;
	PendingCustomMovementMode = static_cast<TEnumAsByte<ECustomMovementMode>>(NewCustomMode);
}

void UMovementLabCharacterMovementComp::RequestSetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode)
{
	if (PawnOwner->IsLocallyControlled())
	{
		PendingMovementMode = NewMovementMode;
		PendingCustomMovementMode = static_cast<TEnumAsByte<ECustomMovementMode>>(NewCustomMode);

		Server_RequestSetMovementMode(NewMovementMode, NewCustomMode);
	}

	bRequestMovementModeChange = true;
}

bool UMovementLabCharacterMovementComp::Server_RequestSetMaxWalkSpeed_Validate(const float NewMaxWalkSpeed)
{
	if (NewMaxWalkSpeed < 0.f || NewMaxWalkSpeed > 2000.f)
		return false;
	else
		return true;
}

void UMovementLabCharacterMovementComp::Server_RequestSetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed)
{
	PendingNewMaxWalkSpeed = NewMaxWalkSpeed;
}

void UMovementLabCharacterMovementComp::RequestSetMaxWalkSpeed(float NewMaxWalkSpeed)
{
	if (PawnOwner->IsLocallyControlled())
	{
		PendingNewMaxWalkSpeed = NewMaxWalkSpeed;
		Server_RequestSetMaxWalkSpeed(NewMaxWalkSpeed);
	}

	bRequestMaxWalkSpeedChange = true;
}
#pragma endregion

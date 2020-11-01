// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterAnimInstance.h"

#include "UnrealNetwork.h"
#include "FPSPlayerController.h"
#include "FPSCharacter.h"

void UFPSCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	ADS = false;
	if (TryGetPawnOwner())
	{
		controlled = Cast<AFPSCharacter>(TryGetPawnOwner());
	}
}
#include "Kismet/KismetSystemLibrary.h"

void UFPSCharacterAnimInstance::NativeUpdateAnimation(float DeltaTimeX)
{
	Super::NativeUpdateAnimation(DeltaTimeX);

	if (IsValid(controlled))
	{
		characterSpeed = controlled->GetVelocity().Size();	//fix this

		ReplicatedNormalizedDeltaRotator = controlled->GetReplicatedNormalizedDeltaRotator();
	}
}



// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplateGun.h"
#include "../TemplateCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "../TemplateCharacter.h"
#include "../FirstPersonCharacter.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"

ATemplateGun::ATemplateGun()
{
	
}


void ATemplateGun::OnInteract_Implementation(ATemplateCharacter* Instigator)
{
	if (Role = ROLE_Authority)
	{
		AFirstPersonCharacter* FirstPersonInstigator = Cast<AFirstPersonCharacter>(Instigator);
		if (FirstPersonInstigator)
		{
			SetOwner(FirstPersonInstigator);
			
			if (GetRemoteRole() == ROLE_AutonomousProxy)
			{
				UKismetSystemLibrary::PrintString(this, "autonomous");
			}
			else if (GetRemoteRole() == ROLE_SimulatedProxy)
			{
				UKismetSystemLibrary::PrintString(this, "Simulated");
			}
			else if (GetRemoteRole() == ROLE_Authority)
			{
				UKismetSystemLibrary::PrintString(this, "Authority");
			}
			else if (GetRemoteRole() == ROLE_None)
			{
				UKismetSystemLibrary::PrintString(this, "None");
			}
			

			MulticastOnWeaponIsOwned(FirstPersonInstigator);

			ClientOnWeaponIsOwned(FirstPersonInstigator);
		}
	}
}

void ATemplateGun::MulticastOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	Super::MulticastOnWeaponIsOwned_Implementation(FirstPersonInstigator);
}

void ATemplateGun::ClientOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	Super::ClientOnWeaponIsOwned_Implementation(FirstPersonInstigator);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "M1911.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "../TemplateCharacter.h"
#include "../FirstPersonCharacter.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"

AM1911::AM1911()
{

	SetActorScale3D(FVector(0.1, 0.1, 0.1));
	

	weaponStats.maxAmmo = 56;
	weaponStats.clipSize = 7;

	weaponStats.currentAmmo = weaponStats.maxAmmo;
}


void AM1911::OnInteract_Implementation(ATemplateCharacter* Instigator)
{
	Super::OnInteract_Implementation(Instigator);
}


void AM1911::MulticastOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	Super::MulticastOnWeaponIsOwned_Implementation(FirstPersonInstigator);


}

void AM1911::ClientOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	Super::ClientOnWeaponIsOwned_Implementation(FirstPersonInstigator);
	//if (HasNetOwner())
	{
	//	UKismetSystemLibrary::PrintString(this, "has owner");
	}
	//else
	{
	//	UKismetSystemLibrary::PrintString(this, "no owner");
	}
	
}
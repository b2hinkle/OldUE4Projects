// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplateWeapon.h"
#include "../TemplateCharacter.h"
#include "../FirstPersonCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"

ATemplateWeapon::ATemplateWeapon()
{
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetStaticMeshComponent()->SetVisibility(false);

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	Weapon->SetupAttachment(RootComponent);
	Weapon->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	
}

void ATemplateWeapon::OnInteract_Implementation(ATemplateCharacter* Instigator)
{
	UKismetSystemLibrary::PrintString(this, "Template weapon implementation. u should fix this");
}


void ATemplateWeapon::MulticastOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	SetOwner(FirstPersonInstigator);
	

	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, true);

	if (Role != ROLE_Authority)
	{
		AttachToComponent(FirstPersonInstigator->GetMesh(), rules, TEXT("index_01_r"));
	}
	
}

void ATemplateWeapon::ClientOnWeaponIsOwned_Implementation(AFirstPersonCharacter* FirstPersonInstigator)
{
	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, true);
	AttachToComponent(FirstPersonInstigator->armsMesh, rules, TEXT("bRightMiddle"));
	SetActorRelativeRotation(FRotator(1.2130961f, 53.0246468f, 177.5492249f)); //Set by attaching in blueprint and rotating


	FirstPersonInstigator->RecieveWeapon(this);
}
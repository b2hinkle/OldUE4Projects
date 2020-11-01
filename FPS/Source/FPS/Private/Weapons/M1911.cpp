// Fill out your copyright notice in the Description page of Project Settings.


#include "M1911.h"
#include "BaseCharacter.h"

AM1911::AM1911()
{
	weaponInfo.weaponName = "M1911";
	gunStats.maxAmmo = 56;
	gunStats.maxClips = 8;
	gunStats.clipSize = 7;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = SkeletalMesh;

	
	
	
}

void AM1911::PostInitializeComponents()
{
	Super::PostInitializeComponents();


}

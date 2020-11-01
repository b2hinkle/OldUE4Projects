// Fill out your copyright notice in the Description page of Project Settings.


#include "AR4.h"
#include "Components/SkeletalMeshComponent.h"

AAR4::AAR4()
{
	weaponInfo.weaponName = "AR4";

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = SkeletalMesh;
}

void AAR4::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}
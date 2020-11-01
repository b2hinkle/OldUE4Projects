// Fill out your copyright notice in the Description page of Project Settings.


#include "RangedWeapon.h"

#include "UnrealNetwork.h"
#include "..\FPSCharacter.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"

ARangedWeapon::ARangedWeapon()
{
	
}

void ARangedWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	

	


}

FVector ARangedWeapon::GetMuzzleLocation()
{
	if (SkeletalMesh)
	{
		return SkeletalMesh->GetSocketLocation(FName("MuzzleSocket"));
	}
	else if (Mesh)
	{
		return Mesh->GetSocketLocation(FName("MuzzleSocket"));
	}
	else
	{
		return FVector(0,0, 999999999);
	}
}

FHitResult ARangedWeapon::Fire(int16 randomSeed)
{
	FHitResult Impact;

	FRandomStream randomBulletStream(randomSeed);

	const float CurrentSpread = GetCurrentSpread();
	const float ConeHalfAngle = FMath::DegreesToRadians(CurrentSpread * 0.5f);

	const FVector AimDir = GetAdjustedAim();
	const FVector StartTrace = GetCameraDamageStartLocation(AimDir);
	const FVector ShootDir = randomBulletStream.VRandCone(AimDir, ConeHalfAngle, ConeHalfAngle);
	const FVector EndTrace = StartTrace + ShootDir * gunStats.WeaponRange;

	Impact = WeaponTrace(StartTrace, EndTrace);


	
	currentFiringSpread = FMath::Min(gunStats.FiringSpreadMax, currentFiringSpread + gunStats.FiringSpreadIncrement);

	return Impact;

}


void ARangedWeapon::Reload()
{
	Super::Reload();

	//int32 bulletsToPutInClip = gunStats.clipSize - currentAmmoInClip;

	//currentAmmoInClip = currentAmmoInClip + bulletsToPutInClip;
	//currentAmmo = currentAmmo - bulletsToPutInClip;
}

float ARangedWeapon::GetCurrentSpread()
{
	float FinalSpread = gunStats.WeaponSpread + currentFiringSpread;
	//if (FPSCharacter && FPSCharacter->IsTargeting())
	//{
	//	FinalSpread *= gunStats.TargetingSpreadMod;
	//}

	return FinalSpread;
}

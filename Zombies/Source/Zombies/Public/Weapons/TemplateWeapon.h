// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TemplatePickup.h"
#include "TemplateWeapon.generated.h"


USTRUCT()
struct FWeaponStats
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		uint8 currentAmmo;
	UPROPERTY()
		uint8 maxAmmo;
	UPROPERTY()
		uint8 clipSize;

	FWeaponStats()
	{
		maxAmmo = 0;
		clipSize = 0;

		currentAmmo = maxAmmo;
	}
		
};
/**
 * 
 */
UCLASS()
class ZOMBIES_API ATemplateWeapon : public ATemplatePickup
{
	GENERATED_BODY()

public:
	ATemplateWeapon();

	FWeaponStats weaponStats;


	virtual void OnInteract_Implementation(ATemplateCharacter* Instigator) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
		class USkeletalMeshComponent* Weapon;

	UFUNCTION(NetMulticast, Reliable)
		virtual void MulticastOnWeaponIsOwned(AFirstPersonCharacter* FirstPersonInstigator);

	UFUNCTION(Client, Reliable)
		virtual void ClientOnWeaponIsOwned(AFirstPersonCharacter* FirstPersonInstigator);
};

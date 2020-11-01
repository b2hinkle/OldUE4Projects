// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TemplateCharacter.h"
#include "FirstPersonCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ZOMBIES_API AFirstPersonCharacter : public ATemplateCharacter
{
	GENERATED_BODY()

	public:
		AFirstPersonCharacter();

protected:
	virtual void BeginPlay() override;

	FVector cameraBoomConstructedPosition;
	float cameraBoomConstructedArmLength;

	FVector armsMeshConstructedPosition;
	FRotator armsMeshConstructedRotation;
	FVector armsMeshConstructedScale;
	
	UPROPERTY()
		ATemplateWeapon* ObtainedWeapon;

	UPROPERTY()
		TArray<ATemplateWeapon*> HoldingWeapons;


	

public:
	void SwitchWeapon(int index);

	void ToggleWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Arms)
		class USkeletalMeshComponent* armsMesh;

	virtual void ServerUse_Implementation() override;

	virtual void ClientUse_Implementation(AActor* hitActor) override;

	virtual void RecieveWeapon(ATemplateWeapon* Weapon) override;
};

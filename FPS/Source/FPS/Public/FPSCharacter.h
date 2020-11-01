// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"

#include "FPSCharacter.generated.h"

class ABaseWeapon;
class USkeletalMeshComponent;
class UInventory;
class UFPSCharacterAttributeSet;

UCLASS()
class FPS_API AFPSCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	AFPSCharacter();

	UPROPERTY(EditAnywhere, Category = CharacterSettings)
		FVector CameraSwayAmount;
	UPROPERTY(EditAnywhere, Category = CharacterSettings)
		FVector AddedCameraSwayDuringADS;

	virtual void OnDie();

	UPROPERTY(VisibleAnywhere, Category = SoldierGoggles)
		UStaticMeshComponent* Goggles;

	UPROPERTY(Replicated)
		UFPSCharacterAttributeSet* CharacterAttributeSet;

	UPROPERTY(EditDefaultsOnly, Category = AbilitySystem)
		TSubclassOf<UGameplayAbility> SwitchWeaponAbilityTSub;
	UPROPERTY(Replicated)
		FGameplayAbilitySpecHandle SwitchWeaponHandle;
	UPROPERTY(EditDefaultsOnly, Category = AbilitySystem)
		TSubclassOf<UGameplayAbility> ADSAbilityTSub;
	UPROPERTY(Replicated)
		FGameplayAbilitySpecHandle ADSAbilityHandle;

	FRotator GetReplicatedNormalizedDeltaRotator();	//FRotators are compressed when replicating by UN-normalizing it back to 0 to 360 range if it is in the normalized form -180 to 180.

	// Overrides and Events
	virtual void Tick(float DeltaTime) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnPossessedByClient(AController* NewController);
	virtual void PostInitializeComponents() override;
	virtual void OnAbilityDataInjected();
	virtual void OnRep_PlayerState() override;
	


#pragma region Controls
	virtual void OnFirePressed() override;
	virtual void OnReloadPressed() override;
	virtual void OnADSPressed() override;
	virtual void OnADSReleased() override;
	virtual void OnWeaponTogglePressed() override;
	virtual void OnMouseMoveVertical(float verticalMouseRate) override;
	float frameVerticalMouseRate;
	virtual void OnMouseMoveHorizontal(float horizontalMouseRate) override;
	float frameHorizontalMouseRate;
#pragma endregion

#pragma region Getters/Setters
	UInventory* GetInventory() { return Inventory; }
#pragma endregion

	void GrantStartingAbilities();

	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = FPSMesh)
		USkeletalMeshComponent* FPSMesh;

protected:
	FVector FPSMeshConstructedPosition;
	FRotator FPSMeshConstructedRotation;
	FVector FPSMeshConstructedScale;
	FVector cameraBoomConstructedPosition;
	FRotator cameraBoomConstructedRotation;
	float cameraBoomConstructedArmLength;

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSpawnDefaultInventory();

	

	UPROPERTY(VisibleAnywhere, Category = Inventory, meta = (AllowPrivateAccess = "true"))
		UInventory* Inventory;

private:
	UPROPERTY(Replicated)
		FRotator ReplicatedNormalizedDeltaRotator;
};

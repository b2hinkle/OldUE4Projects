// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/Controllable.h"
#include "GameFramework/Character.h"
#include "Interfaces/Interactable.h"
#include "Weapons/TemplateWeapon.h"
#include "TemplateCharacter.generated.h"

UENUM()
enum class Weapons : uint8
{
	NONE,
	M9
};

UCLASS()
class ZOMBIES_API ATemplateCharacter : public ACharacter, public IControllable
{
	GENERATED_BODY()
		


public:
	ATemplateCharacter();

	virtual void RecieveWeapon(ATemplateWeapon* Weapon);

	UPROPERTY()
		float health;
	UPROPERTY()
		float maxHealth;
	UPROPERTY(Replicated)
		int points;


	Weapons currentWeapon;

	bool isRunning;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float runSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float walkSpeed;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;


	

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "MyCategory")
	void Test();
	virtual void Test_Implementation() override;


#pragma region Controls
	virtual void LeftShiftPressed() override;

	virtual void LeftShiftReleased() override;

	virtual void EPressed() override;

	virtual void EReleased() override;

	virtual void SpacePressed() override;

	virtual void SpaceReleased() override;

	virtual void LeftClickPressed() override;

	virtual void LeftClickReleased() override;

	virtual void RightClickPressed() override;

	virtual void RightClickReleased() override;

	virtual void UpdateHorizontalMouseRateInput(float axisValue) override;

	virtual void UpdateVerticalMouseRateInput(float axisValue) override;

	virtual void UpdateVerticalMoveInput(float axisValue) override;

	virtual void UpdateHorizontalMoveInput(float axisValue) override;
#pragma endregion

#pragma region RPCs
	void SetRunning(bool running);
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSetRunning(bool running);

	UFUNCTION(Client, Reliable)
		void ClientSetRunning(bool running);


	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDie();

	UFUNCTION(Client, Reliable)
		void ClientDie();


	UFUNCTION(Server, Reliable, WithValidation)
		virtual void ServerUse();

	UFUNCTION(Client, Reliable)
		virtual void ClientUse(AActor* hitActor);
#pragma endregion

	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	FVector meshConstructedPosition;
	FRotator meshConstructedRotation;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float DeltaTime) override;


};

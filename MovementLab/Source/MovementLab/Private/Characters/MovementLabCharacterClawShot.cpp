// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementLabCharacterClawShot.h"

#include "CharacterMovementComponentClawSh.h"



AMovementLabCharacterClawShot::AMovementLabCharacterClawShot(const FObjectInitializer& PCIP)
	: Super(PCIP.SetDefaultSubobjectClass<UCharacterMovementComponentClawSh>(ACharacter::CharacterMovementComponentName))
{

}


void AMovementLabCharacterClawShot::JumpPressed()
{
	Super::JumpPressed();


}
void AMovementLabCharacterClawShot::JumpReleased()
{
	Super::JumpReleased();


}

void AMovementLabCharacterClawShot::SprintPressed()
{
	Super::SprintPressed();

	//GetCharacterMovementComponent()->PrintStringTest();
}
void AMovementLabCharacterClawShot::SprintReleased()
{
	Super::SprintReleased();


}

void AMovementLabCharacterClawShot::InteractPressed()
{
	Super::InteractPressed();


}
void AMovementLabCharacterClawShot::InteractReleased()
{
	Super::InteractReleased();


}


void AMovementLabCharacterClawShot::MoveForward(float Value)
{
	Super::MoveForward(Value);


}
void AMovementLabCharacterClawShot::MoveRight(float Value)
{
	Super::MoveRight(Value);


}

void AMovementLabCharacterClawShot::TurnAtRate(float Rate)
{
	Super::TurnAtRate(Rate);


}
void AMovementLabCharacterClawShot::LookUpAtRate(float Rate)
{
	Super::LookUpAtRate(Rate);


}
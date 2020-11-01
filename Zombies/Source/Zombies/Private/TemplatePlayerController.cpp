// Fill out your copyright notice in the Description page of Project Settings.


#include "TemplatePlayerController.h"

#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "../Public/TemplateCharacter.h"

void ATemplatePlayerController::BeginPlay()
{
	Super::BeginPlay();

	controlled = Cast<ATemplateCharacter>(GetPawn());
}

void ATemplatePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftShift", IE_Pressed, this, &ATemplatePlayerController::LeftShiftPressed);
	InputComponent->BindAction("LeftShift", IE_Released, this, &ATemplatePlayerController::LeftShiftReleased);

	InputComponent->BindAction("E", IE_Pressed, this, &ATemplatePlayerController::EPressed);
	InputComponent->BindAction("E", IE_Released, this, &ATemplatePlayerController::EReleased);

	InputComponent->BindAction("LeftClick", IE_Pressed, this, &ATemplatePlayerController::LeftClickPressed);
	InputComponent->BindAction("LeftClick", IE_Released, this, &ATemplatePlayerController::LeftClickReleased);
	InputComponent->BindAction("RightClick", IE_Pressed, this, &ATemplatePlayerController::RightClickPressed);
	InputComponent->BindAction("RightClick", IE_Released, this, &ATemplatePlayerController::RightClickReleased);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ATemplatePlayerController::SpacePressed);
	InputComponent->BindAction("Jump", IE_Released, this, &ATemplatePlayerController::SpaceReleased);


	InputComponent->BindAxis("Up", this, &ATemplatePlayerController::UpdateVerticalMoveInput);
	InputComponent->BindAxis("Right", this, &ATemplatePlayerController::UpdateHorizontalMoveInput);

	InputComponent->BindAxis("VerticalMouseInput", this, &ATemplatePlayerController::UpdateVerticalMouseRateInput);
	InputComponent->BindAxis("HorizontalMouseInput", this, &ATemplatePlayerController::UpdateHorizontalMouseRateInput);
}



#pragma region Axises
void ATemplatePlayerController::UpdateVerticalMoveInput(float axisValue)
{
	verticalMoveInput = axisValue;

	if (controlled)
	{
		controlled->UpdateVerticalMoveInput(verticalMoveInput);
	}

	//update the value
	UpdateVertizontalMoveInput();
}

void ATemplatePlayerController::UpdateHorizontalMoveInput(float axisValue)
{
	horizontalMoveInput = axisValue;
	if (controlled)
	{
		controlled->UpdateHorizontalMoveInput(horizontalMoveInput);
	}

	//update the value
	UpdateVertizontalMoveInput();
}

//explicitly for the Playercontroller. Passes calculated value to the character
void ATemplatePlayerController::UpdateVertizontalMoveInput()
{
	vertizontalMoveInput = FMath::Clamp((FVector2D(horizontalMoveInput, verticalMoveInput).Size()), 0.0f, 1.0f);
	if (controlled)
	{
		controlled->vertizontalMoveInput = vertizontalMoveInput;
	}
	
}

void ATemplatePlayerController::UpdateVerticalMouseRateInput(float axisValue)
{
	verticalMouseRateInput = axisValue;
	if (controlled)
	{
		controlled->UpdateVerticalMouseRateInput(verticalMouseRateInput);
	}
}

void ATemplatePlayerController::UpdateHorizontalMouseRateInput(float axisValue)
{
	horizontalMouseRateInput = axisValue;
	if (controlled)
	{
		controlled->UpdateHorizontalMouseRateInput(horizontalMouseRateInput);
	}
}
#pragma endregion


#pragma region Actions
void ATemplatePlayerController::LeftShiftPressed()
{
	leftShiftDown = true;

	if (controlled && controlled->GetClass()->ImplementsInterface(UControllable::StaticClass()))
	{
		//IControllable::Execute_Test(controlled);
		controlled->LeftShiftPressed();
	}
}

void ATemplatePlayerController::LeftShiftReleased()
{
	leftShiftDown = false;

	//how taxing is the ImplementsInterface call? Maybe do a different way if expensive
	if (controlled && controlled->GetClass()->ImplementsInterface(UControllable::StaticClass()))
	{
		//Not 100% sure if this is the right way to call the method for these

		//IControllable::Execute_Test(controlled);
		controlled->LeftShiftReleased();
	}
}

void ATemplatePlayerController::EPressed()
{
	EDown = true;

	if (controlled && controlled->GetClass()->ImplementsInterface(UControllable::StaticClass()))
	{
		//IControllable::Execute_Test(controlled);
		controlled->EPressed();
	}
}

void ATemplatePlayerController::EReleased()
{
	EDown = false;

	if (controlled && controlled->GetClass()->ImplementsInterface(UControllable::StaticClass()))
	{
		//IControllable::Execute_Test(controlled);
		controlled->EReleased();
	}
}

void ATemplatePlayerController::LeftClickPressed()
{
	leftMouseButtonDown = true;

	if (controlled && controlled->GetClass()->ImplementsInterface(UControllable::StaticClass()))
	{
		//IControllable::Execute_Test(controlled);
		controlled->LeftClickPressed();
	}

}

void ATemplatePlayerController::LeftClickReleased()
{
	leftMouseButtonDown = false;

	if (controlled)
	{
		controlled->LeftClickReleased();
	}

}

void ATemplatePlayerController::RightClickPressed()
{
	rightMouseButtonDown = true;

	if (controlled)
	{
		controlled->RightClickPressed();
	}

}

void ATemplatePlayerController::RightClickReleased()
{
	rightMouseButtonDown = false;

	if (controlled)
	{
		controlled->RightClickReleased();
	}

}
void ATemplatePlayerController::SpacePressed()
{
	spaceDown = true;

	if (controlled)
	{
		controlled->SpacePressed();
	}

}
void ATemplatePlayerController::SpaceReleased()
{
	spaceDown = false;

	if (controlled)
	{
		controlled->SpaceReleased();
	}
}
#pragma endregion
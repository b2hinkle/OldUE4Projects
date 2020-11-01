// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseHUD.h"

#include "Runtime/UMG/Public/Blueprint/UserWidget.h"


ABaseHUD::ABaseHUD()
{
	
}

void ABaseHUD::BeginPlay()
{
	Super::BeginPlay();
}


void ABaseHUD::SpawnMainMenu()
{
	if (MainMenuWidget)
	{
		UUserWidget* WidgetInstance;

		WidgetInstance = CreateWidget(GetOwningPlayerController(), MainMenuWidget);
		WidgetInstance->AddToViewport();
	}
}
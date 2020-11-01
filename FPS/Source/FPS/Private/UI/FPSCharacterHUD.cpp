// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterHUD.h"
#include "..\..\Public\UI\FPSCharacterHUD.h"


#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"


void AFPSCharacterHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}

void AFPSCharacterHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (WidgetInstance)
	{
		WidgetInstance->RemoveFromParent();	//widgetinstance is the widget of this character hud class
	}
}

void AFPSCharacterHUD::OnClientPossessFPSCharacter()
{
	//We spawn the character's widget on client possess that way we have the character to work with when dealing with widget logic
	SpawnCharacterWidget();
}

void AFPSCharacterHUD::SpawnCharacterWidget()
{
	if (CharacterWidget)
	{
		WidgetInstance = CreateWidget(GetOwningPlayerController(), CharacterWidget);
		if (WidgetInstance)
		{
			WidgetInstance->AddToViewport();
		}
	}
	
}

void AFPSCharacterHUD::DebugCenterPoint()
{
	if (CenterPointWidget)
	{
		WidgetInstance = CreateWidget(GetOwningPlayerController(), CenterPointWidget);
		if (WidgetInstance)
		{
			WidgetInstance->AddToViewport();
		}
	}
	
}

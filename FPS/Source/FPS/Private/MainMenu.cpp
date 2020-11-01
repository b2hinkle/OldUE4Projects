// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Button.h"
#include "EditableTextBox.h"



UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)	//constructor that seams like it is called during editor time
{
	
}

void UMainMenu::NativeConstruct()	//BeginPlay basicly BUT it only is called after AddToViewport() is called
{
	Super::NativeConstruct();

	SetupInputAndMouse();
	SetupEventSubscriptions();
	VBoxOptions->SetVisibility(ESlateVisibility::Collapsed);
	VBoxJoin->SetVisibility(ESlateVisibility::Collapsed);
	BackButton->SetVisibility(ESlateVisibility::Collapsed);
}



void UMainMenu::SetupInputAndMouse()
{
	APlayerController* Pc = UGameplayStatics::GetPlayerController(this, 0);

	// Step 1 setup an input mode. There are multiple such as game only or game and UI as well.
	FInputModeUIOnly InputModeData;
	// Step 2 config is specific to the type
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetWidgetToFocus(TakeWidget()); //Because UMG wraps Slate

	// Step 3 set the mode for the player controller
	Pc->SetInputMode(InputModeData);

	// Step 4 enable cursor so you know what to click on:
	Pc->bShowMouseCursor = true;
}

void UMainMenu::SetupEventSubscriptions()
{
	OptionsButton->OnClicked.AddDynamic(this, &UMainMenu::OnOptionsButtonClicked);
	BackButton->OnClicked.AddDynamic(this, &UMainMenu::OnBackButtonClicked);
	JoinButton->OnClicked.AddDynamic(this, &UMainMenu::OnJoinButtonClicked);
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::OnQuitButtonClicked);

	OptionsButton->OnHovered.AddDynamic(this, &UMainMenu::OnOptionsButtonHovered);
	BackButton->OnHovered.AddDynamic(this, &UMainMenu::OnBackButtonHovered);
	JoinButton->OnHovered.AddDynamic(this, &UMainMenu::OnJoinButtonHovered);
	QuitButton->OnHovered.AddDynamic(this, &UMainMenu::OnQuitButtonHovered);

	OptionsButton->OnUnhovered.AddDynamic(this, &UMainMenu::OnOptionsButtonUnhovered);
	BackButton->OnUnhovered.AddDynamic(this, &UMainMenu::OnBackButtonUnhovered);
	JoinButton->OnUnhovered.AddDynamic(this, &UMainMenu::OnJoinButtonUnhovered);
	QuitButton->OnUnhovered.AddDynamic(this, &UMainMenu::OnQuitButtonUnhovered);


}

void UMainMenu::OnOptionsButtonClicked()
{
	VBoxMain->SetVisibility(ESlateVisibility::Collapsed);
	VBoxOptions->SetVisibility(ESlateVisibility::Visible);
	BackButton->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenu::OnJoinButtonClicked()
{
	VBoxJoin->SetVisibility(ESlateVisibility::Visible);
	VBoxMain->SetVisibility(ESlateVisibility::Collapsed);
	BackButton->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenu::OnQuitButtonClicked()
{
	UKismetSystemLibrary::QuitGame(this, UGameplayStatics::GetPlayerController(this, 0), EQuitPreference::Quit, true);
}

void UMainMenu::OnBackButtonClicked()
{
	VBoxMain->SetVisibility(ESlateVisibility::Visible);
	BackButton->SetVisibility(ESlateVisibility::Collapsed);
	VBoxOptions->SetVisibility(ESlateVisibility::Collapsed);
	VBoxJoin->SetVisibility(ESlateVisibility::Collapsed);
}



void UMainMenu::OnOptionsButtonHovered()
{
	OptionsButton->SetColorAndOpacity(FLinearColor::Gray);
}

void UMainMenu::OnJoinButtonHovered()
{
	JoinButton->SetColorAndOpacity(FLinearColor::Gray);
}

void UMainMenu::OnQuitButtonHovered()
{
	QuitButton->SetColorAndOpacity(FLinearColor::Gray);
}

void UMainMenu::OnBackButtonHovered()
{
	BackButton->SetColorAndOpacity(FLinearColor::Gray);
}




void UMainMenu::OnOptionsButtonUnhovered()
{
	OptionsButton->SetColorAndOpacity(FLinearColor::White);
}

void UMainMenu::OnJoinButtonUnhovered()
{
	JoinButton->SetColorAndOpacity(FLinearColor::White);
}

void UMainMenu::OnQuitButtonUnhovered()
{
	QuitButton->SetColorAndOpacity(FLinearColor::White);
}




void UMainMenu::OnBackButtonUnhovered()
{
	BackButton->SetColorAndOpacity(FLinearColor::White);
}




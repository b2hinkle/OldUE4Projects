// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/UMG/Public/UMG.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlateEnums.h"

#include "MainMenu.generated.h"




/**
 * 
 */
UCLASS()
class FPS_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UMainMenu(const FObjectInitializer& ObjectInitializer);	//constructor that seams like it is called during editor time

	virtual void NativeConstruct() override;	//BeginPlay basicly BUT it only is called after AddToViewport() is called

	UPROPERTY(meta = (BindWidget))
		class UButton* OptionsButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* JoinButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* QuitButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* BackButton;

	UPROPERTY(meta = (BindWidget))
		class UVerticalBox* VBoxMain;
	UPROPERTY(meta = (BindWidget))
		class UVerticalBox* VBoxOptions;
	UPROPERTY(meta = (BindWidget))
		class UVerticalBox* VBoxJoin;


protected:
	void SetupInputAndMouse();

	void SetupEventSubscriptions();

	UFUNCTION()
		void OnOptionsButtonClicked();

	UFUNCTION()
		void OnBackButtonClicked();

	UFUNCTION()
		void OnJoinButtonClicked();

	UFUNCTION()
		void OnQuitButtonClicked();



	UFUNCTION()
		void OnOptionsButtonHovered();

	UFUNCTION()
		void OnBackButtonHovered();

	UFUNCTION()
		void OnJoinButtonHovered();

	UFUNCTION()
		void OnQuitButtonHovered();



	UFUNCTION()
		void OnOptionsButtonUnhovered();

	UFUNCTION()
		void OnBackButtonUnhovered();

	UFUNCTION()
		void OnJoinButtonUnhovered();

	UFUNCTION()
		void OnQuitButtonUnhovered();


};

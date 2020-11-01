// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UMainMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FPS();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu::execOnQuitButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnJoinButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnBackButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnOptionsButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionsButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnQuitButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnJoinButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnBackButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnOptionsButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionsButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnQuitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnJoinButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOnOptionsButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionsButtonClicked();
		P_NATIVE_END;
	}
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonClicked", &UMainMenu::execOnBackButtonClicked },
			{ "OnBackButtonHovered", &UMainMenu::execOnBackButtonHovered },
			{ "OnBackButtonUnhovered", &UMainMenu::execOnBackButtonUnhovered },
			{ "OnJoinButtonClicked", &UMainMenu::execOnJoinButtonClicked },
			{ "OnJoinButtonHovered", &UMainMenu::execOnJoinButtonHovered },
			{ "OnJoinButtonUnhovered", &UMainMenu::execOnJoinButtonUnhovered },
			{ "OnOptionsButtonClicked", &UMainMenu::execOnOptionsButtonClicked },
			{ "OnOptionsButtonHovered", &UMainMenu::execOnOptionsButtonHovered },
			{ "OnOptionsButtonUnhovered", &UMainMenu::execOnOptionsButtonUnhovered },
			{ "OnQuitButtonClicked", &UMainMenu::execOnQuitButtonClicked },
			{ "OnQuitButtonHovered", &UMainMenu::execOnQuitButtonHovered },
			{ "OnQuitButtonUnhovered", &UMainMenu::execOnQuitButtonUnhovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnBackButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnBackButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnBackButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnBackButtonUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoinButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoinButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnJoinButtonUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnOptionsButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnOptionsButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnOptionsButtonUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnQuitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnQuitButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OnQuitButtonUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VBoxJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VBoxJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VBoxOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VBoxOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VBoxMain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VBoxMain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionsButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_OnBackButtonClicked, "OnBackButtonClicked" }, // 3828558494
		{ &Z_Construct_UFunction_UMainMenu_OnBackButtonHovered, "OnBackButtonHovered" }, // 3502989802
		{ &Z_Construct_UFunction_UMainMenu_OnBackButtonUnhovered, "OnBackButtonUnhovered" }, // 3257524603
		{ &Z_Construct_UFunction_UMainMenu_OnJoinButtonClicked, "OnJoinButtonClicked" }, // 1628162163
		{ &Z_Construct_UFunction_UMainMenu_OnJoinButtonHovered, "OnJoinButtonHovered" }, // 3169992529
		{ &Z_Construct_UFunction_UMainMenu_OnJoinButtonUnhovered, "OnJoinButtonUnhovered" }, // 1188198750
		{ &Z_Construct_UFunction_UMainMenu_OnOptionsButtonClicked, "OnOptionsButtonClicked" }, // 2729324013
		{ &Z_Construct_UFunction_UMainMenu_OnOptionsButtonHovered, "OnOptionsButtonHovered" }, // 3045790379
		{ &Z_Construct_UFunction_UMainMenu_OnOptionsButtonUnhovered, "OnOptionsButtonUnhovered" }, // 3008312196
		{ &Z_Construct_UFunction_UMainMenu_OnQuitButtonClicked, "OnQuitButtonClicked" }, // 600247889
		{ &Z_Construct_UFunction_UMainMenu_OnQuitButtonHovered, "OnQuitButtonHovered" }, // 3313241061
		{ &Z_Construct_UFunction_UMainMenu_OnQuitButtonUnhovered, "OnQuitButtonUnhovered" }, // 121242539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenu.h" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxJoin_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxJoin = { "VBoxJoin", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, VBoxJoin), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxOptions_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxOptions = { "VBoxOptions", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, VBoxOptions), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxMain_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxMain = { "VBoxMain", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, VBoxMain), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxMain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxMain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_OptionsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//BeginPlay basicly BUT it only is called after AddToViewport() is called\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenu.h" },
		{ "ToolTip", "BeginPlay basicly BUT it only is called after AddToViewport() is called" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_OptionsButton = { "OptionsButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, OptionsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_OptionsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_OptionsButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_VBoxMain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_BackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_OptionsButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenu, 1203968073);
	template<> FPS_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu(Z_Construct_UClass_UMainMenu, &UMainMenu::StaticClass, TEXT("/Script/FPS"), TEXT("UMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

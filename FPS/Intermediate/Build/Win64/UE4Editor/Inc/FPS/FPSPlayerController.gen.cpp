// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Essentials/FPSPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerController() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	DEFINE_FUNCTION(AFPSPlayerController::execServerDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDie_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerDie_Validate"));
			return;
		}
		P_THIS->ServerDie_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerController::execUpdateCharacterFromInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCharacterFromInfo();
		P_NATIVE_END;
	}
	static FName NAME_AFPSPlayerController_ServerDie = FName(TEXT("ServerDie"));
	void AFPSPlayerController::ServerDie()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerController_ServerDie),NULL);
	}
	void AFPSPlayerController::StaticRegisterNativesAFPSPlayerController()
	{
		UClass* Class = AFPSPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerDie", &AFPSPlayerController::execServerDie },
			{ "UpdateCharacterFromInfo", &AFPSPlayerController::execUpdateCharacterFromInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Essentials/FPSPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "ServerDie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_ServerDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_ServerDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Whether it's possessing a new character from a new current FCharacterInfo or whether the character needs to be updated on it's variables (ie its attribute set) this is the function that gets called\n" },
		{ "ModuleRelativePath", "Public/Essentials/FPSPlayerController.h" },
		{ "ToolTip", "Whether it's possessing a new character from a new current FCharacterInfo or whether the character needs to be updated on it's variables (ie its attribute set) this is the function that gets called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerController, nullptr, "UpdateCharacterFromInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerController_NoRegister()
	{
		return AFPSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerController_ServerDie, "ServerDie" }, // 775132673
		{ &Z_Construct_UFunction_AFPSPlayerController_UpdateCharacterFromInfo, "UpdateCharacterFromInfo" }, // 1163455202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Ability System aware player controller.\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Essentials/FPSPlayerController.h" },
		{ "ModuleRelativePath", "Public/Essentials/FPSPlayerController.h" },
		{ "ToolTip", "Ability System aware player controller." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams = {
		&AFPSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerController, 102261419);
	template<> FPS_API UClass* StaticClass<AFPSPlayerController>()
	{
		return AFPSPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerController(Z_Construct_UClass_AFPSPlayerController, &AFPSPlayerController::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

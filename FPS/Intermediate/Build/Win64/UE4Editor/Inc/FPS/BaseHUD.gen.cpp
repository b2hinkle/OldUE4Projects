// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/BaseHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHUD() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_ABaseHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ABaseHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseHUD::execSpawnMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMainMenu();
		P_NATIVE_END;
	}
	void ABaseHUD::StaticRegisterNativesABaseHUD()
	{
		UClass* Class = ABaseHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnMainMenu", &ABaseHUD::execSpawnMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHUD, nullptr, "SpawnMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseHUD_SpawnMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseHUD_SpawnMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseHUD_NoRegister()
	{
		return ABaseHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABaseHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseHUD_SpawnMainMenu, "SpawnMainMenu" }, // 839702409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "BaseHUD.h" },
		{ "ModuleRelativePath", "Public/BaseHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseHUD_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "Category", "BaseHUD" },
		{ "ModuleRelativePath", "Public/BaseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseHUD_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseHUD, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseHUD_Statics::NewProp_MainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHUD_Statics::NewProp_MainMenuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseHUD_Statics::NewProp_MainMenuWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseHUD_Statics::ClassParams = {
		&ABaseHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABaseHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseHUD, 4046917874);
	template<> FPS_API UClass* StaticClass<ABaseHUD>()
	{
		return ABaseHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseHUD(Z_Construct_UClass_ABaseHUD, &ABaseHUD::StaticClass, TEXT("/Script/FPS"), TEXT("ABaseHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

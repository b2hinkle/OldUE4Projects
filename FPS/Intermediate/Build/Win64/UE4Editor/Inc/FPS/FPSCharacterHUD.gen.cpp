// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/UI/FPSCharacterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterHUD() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFPSCharacterHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSCharacterHUD();
	FPS_API UClass* Z_Construct_UClass_ABaseHUD();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSCharacterHUD::execDebugCenterPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCenterPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterHUD::execSpawnCharacterWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCharacterWidget();
		P_NATIVE_END;
	}
	void AFPSCharacterHUD::StaticRegisterNativesAFPSCharacterHUD()
	{
		UClass* Class = AFPSCharacterHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugCenterPoint", &AFPSCharacterHUD::execDebugCenterPoint },
			{ "SpawnCharacterWidget", &AFPSCharacterHUD::execSpawnCharacterWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FPSCharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterHUD, nullptr, "DebugCenterPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** if Overriding, do not call  super that way you can create your own character widget */" },
		{ "ModuleRelativePath", "Public/UI/FPSCharacterHUD.h" },
		{ "ToolTip", "if Overriding, do not call  super that way you can create your own character widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterHUD, nullptr, "SpawnCharacterWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacterHUD_NoRegister()
	{
		return AFPSCharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterPointWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CenterPointWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacterHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacterHUD_DebugCenterPoint, "DebugCenterPoint" }, // 4100486140
		{ &Z_Construct_UFunction_AFPSCharacterHUD_SpawnCharacterWidget, "SpawnCharacterWidget" }, // 2403934597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/FPSCharacterHUD.h" },
		{ "ModuleRelativePath", "Public/UI/FPSCharacterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CenterPointWidget_MetaData[] = {
		{ "Category", "FPSCharacterHUD" },
		{ "ModuleRelativePath", "Public/UI/FPSCharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CenterPointWidget = { "CenterPointWidget", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterHUD, CenterPointWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CenterPointWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CenterPointWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CharacterWidget_MetaData[] = {
		{ "Category", "FPSCharacterHUD" },
		{ "ModuleRelativePath", "Public/UI/FPSCharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CharacterWidget = { "CharacterWidget", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterHUD, CharacterWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CharacterWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CharacterWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CenterPointWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterHUD_Statics::NewProp_CharacterWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacterHUD_Statics::ClassParams = {
		&AFPSCharacterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacterHUD, 2087863310);
	template<> FPS_API UClass* StaticClass<AFPSCharacterHUD>()
	{
		return AFPSCharacterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacterHUD(Z_Construct_UClass_AFPSCharacterHUD, &AFPSCharacterHUD::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSCharacterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

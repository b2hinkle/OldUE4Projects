// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementLab/Public/MovementLabGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementLabGameMode() {}
// Cross Module References
	MOVEMENTLAB_API UClass* Z_Construct_UClass_AMovementLabGameMode_NoRegister();
	MOVEMENTLAB_API UClass* Z_Construct_UClass_AMovementLabGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MovementLab();
// End Cross Module References
	void AMovementLabGameMode::StaticRegisterNativesAMovementLabGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMovementLabGameMode_NoRegister()
	{
		return AMovementLabGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMovementLabGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovementLabGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovementLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovementLabGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MovementLabGameMode.h" },
		{ "ModuleRelativePath", "Public/MovementLabGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovementLabGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovementLabGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovementLabGameMode_Statics::ClassParams = {
		&AMovementLabGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMovementLabGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovementLabGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovementLabGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovementLabGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovementLabGameMode, 4283940373);
	template<> MOVEMENTLAB_API UClass* StaticClass<AMovementLabGameMode>()
	{
		return AMovementLabGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovementLabGameMode(Z_Construct_UClass_AMovementLabGameMode, &AMovementLabGameMode::StaticClass, TEXT("/Script/MovementLab"), TEXT("AMovementLabGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovementLabGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

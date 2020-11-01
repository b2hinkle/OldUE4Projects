// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/MenuGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuGameMode() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AMenuGameMode_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AMenuGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AMenuGameMode::StaticRegisterNativesAMenuGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMenuGameMode_NoRegister()
	{
		return AMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MenuGameMode.h" },
		{ "ModuleRelativePath", "Public/MenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuGameMode_Statics::ClassParams = {
		&AMenuGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuGameMode, 494560040);
	template<> FPS_API UClass* StaticClass<AMenuGameMode>()
	{
		return AMenuGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuGameMode(Z_Construct_UClass_AMenuGameMode, &AMenuGameMode::StaticClass, TEXT("/Script/FPS"), TEXT("AMenuGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

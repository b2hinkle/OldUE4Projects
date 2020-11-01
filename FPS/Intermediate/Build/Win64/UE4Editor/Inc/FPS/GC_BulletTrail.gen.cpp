// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/Cues/GC_BulletTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_BulletTrail() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UGC_BulletTrail_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGC_BulletTrail();
	FPS_API UClass* Z_Construct_UClass_UFPSGameplayCueNotify_Static();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UGC_BulletTrail::StaticRegisterNativesUGC_BulletTrail()
	{
	}
	UClass* Z_Construct_UClass_UGC_BulletTrail_NoRegister()
	{
		return UGC_BulletTrail::StaticClass();
	}
	struct Z_Construct_UClass_UGC_BulletTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MussleFlashPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MussleFlashPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_BulletTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSGameplayCueNotify_Static,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BulletTrail_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "AbilitySystem/Cues/GC_BulletTrail.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Cues/GC_BulletTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_TrailPS_MetaData[] = {
		{ "Category", "GC_BulletTrail" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Cues/GC_BulletTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_TrailPS = { "TrailPS", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_BulletTrail, TrailPS), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_TrailPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_TrailPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_MussleFlashPS_MetaData[] = {
		{ "Category", "GC_BulletTrail" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Cues/GC_BulletTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_MussleFlashPS = { "MussleFlashPS", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_BulletTrail, MussleFlashPS), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_MussleFlashPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_MussleFlashPS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_BulletTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_TrailPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_BulletTrail_Statics::NewProp_MussleFlashPS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_BulletTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_BulletTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGC_BulletTrail_Statics::ClassParams = {
		&UGC_BulletTrail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGC_BulletTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BulletTrail_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_BulletTrail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BulletTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_BulletTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGC_BulletTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGC_BulletTrail, 988955252);
	template<> FPS_API UClass* StaticClass<UGC_BulletTrail>()
	{
		return UGC_BulletTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGC_BulletTrail(Z_Construct_UClass_UGC_BulletTrail, &UGC_BulletTrail::StaticClass, TEXT("/Script/FPS"), TEXT("UGC_BulletTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_BulletTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

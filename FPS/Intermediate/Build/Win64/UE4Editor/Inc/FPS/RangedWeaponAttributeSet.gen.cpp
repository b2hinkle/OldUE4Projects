// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/RangedWeaponAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeaponAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_URangedWeaponAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_URangedWeaponAttributeSet();
	FPS_API UClass* Z_Construct_UClass_UWeaponAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void URangedWeaponAttributeSet::StaticRegisterNativesURangedWeaponAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_URangedWeaponAttributeSet_NoRegister()
	{
		return URangedWeaponAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_URangedWeaponAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangedWeaponAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/RangedWeaponAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/RangedWeaponAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangedWeaponAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedWeaponAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangedWeaponAttributeSet_Statics::ClassParams = {
		&URangedWeaponAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangedWeaponAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangedWeaponAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangedWeaponAttributeSet, 1161421588);
	template<> FPS_API UClass* StaticClass<URangedWeaponAttributeSet>()
	{
		return URangedWeaponAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangedWeaponAttributeSet(Z_Construct_UClass_URangedWeaponAttributeSet, &URangedWeaponAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("URangedWeaponAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangedWeaponAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

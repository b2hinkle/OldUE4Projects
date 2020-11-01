// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/MeleeWeaponAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeaponAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UMeleeWeaponAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UMeleeWeaponAttributeSet();
	FPS_API UClass* Z_Construct_UClass_UWeaponAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UMeleeWeaponAttributeSet::StaticRegisterNativesUMeleeWeaponAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UMeleeWeaponAttributeSet_NoRegister()
	{
		return UMeleeWeaponAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/MeleeWeaponAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/MeleeWeaponAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeWeaponAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::ClassParams = {
		&UMeleeWeaponAttributeSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeWeaponAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeWeaponAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeWeaponAttributeSet, 710475745);
	template<> FPS_API UClass* StaticClass<UMeleeWeaponAttributeSet>()
	{
		return UMeleeWeaponAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeWeaponAttributeSet(Z_Construct_UClass_UMeleeWeaponAttributeSet, &UMeleeWeaponAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("UMeleeWeaponAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeWeaponAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

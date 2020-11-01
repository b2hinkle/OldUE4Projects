// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/FPSAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFPSAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UFPSAttributeSet::StaticRegisterNativesUFPSAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UFPSAttributeSet_NoRegister()
	{
		return UFPSAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UFPSAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/FPSAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSAttributeSet_Statics::ClassParams = {
		&UFPSAttributeSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFPSAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSAttributeSet, 251209938);
	template<> FPS_API UClass* StaticClass<UFPSAttributeSet>()
	{
		return UFPSAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSAttributeSet(Z_Construct_UClass_UFPSAttributeSet, &UFPSAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("UFPSAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/CustomExecutionCalculations/FireExecutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireExecutionCalculation() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFireExecutionCalculation_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFireExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UFireExecutionCalculation::StaticRegisterNativesUFireExecutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_UFireExecutionCalculation_NoRegister()
	{
		return UFireExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UFireExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/CustomExecutionCalculations/FireExecutionCalculation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomExecutionCalculations/FireExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireExecutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireExecutionCalculation_Statics::ClassParams = {
		&UFireExecutionCalculation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFireExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireExecutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireExecutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireExecutionCalculation, 1454741640);
	template<> FPS_API UClass* StaticClass<UFireExecutionCalculation>()
	{
		return UFireExecutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireExecutionCalculation(Z_Construct_UClass_UFireExecutionCalculation, &UFireExecutionCalculation::StaticClass, TEXT("/Script/FPS"), TEXT("UFireExecutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireExecutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

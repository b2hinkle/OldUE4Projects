// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Weapons/AR4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAR4() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AAR4_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AAR4();
	FPS_API UClass* Z_Construct_UClass_ARangedWeapon();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AAR4::StaticRegisterNativesAAR4()
	{
	}
	UClass* Z_Construct_UClass_AAR4_NoRegister()
	{
		return AAR4::StaticClass();
	}
	struct Z_Construct_UClass_AAR4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAR4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARangedWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAR4_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/AR4.h" },
		{ "ModuleRelativePath", "Public/Weapons/AR4.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAR4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAR4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAR4_Statics::ClassParams = {
		&AAR4::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAR4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAR4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAR4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAR4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAR4, 980562604);
	template<> FPS_API UClass* StaticClass<AAR4>()
	{
		return AAR4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAR4(Z_Construct_UClass_AAR4, &AAR4::StaticClass, TEXT("/Script/FPS"), TEXT("AAR4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAR4);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

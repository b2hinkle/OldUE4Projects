// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Weapons/M1911.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM1911() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AM1911_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AM1911();
	FPS_API UClass* Z_Construct_UClass_ARangedWeapon();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void AM1911::StaticRegisterNativesAM1911()
	{
	}
	UClass* Z_Construct_UClass_AM1911_NoRegister()
	{
		return AM1911::StaticClass();
	}
	struct Z_Construct_UClass_AM1911_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AM1911_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARangedWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM1911_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/M1911.h" },
		{ "ModuleRelativePath", "Public/Weapons/M1911.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AM1911_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AM1911>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AM1911_Statics::ClassParams = {
		&AM1911::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AM1911_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AM1911_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AM1911()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AM1911_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AM1911, 4216933538);
	template<> FPS_API UClass* StaticClass<AM1911>()
	{
		return AM1911::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AM1911(Z_Construct_UClass_AM1911, &AM1911::StaticClass, TEXT("/Script/FPS"), TEXT("AM1911"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AM1911);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

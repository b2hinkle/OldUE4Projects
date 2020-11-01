// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Interfaces/Equiptable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquiptable() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UEquiptable_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UEquiptable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UEquiptable::StaticRegisterNativesUEquiptable()
	{
	}
	UClass* Z_Construct_UClass_UEquiptable_NoRegister()
	{
		return UEquiptable::StaticClass();
	}
	struct Z_Construct_UClass_UEquiptable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquiptable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquiptable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Equiptable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquiptable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquiptable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquiptable_Statics::ClassParams = {
		&UEquiptable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquiptable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquiptable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquiptable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquiptable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquiptable, 996684246);
	template<> FPS_API UClass* StaticClass<UEquiptable>()
	{
		return UEquiptable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquiptable(Z_Construct_UClass_UEquiptable, &UEquiptable::StaticClass, TEXT("/Script/FPS"), TEXT("UEquiptable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquiptable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementLab/Public/Characters/InfiniteAngleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfiniteAngleCharacter() {}
// Cross Module References
	MOVEMENTLAB_API UClass* Z_Construct_UClass_AInfiniteAngleCharacter_NoRegister();
	MOVEMENTLAB_API UClass* Z_Construct_UClass_AInfiniteAngleCharacter();
	MOVEMENTLAB_API UClass* Z_Construct_UClass_AMovementLabCharacter();
	UPackage* Z_Construct_UPackage__Script_MovementLab();
// End Cross Module References
	void AInfiniteAngleCharacter::StaticRegisterNativesAInfiniteAngleCharacter()
	{
	}
	UClass* Z_Construct_UClass_AInfiniteAngleCharacter_NoRegister()
	{
		return AInfiniteAngleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInfiniteAngleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfiniteAngleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMovementLabCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MovementLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfiniteAngleCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/InfiniteAngleCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/InfiniteAngleCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfiniteAngleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfiniteAngleCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfiniteAngleCharacter_Statics::ClassParams = {
		&AInfiniteAngleCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInfiniteAngleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfiniteAngleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfiniteAngleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfiniteAngleCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfiniteAngleCharacter, 3415221217);
	template<> MOVEMENTLAB_API UClass* StaticClass<AInfiniteAngleCharacter>()
	{
		return AInfiniteAngleCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfiniteAngleCharacter(Z_Construct_UClass_AInfiniteAngleCharacter, &AInfiniteAngleCharacter::StaticClass, TEXT("/Script/MovementLab"), TEXT("AInfiniteAngleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfiniteAngleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

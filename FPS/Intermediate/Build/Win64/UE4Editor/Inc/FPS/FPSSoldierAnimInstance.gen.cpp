// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AnimationInstances/FPSSoldierAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSSoldierAnimInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFPSSoldierAnimInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSSoldierAnimInstance();
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UFPSSoldierAnimInstance::StaticRegisterNativesUFPSSoldierAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFPSSoldierAnimInstance_NoRegister()
	{
		return UFPSSoldierAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPSSoldierAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationInstances/FPSSoldierAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSSoldierAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSSoldierAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::ClassParams = {
		&UFPSSoldierAnimInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSSoldierAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSSoldierAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSSoldierAnimInstance, 2372640082);
	template<> FPS_API UClass* StaticClass<UFPSSoldierAnimInstance>()
	{
		return UFPSSoldierAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSSoldierAnimInstance(Z_Construct_UClass_UFPSSoldierAnimInstance, &UFPSSoldierAnimInstance::StaticClass, TEXT("/Script/FPS"), TEXT("UFPSSoldierAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSSoldierAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AnimationInstances/TPSSoldierAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSSoldierAnimInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UTPSSoldierAnimInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UTPSSoldierAnimInstance();
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UTPSSoldierAnimInstance::StaticRegisterNativesUTPSSoldierAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTPSSoldierAnimInstance_NoRegister()
	{
		return UTPSSoldierAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTPSSoldierAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationInstances/TPSSoldierAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimationInstances/TPSSoldierAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSSoldierAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::ClassParams = {
		&UTPSSoldierAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTPSSoldierAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTPSSoldierAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTPSSoldierAnimInstance, 3186031782);
	template<> FPS_API UClass* StaticClass<UTPSSoldierAnimInstance>()
	{
		return UTPSSoldierAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTPSSoldierAnimInstance(Z_Construct_UClass_UTPSSoldierAnimInstance, &UTPSSoldierAnimInstance::StaticClass, TEXT("/Script/FPS"), TEXT("UTPSSoldierAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSSoldierAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

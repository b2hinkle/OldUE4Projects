// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AnimationInstances/BaseAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UBaseAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
	{
		return UBaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationInstances/BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimationInstances/BaseAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
		&UBaseAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAnimInstance, 3675050821);
	template<> FPS_API UClass* StaticClass<UBaseAnimInstance>()
	{
		return UBaseAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAnimInstance(Z_Construct_UClass_UBaseAnimInstance, &UBaseAnimInstance::StaticClass, TEXT("/Script/FPS"), TEXT("UBaseAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

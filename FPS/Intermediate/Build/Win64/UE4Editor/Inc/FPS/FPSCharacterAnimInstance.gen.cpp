// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AnimationInstances/FPSCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterAnimInstance() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAnimInstance_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAnimInstance();
	FPS_API UClass* Z_Construct_UClass_UBaseAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
// End Cross Module References
	void UFPSCharacterAnimInstance::StaticRegisterNativesUFPSCharacterAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFPSCharacterAnimInstance_NoRegister()
	{
		return UFPSCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPSCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedNormalizedDeltaRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedNormalizedDeltaRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADS_MetaData[];
#endif
		static void NewProp_ADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_characterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationInstances/FPSCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ReplicatedNormalizedDeltaRotator = { "ReplicatedNormalizedDeltaRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAnimInstance, ReplicatedNormalizedDeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS_MetaData[] = {
		{ "Category", "Arms" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS_SetBit(void* Obj)
	{
		((UFPSCharacterAnimInstance*)Obj)->ADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS = { "ADS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSCharacterAnimInstance), &Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_characterSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_characterSpeed = { "characterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAnimInstance, characterSpeed), METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_characterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_characterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_controlled_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/AnimationInstances/FPSCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_controlled = { "controlled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAnimInstance, controlled), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_controlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_controlled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ReplicatedNormalizedDeltaRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_ADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_characterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::NewProp_controlled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::ClassParams = {
		&UFPSCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSCharacterAnimInstance, 1042591665);
	template<> FPS_API UClass* StaticClass<UFPSCharacterAnimInstance>()
	{
		return UFPSCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSCharacterAnimInstance(Z_Construct_UClass_UFPSCharacterAnimInstance, &UFPSCharacterAnimInstance::StaticClass, TEXT("/Script/FPS"), TEXT("UFPSCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

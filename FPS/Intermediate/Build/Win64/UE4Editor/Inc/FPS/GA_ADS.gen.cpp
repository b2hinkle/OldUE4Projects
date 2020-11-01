// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/Abilities/GA_ADS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_ADS() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UGA_ADS_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGA_ADS();
	FPS_API UClass* Z_Construct_UClass_UFPSGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_FPS();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGA_ADS::execOnTaskFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_ADS::execOnTaskCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskCompleted();
		P_NATIVE_END;
	}
	void UGA_ADS::StaticRegisterNativesUGA_ADS()
	{
		UClass* Class = UGA_ADS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTaskCompleted", &UGA_ADS::execOnTaskCompleted },
			{ "OnTaskFailed", &UGA_ADS::execOnTaskFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_ADS, nullptr, "OnTaskCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_ADS_OnTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_ADS_OnTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_ADS, nullptr, "OnTaskFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_ADS_OnTaskFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_ADS_OnTaskFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGA_ADS_NoRegister()
	{
		return UGA_ADS::StaticClass();
	}
	struct Z_Construct_UClass_UGA_ADS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ADSMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddADSTagEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AddADSTagEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_ADS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGA_ADS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_ADS_OnTaskCompleted, "OnTaskCompleted" }, // 1828713863
		{ &Z_Construct_UFunction_UGA_ADS_OnTaskFailed, "OnTaskFailed" }, // 3404749618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_ADS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GA_ADS.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_ADS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_ADS_Statics::NewProp_ADSMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_ADS_Statics::NewProp_ADSMontage = { "ADSMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGA_ADS, ADSMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGA_ADS_Statics::NewProp_ADSMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ADS_Statics::NewProp_ADSMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_ADS_Statics::NewProp_AddADSTagEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_ADS_Statics::NewProp_AddADSTagEffect = { "AddADSTagEffect", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGA_ADS, AddADSTagEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGA_ADS_Statics::NewProp_AddADSTagEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ADS_Statics::NewProp_AddADSTagEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_ADS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ADS_Statics::NewProp_ADSMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ADS_Statics::NewProp_AddADSTagEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_ADS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_ADS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGA_ADS_Statics::ClassParams = {
		&UGA_ADS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGA_ADS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ADS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGA_ADS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ADS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGA_ADS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGA_ADS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGA_ADS, 1030631001);
	template<> FPS_API UClass* StaticClass<UGA_ADS>()
	{
		return UGA_ADS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGA_ADS(Z_Construct_UClass_UGA_ADS, &UGA_ADS::StaticClass, TEXT("/Script/FPS"), TEXT("UGA_ADS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_ADS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

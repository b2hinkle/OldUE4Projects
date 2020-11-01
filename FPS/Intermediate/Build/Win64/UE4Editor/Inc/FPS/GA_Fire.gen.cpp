// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/Abilities/GA_Fire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Fire() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UGA_Fire_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGA_Fire();
	FPS_API UClass* Z_Construct_UClass_UFPSGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FFireHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGA_Fire::execOnMontageTaskBlendOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageTaskBlendOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_Fire::execOnMontageTaskInterrupted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageTaskInterrupted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_Fire::execOnMontageTaskCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageTaskCancelled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_Fire::execOnMontageTaskCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageTaskCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_Fire::execOnTaskFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_Fire::execOnTaskCompleted)
	{
		P_GET_STRUCT(FFireHitResult,Z_Param_Impact);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskCompleted(Z_Param_Impact);
		P_NATIVE_END;
	}
	void UGA_Fire::StaticRegisterNativesUGA_Fire()
	{
		UClass* Class = UGA_Fire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageTaskBlendOut", &UGA_Fire::execOnMontageTaskBlendOut },
			{ "OnMontageTaskCancelled", &UGA_Fire::execOnMontageTaskCancelled },
			{ "OnMontageTaskCompleted", &UGA_Fire::execOnMontageTaskCompleted },
			{ "OnMontageTaskInterrupted", &UGA_Fire::execOnMontageTaskInterrupted },
			{ "OnTaskCompleted", &UGA_Fire::execOnTaskCompleted },
			{ "OnTaskFailed", &UGA_Fire::execOnTaskFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnMontageTaskBlendOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnMontageTaskCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnMontageTaskCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnMontageTaskInterrupted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics
	{
		struct GA_Fire_eventOnTaskCompleted_Parms
		{
			FFireHitResult Impact;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GA_Fire_eventOnTaskCompleted_Parms, Impact), Z_Construct_UScriptStruct_FFireHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::NewProp_Impact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnTaskCompleted", nullptr, nullptr, sizeof(GA_Fire_eventOnTaskCompleted_Parms), Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Fire, nullptr, "OnTaskFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_Fire_OnTaskFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_Fire_OnTaskFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGA_Fire_NoRegister()
	{
		return UGA_Fire::StaticClass();
	}
	struct Z_Construct_UClass_UGA_Fire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_Fire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGA_Fire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_Fire_OnMontageTaskBlendOut, "OnMontageTaskBlendOut" }, // 743543979
		{ &Z_Construct_UFunction_UGA_Fire_OnMontageTaskCancelled, "OnMontageTaskCancelled" }, // 2126008873
		{ &Z_Construct_UFunction_UGA_Fire_OnMontageTaskCompleted, "OnMontageTaskCompleted" }, // 2811294399
		{ &Z_Construct_UFunction_UGA_Fire_OnMontageTaskInterrupted, "OnMontageTaskInterrupted" }, // 2439701933
		{ &Z_Construct_UFunction_UGA_Fire_OnTaskCompleted, "OnTaskCompleted" }, // 547451058
		{ &Z_Construct_UFunction_UGA_Fire_OnTaskFailed, "OnTaskFailed" }, // 4097758791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Fire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GA_Fire.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Fire_Statics::NewProp_GunFireMontage_MetaData[] = {
		{ "Category", "GA_Fire" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Fire_Statics::NewProp_GunFireMontage = { "GunFireMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGA_Fire, GunFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGA_Fire_Statics::NewProp_GunFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Fire_Statics::NewProp_GunFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_Fire_Statics::NewProp_FireEffectClass_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_Fire_Statics::NewProp_FireEffectClass = { "FireEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGA_Fire, FireEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGA_Fire_Statics::NewProp_FireEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Fire_Statics::NewProp_FireEffectClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Fire_Statics::NewProp_GunFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Fire_Statics::NewProp_FireEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_Fire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Fire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGA_Fire_Statics::ClassParams = {
		&UGA_Fire::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGA_Fire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Fire_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGA_Fire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Fire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGA_Fire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGA_Fire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGA_Fire, 1546587759);
	template<> FPS_API UClass* StaticClass<UGA_Fire>()
	{
		return UGA_Fire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGA_Fire(Z_Construct_UClass_UGA_Fire, &UGA_Fire::StaticClass, TEXT("/Script/FPS"), TEXT("UGA_Fire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Fire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

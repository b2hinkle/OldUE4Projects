// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/Abilities/GA_SetPreviousWeaponAsCurrent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_SetPreviousWeaponAsCurrent() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent();
	FPS_API UClass* Z_Construct_UClass_UFPSGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	DEFINE_FUNCTION(UGA_SetPreviousWeaponAsCurrent::execOnTaskFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGA_SetPreviousWeaponAsCurrent::execOnTaskCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskCompleted();
		P_NATIVE_END;
	}
	void UGA_SetPreviousWeaponAsCurrent::StaticRegisterNativesUGA_SetPreviousWeaponAsCurrent()
	{
		UClass* Class = UGA_SetPreviousWeaponAsCurrent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTaskCompleted", &UGA_SetPreviousWeaponAsCurrent::execOnTaskCompleted },
			{ "OnTaskFailed", &UGA_SetPreviousWeaponAsCurrent::execOnTaskFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_SetPreviousWeaponAsCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent, nullptr, "OnTaskCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_SetPreviousWeaponAsCurrent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent, nullptr, "OnTaskFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_NoRegister()
	{
		return UGA_SetPreviousWeaponAsCurrent::StaticClass();
	}
	struct Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskCompleted, "OnTaskCompleted" }, // 3801405047
		{ &Z_Construct_UFunction_UGA_SetPreviousWeaponAsCurrent_OnTaskFailed, "OnTaskFailed" }, // 3750964053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/GA_SetPreviousWeaponAsCurrent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GA_SetPreviousWeaponAsCurrent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_SetPreviousWeaponAsCurrent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::ClassParams = {
		&UGA_SetPreviousWeaponAsCurrent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGA_SetPreviousWeaponAsCurrent, 2834274340);
	template<> FPS_API UClass* StaticClass<UGA_SetPreviousWeaponAsCurrent>()
	{
		return UGA_SetPreviousWeaponAsCurrent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGA_SetPreviousWeaponAsCurrent(Z_Construct_UClass_UGA_SetPreviousWeaponAsCurrent, &UGA_SetPreviousWeaponAsCurrent::StaticClass, TEXT("/Script/FPS"), TEXT("UGA_SetPreviousWeaponAsCurrent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_SetPreviousWeaponAsCurrent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

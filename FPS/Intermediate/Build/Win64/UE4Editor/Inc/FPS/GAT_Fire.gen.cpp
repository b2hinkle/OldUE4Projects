// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAT_Fire() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FFireHitResult();
	FPS_API UClass* Z_Construct_UClass_UGAT_Fire_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGAT_Fire();
	FPS_API UClass* Z_Construct_UClass_UFPSAbilityTask();
	FPS_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "GAT_OnFailed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics
	{
		struct _Script_FPS_eventGAT_OnCompleted_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FPS_eventGAT_OnCompleted_Parms, Impact), Z_Construct_UScriptStruct_FFireHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::NewProp_Impact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "GAT_OnCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_FPS_eventGAT_OnCompleted_Parms), Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFireHitResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FFireHitResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFireHitResult, Z_Construct_UPackage__Script_FPS(), TEXT("FireHitResult"), sizeof(FFireHitResult), Get_Z_Construct_UScriptStruct_FFireHitResult_Hash());
	}
	return Singleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FFireHitResult>()
{
	return FFireHitResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFireHitResult(FFireHitResult::StaticStruct, TEXT("/Script/FPS"), TEXT("FireHitResult"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFFireHitResult
{
	FScriptStruct_FPS_StaticRegisterNativesFFireHitResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FireHitResult")),new UScriptStruct::TCppStructOps<FFireHitResult>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFFireHitResult;
	struct Z_Construct_UScriptStruct_FFireHitResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFireHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFireHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFireHitResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFireHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"FireHitResult",
		sizeof(FFireHitResult),
		alignof(FFireHitResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFireHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFireHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFireHitResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFireHitResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FireHitResult"), sizeof(FFireHitResult), Get_Z_Construct_UScriptStruct_FFireHitResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFireHitResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFireHitResult_Hash() { return 1331887423U; }
	DEFINE_FUNCTION(UGAT_Fire::execCreateGAT_Fire)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(ABaseWeapon,Z_Param_WeaponToFire);
		P_GET_PROPERTY(FInt16Property,Z_Param_randomSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGAT_Fire**)Z_Param__Result=UGAT_Fire::CreateGAT_Fire(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_WeaponToFire,Z_Param_randomSeed);
		P_NATIVE_END;
	}
	void UGAT_Fire::StaticRegisterNativesUGAT_Fire()
	{
		UClass* Class = UGAT_Fire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGAT_Fire", &UGAT_Fire::execCreateGAT_Fire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics
	{
		struct GAT_Fire_eventCreateGAT_Fire_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			ABaseWeapon* WeaponToFire;
			int16 randomSeed;
			UGAT_Fire* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_randomSeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponToFire;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_Fire_eventCreateGAT_Fire_Parms, ReturnValue), Z_Construct_UClass_UGAT_Fire_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_randomSeed = { "randomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_Fire_eventCreateGAT_Fire_Parms, randomSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_WeaponToFire = { "WeaponToFire", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_Fire_eventCreateGAT_Fire_Parms, WeaponToFire), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_Fire_eventCreateGAT_Fire_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_Fire_eventCreateGAT_Fire_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_randomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_WeaponToFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "GAT_Fire" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAT_Fire, nullptr, "CreateGAT_Fire", nullptr, nullptr, sizeof(GAT_Fire_eventCreateGAT_Fire_Parms), Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAT_Fire_NoRegister()
	{
		return UGAT_Fire::StaticClass();
	}
	struct Z_Construct_UClass_UGAT_Fire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAT_Fire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAT_Fire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAT_Fire_CreateGAT_Fire, "CreateGAT_Fire" }, // 3404961159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAT_Fire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_Fire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAT_Fire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAT_Fire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAT_Fire_Statics::ClassParams = {
		&UGAT_Fire::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGAT_Fire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAT_Fire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAT_Fire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAT_Fire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAT_Fire, 444310656);
	template<> FPS_API UClass* StaticClass<UGAT_Fire>()
	{
		return UGAT_Fire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAT_Fire(Z_Construct_UClass_UGAT_Fire, &UGAT_Fire::StaticClass, TEXT("/Script/FPS"), TEXT("UGAT_Fire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAT_Fire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

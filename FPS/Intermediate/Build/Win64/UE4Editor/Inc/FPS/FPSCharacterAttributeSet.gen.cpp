// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAttributeSet();
	FPS_API UClass* Z_Construct_UClass_UFPSAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UFPSCharacterAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterAttributeSet::execOnRep_Healing)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Healing(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterAttributeSet::execOnRep_Damage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Damage(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSCharacterAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	void UFPSCharacterAttributeSet::StaticRegisterNativesUFPSCharacterAttributeSet()
	{
		UClass* Class = UFPSCharacterAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Damage", &UFPSCharacterAttributeSet::execOnRep_Damage },
			{ "OnRep_Healing", &UFPSCharacterAttributeSet::execOnRep_Healing },
			{ "OnRep_Health", &UFPSCharacterAttributeSet::execOnRep_Health },
			{ "OnRep_MaxHealth", &UFPSCharacterAttributeSet::execOnRep_MaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics
	{
		struct FPSCharacterAttributeSet_eventOnRep_Damage_Parms
		{
			FGameplayAttributeData ServerBaseValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterAttributeSet_eventOnRep_Damage_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterAttributeSet, nullptr, "OnRep_Damage", nullptr, nullptr, sizeof(FPSCharacterAttributeSet_eventOnRep_Damage_Parms), Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics
	{
		struct FPSCharacterAttributeSet_eventOnRep_Healing_Parms
		{
			FGameplayAttributeData ServerBaseValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterAttributeSet_eventOnRep_Healing_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterAttributeSet, nullptr, "OnRep_Healing", nullptr, nullptr, sizeof(FPSCharacterAttributeSet_eventOnRep_Healing_Parms), Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics
	{
		struct FPSCharacterAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData ServerBaseValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterAttributeSet_eventOnRep_Health_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
		{ "ToolTip", "These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(FPSCharacterAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics
	{
		struct FPSCharacterAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData ServerBaseValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerBaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterAttributeSet_eventOnRep_MaxHealth_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSCharacterAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(FPSCharacterAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSCharacterAttributeSet_NoRegister()
	{
		return UFPSCharacterAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UFPSCharacterAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Healing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Damage, "OnRep_Damage" }, // 1538364944
		{ &Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Healing, "OnRep_Healing" }, // 687811366
		{ &Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_Health, "OnRep_Health" }, // 3425304918
		{ &Z_Construct_UFunction_UFPSCharacterAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 797051532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Healing_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Healing = { "Healing", "OnRep_Healing", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Healing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Healing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Damage = { "Damage", "OnRep_Damage", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Attributes\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/FPSCharacterAttributeSet.h" },
		{ "ToolTip", "Attributes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSCharacterAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Healing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSCharacterAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::ClassParams = {
		&UFPSCharacterAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSCharacterAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSCharacterAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSCharacterAttributeSet, 3948610766);
	template<> FPS_API UClass* StaticClass<UFPSCharacterAttributeSet>()
	{
		return UFPSCharacterAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSCharacterAttributeSet(Z_Construct_UClass_UFPSCharacterAttributeSet, &UFPSCharacterAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("UFPSCharacterAttributeSet"), false, nullptr, nullptr, nullptr);

	void UFPSCharacterAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Damage(TEXT("Damage"));
		static const FName Name_Healing(TEXT("Healing"));

		const bool bIsValid = true
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName()
			&& Name_Healing == ClassReps[(int32)ENetFields_Private::Healing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFPSCharacterAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSCharacterAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAT_ADS() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_UGAT_ADS_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UGAT_ADS();
	FPS_API UClass* Z_Construct_UClass_UFPSAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "GATDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGAT_ADS::execOnADSTagRemoved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnADSTagRemoved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAT_ADS::execOnADSTagAdded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnADSTagAdded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGAT_ADS::execCreateGAT_ADS)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGAT_ADS**)Z_Param__Result=UGAT_ADS::CreateGAT_ADS(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UGAT_ADS::StaticRegisterNativesUGAT_ADS()
	{
		UClass* Class = UGAT_ADS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGAT_ADS", &UGAT_ADS::execCreateGAT_ADS },
			{ "OnADSTagAdded", &UGAT_ADS::execOnADSTagAdded },
			{ "OnADSTagRemoved", &UGAT_ADS::execOnADSTagRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics
	{
		struct GAT_ADS_eventCreateGAT_ADS_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UGAT_ADS* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_ADS_eventCreateGAT_ADS_Parms, ReturnValue), Z_Construct_UClass_UGAT_ADS_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_ADS_eventCreateGAT_ADS_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GAT_ADS_eventCreateGAT_ADS_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "GAT_ADS" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAT_ADS, nullptr, "CreateGAT_ADS", nullptr, nullptr, sizeof(GAT_ADS_eventCreateGAT_ADS_Parms), Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAT_ADS, nullptr, "OnADSTagAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAT_ADS, nullptr, "OnADSTagRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGAT_ADS_NoRegister()
	{
		return UGAT_ADS::StaticClass();
	}
	struct Z_Construct_UClass_UGAT_ADS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAT_ADS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGAT_ADS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAT_ADS_CreateGAT_ADS, "CreateGAT_ADS" }, // 2566767913
		{ &Z_Construct_UFunction_UGAT_ADS_OnADSTagAdded, "OnADSTagAdded" }, // 2467727598
		{ &Z_Construct_UFunction_UGAT_ADS_OnADSTagRemoved, "OnADSTagRemoved" }, // 1426734260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAT_ADS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/CustomAbilityTasks/GAT_ADS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAT_ADS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAT_ADS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGAT_ADS_Statics::ClassParams = {
		&UGAT_ADS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGAT_ADS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAT_ADS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAT_ADS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGAT_ADS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGAT_ADS, 3813400692);
	template<> FPS_API UClass* StaticClass<UGAT_ADS>()
	{
		return UGAT_ADS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGAT_ADS(Z_Construct_UClass_UGAT_ADS, &UGAT_ADS::StaticClass, TEXT("/Script/FPS"), TEXT("UGAT_ADS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAT_ADS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/PlayerStateAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UPlayerStateAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UPlayerStateAttributeSet();
	FPS_API UClass* Z_Construct_UClass_UFPSAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerStateAttributeSet::execOnRep_TestVar)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TestVar(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	void UPlayerStateAttributeSet::StaticRegisterNativesUPlayerStateAttributeSet()
	{
		UClass* Class = UPlayerStateAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TestVar", &UPlayerStateAttributeSet::execOnRep_TestVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics
	{
		struct PlayerStateAttributeSet_eventOnRep_TestVar_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStateAttributeSet_eventOnRep_TestVar_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/PlayerStateAttributeSet.h" },
		{ "ToolTip", "These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStateAttributeSet, nullptr, "OnRep_TestVar", nullptr, nullptr, sizeof(PlayerStateAttributeSet_eventOnRep_TestVar_Parms), Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerStateAttributeSet_NoRegister()
	{
		return UPlayerStateAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStateAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestVar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStateAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStateAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStateAttributeSet_OnRep_TestVar, "OnRep_TestVar" }, // 1702780488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/PlayerStateAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/PlayerStateAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateAttributeSet_Statics::NewProp_TestVar_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Attributes\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/PlayerStateAttributeSet.h" },
		{ "ToolTip", "Attributes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerStateAttributeSet_Statics::NewProp_TestVar = { "TestVar", "OnRep_TestVar", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerStateAttributeSet, TestVar), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerStateAttributeSet_Statics::NewProp_TestVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateAttributeSet_Statics::NewProp_TestVar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStateAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateAttributeSet_Statics::NewProp_TestVar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStateAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateAttributeSet_Statics::ClassParams = {
		&UPlayerStateAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerStateAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStateAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStateAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStateAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStateAttributeSet, 4216965214);
	template<> FPS_API UClass* StaticClass<UPlayerStateAttributeSet>()
	{
		return UPlayerStateAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStateAttributeSet(Z_Construct_UClass_UPlayerStateAttributeSet, &UPlayerStateAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("UPlayerStateAttributeSet"), false, nullptr, nullptr, nullptr);

	void UPlayerStateAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TestVar(TEXT("TestVar"));

		const bool bIsValid = true
			&& Name_TestVar == ClassReps[(int32)ENetFields_Private::TestVar].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlayerStateAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

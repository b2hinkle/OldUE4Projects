// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/FPSPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPlayerState() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayerState_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	FPS_API UClass* Z_Construct_UClass_UPlayerStateAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The controller can use this to know when the current character is changed,\n// and recreate or modify its pawn as needed (by calling UpdateCharacter())\n" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
		{ "ToolTip", "The controller can use this to know when the current character is changed,\nand recreate or modify its pawn as needed (by calling UpdateCharacter())" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "CharacterInfoChange__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FCharacterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterInfo, Z_Construct_UPackage__Script_FPS(), TEXT("CharacterInfo"), sizeof(FCharacterInfo), Get_Z_Construct_UScriptStruct_FCharacterInfo_Hash());
	}
	return Singleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FCharacterInfo>()
{
	return FCharacterInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterInfo(FCharacterInfo::StaticStruct, TEXT("/Script/FPS"), TEXT("CharacterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFCharacterInfo
{
	FScriptStruct_FPS_StaticRegisterNativesFCharacterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterInfo")),new UScriptStruct::TCppStructOps<FCharacterInfo>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFCharacterInfo;
	struct Z_Construct_UScriptStruct_FCharacterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This should store the info for a character. A player may switch characters by\n// calling SetCurrentCharacterInfo(FCharacterInfo NewCharacterInfo), and then calling UpdateCharacter().\n" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
		{ "ToolTip", "This should store the info for a character. A player may switch characters by\ncalling SetCurrentCharacterInfo(FCharacterInfo NewCharacterInfo), and then calling UpdateCharacter()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "CharacterClasses" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfo, HUDClass), Z_Construct_UClass_AHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "Category", "CharacterClasses" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterInfo, CharacterClass), Z_Construct_UClass_AFPSCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_HUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterInfo_Statics::NewProp_CharacterClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"CharacterInfo",
		sizeof(FCharacterInfo),
		alignof(FCharacterInfo),
		Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterInfo"), sizeof(FCharacterInfo), Get_Z_Construct_UScriptStruct_FCharacterInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterInfo_Hash() { return 2059294053U; }
	DEFINE_FUNCTION(AFPSPlayerState::execOnRep_CurrentCharacterInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentCharacterInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSPlayerState::execServer_SetCharacterInfo)
	{
		P_GET_STRUCT(FCharacterInfo,Z_Param_NewCharacterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetCharacterInfo_Validate(Z_Param_NewCharacterInfo))
		{
			RPC_ValidateFailed(TEXT("Server_SetCharacterInfo_Validate"));
			return;
		}
		P_THIS->Server_SetCharacterInfo_Implementation(Z_Param_NewCharacterInfo);
		P_NATIVE_END;
	}
	static FName NAME_AFPSPlayerState_Server_SetCharacterInfo = FName(TEXT("Server_SetCharacterInfo"));
	void AFPSPlayerState::Server_SetCharacterInfo(FCharacterInfo NewCharacterInfo)
	{
		FPSPlayerState_eventServer_SetCharacterInfo_Parms Parms;
		Parms.NewCharacterInfo=NewCharacterInfo;
		ProcessEvent(FindFunctionChecked(NAME_AFPSPlayerState_Server_SetCharacterInfo),&Parms);
	}
	void AFPSPlayerState::StaticRegisterNativesAFPSPlayerState()
	{
		UClass* Class = AFPSPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentCharacterInfo", &AFPSPlayerState::execOnRep_CurrentCharacterInfo },
			{ "Server_SetCharacterInfo", &AFPSPlayerState::execServer_SetCharacterInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "OnRep_CurrentCharacterInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCharacterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::NewProp_NewCharacterInfo = { "NewCharacterInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSPlayerState_eventServer_SetCharacterInfo_Parms, NewCharacterInfo), Z_Construct_UScriptStruct_FCharacterInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::NewProp_NewCharacterInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSPlayerState, nullptr, "Server_SetCharacterInfo", nullptr, nullptr, sizeof(FPSPlayerState_eventServer_SetCharacterInfo_Parms), Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSPlayerState_NoRegister()
	{
		return AFPSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCharacterInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentCharacterInfoChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentCharacterInfoChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSPlayerState_OnRep_CurrentCharacterInfo, "OnRep_CurrentCharacterInfo" }, // 1366990301
		{ &Z_Construct_UFunction_AFPSPlayerState_Server_SetCharacterInfo, "Server_SetCharacterInfo" }, // 1029248728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores the available characters and the current character for the player\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSPlayerState.h" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Stores the available characters and the current character for the player" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_level_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, level), METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CurrentCharacterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CurrentCharacterInfo = { "CurrentCharacterInfo", "OnRep_CurrentCharacterInfo", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, CurrentCharacterInfo), Z_Construct_UScriptStruct_FCharacterInfo, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CurrentCharacterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CurrentCharacterInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos_MetaData[] = {
		{ "Category", "CharacterInfo" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos = { "CharacterInfos", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, CharacterInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos_Inner = { "CharacterInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, AttributeSet), Z_Construct_UClass_UPlayerStateAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, AbilitySystem), Z_Construct_UClass_UFPSAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_OnCurrentCharacterInfoChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_OnCurrentCharacterInfoChange = { "OnCurrentCharacterInfoChange", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSPlayerState, OnCurrentCharacterInfoChange), Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_OnCurrentCharacterInfoChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_OnCurrentCharacterInfoChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CurrentCharacterInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_CharacterInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPlayerState_Statics::NewProp_OnCurrentCharacterInfoChange,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSPlayerState_Statics::ClassParams = {
		&AFPSPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSPlayerState, 3848151674);
	template<> FPS_API UClass* StaticClass<AFPSPlayerState>()
	{
		return AFPSPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSPlayerState(Z_Construct_UClass_AFPSPlayerState, &AFPSPlayerState::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSPlayerState"), false, nullptr, nullptr, nullptr);

	void AFPSPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentCharacterInfo(TEXT("CurrentCharacterInfo"));
		static const FName Name_level(TEXT("level"));

		const bool bIsValid = true
			&& Name_CurrentCharacterInfo == ClassReps[(int32)ENetFields_Private::CurrentCharacterInfo].Property->GetFName()
			&& Name_level == ClassReps[(int32)ENetFields_Private::level].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

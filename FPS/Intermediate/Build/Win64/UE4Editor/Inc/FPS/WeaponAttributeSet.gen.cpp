// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponAttributeSet() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UWeaponAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UWeaponAttributeSet();
	FPS_API UClass* Z_Construct_UClass_UFPSAttributeSet();
	UPackage* Z_Construct_UPackage__Script_FPS();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponAttributeSet::execOnRep_CurrentAmmoInClip)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentAmmoInClip(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponAttributeSet::execOnRep_CurrentAmmo)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_ServerBaseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentAmmo(Z_Param_Out_ServerBaseValue);
		P_NATIVE_END;
	}
	void UWeaponAttributeSet::StaticRegisterNativesUWeaponAttributeSet()
	{
		UClass* Class = UWeaponAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentAmmo", &UWeaponAttributeSet::execOnRep_CurrentAmmo },
			{ "OnRep_CurrentAmmoInClip", &UWeaponAttributeSet::execOnRep_CurrentAmmoInClip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics
	{
		struct WeaponAttributeSet_eventOnRep_CurrentAmmo_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttributeSet_eventOnRep_CurrentAmmo_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
		{ "ToolTip", "These OnReps exist to make sure the GAS internal representations are synchornized properly durring replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttributeSet, nullptr, "OnRep_CurrentAmmo", nullptr, nullptr, sizeof(WeaponAttributeSet_eventOnRep_CurrentAmmo_Parms), Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics
	{
		struct WeaponAttributeSet_eventOnRep_CurrentAmmoInClip_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::NewProp_ServerBaseValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::NewProp_ServerBaseValue = { "ServerBaseValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponAttributeSet_eventOnRep_CurrentAmmoInClip_Parms, ServerBaseValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::NewProp_ServerBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::NewProp_ServerBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::NewProp_ServerBaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponAttributeSet, nullptr, "OnRep_CurrentAmmoInClip", nullptr, nullptr, sizeof(WeaponAttributeSet_eventOnRep_CurrentAmmoInClip_Parms), Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponAttributeSet_NoRegister()
	{
		return UWeaponAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmo, "OnRep_CurrentAmmo" }, // 1003918114
		{ &Z_Construct_UFunction_UWeaponAttributeSet_OnRep_CurrentAmmoInClip, "OnRep_CurrentAmmoInClip" }, // 941112887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmoInClip_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmoInClip = { "CurrentAmmoInClip", "OnRep_CurrentAmmoInClip", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttributeSet, CurrentAmmoInClip), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Attributes\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AttributeSets/WeaponAttributeSet.h" },
		{ "ToolTip", "Attributes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", "OnRep_CurrentAmmo", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponAttributeSet, CurrentAmmo), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponAttributeSet_Statics::NewProp_CurrentAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponAttributeSet_Statics::ClassParams = {
		&UWeaponAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponAttributeSet, 3811802330);
	template<> FPS_API UClass* StaticClass<UWeaponAttributeSet>()
	{
		return UWeaponAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponAttributeSet(Z_Construct_UClass_UWeaponAttributeSet, &UWeaponAttributeSet::StaticClass, TEXT("/Script/FPS"), TEXT("UWeaponAttributeSet"), false, nullptr, nullptr, nullptr);

	void UWeaponAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentAmmo(TEXT("CurrentAmmo"));
		static const FName Name_CurrentAmmoInClip(TEXT("CurrentAmmoInClip"));

		const bool bIsValid = true
			&& Name_CurrentAmmo == ClassReps[(int32)ENetFields_Private::CurrentAmmo].Property->GetFName()
			&& Name_CurrentAmmoInClip == ClassReps[(int32)ENetFields_Private::CurrentAmmoInClip].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWeaponAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

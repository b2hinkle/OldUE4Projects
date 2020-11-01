// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSCharacter();
	FPS_API UClass* Z_Construct_UClass_ABaseCharacter();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPS_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSCharacterAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AFPSCharacter::execServerSpawnDefaultInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSpawnDefaultInventory_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSpawnDefaultInventory_Validate"));
			return;
		}
		P_THIS->ServerSpawnDefaultInventory_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSCharacter_ServerSpawnDefaultInventory = FName(TEXT("ServerSpawnDefaultInventory"));
	void AFPSCharacter::ServerSpawnDefaultInventory()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacter_ServerSpawnDefaultInventory),NULL);
	}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerSpawnDefaultInventory", &AFPSCharacter::execServerSpawnDefaultInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "ServerSpawnDefaultInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedNormalizedDeltaRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedNormalizedDeltaRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSAbilityHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ADSAbilityHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSAbilityTSub_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ADSAbilityTSub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwitchWeaponHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponAbilityTSub_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SwitchWeaponAbilityTSub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goggles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goggles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddedCameraSwayDuringADS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddedCameraSwayDuringADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSwayAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSwayAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_ServerSpawnDefaultInventory, "ServerSpawnDefaultInventory" }, // 3769544715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReplicatedNormalizedDeltaRotator = { "ReplicatedNormalizedDeltaRotator", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ReplicatedNormalizedDeltaRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReplicatedNormalizedDeltaRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData[] = {
		{ "Category", "FPSMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityHandle = { "ADSAbilityHandle", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ADSAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityTSub_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityTSub = { "ADSAbilityTSub", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ADSAbilityTSub), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityTSub_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityTSub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponHandle = { "SwitchWeaponHandle", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SwitchWeaponHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponAbilityTSub_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponAbilityTSub = { "SwitchWeaponAbilityTSub", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SwitchWeaponAbilityTSub), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponAbilityTSub_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponAbilityTSub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CharacterAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CharacterAttributeSet = { "CharacterAttributeSet", nullptr, (EPropertyFlags)0x0010000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CharacterAttributeSet), Z_Construct_UClass_UFPSCharacterAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CharacterAttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CharacterAttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Goggles_MetaData[] = {
		{ "Category", "SoldierGoggles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Goggles = { "Goggles", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Goggles), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Goggles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Goggles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AddedCameraSwayDuringADS_MetaData[] = {
		{ "Category", "CharacterSettings" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AddedCameraSwayDuringADS = { "AddedCameraSwayDuringADS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, AddedCameraSwayDuringADS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AddedCameraSwayDuringADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AddedCameraSwayDuringADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSwayAmount_MetaData[] = {
		{ "Category", "CharacterSettings" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSwayAmount = { "CameraSwayAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CameraSwayAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSwayAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSwayAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReplicatedNormalizedDeltaRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ADSAbilityTSub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SwitchWeaponAbilityTSub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CharacterAttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Goggles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AddedCameraSwayDuringADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSwayAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 417356330);
	template<> FPS_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPS"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);

	void AFPSCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterAttributeSet(TEXT("CharacterAttributeSet"));
		static const FName Name_SwitchWeaponHandle(TEXT("SwitchWeaponHandle"));
		static const FName Name_ADSAbilityHandle(TEXT("ADSAbilityHandle"));
		static const FName Name_ReplicatedNormalizedDeltaRotator(TEXT("ReplicatedNormalizedDeltaRotator"));

		const bool bIsValid = true
			&& Name_CharacterAttributeSet == ClassReps[(int32)ENetFields_Private::CharacterAttributeSet].Property->GetFName()
			&& Name_SwitchWeaponHandle == ClassReps[(int32)ENetFields_Private::SwitchWeaponHandle].Property->GetFName()
			&& Name_ADSAbilityHandle == ClassReps[(int32)ENetFields_Private::ADSAbilityHandle].Property->GetFName()
			&& Name_ReplicatedNormalizedDeltaRotator == ClassReps[(int32)ENetFields_Private::ReplicatedNormalizedDeltaRotator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

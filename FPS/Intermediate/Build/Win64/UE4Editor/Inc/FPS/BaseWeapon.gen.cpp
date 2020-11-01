// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Weapons/BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ABaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UFPSAbilitySystemComponent_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UWeaponAttributeSet_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UEquiptable_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponInfo, Z_Construct_UPackage__Script_FPS(), TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash());
	}
	return Singleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FWeaponInfo>()
{
	return FWeaponInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponInfo(FWeaponInfo::StaticStruct, TEXT("/Script/FPS"), TEXT("WeaponInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFWeaponInfo
{
	FScriptStruct_FPS_StaticRegisterNativesFWeaponInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponInfo")),new UScriptStruct::TCppStructOps<FWeaponInfo>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFWeaponInfo;
	struct Z_Construct_UScriptStruct_FWeaponInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"WeaponInfo",
		sizeof(FWeaponInfo),
		alignof(FWeaponInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponInfo"), sizeof(FWeaponInfo), Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponInfo_Hash() { return 2992716502U; }
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSAbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSAbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAbilityHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireAbilityHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAbilityTSub_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireAbilityTSub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/BaseWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BaseWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "BaseWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSAbilitySystemComponent = { "FPSAbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, FPSAbilitySystemComponent), Z_Construct_UClass_UFPSAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSAbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSCharacter_MetaData[] = {
		{ "Category", "BaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSCharacter = { "FPSCharacter", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, FPSCharacter), Z_Construct_UClass_AFPSCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityHandle = { "FireAbilityHandle", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, FireAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityTSub_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityTSub = { "FireAbilityTSub", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, FireAbilityTSub), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityTSub_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityTSub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000080028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, AttributeSet), Z_Construct_UClass_UWeaponAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_AttributeSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSAbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FPSCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_FireAbilityTSub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_AttributeSet,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseWeapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ABaseWeapon, IInteractable), false },
			{ Z_Construct_UClass_UEquiptable_NoRegister, (int32)VTABLE_OFFSET(ABaseWeapon, IEquiptable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeapon, 2682780525);
	template<> FPS_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeapon(Z_Construct_UClass_ABaseWeapon, &ABaseWeapon::StaticClass, TEXT("/Script/FPS"), TEXT("ABaseWeapon"), false, nullptr, nullptr, nullptr);

	void ABaseWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttributeSet(TEXT("AttributeSet"));
		static const FName Name_FireAbilityHandle(TEXT("FireAbilityHandle"));
		static const FName Name_FPSCharacter(TEXT("FPSCharacter"));
		static const FName Name_FPSAbilitySystemComponent(TEXT("FPSAbilitySystemComponent"));

		const bool bIsValid = true
			&& Name_AttributeSet == ClassReps[(int32)ENetFields_Private::AttributeSet].Property->GetFName()
			&& Name_FireAbilityHandle == ClassReps[(int32)ENetFields_Private::FireAbilityHandle].Property->GetFName()
			&& Name_FPSCharacter == ClassReps[(int32)ENetFields_Private::FPSCharacter].Property->GetFName()
			&& Name_FPSAbilitySystemComponent == ClassReps[(int32)ENetFields_Private::FPSAbilitySystemComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/Weapons/RangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeapon() {}
// Cross Module References
	FPS_API UScriptStruct* Z_Construct_UScriptStruct_FGunStats();
	UPackage* Z_Construct_UPackage__Script_FPS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ARangedWeapon_NoRegister();
	FPS_API UClass* Z_Construct_UClass_ARangedWeapon();
	FPS_API UClass* Z_Construct_UClass_ABaseWeapon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FGunStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPS_API uint32 Get_Z_Construct_UScriptStruct_FGunStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGunStats, Z_Construct_UPackage__Script_FPS(), TEXT("GunStats"), sizeof(FGunStats), Get_Z_Construct_UScriptStruct_FGunStats_Hash());
	}
	return Singleton;
}
template<> FPS_API UScriptStruct* StaticStruct<FGunStats>()
{
	return FGunStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGunStats(FGunStats::StaticStruct, TEXT("/Script/FPS"), TEXT("GunStats"), false, nullptr, nullptr);
static struct FScriptStruct_FPS_StaticRegisterNativesFGunStats
{
	FScriptStruct_FPS_StaticRegisterNativesFGunStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GunStats")),new UScriptStruct::TCppStructOps<FGunStats>);
	}
} ScriptStruct_FPS_StaticRegisterNativesFGunStats;
	struct Z_Construct_UScriptStruct_FGunStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedViewDotHitDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedViewDotHitDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSideHitLeeway_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientSideHitLeeway;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSpreadMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiringSpreadMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSpreadIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiringSpreadIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingSpreadMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingSpreadMod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGunStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGunStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_AllowedViewDotHitDir_MetaData[] = {
		{ "Category", "HitVerification" },
		{ "Comment", "/** hit verification: threshold for dot product between view direction and hit direction */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "hit verification: threshold for dot product between view direction and hit direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_AllowedViewDotHitDir = { "AllowedViewDotHitDir", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, AllowedViewDotHitDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_AllowedViewDotHitDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_AllowedViewDotHitDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ClientSideHitLeeway_MetaData[] = {
		{ "Category", "HitVerification" },
		{ "Comment", "/** hit verification: scale for bounding box of hit actor */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "hit verification: scale for bounding box of hit actor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ClientSideHitLeeway = { "ClientSideHitLeeway", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, ClientSideHitLeeway), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ClientSideHitLeeway_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ClientSideHitLeeway_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** type of damage */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "type of damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_HitDamage_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** damage amount */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "damage amount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_HitDamage = { "HitDamage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, HitDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_HitDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_HitDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "WeaponStat" },
		{ "Comment", "/** weapon range */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "weapon range" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, WeaponRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadMax_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** continuous firing: max increment */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "continuous firing: max increment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadMax = { "FiringSpreadMax", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, FiringSpreadMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadIncrement_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** continuous firing: spread increment */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "continuous firing: spread increment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadIncrement = { "FiringSpreadIncrement", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, FiringSpreadIncrement), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_TargetingSpreadMod_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** targeting spread modifier */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "targeting spread modifier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_TargetingSpreadMod = { "TargetingSpreadMod", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, TargetingSpreadMod), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_TargetingSpreadMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_TargetingSpreadMod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponSpread_MetaData[] = {
		{ "Category", "Accuracy" },
		{ "Comment", "/** base weapon spread (degrees) */" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
		{ "ToolTip", "base weapon spread (degrees)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponSpread = { "WeaponSpread", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGunStats, WeaponSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_AllowedViewDotHitDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_ClientSideHitLeeway,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_HitDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_FiringSpreadIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_TargetingSpreadMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGunStats_Statics::NewProp_WeaponSpread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGunStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
		nullptr,
		&NewStructOps,
		"GunStats",
		sizeof(FGunStats),
		alignof(FGunStats),
		Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGunStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGunStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGunStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGunStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPS();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GunStats"), sizeof(FGunStats), Get_Z_Construct_UScriptStruct_FGunStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGunStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGunStats_Hash() { return 2468593451U; }
	DEFINE_FUNCTION(ARangedWeapon::execGetMuzzleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation();
		P_NATIVE_END;
	}
	void ARangedWeapon::StaticRegisterNativesARangedWeapon()
	{
		UClass* Class = ARangedWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMuzzleLocation", &ARangedWeapon::execGetMuzzleLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics
	{
		struct RangedWeapon_eventGetMuzzleLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeapon_eventGetMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARangedWeapon, nullptr, "GetMuzzleLocation", nullptr, nullptr, sizeof(RangedWeapon_eventGetMuzzleLocation_Parms), Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARangedWeapon_NoRegister()
	{
		return ARangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARangedWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARangedWeapon_GetMuzzleLocation, "GetMuzzleLocation" }, // 3413459518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/RangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapons/RangedWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangedWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangedWeapon_Statics::ClassParams = {
		&ARangedWeapon::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangedWeapon, 2990206340);
	template<> FPS_API UClass* StaticClass<ARangedWeapon>()
	{
		return ARangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangedWeapon(Z_Construct_UClass_ARangedWeapon, &ARangedWeapon::StaticClass, TEXT("/Script/FPS"), TEXT("ARangedWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

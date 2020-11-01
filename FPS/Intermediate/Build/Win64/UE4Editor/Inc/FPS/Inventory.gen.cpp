// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/ActorComponents/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS();
	FPS_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UInventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPS_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPS, nullptr, "ClientCurrentWeaponChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInventory::execOnRep_Inventory)
	{
		P_GET_TARRAY(ABaseWeapon*,Z_Param_PreRepInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Inventory(Z_Param_PreRepInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execOnRep_PreviousWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PreviousWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execOnRep_CurrentWeapon)
	{
		P_GET_OBJECT(ABaseWeapon,Z_Param_PrevWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentWeapon(Z_Param_PrevWeapon);
		P_NATIVE_END;
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentWeapon", &UInventory::execOnRep_CurrentWeapon },
			{ "OnRep_Inventory", &UInventory::execOnRep_Inventory },
			{ "OnRep_PreviousWeapon", &UInventory::execOnRep_PreviousWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics
	{
		struct Inventory_eventOnRep_CurrentWeapon_Parms
		{
			ABaseWeapon* PrevWeapon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::NewProp_PrevWeapon = { "PrevWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventOnRep_CurrentWeapon_Parms, PrevWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::NewProp_PrevWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "OnRep_CurrentWeapon", nullptr, nullptr, sizeof(Inventory_eventOnRep_CurrentWeapon_Parms), Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics
	{
		struct Inventory_eventOnRep_Inventory_Parms
		{
			TArray<ABaseWeapon*> PreRepInventory;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreRepInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreRepInventory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::NewProp_PreRepInventory = { "PreRepInventory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventOnRep_Inventory_Parms, PreRepInventory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::NewProp_PreRepInventory_Inner = { "PreRepInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::NewProp_PreRepInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::NewProp_PreRepInventory_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "OnRep_Inventory", nullptr, nullptr, sizeof(Inventory_eventOnRep_Inventory_Parms), Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_OnRep_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_OnRep_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "OnRep_PreviousWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInventoryClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultInventoryClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultInventoryClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_OnRep_CurrentWeapon, "OnRep_CurrentWeapon" }, // 2706734732
		{ &Z_Construct_UFunction_UInventory_OnRep_Inventory, "OnRep_Inventory" }, // 381408408
		{ &Z_Construct_UFunction_UInventory_OnRep_PreviousWeapon, "OnRep_PreviousWeapon" }, // 2818639981
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/Inventory.h" },
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_MetaData[] = {
		{ "Comment", "/** weapons in inventory */" },
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
		{ "ToolTip", "weapons in inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory = { "Inventory", "OnRep_Inventory", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "Comment", "/** default inventory list */" },
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
		{ "ToolTip", "default inventory list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, DefaultInventoryClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses_Inner = { "DefaultInventoryClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurrentWeapon", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, CurrentWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_PreviousWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponents/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_PreviousWeapon = { "PreviousWeapon", "OnRep_PreviousWeapon", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, PreviousWeapon), Z_Construct_UClass_ABaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_PreviousWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_PreviousWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_DefaultInventoryClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_PreviousWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 2597741273);
	template<> FPS_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/FPS"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);

	void UInventory::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PreviousWeapon(TEXT("PreviousWeapon"));
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));
		static const FName Name_Inventory(TEXT("Inventory"));

		const bool bIsValid = true
			&& Name_PreviousWeapon == ClassReps[(int32)ENetFields_Private::PreviousWeapon].Property->GetFName()
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName()
			&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventory"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/UI/WeaponInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInfoWidget() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UWeaponInfoWidget_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UWeaponInfoWidget();
	FPS_API UClass* Z_Construct_UClass_UBaseFPSWidget();
	UPackage* Z_Construct_UPackage__Script_FPS();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponInfoWidget::execUpdateAmmoText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponInfoWidget::execUpdateWeaponText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponText();
		P_NATIVE_END;
	}
	void UWeaponInfoWidget::StaticRegisterNativesUWeaponInfoWidget()
	{
		UClass* Class = UWeaponInfoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAmmoText", &UWeaponInfoWidget::execUpdateAmmoText },
			{ "UpdateWeaponText", &UWeaponInfoWidget::execUpdateWeaponText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WeaponInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInfoWidget, nullptr, "UpdateAmmoText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WeaponInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInfoWidget, nullptr, "UpdateWeaponText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponInfoWidget_NoRegister()
	{
		return UWeaponInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseFPSWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponInfoWidget_UpdateAmmoText, "UpdateAmmoText" }, // 352263868
		{ &Z_Construct_UFunction_UWeaponInfoWidget_UpdateWeaponText, "UpdateWeaponText" }, // 3836518167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This is spawned after the client has possession over the FPSCharacter. \n */" },
		{ "IncludePath", "UI/WeaponInfoWidget.h" },
		{ "ModuleRelativePath", "Public/UI/WeaponInfoWidget.h" },
		{ "ToolTip", "This is spawned after the client has possession over the FPSCharacter." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_AmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WeaponInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponInfoWidget, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_AmmoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_AmmoText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_WeaponText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WeaponInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_WeaponText = { "WeaponText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponInfoWidget, WeaponText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_WeaponText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_WeaponText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponInfoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_AmmoText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponInfoWidget_Statics::NewProp_WeaponText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInfoWidget_Statics::ClassParams = {
		&UWeaponInfoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponInfoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInfoWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponInfoWidget, 2344807990);
	template<> FPS_API UClass* StaticClass<UWeaponInfoWidget>()
	{
		return UWeaponInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponInfoWidget(Z_Construct_UClass_UWeaponInfoWidget, &UWeaponInfoWidget::StaticClass, TEXT("/Script/FPS"), TEXT("UWeaponInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

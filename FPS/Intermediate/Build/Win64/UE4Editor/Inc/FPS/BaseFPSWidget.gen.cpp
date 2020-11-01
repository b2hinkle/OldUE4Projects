// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS/Public/UI/BaseFPSWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFPSWidget() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_UBaseFPSWidget_NoRegister();
	FPS_API UClass* Z_Construct_UClass_UBaseFPSWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FPS();
// End Cross Module References
	void UBaseFPSWidget::StaticRegisterNativesUBaseFPSWidget()
	{
	}
	UClass* Z_Construct_UClass_UBaseFPSWidget_NoRegister()
	{
		return UBaseFPSWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseFPSWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseFPSWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseFPSWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all FPS widgets. Inheriting from it gives you some cached data\n */" },
		{ "IncludePath", "UI/BaseFPSWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BaseFPSWidget.h" },
		{ "ToolTip", "Base class for all FPS widgets. Inheriting from it gives you some cached data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseFPSWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFPSWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseFPSWidget_Statics::ClassParams = {
		&UBaseFPSWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseFPSWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFPSWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseFPSWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseFPSWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseFPSWidget, 1843598650);
	template<> FPS_API UClass* StaticClass<UBaseFPSWidget>()
	{
		return UBaseFPSWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseFPSWidget(Z_Construct_UClass_UBaseFPSWidget, &UBaseFPSWidget::StaticClass, TEXT("/Script/FPS"), TEXT("UBaseFPSWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFPSWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

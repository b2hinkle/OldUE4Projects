// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_init() {}
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_GAT_SetCurrentWeaponDelegate__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature();
	FPS_API UFunction* Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPS()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_GAT_OnCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_GAT_OnFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_GATDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_GAT_SetCurrentWeaponDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_ClientCurrentWeaponChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPS_CharacterInfoChange__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0E6A8101,
				0xFBA1C4F8,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

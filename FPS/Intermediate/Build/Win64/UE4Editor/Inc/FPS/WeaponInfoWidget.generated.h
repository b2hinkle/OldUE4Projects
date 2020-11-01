// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_WeaponInfoWidget_generated_h
#error "WeaponInfoWidget.generated.h already included, missing '#pragma once' in WeaponInfoWidget.h"
#endif
#define FPS_WeaponInfoWidget_generated_h

#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_SPARSE_DATA
#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAmmoText); \
	DECLARE_FUNCTION(execUpdateWeaponText);


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAmmoText); \
	DECLARE_FUNCTION(execUpdateWeaponText);


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponInfoWidget(); \
	friend struct Z_Construct_UClass_UWeaponInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UWeaponInfoWidget, UBaseFPSWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponInfoWidget)


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponInfoWidget(); \
	friend struct Z_Construct_UClass_UWeaponInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UWeaponInfoWidget, UBaseFPSWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponInfoWidget)


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponInfoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponInfoWidget(UWeaponInfoWidget&&); \
	NO_API UWeaponInfoWidget(const UWeaponInfoWidget&); \
public:


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponInfoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponInfoWidget(UWeaponInfoWidget&&); \
	NO_API UWeaponInfoWidget(const UWeaponInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInfoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponInfoWidget)


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponText() { return STRUCT_OFFSET(UWeaponInfoWidget, WeaponText); } \
	FORCEINLINE static uint32 __PPO__AmmoText() { return STRUCT_OFFSET(UWeaponInfoWidget, AmmoText); }


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_18_PROLOG
#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_SPARSE_DATA \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_RPC_WRAPPERS \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_INCLASS \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_SPARSE_DATA \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_UI_WeaponInfoWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UWeaponInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_UI_WeaponInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

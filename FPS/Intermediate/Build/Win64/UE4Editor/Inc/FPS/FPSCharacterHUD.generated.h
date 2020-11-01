// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_FPSCharacterHUD_generated_h
#error "FPSCharacterHUD.generated.h already included, missing '#pragma once' in FPSCharacterHUD.h"
#endif
#define FPS_FPSCharacterHUD_generated_h

#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_SPARSE_DATA
#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugCenterPoint); \
	DECLARE_FUNCTION(execSpawnCharacterWidget);


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugCenterPoint); \
	DECLARE_FUNCTION(execSpawnCharacterWidget);


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacterHUD(); \
	friend struct Z_Construct_UClass_AFPSCharacterHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacterHUD, ABaseHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacterHUD)


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacterHUD(); \
	friend struct Z_Construct_UClass_AFPSCharacterHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacterHUD, ABaseHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacterHUD)


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacterHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacterHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacterHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacterHUD(AFPSCharacterHUD&&); \
	NO_API AFPSCharacterHUD(const AFPSCharacterHUD&); \
public:


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacterHUD() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacterHUD(AFPSCharacterHUD&&); \
	NO_API AFPSCharacterHUD(const AFPSCharacterHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacterHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacterHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacterHUD)


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_12_PROLOG
#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_INCLASS \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_UI_FPSCharacterHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFPSCharacterHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_UI_FPSCharacterHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

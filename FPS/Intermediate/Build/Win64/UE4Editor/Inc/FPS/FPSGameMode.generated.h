// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_FPSGameMode_generated_h
#error "FPSGameMode.generated.h already included, missing '#pragma once' in FPSGameMode.h"
#endif
#define FPS_FPSGameMode_generated_h

#define FPS_Source_FPS_Public_FPSGameMode_h_15_SPARSE_DATA
#define FPS_Source_FPS_Public_FPSGameMode_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_Public_FPSGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_FPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameMode(); \
	friend struct Z_Construct_UClass_AFPSGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameMode)


#define FPS_Source_FPS_Public_FPSGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameMode(); \
	friend struct Z_Construct_UClass_AFPSGameMode_Statics; \
public: \
	DECLARE_CLASS(AFPSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameMode)


#define FPS_Source_FPS_Public_FPSGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameMode(AFPSGameMode&&); \
	NO_API AFPSGameMode(const AFPSGameMode&); \
public:


#define FPS_Source_FPS_Public_FPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameMode(AFPSGameMode&&); \
	NO_API AFPSGameMode(const AFPSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSGameMode)


#define FPS_Source_FPS_Public_FPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_FPSGameMode_h_12_PROLOG
#define FPS_Source_FPS_Public_FPSGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSGameMode_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSGameMode_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_Public_FPSGameMode_h_15_INCLASS \
	FPS_Source_FPS_Public_FPSGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_FPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSGameMode_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFPSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_FPSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

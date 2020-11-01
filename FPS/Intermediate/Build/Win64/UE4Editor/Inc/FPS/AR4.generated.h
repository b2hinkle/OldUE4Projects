// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_AR4_generated_h
#error "AR4.generated.h already included, missing '#pragma once' in AR4.h"
#endif
#define FPS_AR4_generated_h

#define FPS_Source_FPS_Public_Weapons_AR4_h_15_SPARSE_DATA
#define FPS_Source_FPS_Public_Weapons_AR4_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_Public_Weapons_AR4_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_Weapons_AR4_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAR4(); \
	friend struct Z_Construct_UClass_AAR4_Statics; \
public: \
	DECLARE_CLASS(AAR4, ARangedWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAR4)


#define FPS_Source_FPS_Public_Weapons_AR4_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAR4(); \
	friend struct Z_Construct_UClass_AAR4_Statics; \
public: \
	DECLARE_CLASS(AAR4, ARangedWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AAR4)


#define FPS_Source_FPS_Public_Weapons_AR4_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAR4(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAR4) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAR4); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAR4); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAR4(AAR4&&); \
	NO_API AAR4(const AAR4&); \
public:


#define FPS_Source_FPS_Public_Weapons_AR4_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAR4(AAR4&&); \
	NO_API AAR4(const AAR4&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAR4); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAR4); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAR4)


#define FPS_Source_FPS_Public_Weapons_AR4_h_15_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_Weapons_AR4_h_12_PROLOG
#define FPS_Source_FPS_Public_Weapons_AR4_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_INCLASS \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Weapons_AR4_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_AR4_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AAR4>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_Weapons_AR4_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

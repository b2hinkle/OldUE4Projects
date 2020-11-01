// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FPS_RangedWeapon_generated_h
#error "RangedWeapon.generated.h already included, missing '#pragma once' in RangedWeapon.h"
#endif
#define FPS_RangedWeapon_generated_h

#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGunStats_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FGunStats>();

#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_SPARSE_DATA
#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation);


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation);


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARangedWeapon(); \
	friend struct Z_Construct_UClass_ARangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangedWeapon, ABaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ARangedWeapon)


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_INCLASS \
private: \
	static void StaticRegisterNativesARangedWeapon(); \
	friend struct Z_Construct_UClass_ARangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ARangedWeapon, ABaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ARangedWeapon)


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARangedWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangedWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangedWeapon(ARangedWeapon&&); \
	NO_API ARangedWeapon(const ARangedWeapon&); \
public:


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangedWeapon(ARangedWeapon&&); \
	NO_API ARangedWeapon(const ARangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangedWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangedWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARangedWeapon)


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_76_PROLOG
#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_RPC_WRAPPERS \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_INCLASS \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_RangedWeapon_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ARangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_Weapons_RangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

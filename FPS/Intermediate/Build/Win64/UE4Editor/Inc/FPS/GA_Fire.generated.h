// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFireHitResult;
#ifdef FPS_GA_Fire_generated_h
#error "GA_Fire.generated.h already included, missing '#pragma once' in GA_Fire.h"
#endif
#define FPS_GA_Fire_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMontageTaskBlendOut); \
	DECLARE_FUNCTION(execOnMontageTaskInterrupted); \
	DECLARE_FUNCTION(execOnMontageTaskCancelled); \
	DECLARE_FUNCTION(execOnMontageTaskCompleted); \
	DECLARE_FUNCTION(execOnTaskFailed); \
	DECLARE_FUNCTION(execOnTaskCompleted);


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMontageTaskBlendOut); \
	DECLARE_FUNCTION(execOnMontageTaskInterrupted); \
	DECLARE_FUNCTION(execOnMontageTaskCancelled); \
	DECLARE_FUNCTION(execOnMontageTaskCompleted); \
	DECLARE_FUNCTION(execOnTaskFailed); \
	DECLARE_FUNCTION(execOnTaskCompleted);


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_Fire(); \
	friend struct Z_Construct_UClass_UGA_Fire_Statics; \
public: \
	DECLARE_CLASS(UGA_Fire, UFPSGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGA_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGA_Fire(); \
	friend struct Z_Construct_UClass_UGA_Fire_Statics; \
public: \
	DECLARE_CLASS(UGA_Fire, UFPSGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGA_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_Fire(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_Fire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Fire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Fire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_Fire(UGA_Fire&&); \
	NO_API UGA_Fire(const UGA_Fire&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_Fire() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_Fire(UGA_Fire&&); \
	NO_API UGA_Fire(const UGA_Fire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Fire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Fire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireEffectClass() { return STRUCT_OFFSET(UGA_Fire, FireEffectClass); } \
	FORCEINLINE static uint32 __PPO__GunFireMontage() { return STRUCT_OFFSET(UGA_Fire, GunFireMontage); }


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_15_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UGA_Fire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_Fire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

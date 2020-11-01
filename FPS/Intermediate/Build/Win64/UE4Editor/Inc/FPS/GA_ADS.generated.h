// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_GA_ADS_generated_h
#error "GA_ADS.generated.h already included, missing '#pragma once' in GA_ADS.h"
#endif
#define FPS_GA_ADS_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTaskFailed); \
	DECLARE_FUNCTION(execOnTaskCompleted);


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTaskFailed); \
	DECLARE_FUNCTION(execOnTaskCompleted);


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_ADS(); \
	friend struct Z_Construct_UClass_UGA_ADS_Statics; \
public: \
	DECLARE_CLASS(UGA_ADS, UFPSGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGA_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGA_ADS(); \
	friend struct Z_Construct_UClass_UGA_ADS_Statics; \
public: \
	DECLARE_CLASS(UGA_ADS, UFPSGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGA_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_ADS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_ADS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_ADS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_ADS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_ADS(UGA_ADS&&); \
	NO_API UGA_ADS(const UGA_ADS&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_ADS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGA_ADS(UGA_ADS&&); \
	NO_API UGA_ADS(const UGA_ADS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_ADS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_ADS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AddADSTagEffect() { return STRUCT_OFFSET(UGA_ADS, AddADSTagEffect); } \
	FORCEINLINE static uint32 __PPO__ADSMontage() { return STRUCT_OFFSET(UGA_ADS, ADSMontage); }


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_18_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UGA_ADS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_Abilities_GA_ADS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

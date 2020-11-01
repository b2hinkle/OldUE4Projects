// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UGAT_ADS;
#ifdef FPS_GAT_ADS_generated_h
#error "GAT_ADS.generated.h already included, missing '#pragma once' in GAT_ADS.h"
#endif
#define FPS_GAT_ADS_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_12_DELEGATE \
static inline void FGATDelegate_DelegateWrapper(const FMulticastScriptDelegate& GATDelegate) \
{ \
	GATDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnADSTagRemoved); \
	DECLARE_FUNCTION(execOnADSTagAdded); \
	DECLARE_FUNCTION(execCreateGAT_ADS);


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnADSTagRemoved); \
	DECLARE_FUNCTION(execOnADSTagAdded); \
	DECLARE_FUNCTION(execCreateGAT_ADS);


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAT_ADS(); \
	friend struct Z_Construct_UClass_UGAT_ADS_Statics; \
public: \
	DECLARE_CLASS(UGAT_ADS, UFPSAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGAT_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGAT_ADS(); \
	friend struct Z_Construct_UClass_UGAT_ADS_Statics; \
public: \
	DECLARE_CLASS(UGAT_ADS, UFPSAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGAT_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAT_ADS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAT_ADS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAT_ADS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAT_ADS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAT_ADS(UGAT_ADS&&); \
	NO_API UGAT_ADS(const UGAT_ADS&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAT_ADS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAT_ADS(UGAT_ADS&&); \
	NO_API UGAT_ADS(const UGAT_ADS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAT_ADS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAT_ADS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAT_ADS)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_17_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UGAT_ADS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_ADS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

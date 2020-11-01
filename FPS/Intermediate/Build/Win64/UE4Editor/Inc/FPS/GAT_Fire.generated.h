// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFireHitResult;
class UGameplayAbility;
class ABaseWeapon;
class UGAT_Fire;
#ifdef FPS_GAT_Fire_generated_h
#error "GAT_Fire.generated.h already included, missing '#pragma once' in GAT_Fire.h"
#endif
#define FPS_GAT_Fire_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFireHitResult_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FFireHitResult>();

#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_109_DELEGATE \
static inline void FGAT_OnFailed_DelegateWrapper(const FMulticastScriptDelegate& GAT_OnFailed) \
{ \
	GAT_OnFailed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_108_DELEGATE \
struct _Script_FPS_eventGAT_OnCompleted_Parms \
{ \
	FFireHitResult Impact; \
}; \
static inline void FGAT_OnCompleted_DelegateWrapper(const FMulticastScriptDelegate& GAT_OnCompleted, FFireHitResult Impact) \
{ \
	_Script_FPS_eventGAT_OnCompleted_Parms Parms; \
	Parms.Impact=Impact; \
	GAT_OnCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGAT_Fire);


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGAT_Fire);


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAT_Fire(); \
	friend struct Z_Construct_UClass_UGAT_Fire_Statics; \
public: \
	DECLARE_CLASS(UGAT_Fire, UFPSAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGAT_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUGAT_Fire(); \
	friend struct Z_Construct_UClass_UGAT_Fire_Statics; \
public: \
	DECLARE_CLASS(UGAT_Fire, UFPSAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UGAT_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAT_Fire(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAT_Fire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAT_Fire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAT_Fire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAT_Fire(UGAT_Fire&&); \
	NO_API UGAT_Fire(const UGAT_Fire&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGAT_Fire(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGAT_Fire(UGAT_Fire&&); \
	NO_API UGAT_Fire(const UGAT_Fire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAT_Fire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAT_Fire); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGAT_Fire)


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_113_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UGAT_Fire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_CustomAbilityTasks_GAT_Fire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

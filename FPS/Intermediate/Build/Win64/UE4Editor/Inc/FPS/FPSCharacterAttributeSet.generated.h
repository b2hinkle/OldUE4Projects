// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef FPS_FPSCharacterAttributeSet_generated_h
#error "FPSCharacterAttributeSet.generated.h already included, missing '#pragma once' in FPSCharacterAttributeSet.h"
#endif
#define FPS_FPSCharacterAttributeSet_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Healing); \
	DECLARE_FUNCTION(execOnRep_Damage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Healing); \
	DECLARE_FUNCTION(execOnRep_Damage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSCharacterAttributeSet(); \
	friend struct Z_Construct_UClass_UFPSCharacterAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UFPSCharacterAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSCharacterAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Damage, \
		Healing, \
		NETFIELD_REP_END=Healing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UFPSCharacterAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFPSCharacterAttributeSet(); \
	friend struct Z_Construct_UClass_UFPSCharacterAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UFPSCharacterAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UFPSCharacterAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Damage, \
		Healing, \
		NETFIELD_REP_END=Healing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UFPSCharacterAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSCharacterAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSCharacterAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSCharacterAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSCharacterAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSCharacterAttributeSet(UFPSCharacterAttributeSet&&); \
	NO_API UFPSCharacterAttributeSet(const UFPSCharacterAttributeSet&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSCharacterAttributeSet(UFPSCharacterAttributeSet&&); \
	NO_API UFPSCharacterAttributeSet(const UFPSCharacterAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSCharacterAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSCharacterAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSCharacterAttributeSet)


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_17_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UFPSCharacterAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_AttributeSets_FPSCharacterAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

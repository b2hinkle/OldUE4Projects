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
#ifdef FPS_PlayerStateAttributeSet_generated_h
#error "PlayerStateAttributeSet.generated.h already included, missing '#pragma once' in PlayerStateAttributeSet.h"
#endif
#define FPS_PlayerStateAttributeSet_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TestVar);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TestVar);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateAttributeSet(); \
	friend struct Z_Construct_UClass_UPlayerStateAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPlayerStateAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStateAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TestVar=NETFIELD_REP_START, \
		NETFIELD_REP_END=TestVar	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPlayerStateAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerStateAttributeSet(); \
	friend struct Z_Construct_UClass_UPlayerStateAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UPlayerStateAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStateAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TestVar=NETFIELD_REP_START, \
		NETFIELD_REP_END=TestVar	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UPlayerStateAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStateAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStateAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStateAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStateAttributeSet(UPlayerStateAttributeSet&&); \
	NO_API UPlayerStateAttributeSet(const UPlayerStateAttributeSet&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStateAttributeSet(UPlayerStateAttributeSet&&); \
	NO_API UPlayerStateAttributeSet(const UPlayerStateAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStateAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStateAttributeSet)


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_13_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UPlayerStateAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_AttributeSets_PlayerStateAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

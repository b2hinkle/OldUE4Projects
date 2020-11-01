// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPS_FPSCharacter_generated_h

#define FPS_Source_FPS_Public_FPSCharacter_h_18_SPARSE_DATA
#define FPS_Source_FPS_Public_FPSCharacter_h_18_RPC_WRAPPERS \
	virtual bool ServerSpawnDefaultInventory_Validate(); \
	virtual void ServerSpawnDefaultInventory_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSpawnDefaultInventory);


#define FPS_Source_FPS_Public_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSpawnDefaultInventory_Validate(); \
	virtual void ServerSpawnDefaultInventory_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSpawnDefaultInventory);


#define FPS_Source_FPS_Public_FPSCharacter_h_18_EVENT_PARMS
#define FPS_Source_FPS_Public_FPSCharacter_h_18_CALLBACK_WRAPPERS
#define FPS_Source_FPS_Public_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterAttributeSet=NETFIELD_REP_START, \
		SwitchWeaponHandle, \
		ADSAbilityHandle, \
		ReplicatedNormalizedDeltaRotator, \
		NETFIELD_REP_END=ReplicatedNormalizedDeltaRotator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_FPSCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterAttributeSet=NETFIELD_REP_START, \
		SwitchWeaponHandle, \
		ADSAbilityHandle, \
		ReplicatedNormalizedDeltaRotator, \
		NETFIELD_REP_END=ReplicatedNormalizedDeltaRotator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPS_Source_FPS_Public_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPS_Source_FPS_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AFPSCharacter, Inventory); } \
	FORCEINLINE static uint32 __PPO__ReplicatedNormalizedDeltaRotator() { return STRUCT_OFFSET(AFPSCharacter, ReplicatedNormalizedDeltaRotator); }


#define FPS_Source_FPS_Public_FPSCharacter_h_15_PROLOG \
	FPS_Source_FPS_Public_FPSCharacter_h_18_EVENT_PARMS


#define FPS_Source_FPS_Public_FPSCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSCharacter_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSCharacter_h_18_RPC_WRAPPERS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_INCLASS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_FPSCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSCharacter_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterInfo;
#ifdef FPS_FPSPlayerState_generated_h
#error "FPSPlayerState.generated.h already included, missing '#pragma once' in FPSPlayerState.h"
#endif
#define FPS_FPSPlayerState_generated_h

#define FPS_Source_FPS_Public_FPSPlayerState_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterInfo_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FCharacterInfo>();

#define FPS_Source_FPS_Public_FPSPlayerState_h_21_DELEGATE \
static inline void FCharacterInfoChange_DelegateWrapper(const FMulticastScriptDelegate& CharacterInfoChange) \
{ \
	CharacterInfoChange.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_SPARSE_DATA
#define FPS_Source_FPS_Public_FPSPlayerState_h_47_RPC_WRAPPERS \
	virtual bool Server_SetCharacterInfo_Validate(FCharacterInfo ); \
	virtual void Server_SetCharacterInfo_Implementation(FCharacterInfo NewCharacterInfo); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentCharacterInfo); \
	DECLARE_FUNCTION(execServer_SetCharacterInfo);


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetCharacterInfo_Validate(FCharacterInfo ); \
	virtual void Server_SetCharacterInfo_Implementation(FCharacterInfo NewCharacterInfo); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentCharacterInfo); \
	DECLARE_FUNCTION(execServer_SetCharacterInfo);


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_EVENT_PARMS \
	struct FPSPlayerState_eventServer_SetCharacterInfo_Parms \
	{ \
		FCharacterInfo NewCharacterInfo; \
	};


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_CALLBACK_WRAPPERS
#define FPS_Source_FPS_Public_FPSPlayerState_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerState(); \
	friend struct Z_Construct_UClass_AFPSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentCharacterInfo=NETFIELD_REP_START, \
		level, \
		NETFIELD_REP_END=level	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerState(); \
	friend struct Z_Construct_UClass_AFPSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentCharacterInfo=NETFIELD_REP_START, \
		level, \
		NETFIELD_REP_END=level	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerState(AFPSPlayerState&&); \
	NO_API AFPSPlayerState(const AFPSPlayerState&); \
public:


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerState(AFPSPlayerState&&); \
	NO_API AFPSPlayerState(const AFPSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSPlayerState)


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(AFPSPlayerState, AbilitySystem); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(AFPSPlayerState, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__CharacterInfos() { return STRUCT_OFFSET(AFPSPlayerState, CharacterInfos); } \
	FORCEINLINE static uint32 __PPO__CurrentCharacterInfo() { return STRUCT_OFFSET(AFPSPlayerState, CurrentCharacterInfo); } \
	FORCEINLINE static uint32 __PPO__level() { return STRUCT_OFFSET(AFPSPlayerState, level); }


#define FPS_Source_FPS_Public_FPSPlayerState_h_44_PROLOG \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_EVENT_PARMS


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_RPC_WRAPPERS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_INCLASS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_FPSPlayerState_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_SPARSE_DATA \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_FPSPlayerState_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFPSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_FPSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

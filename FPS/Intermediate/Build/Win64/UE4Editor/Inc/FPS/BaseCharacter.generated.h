// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define FPS_BaseCharacter_generated_h

#define FPS_Source_FPS_Public_BaseCharacter_h_17_SPARSE_DATA
#define FPS_Source_FPS_Public_BaseCharacter_h_17_RPC_WRAPPERS
#define FPS_Source_FPS_Public_BaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_BaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FPS_Source_FPS_Public_BaseCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FPS_Source_FPS_Public_BaseCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define FPS_Source_FPS_Public_BaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define FPS_Source_FPS_Public_BaseCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(ABaseCharacter, AbilitySystem); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ABaseCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ABaseCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABaseCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABaseCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__DirtMask() { return STRUCT_OFFSET(ABaseCharacter, DirtMask); }


#define FPS_Source_FPS_Public_BaseCharacter_h_14_PROLOG
#define FPS_Source_FPS_Public_BaseCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_BaseCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_BaseCharacter_h_17_SPARSE_DATA \
	FPS_Source_FPS_Public_BaseCharacter_h_17_RPC_WRAPPERS \
	FPS_Source_FPS_Public_BaseCharacter_h_17_INCLASS \
	FPS_Source_FPS_Public_BaseCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_BaseCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_BaseCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_BaseCharacter_h_17_SPARSE_DATA \
	FPS_Source_FPS_Public_BaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_BaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_BaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

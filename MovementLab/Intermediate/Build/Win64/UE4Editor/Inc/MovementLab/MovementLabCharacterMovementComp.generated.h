// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENTLAB_MovementLabCharacterMovementComp_generated_h
#error "MovementLabCharacterMovementComp.generated.h already included, missing '#pragma once' in MovementLabCharacterMovementComp.h"
#endif
#define MOVEMENTLAB_MovementLabCharacterMovementComp_generated_h

#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_SPARSE_DATA
#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_RPC_WRAPPERS \
	virtual bool Server_RequestSetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_RequestSetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
	virtual bool Server_RequestSetMovementMode_Validate(EMovementMode , uint8 ); \
	virtual void Server_RequestSetMovementMode_Implementation(EMovementMode NewMovementMode, uint8 NewCustomMode); \
 \
	DECLARE_FUNCTION(execServer_RequestSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execServer_RequestSetMovementMode); \
	DECLARE_FUNCTION(execRequestSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execRequestSetMovementMode);


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RequestSetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_RequestSetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
	virtual bool Server_RequestSetMovementMode_Validate(EMovementMode , uint8 ); \
	virtual void Server_RequestSetMovementMode_Implementation(EMovementMode NewMovementMode, uint8 NewCustomMode); \
 \
	DECLARE_FUNCTION(execServer_RequestSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execServer_RequestSetMovementMode); \
	DECLARE_FUNCTION(execRequestSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execRequestSetMovementMode);


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_EVENT_PARMS \
	struct MovementLabCharacterMovementComp_eventServer_RequestSetMaxWalkSpeed_Parms \
	{ \
		float NewMaxWalkSpeed; \
	}; \
	struct MovementLabCharacterMovementComp_eventServer_RequestSetMovementMode_Parms \
	{ \
		TEnumAsByte<EMovementMode> NewMovementMode; \
		uint8 NewCustomMode; \
	};


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_CALLBACK_WRAPPERS
#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementLabCharacterMovementComp(); \
	friend struct Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics; \
public: \
	DECLARE_CLASS(UMovementLabCharacterMovementComp, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLab"), NO_API) \
	DECLARE_SERIALIZER(UMovementLabCharacterMovementComp)


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMovementLabCharacterMovementComp(); \
	friend struct Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics; \
public: \
	DECLARE_CLASS(UMovementLabCharacterMovementComp, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLab"), NO_API) \
	DECLARE_SERIALIZER(UMovementLabCharacterMovementComp)


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovementLabCharacterMovementComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementLabCharacterMovementComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementLabCharacterMovementComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementLabCharacterMovementComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementLabCharacterMovementComp(UMovementLabCharacterMovementComp&&); \
	NO_API UMovementLabCharacterMovementComp(const UMovementLabCharacterMovementComp&); \
public:


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovementLabCharacterMovementComp(UMovementLabCharacterMovementComp&&); \
	NO_API UMovementLabCharacterMovementComp(const UMovementLabCharacterMovementComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovementLabCharacterMovementComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementLabCharacterMovementComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementLabCharacterMovementComp)


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_PRIVATE_PROPERTY_OFFSET
#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_25_PROLOG \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_EVENT_PARMS


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_PRIVATE_PROPERTY_OFFSET \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_SPARSE_DATA \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_RPC_WRAPPERS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_CALLBACK_WRAPPERS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_INCLASS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_PRIVATE_PROPERTY_OFFSET \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_SPARSE_DATA \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_CALLBACK_WRAPPERS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_INCLASS_NO_PURE_DECLS \
	MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTLAB_API UClass* StaticClass<class UMovementLabCharacterMovementComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MovementLab_master_Source_MovementLab_Public_Player_MovementLabCharacterMovementComp_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(CMOVE_None) \
	op(CMOVE_InfiniteWalk) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

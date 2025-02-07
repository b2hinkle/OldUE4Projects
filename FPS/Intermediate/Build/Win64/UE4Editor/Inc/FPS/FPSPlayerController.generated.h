// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_FPSPlayerController_generated_h
#error "FPSPlayerController.generated.h already included, missing '#pragma once' in FPSPlayerController.h"
#endif
#define FPS_FPSPlayerController_generated_h

#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_SPARSE_DATA
#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_RPC_WRAPPERS \
	virtual bool ServerDie_Validate(); \
	virtual void ServerDie_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDie); \
	DECLARE_FUNCTION(execUpdateCharacterFromInfo);


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDie_Validate(); \
	virtual void ServerDie_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDie); \
	DECLARE_FUNCTION(execUpdateCharacterFromInfo);


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_EVENT_PARMS
#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_CALLBACK_WRAPPERS
#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerController(); \
	friend struct Z_Construct_UClass_AFPSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerController)


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public:


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerController(AFPSPlayerController&&); \
	NO_API AFPSPlayerController(const AFPSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerController)


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_15_PROLOG \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_EVENT_PARMS


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_RPC_WRAPPERS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_INCLASS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_SPARSE_DATA \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_CALLBACK_WRAPPERS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Essentials_FPSPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class AFPSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_Essentials_FPSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

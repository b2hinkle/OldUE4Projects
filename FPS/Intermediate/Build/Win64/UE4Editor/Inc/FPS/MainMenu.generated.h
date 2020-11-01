// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define FPS_MainMenu_generated_h

#define FPS_Source_FPS_Public_MainMenu_h_22_SPARSE_DATA
#define FPS_Source_FPS_Public_MainMenu_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitButtonUnhovered); \
	DECLARE_FUNCTION(execOnJoinButtonUnhovered); \
	DECLARE_FUNCTION(execOnBackButtonUnhovered); \
	DECLARE_FUNCTION(execOnOptionsButtonUnhovered); \
	DECLARE_FUNCTION(execOnQuitButtonHovered); \
	DECLARE_FUNCTION(execOnJoinButtonHovered); \
	DECLARE_FUNCTION(execOnBackButtonHovered); \
	DECLARE_FUNCTION(execOnOptionsButtonHovered); \
	DECLARE_FUNCTION(execOnQuitButtonClicked); \
	DECLARE_FUNCTION(execOnJoinButtonClicked); \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execOnOptionsButtonClicked);


#define FPS_Source_FPS_Public_MainMenu_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitButtonUnhovered); \
	DECLARE_FUNCTION(execOnJoinButtonUnhovered); \
	DECLARE_FUNCTION(execOnBackButtonUnhovered); \
	DECLARE_FUNCTION(execOnOptionsButtonUnhovered); \
	DECLARE_FUNCTION(execOnQuitButtonHovered); \
	DECLARE_FUNCTION(execOnJoinButtonHovered); \
	DECLARE_FUNCTION(execOnBackButtonHovered); \
	DECLARE_FUNCTION(execOnOptionsButtonHovered); \
	DECLARE_FUNCTION(execOnQuitButtonClicked); \
	DECLARE_FUNCTION(execOnJoinButtonClicked); \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execOnOptionsButtonClicked);


#define FPS_Source_FPS_Public_MainMenu_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FPS_Source_FPS_Public_MainMenu_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FPS_Source_FPS_Public_MainMenu_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define FPS_Source_FPS_Public_MainMenu_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define FPS_Source_FPS_Public_MainMenu_h_22_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_MainMenu_h_19_PROLOG
#define FPS_Source_FPS_Public_MainMenu_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_MainMenu_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_MainMenu_h_22_SPARSE_DATA \
	FPS_Source_FPS_Public_MainMenu_h_22_RPC_WRAPPERS \
	FPS_Source_FPS_Public_MainMenu_h_22_INCLASS \
	FPS_Source_FPS_Public_MainMenu_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_MainMenu_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_MainMenu_h_22_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_MainMenu_h_22_SPARSE_DATA \
	FPS_Source_FPS_Public_MainMenu_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_MainMenu_h_22_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_MainMenu_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_Equiptable_generated_h
#error "Equiptable.generated.h already included, missing '#pragma once' in Equiptable.h"
#endif
#define FPS_Equiptable_generated_h

#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_SPARSE_DATA
#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_RPC_WRAPPERS
#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UEquiptable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquiptable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UEquiptable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquiptable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UEquiptable(UEquiptable&&); \
	FPS_API UEquiptable(const UEquiptable&); \
public:


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPS_API UEquiptable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPS_API UEquiptable(UEquiptable&&); \
	FPS_API UEquiptable(const UEquiptable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPS_API, UEquiptable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquiptable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquiptable)


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquiptable(); \
	friend struct Z_Construct_UClass_UEquiptable_Statics; \
public: \
	DECLARE_CLASS(UEquiptable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPS"), FPS_API) \
	DECLARE_SERIALIZER(UEquiptable)


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_GENERATED_UINTERFACE_BODY() \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquiptable() {} \
public: \
	typedef UEquiptable UClassType; \
	typedef IEquiptable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquiptable() {} \
public: \
	typedef UEquiptable UClassType; \
	typedef IEquiptable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_12_PROLOG
#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_RPC_WRAPPERS \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Interfaces_Equiptable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_SPARSE_DATA \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Interfaces_Equiptable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UEquiptable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_Interfaces_Equiptable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

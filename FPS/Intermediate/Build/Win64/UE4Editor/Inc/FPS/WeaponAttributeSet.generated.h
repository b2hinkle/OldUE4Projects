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
#ifdef FPS_WeaponAttributeSet_generated_h
#error "WeaponAttributeSet.generated.h already included, missing '#pragma once' in WeaponAttributeSet.h"
#endif
#define FPS_WeaponAttributeSet_generated_h

#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_SPARSE_DATA
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentAmmoInClip); \
	DECLARE_FUNCTION(execOnRep_CurrentAmmo);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentAmmoInClip); \
	DECLARE_FUNCTION(execOnRep_CurrentAmmo);


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponAttributeSet(); \
	friend struct Z_Construct_UClass_UWeaponAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAmmo=NETFIELD_REP_START, \
		CurrentAmmoInClip, \
		NETFIELD_REP_END=CurrentAmmoInClip	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UWeaponAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponAttributeSet(); \
	friend struct Z_Construct_UClass_UWeaponAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UWeaponAttributeSet, UFPSAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UWeaponAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAmmo=NETFIELD_REP_START, \
		CurrentAmmoInClip, \
		NETFIELD_REP_END=CurrentAmmoInClip	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UWeaponAttributeSet) \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttributeSet(UWeaponAttributeSet&&); \
	NO_API UWeaponAttributeSet(const UWeaponAttributeSet&); \
public:


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponAttributeSet(UWeaponAttributeSet&&); \
	NO_API UWeaponAttributeSet(const UWeaponAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponAttributeSet)


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_PRIVATE_PROPERTY_OFFSET
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_16_PROLOG
#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_RPC_WRAPPERS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_INCLASS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_SPARSE_DATA \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UWeaponAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_AbilitySystem_AttributeSets_WeaponAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

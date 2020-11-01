// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define FPS_BaseWeapon_generated_h

#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponInfo_Statics; \
	FPS_API static class UScriptStruct* StaticStruct();


template<> FPS_API UScriptStruct* StaticStruct<struct FWeaponInfo>();

#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_SPARSE_DATA
#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_RPC_WRAPPERS
#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseWeapon*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttributeSet=NETFIELD_REP_START, \
		FireAbilityHandle, \
		FPSCharacter, \
		FPSAbilitySystemComponent, \
		NETFIELD_REP_END=FPSAbilitySystemComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_INCLASS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseWeapon*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttributeSet=NETFIELD_REP_START, \
		FireAbilityHandle, \
		FPSCharacter, \
		FPSAbilitySystemComponent, \
		NETFIELD_REP_END=FPSAbilitySystemComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public:


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon)


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ABaseWeapon, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABaseWeapon, Mesh); }


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_30_PROLOG
#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_RPC_WRAPPERS \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_INCLASS \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_SPARSE_DATA \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_Weapons_BaseWeapon_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_Weapons_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

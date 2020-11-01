// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseWeapon;
#ifdef FPS_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define FPS_Inventory_generated_h

#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_14_DELEGATE \
static inline void FClientCurrentWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& ClientCurrentWeaponChanged) \
{ \
	ClientCurrentWeaponChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_SPARSE_DATA
#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_PreviousWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon);


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_PreviousWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon);


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UInventory) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PreviousWeapon=NETFIELD_REP_START, \
		CurrentWeapon, \
		Inventory, \
		NETFIELD_REP_END=Inventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS"), NO_API) \
	DECLARE_SERIALIZER(UInventory) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PreviousWeapon=NETFIELD_REP_START, \
		CurrentWeapon, \
		Inventory, \
		NETFIELD_REP_END=Inventory	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultInventoryClasses() { return STRUCT_OFFSET(UInventory, DefaultInventoryClasses); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(UInventory, Inventory); }


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_16_PROLOG
#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_SPARSE_DATA \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_RPC_WRAPPERS \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_INCLASS \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_PRIVATE_PROPERTY_OFFSET \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_SPARSE_DATA \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_INCLASS_NO_PURE_DECLS \
	FPS_Source_FPS_Public_ActorComponents_Inventory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Source_FPS_Public_ActorComponents_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

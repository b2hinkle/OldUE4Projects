// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementLab/Public/Player/MovementLabCharacterMovementComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementLabCharacterMovementComp() {}
// Cross Module References
	MOVEMENTLAB_API UEnum* Z_Construct_UEnum_MovementLab_ECustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_MovementLab();
	MOVEMENTLAB_API UClass* Z_Construct_UClass_UMovementLabCharacterMovementComp_NoRegister();
	MOVEMENTLAB_API UClass* Z_Construct_UClass_UMovementLabCharacterMovementComp();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
// End Cross Module References
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovementLab_ECustomMovementMode, Z_Construct_UPackage__Script_MovementLab(), TEXT("ECustomMovementMode"));
		}
		return Singleton;
	}
	template<> MOVEMENTLAB_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMovementMode(ECustomMovementMode_StaticEnum, TEXT("/Script/MovementLab"), TEXT("ECustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovementLab_ECustomMovementMode_Hash() { return 1671788946U; }
	UEnum* Z_Construct_UEnum_MovementLab_ECustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovementLab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMovementMode"), 0, Get_Z_Construct_UEnum_MovementLab_ECustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMOVE_None", (int64)CMOVE_None },
				{ "CMOVE_InfiniteWalk", (int64)CMOVE_InfiniteWalk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CMOVE_InfiniteWalk.Comment", "/**\n * \n */" },
				{ "CMOVE_InfiniteWalk.Name", "CMOVE_InfiniteWalk" },
				{ "CMOVE_None.Comment", "/**\n * \n */" },
				{ "CMOVE_None.Name", "CMOVE_None" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovementLab,
				nullptr,
				"ECustomMovementMode",
				"ECustomMovementMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UMovementLabCharacterMovementComp::execServer_RequestSetMaxWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxWalkSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestSetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed))
		{
			RPC_ValidateFailed(TEXT("Server_RequestSetMaxWalkSpeed_Validate"));
			return;
		}
		P_THIS->Server_RequestSetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementLabCharacterMovementComp::execServer_RequestSetMovementMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewCustomMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestSetMovementMode_Validate(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode))
		{
			RPC_ValidateFailed(TEXT("Server_RequestSetMovementMode_Validate"));
			return;
		}
		P_THIS->Server_RequestSetMovementMode_Implementation(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementLabCharacterMovementComp::execRequestSetMaxWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxWalkSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementLabCharacterMovementComp::execRequestSetMovementMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_NewCustomMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode);
		P_NATIVE_END;
	}
	static FName NAME_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed = FName(TEXT("Server_RequestSetMaxWalkSpeed"));
	void UMovementLabCharacterMovementComp::Server_RequestSetMaxWalkSpeed(const float NewMaxWalkSpeed)
	{
		MovementLabCharacterMovementComp_eventServer_RequestSetMaxWalkSpeed_Parms Parms;
		Parms.NewMaxWalkSpeed=NewMaxWalkSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed),&Parms);
	}
	static FName NAME_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode = FName(TEXT("Server_RequestSetMovementMode"));
	void UMovementLabCharacterMovementComp::Server_RequestSetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode)
	{
		MovementLabCharacterMovementComp_eventServer_RequestSetMovementMode_Parms Parms;
		Parms.NewMovementMode=NewMovementMode;
		Parms.NewCustomMode=NewCustomMode;
		ProcessEvent(FindFunctionChecked(NAME_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode),&Parms);
	}
	void UMovementLabCharacterMovementComp::StaticRegisterNativesUMovementLabCharacterMovementComp()
	{
		UClass* Class = UMovementLabCharacterMovementComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestSetMaxWalkSpeed", &UMovementLabCharacterMovementComp::execRequestSetMaxWalkSpeed },
			{ "RequestSetMovementMode", &UMovementLabCharacterMovementComp::execRequestSetMovementMode },
			{ "Server_RequestSetMaxWalkSpeed", &UMovementLabCharacterMovementComp::execServer_RequestSetMaxWalkSpeed },
			{ "Server_RequestSetMovementMode", &UMovementLabCharacterMovementComp::execServer_RequestSetMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics
	{
		struct MovementLabCharacterMovementComp_eventRequestSetMaxWalkSpeed_Parms
		{
			float NewMaxWalkSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventRequestSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementLabCharacterMovementComp, nullptr, "RequestSetMaxWalkSpeed", nullptr, nullptr, sizeof(MovementLabCharacterMovementComp_eventRequestSetMaxWalkSpeed_Parms), Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics
	{
		struct MovementLabCharacterMovementComp_eventRequestSetMovementMode_Parms
		{
			TEnumAsByte<EMovementMode> NewMovementMode;
			uint8 NewCustomMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventRequestSetMovementMode_Parms, NewCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventRequestSetMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::NewProp_NewCustomMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::NewProp_NewMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementLabCharacterMovementComp, nullptr, "RequestSetMovementMode", nullptr, nullptr, sizeof(MovementLabCharacterMovementComp_eventRequestSetMovementMode_Parms), Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventServer_RequestSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementLabCharacterMovementComp, nullptr, "Server_RequestSetMaxWalkSpeed", nullptr, nullptr, sizeof(MovementLabCharacterMovementComp_eventServer_RequestSetMaxWalkSpeed_Parms), Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventServer_RequestSetMovementMode_Parms, NewCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementLabCharacterMovementComp_eventServer_RequestSetMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::NewProp_NewCustomMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::NewProp_NewMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementLabCharacterMovementComp, nullptr, "Server_RequestSetMovementMode", nullptr, nullptr, sizeof(MovementLabCharacterMovementComp_eventServer_RequestSetMovementMode_Parms), Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovementLabCharacterMovementComp_NoRegister()
	{
		return UMovementLabCharacterMovementComp::StaticClass();
	}
	struct Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MovementLab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMaxWalkSpeed, "RequestSetMaxWalkSpeed" }, // 1023222852
		{ &Z_Construct_UFunction_UMovementLabCharacterMovementComp_RequestSetMovementMode, "RequestSetMovementMode" }, // 3803547243
		{ &Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMaxWalkSpeed, "Server_RequestSetMaxWalkSpeed" }, // 4287832667
		{ &Z_Construct_UFunction_UMovementLabCharacterMovementComp_Server_RequestSetMovementMode, "Server_RequestSetMovementMode" }, // 2131988779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/MovementLabCharacterMovementComp.h" },
		{ "ModuleRelativePath", "Public/Player/MovementLabCharacterMovementComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementLabCharacterMovementComp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::ClassParams = {
		&UMovementLabCharacterMovementComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovementLabCharacterMovementComp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovementLabCharacterMovementComp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovementLabCharacterMovementComp, 1861456930);
	template<> MOVEMENTLAB_API UClass* StaticClass<UMovementLabCharacterMovementComp>()
	{
		return UMovementLabCharacterMovementComp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementLabCharacterMovementComp(Z_Construct_UClass_UMovementLabCharacterMovementComp, &UMovementLabCharacterMovementComp::StaticClass, TEXT("/Script/MovementLab"), TEXT("UMovementLabCharacterMovementComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementLabCharacterMovementComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

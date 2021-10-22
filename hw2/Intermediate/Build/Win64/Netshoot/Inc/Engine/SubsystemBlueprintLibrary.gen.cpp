// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/SubsystemBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystemBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USubsystemBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystemBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetLocalPlayerSubSystemFromPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(Z_Param_PlayerController,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetWorldSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorldSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetWorldSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetLocalPlayerSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetGameInstanceSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstanceSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetGameInstanceSubsystem(Z_Param_ContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubsystemBlueprintLibrary::execGetEngineSubsystem)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEngineSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetEngineSubsystem(Z_Param_Class);
		P_NATIVE_END;
	}
	void USubsystemBlueprintLibrary::StaticRegisterNativesUSubsystemBlueprintLibrary()
	{
		UClass* Class = USubsystemBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEngineSubsystem", &USubsystemBlueprintLibrary::execGetEngineSubsystem },
			{ "GetGameInstanceSubsystem", &USubsystemBlueprintLibrary::execGetGameInstanceSubsystem },
			{ "GetLocalPlayerSubsystem", &USubsystemBlueprintLibrary::execGetLocalPlayerSubsystem },
			{ "GetLocalPlayerSubSystemFromPlayerController", &USubsystemBlueprintLibrary::execGetLocalPlayerSubSystemFromPlayerController },
			{ "GetWorldSubsystem", &USubsystemBlueprintLibrary::execGetWorldSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms
		{
			TSubclassOf<UEngineSubsystem>  Class;
			UEngineSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms, Class), Z_Construct_UClass_UEngineSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEngineSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Engine Subsystems" },
		{ "Comment", "/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Game Instance Subsystem from the Game Instance associated with the provided context" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetEngineSubsystem", nullptr, nullptr, sizeof(SubsystemBlueprintLibrary_eventGetEngineSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<UGameInstanceSubsystem>  Class;
			UGameInstanceSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, Class), Z_Construct_UClass_UGameInstanceSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms, ReturnValue), Z_Construct_UClass_UGameInstanceSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameInstance Subsystems" },
		{ "Comment", "/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Game Instance Subsystem from the Game Instance associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetGameInstanceSubsystem", nullptr, nullptr, sizeof(SubsystemBlueprintLibrary_eventGetGameInstanceSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<ULocalPlayerSubsystem>  Class;
			ULocalPlayerSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, Class), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LocalPlayer Subsystems" },
		{ "Comment", "/** Get a Local Player Subsystem from the Local Player associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the Local Player associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetLocalPlayerSubsystem", nullptr, nullptr, sizeof(SubsystemBlueprintLibrary_eventGetLocalPlayerSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms
		{
			APlayerController* PlayerController;
			TSubclassOf<ULocalPlayerSubsystem>  Class;
			ULocalPlayerSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, Class), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LocalPlayer Subsystems" },
		{ "Comment", "/** \n\x09 * Get a Local Player Subsystem from the LocalPlayer associated with the provided context\n\x09 * If the player controller isn't associated to a LocalPlayer nullptr is returned\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a Local Player Subsystem from the LocalPlayer associated with the provided context\nIf the player controller isn't associated to a LocalPlayer nullptr is returned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetLocalPlayerSubSystemFromPlayerController", nullptr, nullptr, sizeof(SubsystemBlueprintLibrary_eventGetLocalPlayerSubSystemFromPlayerController_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics
	{
		struct SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms
		{
			UObject* ContextObject;
			TSubclassOf<UWorldSubsystem>  Class;
			UWorldSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, Class), Z_Construct_UClass_UWorldSubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms, ReturnValue), Z_Construct_UClass_UWorldSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameInstance Subsystems" },
		{ "Comment", "/** Get a World Subsystem from the World associated with the provided context */" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ToolTip", "Get a World Subsystem from the World associated with the provided context" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystemBlueprintLibrary, nullptr, "GetWorldSubsystem", nullptr, nullptr, sizeof(SubsystemBlueprintLibrary_eventGetWorldSubsystem_Parms), Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubsystemBlueprintLibrary_NoRegister()
	{
		return USubsystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetEngineSubsystem, "GetEngineSubsystem" }, // 4204945112
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetGameInstanceSubsystem, "GetGameInstanceSubsystem" }, // 1792886279
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubsystem, "GetLocalPlayerSubsystem" }, // 2584676361
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetLocalPlayerSubSystemFromPlayerController, "GetLocalPlayerSubSystemFromPlayerController" }, // 2314268425
		{ &Z_Construct_UFunction_USubsystemBlueprintLibrary_GetWorldSubsystem, "GetWorldSubsystem" }, // 255201934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SubsystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SubsystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsystemBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::ClassParams = {
		&USubsystemBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsystemBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubsystemBlueprintLibrary, 1745697524);
	template<> ENGINE_API UClass* StaticClass<USubsystemBlueprintLibrary>()
	{
		return USubsystemBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubsystemBlueprintLibrary(Z_Construct_UClass_USubsystemBlueprintLibrary, &USubsystemBlueprintLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("USubsystemBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsystemBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

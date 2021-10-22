// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem();
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionStimuliSourceEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionSystem::execGetSenseClassForStimulus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FAIStimulus,Z_Param_Out_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UAISense> *)Z_Param__Result=UAIPerceptionSystem::GetSenseClassForStimulus(Z_Param_WorldContextObject,Z_Param_Out_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionSystem::execRegisterPerceptionStimuliSource)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Sense);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAIPerceptionSystem::RegisterPerceptionStimuliSource(Z_Param_WorldContextObject,Z_Param_Sense,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionSystem::execReportPerceptionEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAISenseEvent,Z_Param_PerceptionEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIPerceptionSystem::ReportPerceptionEvent(Z_Param_WorldContextObject,Z_Param_PerceptionEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionSystem::execReportEvent)
	{
		P_GET_OBJECT(UAISenseEvent,Z_Param_PerceptionEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportEvent(Z_Param_PerceptionEvent);
		P_NATIVE_END;
	}
	void UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem()
	{
		UClass* Class = UAIPerceptionSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSenseClassForStimulus", &UAIPerceptionSystem::execGetSenseClassForStimulus },
			{ "OnPerceptionStimuliSourceEndPlay", &UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay },
			{ "RegisterPerceptionStimuliSource", &UAIPerceptionSystem::execRegisterPerceptionStimuliSource },
			{ "ReportEvent", &UAIPerceptionSystem::execReportEvent },
			{ "ReportPerceptionEvent", &UAIPerceptionSystem::execReportPerceptionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics
	{
		struct AIPerceptionSystem_eventGetSenseClassForStimulus_Parms
		{
			UObject* WorldContextObject;
			FAIStimulus Stimulus;
			TSubclassOf<UAISense>  ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, ReturnValue), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "GetSenseClassForStimulus", nullptr, nullptr, sizeof(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms), Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics
	{
		struct AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "OnPerceptionStimuliSourceEndPlay", nullptr, nullptr, sizeof(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms), Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics
	{
		struct AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UAISense>  Sense;
			AActor* Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Sense;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense = { "Sense", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Sense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "RegisterPerceptionStimuliSource", nullptr, nullptr, sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics
	{
		struct AIPerceptionSystem_eventReportEvent_Parms
		{
			UAISenseEvent* PerceptionEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent = { "PerceptionEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "ReportEvent", nullptr, nullptr, sizeof(AIPerceptionSystem_eventReportEvent_Parms), Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics
	{
		struct AIPerceptionSystem_eventReportPerceptionEvent_Parms
		{
			UObject* WorldContextObject;
			UAISenseEvent* PerceptionEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent = { "PerceptionEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, nullptr, "ReportPerceptionEvent", nullptr, nullptr, sizeof(AIPerceptionSystem_eventReportPerceptionEvent_Parms), Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister()
	{
		return UAIPerceptionSystem::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Senses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Senses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Senses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionAgingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionAgingRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus, "GetSenseClassForStimulus" }, // 2504442901
		{ &Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay, "OnPerceptionStimuliSourceEndPlay" }, // 340551888
		{ &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource, "RegisterPerceptionStimuliSource" }, // 3246561104
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent, "ReportEvent" }, // 801792676
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent, "ReportPerceptionEvent" }, // 3501856722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n *\x09""By design checks perception between hostile teams\n */" },
		{ "IncludePath", "Perception/AIPerceptionSystem.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "By design checks perception between hostile teams" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner = { "Senses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses = { "Senses", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionSystem, Senses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate = { "PerceptionAgingRate", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPerceptionSystem, PerceptionAgingRate), METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams = {
		&UAIPerceptionSystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionSystem, 656483623);
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionSystem>()
	{
		return UAIPerceptionSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionSystem(Z_Construct_UClass_UAIPerceptionSystem, &UAIPerceptionSystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Public/Quartz/QuartzSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuartzSubsystem() {}
// Cross Module References
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EQuarztClockManagerType();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzClockSettings();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UQuartzClockHandle_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuartzTransportTimeStamp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EQuartzCommandQuantization();
// End Cross Module References
	static UEnum* EQuarztClockManagerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EQuarztClockManagerType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EQuarztClockManagerType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EQuarztClockManagerType>()
	{
		return EQuarztClockManagerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuarztClockManagerType(EQuarztClockManagerType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EQuarztClockManagerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EQuarztClockManagerType_Hash() { return 1130073418U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EQuarztClockManagerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuarztClockManagerType"), 0, Get_Z_Construct_UEnum_AudioMixer_EQuarztClockManagerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuarztClockManagerType::AudioEngine", (int64)EQuarztClockManagerType::AudioEngine },
				{ "EQuarztClockManagerType::QuartzSubsystem", (int64)EQuarztClockManagerType::QuartzSubsystem },
				{ "EQuarztClockManagerType::Count", (int64)EQuarztClockManagerType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioEngine.DisplayName", "Audio Engine" },
				{ "AudioEngine.Name", "EQuarztClockManagerType::AudioEngine" },
				{ "AudioEngine.ToolTip", "Sample-accurate clock managment by the audio renderer" },
				{ "BlueprintType", "true" },
				{ "Comment", "// GetManagerForClock() logic will need to be updated if more entries are present\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EQuarztClockManagerType::Count" },
				{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
				{ "QuartzSubsystem.DisplayName", "Transport Relative" },
				{ "QuartzSubsystem.Name", "EQuarztClockManagerType::QuartzSubsystem" },
				{ "QuartzSubsystem.ToolTip", "Loose clock management by the Quartz Subsystem in UObjectTick.  (not sample-accurate. Used automatically when no Audio Device is present)" },
				{ "ToolTip", "GetManagerForClock() logic will need to be updated if more entries are present" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EQuarztClockManagerType",
				"EQuarztClockManagerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMaxLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripMaxLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripMinLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripMinLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetRoundTripAverageLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoundTripAverageLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMaxLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadMinLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAudioRenderThreadToGameThreadAverageLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMaxLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadMinLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameThreadToAudioRenderThreadAverageLatency(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetEstimatedClockRunTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimatedClockRunTime(Z_Param_WorldContextObject,Z_Param_Out_InClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetCurrentClockTimestamp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuartzTransportTimeStamp*)Z_Param__Result=P_THIS->GetCurrentClockTimestamp(Z_Param_WorldContextObject,Z_Param_Out_InClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetDurationOfQuantizationTypeInSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_GET_ENUM_REF(EQuartzCommandQuantization,Z_Param_Out_QuantizationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDurationOfQuantizationTypeInSeconds(Z_Param_WorldContextObject,Z_Param_ClockName,(EQuartzCommandQuantization&)(Z_Param_Out_QuantizationType),Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execIsClockRunning)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClockRunning(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execDoesClockExist)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesClockExist(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execGetHandleForClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuartzClockHandle**)Z_Param__Result=P_THIS->GetHandleForClock(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execDeleteClockByHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(UQuartzClockHandle,Z_Param_Out_InClockHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteClockByHandle(Z_Param_WorldContextObject,Z_Param_Out_InClockHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execDeleteClockByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteClockByName(Z_Param_WorldContextObject,Z_Param_ClockName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execCreateNewClock)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_ClockName);
		P_GET_STRUCT(FQuartzClockSettings,Z_Param_InSettings);
		P_GET_UBOOL(Z_Param_bOverrideSettingsIfClockExists);
		P_GET_UBOOL(Z_Param_bUseAudioEngineClockManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuartzClockHandle**)Z_Param__Result=P_THIS->CreateNewClock(Z_Param_WorldContextObject,Z_Param_ClockName,Z_Param_InSettings,Z_Param_bOverrideSettingsIfClockExists,Z_Param_bUseAudioEngineClockManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuartzSubsystem::execIsQuartzEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQuartzEnabled();
		P_NATIVE_END;
	}
	void UQuartzSubsystem::StaticRegisterNativesUQuartzSubsystem()
	{
		UClass* Class = UQuartzSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewClock", &UQuartzSubsystem::execCreateNewClock },
			{ "DeleteClockByHandle", &UQuartzSubsystem::execDeleteClockByHandle },
			{ "DeleteClockByName", &UQuartzSubsystem::execDeleteClockByName },
			{ "DoesClockExist", &UQuartzSubsystem::execDoesClockExist },
			{ "GetAudioRenderThreadToGameThreadAverageLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadAverageLatency },
			{ "GetAudioRenderThreadToGameThreadMaxLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMaxLatency },
			{ "GetAudioRenderThreadToGameThreadMinLatency", &UQuartzSubsystem::execGetAudioRenderThreadToGameThreadMinLatency },
			{ "GetCurrentClockTimestamp", &UQuartzSubsystem::execGetCurrentClockTimestamp },
			{ "GetDurationOfQuantizationTypeInSeconds", &UQuartzSubsystem::execGetDurationOfQuantizationTypeInSeconds },
			{ "GetEstimatedClockRunTime", &UQuartzSubsystem::execGetEstimatedClockRunTime },
			{ "GetGameThreadToAudioRenderThreadAverageLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadAverageLatency },
			{ "GetGameThreadToAudioRenderThreadMaxLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMaxLatency },
			{ "GetGameThreadToAudioRenderThreadMinLatency", &UQuartzSubsystem::execGetGameThreadToAudioRenderThreadMinLatency },
			{ "GetHandleForClock", &UQuartzSubsystem::execGetHandleForClock },
			{ "GetRoundTripAverageLatency", &UQuartzSubsystem::execGetRoundTripAverageLatency },
			{ "GetRoundTripMaxLatency", &UQuartzSubsystem::execGetRoundTripMaxLatency },
			{ "GetRoundTripMinLatency", &UQuartzSubsystem::execGetRoundTripMinLatency },
			{ "IsClockRunning", &UQuartzSubsystem::execIsClockRunning },
			{ "IsQuartzEnabled", &UQuartzSubsystem::execIsQuartzEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics
	{
		struct QuartzSubsystem_eventCreateNewClock_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			FQuartzClockSettings InSettings;
			bool bOverrideSettingsIfClockExists;
			bool bUseAudioEngineClockManager;
			UQuartzClockHandle* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSettingsIfClockExists;
		static void NewProp_bUseAudioEngineClockManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAudioEngineClockManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, InSettings), Z_Construct_UScriptStruct_FQuartzClockSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventCreateNewClock_Parms*)Obj)->bOverrideSettingsIfClockExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists = { "bOverrideSettingsIfClockExists", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventCreateNewClock_Parms), &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventCreateNewClock_Parms*)Obj)->bUseAudioEngineClockManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager = { "bUseAudioEngineClockManager", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventCreateNewClock_Parms), &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventCreateNewClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_InSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bOverrideSettingsIfClockExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_bUseAudioEngineClockManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUseAudioEngineClockManager" },
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Clock Creation\n// create a new clock (or return handle if clock already exists)\n" },
		{ "CPP_Default_bOverrideSettingsIfClockExists", "false" },
		{ "CPP_Default_bUseAudioEngineClockManager", "true" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Clock Creation\ncreate a new clock (or return handle if clock already exists)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "CreateNewClock", nullptr, nullptr, sizeof(QuartzSubsystem_eventCreateNewClock_Parms), Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics
	{
		struct QuartzSubsystem_eventDeleteClockByHandle_Parms
		{
			const UObject* WorldContextObject;
			UQuartzClockHandle* InClockHandle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InClockHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_InClockHandle = { "InClockHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByHandle_Parms, InClockHandle), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::NewProp_InClockHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// delete an existing clock given its clock handle\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "delete an existing clock given its clock handle" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DeleteClockByHandle", nullptr, nullptr, sizeof(QuartzSubsystem_eventDeleteClockByHandle_Parms), Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics
	{
		struct QuartzSubsystem_eventDeleteClockByName_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDeleteClockByName_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::NewProp_ClockName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// delete an existing clock given its name\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "delete an existing clock given its name" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DeleteClockByName", nullptr, nullptr, sizeof(QuartzSubsystem_eventDeleteClockByName_Parms), Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics
	{
		struct QuartzSubsystem_eventDoesClockExist_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventDoesClockExist_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventDoesClockExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventDoesClockExist_Parms), &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// returns true if the clock exists\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "returns true if the clock exists" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "DoesClockExist", nullptr, nullptr, sizeof(QuartzSubsystem_eventDoesClockExist_Parms), Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Audio Render Thread -> Game thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Audio Render Thread -> Game thread)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetAudioRenderThreadToGameThreadMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetAudioRenderThreadToGameThreadMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics
	{
		struct QuartzSubsystem_eventGetCurrentClockTimestamp_Parms
		{
			const UObject* WorldContextObject;
			FName InClockName;
			FQuartzTransportTimeStamp ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InClockName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InClockName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName = { "InClockName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, InClockName), METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuartzTransportTimeStamp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_InClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Retrieves a timestamp for the clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Retrieves a timestamp for the clock" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetCurrentClockTimestamp", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetCurrentClockTimestamp_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics
	{
		struct QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			EQuartzCommandQuantization QuantizationType;
			float Multiplier;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuantizationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuantizationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuantizationType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType = { "QuantizationType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, QuantizationType), Z_Construct_UEnum_Engine_EQuartzCommandQuantization, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_QuantizationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "/** Returns the duration in seconds of the given Quantization Type\n\x09 * \n\x09 * @param The Quantization type to measure\n\x09 * @param The quantity of the Quantization Type to calculate the time of\n\x09 * @return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid\n\x09 */" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Returns the duration in seconds of the given Quantization Type\n\n@param The Quantization type to measure\n@param The quantity of the Quantization Type to calculate the time of\n@return The duration, in seconds, of a multiplier amount of the Quantization Type, or -1 in the case the clock is invalid" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetDurationOfQuantizationTypeInSeconds", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetDurationOfQuantizationTypeInSeconds_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics
	{
		struct QuartzSubsystem_eventGetEstimatedClockRunTime_Parms
		{
			const UObject* WorldContextObject;
			FName InClockName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InClockName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InClockName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName = { "InClockName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, InClockName), METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_InClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "Returns the amount of time, in seconds, the clock has been running. Caution: due to latency, this will not be perfectly accurate" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetEstimatedClockRunTime", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetEstimatedClockRunTime_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Game thread -> Audio Render Thread)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Game thread -> Audio Render Thread)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetGameThreadToAudioRenderThreadMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetGameThreadToAudioRenderThreadMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics
	{
		struct QuartzSubsystem_eventGetHandleForClock_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			UQuartzClockHandle* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetHandleForClock_Parms, ReturnValue), Z_Construct_UClass_UQuartzClockHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// get handle for existing clock\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "get handle for existing clock" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetHandleForClock", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetHandleForClock_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripAverageLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "Comment", "// latency data (Round trip)\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "latency data (Round trip)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripAverageLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripAverageLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripMaxLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMaxLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripMaxLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics
	{
		struct QuartzSubsystem_eventGetRoundTripMinLatency_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventGetRoundTripMinLatency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Subsystem" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "GetRoundTripMinLatency", nullptr, nullptr, sizeof(QuartzSubsystem_eventGetRoundTripMinLatency_Parms), Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics
	{
		struct QuartzSubsystem_eventIsClockRunning_Parms
		{
			const UObject* WorldContextObject;
			FName ClockName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClockName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventIsClockRunning_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ClockName = { "ClockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuartzSubsystem_eventIsClockRunning_Parms, ClockName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventIsClockRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventIsClockRunning_Parms), &Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ClockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "Comment", "// returns true if the clock is running\n" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
		{ "ToolTip", "returns true if the clock is running" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "IsClockRunning", nullptr, nullptr, sizeof(QuartzSubsystem_eventIsClockRunning_Parms), Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics
	{
		struct QuartzSubsystem_eventIsQuartzEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuartzSubsystem_eventIsQuartzEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuartzSubsystem_eventIsQuartzEnabled_Parms), &Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quartz Clock Handle" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function will now always return true" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuartzSubsystem, nullptr, "IsQuartzEnabled", nullptr, nullptr, sizeof(QuartzSubsystem_eventIsQuartzEnabled_Parms), Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuartzSubsystem_NoRegister()
	{
		return UQuartzSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UQuartzSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuartzSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuartzSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuartzSubsystem_CreateNewClock, "CreateNewClock" }, // 3200622260
		{ &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByHandle, "DeleteClockByHandle" }, // 3410681242
		{ &Z_Construct_UFunction_UQuartzSubsystem_DeleteClockByName, "DeleteClockByName" }, // 4174164844
		{ &Z_Construct_UFunction_UQuartzSubsystem_DoesClockExist, "DoesClockExist" }, // 2010633990
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency, "GetAudioRenderThreadToGameThreadAverageLatency" }, // 3123283490
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency, "GetAudioRenderThreadToGameThreadMaxLatency" }, // 3522361653
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency, "GetAudioRenderThreadToGameThreadMinLatency" }, // 1926538246
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetCurrentClockTimestamp, "GetCurrentClockTimestamp" }, // 779751118
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, "GetDurationOfQuantizationTypeInSeconds" }, // 1953642555
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetEstimatedClockRunTime, "GetEstimatedClockRunTime" }, // 536086641
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency, "GetGameThreadToAudioRenderThreadAverageLatency" }, // 3558138033
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency, "GetGameThreadToAudioRenderThreadMaxLatency" }, // 1265307339
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency, "GetGameThreadToAudioRenderThreadMinLatency" }, // 136629239
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetHandleForClock, "GetHandleForClock" }, // 35816757
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripAverageLatency, "GetRoundTripAverageLatency" }, // 414716971
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMaxLatency, "GetRoundTripMaxLatency" }, // 2620479750
		{ &Z_Construct_UFunction_UQuartzSubsystem_GetRoundTripMinLatency, "GetRoundTripMinLatency" }, // 2756536461
		{ &Z_Construct_UFunction_UQuartzSubsystem_IsClockRunning, "IsClockRunning" }, // 2160310281
		{ &Z_Construct_UFunction_UQuartzSubsystem_IsQuartzEnabled, "IsQuartzEnabled" }, // 613838354
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Quartz" },
		{ "IncludePath", "Quartz/QuartzSubsystem.h" },
		{ "ModuleRelativePath", "Public/Quartz/QuartzSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuartzSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuartzSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams = {
		&UQuartzSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuartzSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuartzSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuartzSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuartzSubsystem, 1663060444);
	template<> AUDIOMIXER_API UClass* StaticClass<UQuartzSubsystem>()
	{
		return UQuartzSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuartzSubsystem(Z_Construct_UClass_UQuartzSubsystem, &UQuartzSubsystem::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UQuartzSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuartzSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

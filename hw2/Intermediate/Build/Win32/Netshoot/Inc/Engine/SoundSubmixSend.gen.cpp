// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSubmixSend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixSend() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms
		{
			TArray<float> Magnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner = { "Magnitude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms, Magnitude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixSpectralAnalysisBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
		{
			TArray<float> Envelope;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelopeBP_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelopeBP__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnSubmixEnvelopeBP_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESubmixSendStage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendStage, Z_Construct_UPackage__Script_Engine(), TEXT("ESubmixSendStage"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESubmixSendStage>()
	{
		return ESubmixSendStage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixSendStage(ESubmixSendStage_StaticEnum, TEXT("/Script/Engine"), TEXT("ESubmixSendStage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESubmixSendStage_Hash() { return 143960257U; }
	UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixSendStage"), 0, Get_Z_Construct_UEnum_Engine_ESubmixSendStage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixSendStage::PostDistanceAttenuation", (int64)ESubmixSendStage::PostDistanceAttenuation },
				{ "ESubmixSendStage::PreDistanceAttenuation", (int64)ESubmixSendStage::PreDistanceAttenuation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
				{ "PostDistanceAttenuation.Comment", "// Whether to do the send pre distance attenuation\n" },
				{ "PostDistanceAttenuation.Name", "ESubmixSendStage::PostDistanceAttenuation" },
				{ "PostDistanceAttenuation.ToolTip", "Whether to do the send pre distance attenuation" },
				{ "PreDistanceAttenuation.Comment", "// Whether to do the send post distance attenuation\n" },
				{ "PreDistanceAttenuation.Name", "ESubmixSendStage::PreDistanceAttenuation" },
				{ "PreDistanceAttenuation.ToolTip", "Whether to do the send post distance attenuation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESubmixSendStage",
				"ESubmixSendStage",
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
	static UEnum* ESendLevelControlMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESendLevelControlMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ESendLevelControlMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESendLevelControlMethod>()
	{
		return ESendLevelControlMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESendLevelControlMethod(ESendLevelControlMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ESendLevelControlMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESendLevelControlMethod_Hash() { return 640836599U; }
	UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESendLevelControlMethod"), 0, Get_Z_Construct_UEnum_Engine_ESendLevelControlMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESendLevelControlMethod::Linear", (int64)ESendLevelControlMethod::Linear },
				{ "ESendLevelControlMethod::CustomCurve", (int64)ESendLevelControlMethod::CustomCurve },
				{ "ESendLevelControlMethod::Manual", (int64)ESendLevelControlMethod::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
				{ "CustomCurve.Name", "ESendLevelControlMethod::CustomCurve" },
				{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
				{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
				{ "Linear.Name", "ESendLevelControlMethod::Linear" },
				{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
				{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
				{ "Manual.Name", "ESendLevelControlMethod::Manual" },
				{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESendLevelControlMethod",
				"ESendLevelControlMethod",
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
	static UEnum* EAudioRecordingExportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioRecordingExportType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>()
	{
		return EAudioRecordingExportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioRecordingExportType(EAudioRecordingExportType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioRecordingExportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioRecordingExportType_Hash() { return 4283164218U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioRecordingExportType"), 0, Get_Z_Construct_UEnum_Engine_EAudioRecordingExportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioRecordingExportType::SoundWave", (int64)EAudioRecordingExportType::SoundWave },
				{ "EAudioRecordingExportType::WavFile", (int64)EAudioRecordingExportType::WavFile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
				{ "SoundWave.Comment", "// Exports a USoundWave.\n" },
				{ "SoundWave.Name", "EAudioRecordingExportType::SoundWave" },
				{ "SoundWave.ToolTip", "Exports a USoundWave." },
				{ "WavFile.Comment", "// Exports a WAV file.\n" },
				{ "WavFile.Name", "EAudioRecordingExportType::WavFile" },
				{ "WavFile.ToolTip", "Exports a WAV file." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioRecordingExportType",
				"EAudioRecordingExportType",
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
	static UEnum* EAudioSpectrumBandPresetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioSpectrumBandPresetType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumBandPresetType>()
	{
		return EAudioSpectrumBandPresetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioSpectrumBandPresetType(EAudioSpectrumBandPresetType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioSpectrumBandPresetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Hash() { return 3788283762U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioSpectrumBandPresetType"), 0, Get_Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioSpectrumBandPresetType::KickDrum", (int64)EAudioSpectrumBandPresetType::KickDrum },
				{ "EAudioSpectrumBandPresetType::SnareDrum", (int64)EAudioSpectrumBandPresetType::SnareDrum },
				{ "EAudioSpectrumBandPresetType::Voice", (int64)EAudioSpectrumBandPresetType::Voice },
				{ "EAudioSpectrumBandPresetType::Cymbals", (int64)EAudioSpectrumBandPresetType::Cymbals },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cymbals.Comment", "/** Band which contains frequencies generally related to cymbals. */" },
				{ "Cymbals.Name", "EAudioSpectrumBandPresetType::Cymbals" },
				{ "Cymbals.ToolTip", "Band which contains frequencies generally related to cymbals." },
				{ "KickDrum.Comment", "/** Band which contains frequencies generally related to kick drums. */" },
				{ "KickDrum.Name", "EAudioSpectrumBandPresetType::KickDrum" },
				{ "KickDrum.ToolTip", "Band which contains frequencies generally related to kick drums." },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
				{ "SnareDrum.Comment", "/** Band which contains frequencies generally related to snare drums. */" },
				{ "SnareDrum.Name", "EAudioSpectrumBandPresetType::SnareDrum" },
				{ "SnareDrum.ToolTip", "Band which contains frequencies generally related to snare drums." },
				{ "Voice.Comment", "/** Band which contains frequencies generally related to vocals. */" },
				{ "Voice.Name", "EAudioSpectrumBandPresetType::Voice" },
				{ "Voice.ToolTip", "Band which contains frequencies generally related to vocals." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioSpectrumBandPresetType",
				"EAudioSpectrumBandPresetType",
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
class UScriptStruct* FSoundSubmixSendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSendInfo>()
{
	return FSoundSubmixSendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSubmixSendInfo(FSoundSubmixSendInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSubmixSendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo()
	{
		UScriptStruct::DeferCppStructOps<FSoundSubmixSendInfo>(FName(TEXT("SoundSubmixSendInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo;
	struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SendLevelControlMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevelControlMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SendLevelControlMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SendStage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SendStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class used to send audio to submixes from USoundBase\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Class used to send audio to submixes from USoundBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod = { "SendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevelControlMethod), Z_Construct_UEnum_Engine_ESendLevelControlMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/** Defines at what mix stage the send should happen.*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Defines at what mix stage the send should happen." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage = { "SendStage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SendStage), Z_Construct_UEnum_Engine_ESubmixSendStage, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The submix to send the audio to\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The submix to send the audio to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount of audio to send\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the min send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, MinSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the max send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, MaxSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The min distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The min distance to send to the master" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, MinSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The max distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The max distance to send to the master" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, MaxSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The custom reverb send curve to use for distance-based send level.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSubmixSendInfo",
		sizeof(FSoundSubmixSendInfo),
		alignof(FSoundSubmixSendInfo),
		Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash() { return 360562116U; }
class UScriptStruct* FSoundSubmixSpectralAnalysisBandSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSpectralAnalysisBandSettings"), sizeof(FSoundSubmixSpectralAnalysisBandSettings), Get_Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSpectralAnalysisBandSettings>()
{
	return FSoundSubmixSpectralAnalysisBandSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings(FSoundSubmixSpectralAnalysisBandSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSubmixSpectralAnalysisBandSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSpectralAnalysisBandSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSpectralAnalysisBandSettings()
	{
		UScriptStruct::DeferCppStructOps<FSoundSubmixSpectralAnalysisBandSettings>(FName(TEXT("SoundSubmixSpectralAnalysisBandSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSpectralAnalysisBandSettings;
	struct Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BandFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BandFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReleaseTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSpectralAnalysisBandSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency band for the magnitude to analyze\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The frequency band for the magnitude to analyze" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency = { "BandFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, BandFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The attack time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The release time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor = { "QFactor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, QFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSubmixSpectralAnalysisBandSettings",
		sizeof(FSoundSubmixSpectralAnalysisBandSettings),
		alignof(FSoundSubmixSpectralAnalysisBandSettings),
		Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSubmixSpectralAnalysisBandSettings"), sizeof(FSoundSubmixSpectralAnalysisBandSettings), Get_Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Hash() { return 1749666648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

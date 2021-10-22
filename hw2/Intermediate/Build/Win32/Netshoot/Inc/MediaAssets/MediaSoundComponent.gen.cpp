// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaSoundComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSoundComponent() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	static UEnum* EMediaSoundComponentFFTSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundComponentFFTSize"));
		}
		return Singleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundComponentFFTSize>()
	{
		return EMediaSoundComponentFFTSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaSoundComponentFFTSize(EMediaSoundComponentFFTSize_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaSoundComponentFFTSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Hash() { return 2820327173U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaSoundComponentFFTSize"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaSoundComponentFFTSize::Min_64", (int64)EMediaSoundComponentFFTSize::Min_64 },
				{ "EMediaSoundComponentFFTSize::Small_256", (int64)EMediaSoundComponentFFTSize::Small_256 },
				{ "EMediaSoundComponentFFTSize::Medium_512", (int64)EMediaSoundComponentFFTSize::Medium_512 },
				{ "EMediaSoundComponentFFTSize::Large_1024", (int64)EMediaSoundComponentFFTSize::Large_1024 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Large_1024.Name", "EMediaSoundComponentFFTSize::Large_1024" },
				{ "Medium_512.Name", "EMediaSoundComponentFFTSize::Medium_512" },
				{ "Min_64.Name", "EMediaSoundComponentFFTSize::Min_64" },
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "Small_256.Name", "EMediaSoundComponentFFTSize::Small_256" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				"EMediaSoundComponentFFTSize",
				"EMediaSoundComponentFFTSize",
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
	static UEnum* EMediaSoundChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundChannels"));
		}
		return Singleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaSoundChannels>()
	{
		return EMediaSoundChannels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaSoundChannels(EMediaSoundChannels_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaSoundChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Hash() { return 4228882410U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaSoundChannels"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaSoundChannels::Mono", (int64)EMediaSoundChannels::Mono },
				{ "EMediaSoundChannels::Stereo", (int64)EMediaSoundChannels::Stereo },
				{ "EMediaSoundChannels::Surround", (int64)EMediaSoundChannels::Surround },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Available media sound channel types.\n */" },
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "Mono.Comment", "/** Mono (1 channel). */" },
				{ "Mono.Name", "EMediaSoundChannels::Mono" },
				{ "Mono.ToolTip", "Mono (1 channel)." },
				{ "Stereo.Comment", "/** Stereo (2 channels). */" },
				{ "Stereo.Name", "EMediaSoundChannels::Stereo" },
				{ "Stereo.ToolTip", "Stereo (2 channels)." },
				{ "Surround.Comment", "/** Surround sound (7.1 channels; for UI). */" },
				{ "Surround.Name", "EMediaSoundChannels::Surround" },
				{ "Surround.ToolTip", "Surround sound (7.1 channels; for UI)." },
				{ "ToolTip", "Available media sound channel types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				"EMediaSoundChannels",
				"EMediaSoundChannels",
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
class UScriptStruct* FMediaSoundComponentSpectralData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAASSETS_API uint32 Get_Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaSoundComponentSpectralData"), sizeof(FMediaSoundComponentSpectralData), Get_Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Hash());
	}
	return Singleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaSoundComponentSpectralData>()
{
	return FMediaSoundComponentSpectralData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaSoundComponentSpectralData(FMediaSoundComponentSpectralData::StaticStruct, TEXT("/Script/MediaAssets"), TEXT("MediaSoundComponentSpectralData"), false, nullptr, nullptr);
static struct FScriptStruct_MediaAssets_StaticRegisterNativesFMediaSoundComponentSpectralData
{
	FScriptStruct_MediaAssets_StaticRegisterNativesFMediaSoundComponentSpectralData()
	{
		UScriptStruct::DeferCppStructOps<FMediaSoundComponentSpectralData>(FName(TEXT("MediaSoundComponentSpectralData")));
	}
} ScriptStruct_MediaAssets_StaticRegisterNativesFMediaSoundComponentSpectralData;
	struct Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaSoundComponentSpectralData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The frequency hz of the spectrum value\n" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The frequency hz of the spectrum value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaSoundComponentSpectralData, FrequencyHz), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "SpectralData" },
		{ "Comment", "// The magnitude of the spectrum at this frequency\n" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaSoundComponentSpectralData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_FrequencyHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::NewProp_Magnitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		&NewStructOps,
		"MediaSoundComponentSpectralData",
		sizeof(FMediaSoundComponentSpectralData),
		alignof(FMediaSoundComponentSpectralData),
		Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaSoundComponentSpectralData"), sizeof(FMediaSoundComponentSpectralData), Get_Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Hash() { return 3139686092U; }
	DEFINE_FUNCTION(UMediaSoundComponent::execGetEnvelopeValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnvelopeValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execSetEnvelopeFollowingsettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttackTimeMsec);
		P_GET_PROPERTY(FIntProperty,Z_Param_ReleaseTimeMsec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnvelopeFollowingsettings(Z_Param_AttackTimeMsec,Z_Param_ReleaseTimeMsec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execSetEnableEnvelopeFollowing)
	{
		P_GET_UBOOL(Z_Param_bInEnvelopeFollowing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableEnvelopeFollowing(Z_Param_bInEnvelopeFollowing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execGetNormalizedSpectralData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetNormalizedSpectralData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execGetSpectralData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMediaSoundComponentSpectralData>*)Z_Param__Result=P_THIS->GetSpectralData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execSetSpectralAnalysisSettings)
	{
		P_GET_TARRAY(float,Z_Param_InFrequenciesToAnalyze);
		P_GET_ENUM(EMediaSoundComponentFFTSize,Z_Param_InFFTSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectralAnalysisSettings(Z_Param_InFrequenciesToAnalyze,EMediaSoundComponentFFTSize(Z_Param_InFFTSize));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execSetEnableSpectralAnalysis)
	{
		P_GET_UBOOL(Z_Param_bInSpectralAnalysisEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSpectralAnalysis(Z_Param_bInSpectralAnalysisEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execSetMediaPlayer)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSoundComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	void UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent()
	{
		UClass* Class = UMediaSoundComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetAttenuationSettingsToApply", &UMediaSoundComponent::execBP_GetAttenuationSettingsToApply },
			{ "GetEnvelopeValue", &UMediaSoundComponent::execGetEnvelopeValue },
			{ "GetMediaPlayer", &UMediaSoundComponent::execGetMediaPlayer },
			{ "GetNormalizedSpectralData", &UMediaSoundComponent::execGetNormalizedSpectralData },
			{ "GetSpectralData", &UMediaSoundComponent::execGetSpectralData },
			{ "SetEnableEnvelopeFollowing", &UMediaSoundComponent::execSetEnableEnvelopeFollowing },
			{ "SetEnableSpectralAnalysis", &UMediaSoundComponent::execSetEnableSpectralAnalysis },
			{ "SetEnvelopeFollowingsettings", &UMediaSoundComponent::execSetEnvelopeFollowingsettings },
			{ "SetMediaPlayer", &UMediaSoundComponent::execSetMediaPlayer },
			{ "SetSpectralAnalysisSettings", &UMediaSoundComponent::execSetSpectralAnalysisSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Get the attenuation settings based on the current component settings.\n\x09 *\n\x09 * @param OutAttenuationSettings Will contain the attenuation settings, if available.\n\x09 * @return true if attenuation settings were returned, false if attenuation is disabled.\n\x09 */" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
		{ "ToolTip", "Get the attenuation settings based on the current component settings.\n\n@param OutAttenuationSettings Will contain the attenuation settings, if available.\n@return true if attenuation settings were returned, false if attenuation is disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics
	{
		struct MediaSoundComponent_eventGetEnvelopeValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetEnvelopeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves the current amplitude envelope. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves the current amplitude envelope." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetEnvelopeValue", nullptr, nullptr, sizeof(MediaSoundComponent_eventGetEnvelopeValue_Parms), Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics
	{
		struct MediaSoundComponent_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Get the media player that provides the audio samples.\n\x09 *\n\x09 * @return The component's media player, or nullptr if not set.\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Get the media player that provides the audio samples.\n\n@return The component's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(MediaSoundComponent_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics
	{
		struct MediaSoundComponent_eventGetNormalizedSpectralData_Parms
		{
			TArray<FMediaSoundComponentSpectralData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetNormalizedSpectralData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves and normalizes the spectral data if spectral analysis is enabled. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves and normalizes the spectral data if spectral analysis is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetNormalizedSpectralData", nullptr, nullptr, sizeof(MediaSoundComponent_eventGetNormalizedSpectralData_Parms), Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics
	{
		struct MediaSoundComponent_eventGetSpectralData_Parms
		{
			TArray<FMediaSoundComponentSpectralData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventGetSpectralData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeSynth" },
		{ "Comment", "/** Retrieves the spectral data if spectral analysis is enabled. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Retrieves the spectral data if spectral analysis is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "GetSpectralData", nullptr, nullptr, sizeof(MediaSoundComponent_eventGetSpectralData_Parms), Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics
	{
		struct MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms
		{
			bool bInEnvelopeFollowing;
		};
		static void NewProp_bInEnvelopeFollowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnvelopeFollowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing_SetBit(void* Obj)
	{
		((MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms*)Obj)->bInEnvelopeFollowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing = { "bInEnvelopeFollowing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms), &Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::NewProp_bInEnvelopeFollowing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Turns on amplitude envelope following the audio in the media sound component. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Turns on amplitude envelope following the audio in the media sound component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnableEnvelopeFollowing", nullptr, nullptr, sizeof(MediaSoundComponent_eventSetEnableEnvelopeFollowing_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics
	{
		struct MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms
		{
			bool bInSpectralAnalysisEnabled;
		};
		static void NewProp_bInSpectralAnalysisEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSpectralAnalysisEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled_SetBit(void* Obj)
	{
		((MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms*)Obj)->bInSpectralAnalysisEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled = { "bInSpectralAnalysisEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms), &Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::NewProp_bInSpectralAnalysisEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Turns on spectral analysis of the audio generated in the media sound component. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Turns on spectral analysis of the audio generated in the media sound component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnableSpectralAnalysis", nullptr, nullptr, sizeof(MediaSoundComponent_eventSetEnableSpectralAnalysis_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics
	{
		struct MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms
		{
			int32 AttackTimeMsec;
			int32 ReleaseTimeMsec;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackTimeMsec;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReleaseTimeMsec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms, AttackTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms, ReleaseTimeMsec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::NewProp_ReleaseTimeMsec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Sets the envelope attack and release times (in ms). */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Sets the envelope attack and release times (in ms)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetEnvelopeFollowingsettings", nullptr, nullptr, sizeof(MediaSoundComponent_eventSetEnvelopeFollowingsettings_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics
	{
		struct MediaSoundComponent_eventSetMediaPlayer_Parms
		{
			UMediaPlayer* NewMediaPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/**\n\x09 * Set the media player that provides the audio samples.\n\x09 *\n\x09 * @param NewMediaPlayer The player to set.\n\x09 * @see GetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Set the media player that provides the audio samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetMediaPlayer", nullptr, nullptr, sizeof(MediaSoundComponent_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics
	{
		struct MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms
		{
			TArray<float> InFrequenciesToAnalyze;
			EMediaSoundComponentFFTSize InFFTSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFrequenciesToAnalyze_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFrequenciesToAnalyze;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InFFTSize_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InFFTSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze_Inner = { "InFrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze = { "InFrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms, InFrequenciesToAnalyze), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize = { "InFFTSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms, InFFTSize), Z_Construct_UEnum_MediaAssets_EMediaSoundComponentFFTSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFrequenciesToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::NewProp_InFFTSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "Comment", "/** Sets the settings to use for spectral analysis. */" },
		{ "CPP_Default_InFFTSize", "Medium_512" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Sets the settings to use for spectral analysis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, nullptr, "SetSpectralAnalysisSettings", nullptr, nullptr, sizeof(MediaSoundComponent_eventSetSpectralAnalysisSettings_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister()
	{
		return UMediaSoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSoundComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Channels_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Channels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicRateAdjustment_MetaData[];
#endif
		static void NewProp_DynamicRateAdjustment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DynamicRateAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateAdjustmentFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateAdjustmentRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSoundComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3956547673
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetEnvelopeValue, "GetEnvelopeValue" }, // 1076001584
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer, "GetMediaPlayer" }, // 31881891
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetNormalizedSpectralData, "GetNormalizedSpectralData" }, // 2453861181
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetSpectralData, "GetSpectralData" }, // 758985312
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnableEnvelopeFollowing, "SetEnableEnvelopeFollowing" }, // 3851035876
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnableSpectralAnalysis, "SetEnableSpectralAnalysis" }, // 3228911113
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetEnvelopeFollowingsettings, "SetEnvelopeFollowingsettings" }, // 1050448265
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer, "SetMediaPlayer" }, // 4233713145
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetSpectralAnalysisSettings, "SetSpectralAnalysisSettings" }, // 2006507743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "Comment", "/**\n * Implements a sound component for playing a media player's audio output.\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "MediaSoundComponent.h" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a sound component for playing a media player's audio output." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media sound channel type. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Media sound channel type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaSoundComponent, Channels), Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Dynamically adjust the sample rate if audio and media clock desynchronize. */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Dynamically adjust the sample rate if audio and media clock desynchronize." },
	};
#endif
	void Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit(void* Obj)
	{
		((UMediaSoundComponent*)Obj)->DynamicRateAdjustment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment = { "DynamicRateAdjustment", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaSoundComponent), &Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * Factor for calculating the sample rate adjustment.\n\x09 *\n\x09 * If dynamic rate adjustment is enabled, this number is multiplied with the drift\n\x09 * between the audio and media clock (in 100ns ticks) to determine the adjustment.\n\x09 * that is to be multiplied into the current playrate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Factor for calculating the sample rate adjustment.\n\nIf dynamic rate adjustment is enabled, this number is multiplied with the drift\nbetween the audio and media clock (in 100ns ticks) to determine the adjustment.\nthat is to be multiplied into the current playrate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor = { "RateAdjustmentFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentFactor), METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The allowed range of dynamic rate adjustment.\n\x09 *\n\x09 * If dynamic rate adjustment is enabled, and the necessary adjustment\n\x09 * falls outside of this range, audio samples will be dropped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The allowed range of dynamic rate adjustment.\n\nIf dynamic rate adjustment is enabled, and the necessary adjustment\nfalls outside of this range, audio samples will be dropped." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange = { "RateAdjustmentRange", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The media player asset associated with this component.\n\x09 *\n\x09 * This property is meant for design-time convenience. To change the\n\x09 * associated media player at run-time, use the SetMediaPlayer method.\n\x09 *\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The media player asset associated with this component.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSoundComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams = {
		&UMediaSoundComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSoundComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaSoundComponent, 2379043534);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaSoundComponent>()
	{
		return UMediaSoundComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaSoundComponent(Z_Construct_UClass_UMediaSoundComponent, &UMediaSoundComponent::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaSoundComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSoundComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

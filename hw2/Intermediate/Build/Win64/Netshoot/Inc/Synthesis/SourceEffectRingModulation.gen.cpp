// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectRingModulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectRingModulation() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
// End Cross Module References
	static UEnum* ERingModulatorTypeSourceEffect_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, Z_Construct_UPackage__Script_Synthesis(), TEXT("ERingModulatorTypeSourceEffect"));
		}
		return Singleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ERingModulatorTypeSourceEffect>()
	{
		return ERingModulatorTypeSourceEffect_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERingModulatorTypeSourceEffect(ERingModulatorTypeSourceEffect_StaticEnum, TEXT("/Script/Synthesis"), TEXT("ERingModulatorTypeSourceEffect"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Hash() { return 2387820418U; }
	UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERingModulatorTypeSourceEffect"), 0, Get_Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERingModulatorTypeSourceEffect::Sine", (int64)ERingModulatorTypeSourceEffect::Sine },
				{ "ERingModulatorTypeSourceEffect::Saw", (int64)ERingModulatorTypeSourceEffect::Saw },
				{ "ERingModulatorTypeSourceEffect::Triangle", (int64)ERingModulatorTypeSourceEffect::Triangle },
				{ "ERingModulatorTypeSourceEffect::Square", (int64)ERingModulatorTypeSourceEffect::Square },
				{ "ERingModulatorTypeSourceEffect::Count", (int64)ERingModulatorTypeSourceEffect::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ERingModulatorTypeSourceEffect::Count" },
				{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
				{ "Saw.Name", "ERingModulatorTypeSourceEffect::Saw" },
				{ "Sine.Name", "ERingModulatorTypeSourceEffect::Sine" },
				{ "Square.Name", "ERingModulatorTypeSourceEffect::Square" },
				{ "Triangle.Name", "ERingModulatorTypeSourceEffect::Triangle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
				nullptr,
				"ERingModulatorTypeSourceEffect",
				"ERingModulatorTypeSourceEffect",
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
class UScriptStruct* FSourceEffectRingModulationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYNTHESIS_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectRingModulationSettings"), sizeof(FSourceEffectRingModulationSettings), Get_Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Hash());
	}
	return Singleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectRingModulationSettings>()
{
	return FSourceEffectRingModulationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectRingModulationSettings(FSourceEffectRingModulationSettings::StaticStruct, TEXT("/Script/Synthesis"), TEXT("SourceEffectRingModulationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectRingModulationSettings
{
	FScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectRingModulationSettings()
	{
		UScriptStruct::DeferCppStructOps<FSourceEffectRingModulationSettings>(FName(TEXT("SourceEffectRingModulationSettings")));
	}
} ScriptStruct_Synthesis_StaticRegisterNativesFSourceEffectRingModulationSettings;
	struct Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModulatorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulatorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModulatorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioBusModulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioBusModulator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectRingModulationSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation modulator oscillator type\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation modulator oscillator type" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType = { "ModulatorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, ModulatorType), Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation frequency" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Ring modulation depth\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation depth" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the dry signal (no ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the dry signal (no ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the wet signal (with ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the wet signal (with ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Audio bus to use to modulate the effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Audio bus to use to modulate the effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator = { "AudioBusModulator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSourceEffectRingModulationSettings, AudioBusModulator), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectRingModulationSettings",
		sizeof(FSourceEffectRingModulationSettings),
		alignof(FSourceEffectRingModulationSettings),
		Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Synthesis();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectRingModulationSettings"), sizeof(FSourceEffectRingModulationSettings), Get_Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Hash() { return 637552379U; }
	DEFINE_FUNCTION(USourceEffectRingModulationPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectRingModulationSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectRingModulationPreset::StaticRegisterNativesUSourceEffectRingModulationPreset()
	{
		UClass* Class = USourceEffectRingModulationPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectRingModulationPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics
	{
		struct SourceEffectRingModulationPreset_eventSetSettings_Parms
		{
			FSourceEffectRingModulationSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SourceEffectRingModulationPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectRingModulationPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(SourceEffectRingModulationPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister()
	{
		return USourceEffectRingModulationPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectRingModulationPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings, "SetSettings" }, // 2580786868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectRingModulation.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceEffectRingModulationPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectRingModulationPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams = {
		&USourceEffectRingModulationPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectRingModulationPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceEffectRingModulationPreset, 1765400799);
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectRingModulationPreset>()
	{
		return USourceEffectRingModulationPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceEffectRingModulationPreset(Z_Construct_UClass_USourceEffectRingModulationPreset, &USourceEffectRingModulationPreset::StaticClass, TEXT("/Script/Synthesis"), TEXT("USourceEffectRingModulationPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectRingModulationPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Attenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttenuation() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationShape();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static UEnum* ENaturalSoundFalloffMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENaturalSoundFalloffMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENaturalSoundFalloffMode>()
	{
		return ENaturalSoundFalloffMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENaturalSoundFalloffMode(ENaturalSoundFalloffMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENaturalSoundFalloffMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Hash() { return 1671175398U; }
	UEnum* Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENaturalSoundFalloffMode"), 0, Get_Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENaturalSoundFalloffMode::Continues", (int64)ENaturalSoundFalloffMode::Continues },
				{ "ENaturalSoundFalloffMode::Silent", (int64)ENaturalSoundFalloffMode::Silent },
				{ "ENaturalSoundFalloffMode::Hold", (int64)ENaturalSoundFalloffMode::Hold },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Continues.Comment", "// (Default) Continues attenuating pass falloff max using volume value\n// specified at the max falloff distance's bounds\n" },
				{ "Continues.Name", "ENaturalSoundFalloffMode::Continues" },
				{ "Continues.ToolTip", "(Default) Continues attenuating pass falloff max using volume value\nspecified at the max falloff distance's bounds" },
				{ "Hold.Comment", "// Holds the volume value specified at the shapes falloff bounds\n" },
				{ "Hold.Name", "ENaturalSoundFalloffMode::Hold" },
				{ "Hold.ToolTip", "Holds the volume value specified at the shapes falloff bounds" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "Silent.Comment", "// Sound goes silent upon leaving the shape\n" },
				{ "Silent.Name", "ENaturalSoundFalloffMode::Silent" },
				{ "Silent.ToolTip", "Sound goes silent upon leaving the shape" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENaturalSoundFalloffMode",
				"ENaturalSoundFalloffMode",
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
	static UEnum* EAttenuationShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationShape, Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationShape"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAttenuationShape::Type>()
	{
		return EAttenuationShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttenuationShape(EAttenuationShape_StaticEnum, TEXT("/Script/Engine"), TEXT("EAttenuationShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAttenuationShape_Hash() { return 3520933750U; }
	UEnum* Z_Construct_UEnum_Engine_EAttenuationShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttenuationShape"), 0, Get_Z_Construct_UEnum_Engine_EAttenuationShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttenuationShape::Sphere", (int64)EAttenuationShape::Sphere },
				{ "EAttenuationShape::Capsule", (int64)EAttenuationShape::Capsule },
				{ "EAttenuationShape::Box", (int64)EAttenuationShape::Box },
				{ "EAttenuationShape::Cone", (int64)EAttenuationShape::Cone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Box.Name", "EAttenuationShape::Box" },
				{ "Capsule.Name", "EAttenuationShape::Capsule" },
				{ "Cone.Name", "EAttenuationShape::Cone" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "Sphere.Name", "EAttenuationShape::Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAttenuationShape",
				"EAttenuationShape::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAttenuationDistanceModel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationDistanceModel, Z_Construct_UPackage__Script_Engine(), TEXT("EAttenuationDistanceModel"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAttenuationDistanceModel>()
	{
		return EAttenuationDistanceModel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttenuationDistanceModel(EAttenuationDistanceModel_StaticEnum, TEXT("/Script/Engine"), TEXT("EAttenuationDistanceModel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Hash() { return 2577488814U; }
	UEnum* Z_Construct_UEnum_Engine_EAttenuationDistanceModel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttenuationDistanceModel"), 0, Get_Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttenuationDistanceModel::Linear", (int64)EAttenuationDistanceModel::Linear },
				{ "EAttenuationDistanceModel::Logarithmic", (int64)EAttenuationDistanceModel::Logarithmic },
				{ "EAttenuationDistanceModel::Inverse", (int64)EAttenuationDistanceModel::Inverse },
				{ "EAttenuationDistanceModel::LogReverse", (int64)EAttenuationDistanceModel::LogReverse },
				{ "EAttenuationDistanceModel::NaturalSound", (int64)EAttenuationDistanceModel::NaturalSound },
				{ "EAttenuationDistanceModel::Custom", (int64)EAttenuationDistanceModel::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "EAttenuationDistanceModel::Custom" },
				{ "Inverse.Name", "EAttenuationDistanceModel::Inverse" },
				{ "Linear.Name", "EAttenuationDistanceModel::Linear" },
				{ "Logarithmic.Name", "EAttenuationDistanceModel::Logarithmic" },
				{ "LogReverse.Name", "EAttenuationDistanceModel::LogReverse" },
				{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
				{ "NaturalSound.Name", "EAttenuationDistanceModel::NaturalSound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAttenuationDistanceModel",
				"EAttenuationDistanceModel",
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
class UScriptStruct* FBaseAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BaseAttenuationSettings"), sizeof(FBaseAttenuationSettings), Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBaseAttenuationSettings>()
{
	return FBaseAttenuationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseAttenuationSettings(FBaseAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BaseAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps<FBaseAttenuationSettings>(FName(TEXT("BaseAttenuationSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBaseAttenuationSettings;
	struct Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceAlgorithm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceAlgorithm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttenuationShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dBAttenuationAtMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dBAttenuationAtMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FalloffMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FalloffMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationShapeExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationShapeExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FalloffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttenuationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAttenuationCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Base class for attenuation settings.\n*/" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "* Base class for attenuation settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseAttenuationSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The type of attenuation as a function of distance to use. */" },
		{ "DisplayName", "Attenuation Function" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The type of attenuation as a function of distance to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm = { "DistanceAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, DistanceAlgorithm), Z_Construct_UEnum_Engine_EAttenuationDistanceModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The shape of the non-custom attenuation method. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The shape of the non-custom attenuation method." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape = { "AttenuationShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShape), Z_Construct_UEnum_Engine_EAttenuationShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-60" },
		{ "Comment", "/* The attenuation volume at the falloff distance in decibels (Only for 'Natural Sound' Distance Algorithm). */" },
		{ "DisplayName", "Attenuation At Max (dB)" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The attenuation volume at the falloff distance in decibels (Only for 'Natural Sound' Distance Algorithm)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax = { "dBAttenuationAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, dBAttenuationAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "// Whether to continue attenuating, go silent, or hold last volume value when beyond falloff bounds and \n// 'Attenuation At Max (dB)' is set to a value greater than -60dB.\n// (Only for 'Natural Sound' Distance Algorithm). */\n" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "Whether to continue attenuating, go silent, or hold last volume value when beyond falloff bounds and\n'Attenuation At Max (dB)' is set to a value greater than -60dB.\n(Only for 'Natural Sound' Distance Algorithm). */" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode = { "FalloffMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, FalloffMode), Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n\x09   Sphere  - X is Sphere Radius. Y and Z are unused\n\x09   Capsule - X is Capsule Half Height, Y is Capsule Radius, Z is unused\n\x09   Box     - X, Y, and Z are the Box's dimensions\n\x09   Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The dimensions to use for the attenuation shape. Interpretation of the values differ per shape.\n         Sphere  - X is Sphere Radius. Y and Z are unused\n         Capsule - X is Capsule Half Height, Y is Capsule Radius, Z is unused\n         Box     - X, Y, and Z are the Box's dimensions\n         Cone    - X is Cone Radius, Y is Cone Angle, Z is Cone Falloff Angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents = { "AttenuationShapeExtents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, AttenuationShapeExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance back from the sound's origin to begin the cone when using the cone attenuation shape. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The distance back from the sound's origin to begin the cone when using the cone attenuation shape." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset = { "ConeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, ConeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The distance over which volume attenuation occurs. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The distance over which volume attenuation occurs." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance = { "FalloffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, FalloffDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* The custom volume attenuation curve to use. */" },
		{ "ModuleRelativePath", "Classes/Engine/Attenuation.h" },
		{ "ToolTip", "The custom volume attenuation curve to use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve = { "CustomAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttenuationSettings, CustomAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_DistanceAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_dBAttenuationAtMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_AttenuationShapeExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_ConeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_FalloffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewProp_CustomAttenuationCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BaseAttenuationSettings",
		sizeof(FBaseAttenuationSettings),
		alignof(FBaseAttenuationSettings),
		Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseAttenuationSettings"), sizeof(FBaseAttenuationSettings), Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseAttenuationSettings_Hash() { return 1694216949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

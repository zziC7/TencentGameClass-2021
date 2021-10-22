// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/PerlinNoiseCameraShakePattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlinNoiseCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseShaker();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
// End Cross Module References
class UScriptStruct* FPerlinNoiseShaker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCAMERAS_API uint32 Get_Z_Construct_UScriptStruct_FPerlinNoiseShaker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseShaker, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("PerlinNoiseShaker"), sizeof(FPerlinNoiseShaker), Get_Z_Construct_UScriptStruct_FPerlinNoiseShaker_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FPerlinNoiseShaker>()
{
	return FPerlinNoiseShaker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerlinNoiseShaker(FPerlinNoiseShaker::StaticStruct, TEXT("/Script/GameplayCameras"), TEXT("PerlinNoiseShaker"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayCameras_StaticRegisterNativesFPerlinNoiseShaker
{
	FScriptStruct_GameplayCameras_StaticRegisterNativesFPerlinNoiseShaker()
	{
		UScriptStruct::DeferCppStructOps<FPerlinNoiseShaker>(FName(TEXT("PerlinNoiseShaker")));
	}
} ScriptStruct_GameplayCameras_StaticRegisterNativesFPerlinNoiseShaker;
	struct Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A perlin noise shaker for a single number. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "A perlin noise shaker for a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinNoiseShaker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "PerlinNoise" },
		{ "Comment", "/** Amplitude of the perlin noise. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude of the perlin noise." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerlinNoiseShaker, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "PerlinNoise" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerlinNoiseShaker, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"PerlinNoiseShaker",
		sizeof(FPerlinNoiseShaker),
		alignof(FPerlinNoiseShaker),
		Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseShaker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerlinNoiseShaker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerlinNoiseShaker"), sizeof(FPerlinNoiseShaker), Get_Z_Construct_UScriptStruct_FPerlinNoiseShaker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerlinNoiseShaker_Hash() { return 2332798491U; }
	void UPerlinNoiseCameraShakePattern::StaticRegisterNativesUPerlinNoiseCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister()
	{
		return UPerlinNoiseCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationAmplitudeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationAmplitudeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationFrequencyMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationFrequencyMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitudeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationAmplitudeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationFrequencyMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationFrequencyMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Location,Rotation,FOV,Timing" },
		{ "Comment", "/**\n * A camera shake that uses Perlin noise to shake the camera.\n */" },
		{ "IncludePath", "PerlinNoiseCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake that uses Perlin noise to shake the camera." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amplitude multiplier for all location shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all location shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Frequency multiplier for all location shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all location shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the X axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the X axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, X), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the Y axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Y), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the Z axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Z), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Amplitude multiplier for all rotation shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all rotation shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Frequency multiplier for all rotation shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all rotation shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Pitch shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Pitch shake." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Pitch), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Yaw shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Yaw shake." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Yaw), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Roll shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Roll shake." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Roll), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "Comment", "/** FOV shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "FOV shake." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, FOV), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlinNoiseCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::ClassParams = {
		&UPerlinNoiseCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerlinNoiseCameraShakePattern, 1867397367);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPerlinNoiseCameraShakePattern>()
	{
		return UPerlinNoiseCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerlinNoiseCameraShakePattern(Z_Construct_UClass_UPerlinNoiseCameraShakePattern, &UPerlinNoiseCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UPerlinNoiseCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlinNoiseCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

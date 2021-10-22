// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/WaveOscillatorCameraShakePattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveOscillatorCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
// End Cross Module References
	static UEnum* EInitialWaveOscillatorOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EInitialWaveOscillatorOffsetType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EInitialWaveOscillatorOffsetType>()
	{
		return EInitialWaveOscillatorOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialWaveOscillatorOffsetType(EInitialWaveOscillatorOffsetType_StaticEnum, TEXT("/Script/GameplayCameras"), TEXT("EInitialWaveOscillatorOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Hash() { return 2344574607U; }
	UEnum* Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialWaveOscillatorOffsetType"), 0, Get_Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInitialWaveOscillatorOffsetType::Random", (int64)EInitialWaveOscillatorOffsetType::Random },
				{ "EInitialWaveOscillatorOffsetType::Zero", (int64)EInitialWaveOscillatorOffsetType::Zero },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Shake start offset parameter. */" },
				{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
				{ "Random.Comment", "/** Start with random offset (default). */" },
				{ "Random.Name", "EInitialWaveOscillatorOffsetType::Random" },
				{ "Random.ToolTip", "Start with random offset (default)." },
				{ "ToolTip", "Shake start offset parameter." },
				{ "Zero.Comment", "/** Start with zero offset. */" },
				{ "Zero.Name", "EInitialWaveOscillatorOffsetType::Zero" },
				{ "Zero.ToolTip", "Start with zero offset." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
				nullptr,
				"EInitialWaveOscillatorOffsetType",
				"EInitialWaveOscillatorOffsetType",
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
class UScriptStruct* FWaveOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCAMERAS_API uint32 Get_Z_Construct_UScriptStruct_FWaveOscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveOscillator, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("WaveOscillator"), sizeof(FWaveOscillator), Get_Z_Construct_UScriptStruct_FWaveOscillator_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FWaveOscillator>()
{
	return FWaveOscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveOscillator(FWaveOscillator::StaticStruct, TEXT("/Script/GameplayCameras"), TEXT("WaveOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayCameras_StaticRegisterNativesFWaveOscillator
{
	FScriptStruct_GameplayCameras_StaticRegisterNativesFWaveOscillator()
	{
		UScriptStruct::DeferCppStructOps<FWaveOscillator>(FName(TEXT("WaveOscillator")));
	}
} ScriptStruct_GameplayCameras_StaticRegisterNativesFWaveOscillator;
	struct Z_Construct_UScriptStruct_FWaveOscillator_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialOffsetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A wave oscillator for a single number. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "A wave oscillator for a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveOscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Amplitude of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaveOscillator, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaveOscillator, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Defines how to begin the oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Defines how to begin the oscillation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType = { "InitialOffsetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaveOscillator, InitialOffsetType), Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"WaveOscillator",
		sizeof(FWaveOscillator),
		alignof(FWaveOscillator),
		Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveOscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveOscillator"), sizeof(FWaveOscillator), Get_Z_Construct_UScriptStruct_FWaveOscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaveOscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveOscillator_Hash() { return 1498212537U; }
	void UWaveOscillatorCameraShakePattern::StaticRegisterNativesUWaveOscillatorCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern_NoRegister()
	{
		return UWaveOscillatorCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics
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
	UObject* (*const Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Location,Rotation,FOV,Timing" },
		{ "Comment", "/**\n * A camera shake that uses oscillations to move the camera.\n */" },
		{ "IncludePath", "WaveOscillatorCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake that uses oscillations to move the camera." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amplitude multiplier for all location oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all location oscillation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Frequency multiplier for all location oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all location oscillation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the X axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the X axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, X), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the Y axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Y), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the Z axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Z), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Amplitude multiplier for all rotation oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all rotation oscillation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Frequency multiplier for all rotation oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all rotation oscillation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Pitch oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Pitch oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Pitch), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Yaw oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Yaw oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Yaw), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Roll oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Roll oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Roll), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "Comment", "/** FOV oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "FOV oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, FOV), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveOscillatorCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::ClassParams = {
		&UWaveOscillatorCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaveOscillatorCameraShakePattern, 989509340);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UWaveOscillatorCameraShakePattern>()
	{
		return UWaveOscillatorCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaveOscillatorCameraShakePattern(Z_Construct_UClass_UWaveOscillatorCameraShakePattern, &UWaveOscillatorCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UWaveOscillatorCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveOscillatorCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

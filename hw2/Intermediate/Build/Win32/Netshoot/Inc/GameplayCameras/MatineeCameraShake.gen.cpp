// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/MatineeCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeCameraShake() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVOscillator();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFOscillator();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FROscillator();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	static UEnum* EInitialOscillatorOffset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EInitialOscillatorOffset"));
		}
		return Singleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EInitialOscillatorOffset>()
	{
		return EInitialOscillatorOffset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialOscillatorOffset(EInitialOscillatorOffset_StaticEnum, TEXT("/Script/GameplayCameras"), TEXT("EInitialOscillatorOffset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Hash() { return 908824261U; }
	UEnum* Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialOscillatorOffset"), 0, Get_Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOO_OffsetRandom", (int64)EOO_OffsetRandom },
				{ "EOO_OffsetZero", (int64)EOO_OffsetZero },
				{ "EOO_MAX", (int64)EOO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Shake start offset parameter */" },
				{ "EOO_MAX.Name", "EOO_MAX" },
				{ "EOO_OffsetRandom.Comment", "/** Start with random offset (default). */" },
				{ "EOO_OffsetRandom.DisplayName", "Random" },
				{ "EOO_OffsetRandom.Name", "EOO_OffsetRandom" },
				{ "EOO_OffsetRandom.ToolTip", "Start with random offset (default)." },
				{ "EOO_OffsetZero.Comment", "/** Start with zero offset. */" },
				{ "EOO_OffsetZero.DisplayName", "Zero" },
				{ "EOO_OffsetZero.Name", "EOO_OffsetZero" },
				{ "EOO_OffsetZero.ToolTip", "Start with zero offset." },
				{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
				{ "ToolTip", "Shake start offset parameter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
				nullptr,
				"EInitialOscillatorOffset",
				"EInitialOscillatorOffset",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOscillatorWaveform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EOscillatorWaveform"));
		}
		return Singleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EOscillatorWaveform>()
	{
		return EOscillatorWaveform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOscillatorWaveform(EOscillatorWaveform_StaticEnum, TEXT("/Script/GameplayCameras"), TEXT("EOscillatorWaveform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Hash() { return 1953338692U; }
	UEnum* Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOscillatorWaveform"), 0, Get_Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOscillatorWaveform::SineWave", (int64)EOscillatorWaveform::SineWave },
				{ "EOscillatorWaveform::PerlinNoise", (int64)EOscillatorWaveform::PerlinNoise },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Types of waveforms that can be used for camera shake oscillators */" },
				{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
				{ "PerlinNoise.Comment", "/** Perlin noise */" },
				{ "PerlinNoise.Name", "EOscillatorWaveform::PerlinNoise" },
				{ "PerlinNoise.ToolTip", "Perlin noise" },
				{ "SineWave.Comment", "/** A sinusoidal wave */" },
				{ "SineWave.Name", "EOscillatorWaveform::SineWave" },
				{ "SineWave.ToolTip", "A sinusoidal wave" },
				{ "ToolTip", "Types of waveforms that can be used for camera shake oscillators" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
				nullptr,
				"EOscillatorWaveform",
				"EOscillatorWaveform",
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
class UScriptStruct* FVOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCAMERAS_API uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVOscillator, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVOscillator>()
{
	return FVOscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVOscillator(FVOscillator::StaticStruct, TEXT("/Script/GameplayCameras"), TEXT("VOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayCameras_StaticRegisterNativesFVOscillator
{
	FScriptStruct_GameplayCameras_StaticRegisterNativesFVOscillator()
	{
		UScriptStruct::DeferCppStructOps<FVOscillator>(FName(TEXT("VOscillator")));
	}
} ScriptStruct_GameplayCameras_StaticRegisterNativesFVOscillator;
	struct Z_Construct_UScriptStruct_FVOscillator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines FVector oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Defines FVector oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVOscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the X axis. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Oscillation in the X axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, X), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the Y axis. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Oscillation in the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, Y), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the Z axis. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Oscillation in the Z axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVOscillator, Z), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"VOscillator",
		sizeof(FVOscillator),
		alignof(FVOscillator),
		Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VOscillator"), sizeof(FVOscillator), Get_Z_Construct_UScriptStruct_FVOscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVOscillator_Hash() { return 1191457027U; }
class UScriptStruct* FROscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCAMERAS_API uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FROscillator, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FROscillator>()
{
	return FROscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FROscillator(FROscillator::StaticStruct, TEXT("/Script/GameplayCameras"), TEXT("ROscillator"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayCameras_StaticRegisterNativesFROscillator
{
	FScriptStruct_GameplayCameras_StaticRegisterNativesFROscillator()
	{
		UScriptStruct::DeferCppStructOps<FROscillator>(FName(TEXT("ROscillator")));
	}
} ScriptStruct_GameplayCameras_StaticRegisterNativesFROscillator;
	struct Z_Construct_UScriptStruct_FROscillator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines FRotator oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Defines FRotator oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FROscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Pitch oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Pitch oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Pitch), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Yaw oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Yaw oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Yaw), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Roll oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Roll oscillation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FROscillator, Roll), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"ROscillator",
		sizeof(FROscillator),
		alignof(FROscillator),
		Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FROscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ROscillator"), sizeof(FROscillator), Get_Z_Construct_UScriptStruct_FROscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FROscillator_Hash() { return 1652763870U; }
class UScriptStruct* FFOscillator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYCAMERAS_API uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOscillator, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FFOscillator>()
{
	return FFOscillator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOscillator(FFOscillator::StaticStruct, TEXT("/Script/GameplayCameras"), TEXT("FOscillator"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayCameras_StaticRegisterNativesFFOscillator
{
	FScriptStruct_GameplayCameras_StaticRegisterNativesFFOscillator()
	{
		UScriptStruct::DeferCppStructOps<FFOscillator>(FName(TEXT("FOscillator")));
	}
} ScriptStruct_GameplayCameras_StaticRegisterNativesFFOscillator;
	struct Z_Construct_UScriptStruct_FFOscillator_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Waveform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waveform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Waveform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines oscillation of a single number. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Defines oscillation of a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOscillator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Amplitude of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Defines how to begin (either at zero, or at a randomized value. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Defines how to begin (either at zero, or at a randomized value." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset = { "InitialOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, InitialOffset), Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Type of waveform to use for oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Type of waveform to use for oscillation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform = { "Waveform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFOscillator, Waveform), Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"FOscillator",
		sizeof(FFOscillator),
		alignof(FFOscillator),
		Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFOscillator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayCameras();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOscillator"), sizeof(FFOscillator), Get_Z_Construct_UScriptStruct_FFOscillator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOscillator_Hash() { return 840186431U; }
	DEFINE_FUNCTION(UMatineeCameraShake::execStartMatineeCameraShakeFromSource)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMatineeCameraShake**)Z_Param__Result=UMatineeCameraShake::StartMatineeCameraShakeFromSource(Z_Param_PlayerCameraManager,Z_Param_ShakeClass,Z_Param_SourceComponent,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatineeCameraShake::execStartMatineeCameraShake)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMatineeCameraShake**)Z_Param__Result=UMatineeCameraShake::StartMatineeCameraShake(Z_Param_PlayerCameraManager,Z_Param_ShakeClass,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatineeCameraShake::execReceiveIsFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveIsFinished_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UMatineeCameraShake_BlueprintUpdateCameraShake = FName(TEXT("BlueprintUpdateCameraShake"));
	void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo const& POV, FMinimalViewInfo& ModifiedPOV)
	{
		MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.Alpha=Alpha;
		Parms.POV=POV;
		Parms.ModifiedPOV=ModifiedPOV;
		ProcessEvent(FindFunctionChecked(NAME_UMatineeCameraShake_BlueprintUpdateCameraShake),&Parms);
		ModifiedPOV=Parms.ModifiedPOV;
	}
	static FName NAME_UMatineeCameraShake_ReceiveIsFinished = FName(TEXT("ReceiveIsFinished"));
	bool UMatineeCameraShake::ReceiveIsFinished() const
	{
		MatineeCameraShake_eventReceiveIsFinished_Parms Parms;
		const_cast<UMatineeCameraShake*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMatineeCameraShake_ReceiveIsFinished),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMatineeCameraShake_ReceivePlayShake = FName(TEXT("ReceivePlayShake"));
	void UMatineeCameraShake::ReceivePlayShake(float Scale)
	{
		MatineeCameraShake_eventReceivePlayShake_Parms Parms;
		Parms.Scale=Scale;
		ProcessEvent(FindFunctionChecked(NAME_UMatineeCameraShake_ReceivePlayShake),&Parms);
	}
	static FName NAME_UMatineeCameraShake_ReceiveStopShake = FName(TEXT("ReceiveStopShake"));
	void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
	{
		MatineeCameraShake_eventReceiveStopShake_Parms Parms;
		Parms.bImmediately=bImmediately ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMatineeCameraShake_ReceiveStopShake),&Parms);
	}
	void UMatineeCameraShake::StaticRegisterNativesUMatineeCameraShake()
	{
		UClass* Class = UMatineeCameraShake::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveIsFinished", &UMatineeCameraShake::execReceiveIsFinished },
			{ "StartMatineeCameraShake", &UMatineeCameraShake::execStartMatineeCameraShake },
			{ "StartMatineeCameraShakeFromSource", &UMatineeCameraShake::execStartMatineeCameraShakeFromSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedPOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV = { "ModifiedPOV", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms, ModifiedPOV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called every tick to let the shake modify the point of view */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Called every tick to let the shake modify the point of view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "BlueprintUpdateCameraShake", nullptr, nullptr, sizeof(MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms), Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MatineeCameraShake_eventReceiveIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatineeCameraShake_eventReceiveIsFinished_Parms), &Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called to allow a shake to decide when it's finished playing. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Called to allow a shake to decide when it's finished playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "ReceiveIsFinished", nullptr, nullptr, sizeof(MatineeCameraShake_eventReceiveIsFinished_Parms), Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventReceivePlayShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called when the shake starts playing */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Called when the shake starts playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "ReceivePlayShake", nullptr, nullptr, sizeof(MatineeCameraShake_eventReceivePlayShake_Parms), Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics
	{
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((MatineeCameraShake_eventReceiveStopShake_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatineeCameraShake_eventReceiveStopShake_Parms), &Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/**\n\x09 * Called when the shake is explicitly stopped.\n\x09 * @param bImmediatly\x09\x09If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Called when the shake is explicitly stopped.\n@param bImmediatly           If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "ReceiveStopShake", nullptr, nullptr, sizeof(MatineeCameraShake_eventReceiveStopShake_Parms), Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics
	{
		struct MatineeCameraShake_eventStartMatineeCameraShake_Parms
		{
			APlayerCameraManager* PlayerCameraManager;
			TSubclassOf<UMatineeCameraShake>  ShakeClass;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			UMatineeCameraShake* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, ShakeClass), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShake_Parms, ReturnValue), Z_Construct_UClass_UMatineeCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlayerCameraManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_ShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_UserPlaySpaceRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/**\n\x09 * Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a Matinee camera shake,\n\x09 * which some BP logic often uses directly to set oscillator/anim properties.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a Matinee camera shake,\nwhich some BP logic often uses directly to set oscillator/anim properties." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "StartMatineeCameraShake", nullptr, nullptr, sizeof(MatineeCameraShake_eventStartMatineeCameraShake_Parms), Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics
	{
		struct MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms
		{
			APlayerCameraManager* PlayerCameraManager;
			TSubclassOf<UMatineeCameraShake>  ShakeClass;
			UCameraShakeSourceComponent* SourceComponent;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			UMatineeCameraShake* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, ShakeClass), Z_Construct_UClass_UMatineeCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms, ReturnValue), Z_Construct_UClass_UMatineeCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlayerCameraManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_ShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/**\n\x09 * Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a Matinee camera shake,\n\x09 * which some BP logic often uses directly to set oscillator/anim properties.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a Matinee camera shake,\nwhich some BP logic often uses directly to set oscillator/anim properties." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShake, nullptr, "StartMatineeCameraShakeFromSource", nullptr, nullptr, sizeof(MatineeCameraShake_eventStartMatineeCameraShakeFromSource_Parms), Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatineeCameraShake_NoRegister()
	{
		return UMatineeCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVOscillation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FOVOscillation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimBlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomAnimSegmentDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomAnimSegmentDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomAnimSegment_MetaData[];
#endif
		static void NewProp_bRandomAnimSegment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomAnimSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillatorTimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OscillatorTimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceShakePattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceShakePattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatineeCameraShake_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatineeCameraShake_BlueprintUpdateCameraShake, "BlueprintUpdateCameraShake" }, // 1361647748
		{ &Z_Construct_UFunction_UMatineeCameraShake_ReceiveIsFinished, "ReceiveIsFinished" }, // 746668631
		{ &Z_Construct_UFunction_UMatineeCameraShake_ReceivePlayShake, "ReceivePlayShake" }, // 1281523727
		{ &Z_Construct_UFunction_UMatineeCameraShake_ReceiveStopShake, "ReceiveStopShake" }, // 3057248160
		{ &Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShake, "StartMatineeCameraShake" }, // 1235086072
		{ &Z_Construct_UFunction_UMatineeCameraShake_StartMatineeCameraShakeFromSource, "StartMatineeCameraShakeFromSource" }, // 4044883121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Legacy camera shake which can do either oscillation or run camera anims.\n */" },
		{ "HideCategories", "CameraShakePattern" },
		{ "IncludePath", "MatineeCameraShake.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Legacy camera shake which can do either oscillation or run camera anims." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationDuration_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationDuration = { "OscillationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, OscillationDuration), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of the blend-in, where the oscillation scales from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Duration of the blend-in, where the oscillation scales from 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendInTime = { "OscillationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, OscillationBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of the blend-out, where the oscillation scales from 1 to 0. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Duration of the blend-out, where the oscillation scales from 1 to 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendOutTime = { "OscillationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, OscillationBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RotOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Rotational oscillation */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Rotational oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RotOscillation = { "RotOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, RotOscillation), Z_Construct_UScriptStruct_FROscillator, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RotOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RotOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_LocOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Positional oscillation */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Positional oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_LocOscillation = { "LocOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, LocOscillation), Z_Construct_UScriptStruct_FVOscillator, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_LocOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_LocOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_FOVOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** FOV oscillation */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "FOV oscillation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_FOVOscillation = { "FOVOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, FOVOscillation), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_FOVOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_FOVOscillation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Scalar defining how fast to play the anim. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Scalar defining how fast to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimScale_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar defining how \"intense\" to play the anim. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimScale = { "AnimScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimScale), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendInTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-in time. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Linear blend-in time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendInTime = { "AnimBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-out time. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Linear blend-out time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendOutTime = { "AnimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When bRandomAnimSegment is true, this defines how long the anim should play. */" },
		{ "editcondition", "bRandomAnimSegment" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "When bRandomAnimSegment is true, this defines how long the anim should play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RandomAnimSegmentDuration = { "RandomAnimSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, RandomAnimSegmentDuration), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_Anim_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "Comment", "/** Source camera animation to play. Can be null. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Source camera animation to play. Can be null." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, Anim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_Anim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "Comment", "/** Source camera animation sequence to play. Can be null, but can't have both Anim and AnimSequence. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Source camera animation sequence to play. Can be null, but can't have both Anim and AnimSequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimSequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "Comment", "/**\n\x09* If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the CameraAnim.\n\x09* If false, play the full anim once, non-looped. Useful for getting variety out of a single looped CameraAnim asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the CameraAnim.\nIf false, play the full anim once, non-looped. Useful for getting variety out of a single looped CameraAnim asset." },
	};
#endif
	void Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit(void* Obj)
	{
		((UMatineeCameraShake*)Obj)->bRandomAnimSegment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment = { "bRandomAnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMatineeCameraShake), &Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Time remaining for oscillation shakes. Less than 0.f means shake infinitely. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Time remaining for oscillation shakes. Less than 0.f means shake infinitely." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillatorTimeRemaining = { "OscillatorTimeRemaining", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, OscillatorTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimInst_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The playing instance of the CameraAnim-based shake, if any. */" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "The playing instance of the CameraAnim-based shake, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimInst = { "AnimInst", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, AnimInst), Z_Construct_UClass_UCameraAnimInst_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_SequenceShakePattern_MetaData[] = {
		{ "Comment", "/** Sequence shake pattern for when using a sequence instead of a camera anim */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Sequence shake pattern for when using a sequence instead of a camera anim" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_SequenceShakePattern = { "SequenceShakePattern", nullptr, (EPropertyFlags)0x0022080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeCameraShake, SequenceShakePattern), Z_Construct_UClass_USequenceCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_SequenceShakePattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_SequenceShakePattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatineeCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillationBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RotOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_LocOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_FOVOscillation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimBlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_RandomAnimSegmentDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_bRandomAnimSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_OscillatorTimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_AnimInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeCameraShake_Statics::NewProp_SequenceShakePattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeCameraShake_Statics::ClassParams = {
		&UMatineeCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMatineeCameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeCameraShake, 2181401189);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UMatineeCameraShake>()
	{
		return UMatineeCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeCameraShake(Z_Construct_UClass_UMatineeCameraShake, &UMatineeCameraShake::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UMatineeCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeCameraShake);
	void UMatineeCameraShakePattern::StaticRegisterNativesUMatineeCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UMatineeCameraShakePattern_NoRegister()
	{
		return UMatineeCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shake pattern for the UMatineeCameraShake class.\n *\n * It doesn't do anything because, for backwards compatibility reasons, all the data\n * was left on the shake class itself... so this pattern delegates everything back\n * to the owner shake.\n */" },
		{ "IncludePath", "MatineeCameraShake.h" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Shake pattern for the UMatineeCameraShake class.\n\nIt doesn't do anything because, for backwards compatibility reasons, all the data\nwas left on the shake class itself... so this pattern delegates everything back\nto the owner shake." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeCameraShakePattern_Statics::ClassParams = {
		&UMatineeCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeCameraShakePattern, 3871313829);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UMatineeCameraShakePattern>()
	{
		return UMatineeCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeCameraShakePattern(Z_Construct_UClass_UMatineeCameraShakePattern, &UMatineeCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UMatineeCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeCameraShakePattern);
	void UMovieSceneMatineeCameraShakeEvaluator::StaticRegisterNativesUMovieSceneMatineeCameraShakeEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_NoRegister()
	{
		return UMovieSceneMatineeCameraShakeEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCameraShakeEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Custom sequencer evaluation code for Matinee camera shakes */" },
		{ "IncludePath", "MatineeCameraShake.h" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Custom sequencer evaluation code for Matinee camera shakes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMatineeCameraShakeEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::ClassParams = {
		&UMovieSceneMatineeCameraShakeEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMatineeCameraShakeEvaluator, 3758008772);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UMovieSceneMatineeCameraShakeEvaluator>()
	{
		return UMovieSceneMatineeCameraShakeEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMatineeCameraShakeEvaluator(Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator, &UMovieSceneMatineeCameraShakeEvaluator::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UMovieSceneMatineeCameraShakeEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMatineeCameraShakeEvaluator);
	DEFINE_FUNCTION(UMatineeCameraShakeFunctionLibrary::execConv_MatineeCameraShake)
	{
		P_GET_OBJECT(UCameraShakeBase,Z_Param_CameraShake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMatineeCameraShake**)Z_Param__Result=UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(Z_Param_CameraShake);
		P_NATIVE_END;
	}
	void UMatineeCameraShakeFunctionLibrary::StaticRegisterNativesUMatineeCameraShakeFunctionLibrary()
	{
		UClass* Class = UMatineeCameraShakeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_MatineeCameraShake", &UMatineeCameraShakeFunctionLibrary::execConv_MatineeCameraShake },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics
	{
		struct MatineeCameraShakeFunctionLibrary_eventConv_MatineeCameraShake_Parms
		{
			UCameraShakeBase* CameraShake;
			UMatineeCameraShake* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraShake;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShakeFunctionLibrary_eventConv_MatineeCameraShake_Parms, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatineeCameraShakeFunctionLibrary_eventConv_MatineeCameraShake_Parms, ReturnValue), Z_Construct_UClass_UMatineeCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::NewProp_CameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Camera Shakes" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary, nullptr, "Conv_MatineeCameraShake", nullptr, nullptr, sizeof(MatineeCameraShakeFunctionLibrary_eventConv_MatineeCameraShake_Parms), Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_NoRegister()
	{
		return UMatineeCameraShakeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake, "Conv_MatineeCameraShake" }, // 3745935122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library for autocasting from a base camera shake to a matinee camera shake.\n * This prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class.\n */" },
		{ "IncludePath", "MatineeCameraShake.h" },
		{ "ModuleRelativePath", "Public/MatineeCameraShake.h" },
		{ "ToolTip", "Blueprint function library for autocasting from a base camera shake to a matinee camera shake.\nThis prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeCameraShakeFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::ClassParams = {
		&UMatineeCameraShakeFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeCameraShakeFunctionLibrary, 378799183);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UMatineeCameraShakeFunctionLibrary>()
	{
		return UMatineeCameraShakeFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeCameraShakeFunctionLibrary(Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary, &UMatineeCameraShakeFunctionLibrary::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UMatineeCameraShakeFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeCameraShakeFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Private/LevelSequenceProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceProjectSettings() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
// End Cross Module References
	void ULevelSequenceProjectSettings::StaticRegisterNativesULevelSequenceProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister()
	{
		return ULevelSequenceProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultLockEngineToDisplayRate_MetaData[];
#endif
		static void NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultLockEngineToDisplayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultDisplayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTickResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultTickResolution;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultClockSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultClockSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultClockSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for level sequences\n" },
		{ "DisplayName", "Level Sequence" },
		{ "IncludePath", "LevelSequenceProjectSettings.h" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "ToolTip", "Settings for level sequences" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultLockEngineToDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj)
	{
		((ULevelSequenceProjectSettings*)Obj)->bDefaultLockEngineToDisplayRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate = { "bDefaultLockEngineToDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelSequenceProjectSettings), &Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate = { "DefaultDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultDisplayRate), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultTickResolution" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution = { "DefaultTickResolution", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultTickResolution), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultClockSource" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default clock source for newly created level sequences. Examples: 0: Tick, 1: Platform, 2: Audio, 3: RelativeTimecode, 4: Timecode, 5: Custom" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource = { "DefaultClockSource", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams = {
		&ULevelSequenceProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceProjectSettings, 1229867909);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceProjectSettings>()
	{
		return ULevelSequenceProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceProjectSettings(Z_Construct_UClass_ULevelSequenceProjectSettings, &ULevelSequenceProjectSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneFwd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFwd() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
// End Cross Module References
	static UEnum* EMovieSceneServerClientMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneServerClientMask"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneServerClientMask>()
	{
		return EMovieSceneServerClientMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneServerClientMask(EMovieSceneServerClientMask_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneServerClientMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Hash() { return 2241610472U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneServerClientMask"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneServerClientMask::None", (int64)EMovieSceneServerClientMask::None },
				{ "EMovieSceneServerClientMask::Server", (int64)EMovieSceneServerClientMask::Server },
				{ "EMovieSceneServerClientMask::Client", (int64)EMovieSceneServerClientMask::Client },
				{ "EMovieSceneServerClientMask::All", (int64)EMovieSceneServerClientMask::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "/**\n * \n */" },
				{ "All.Hidden", "" },
				{ "All.Name", "EMovieSceneServerClientMask::All" },
				{ "Bitflags", "" },
				{ "Client.Comment", "/**\n * \n */" },
				{ "Client.Name", "EMovieSceneServerClientMask::Client" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "None.Comment", "/**\n * \n */" },
				{ "None.Hidden", "" },
				{ "None.Name", "EMovieSceneServerClientMask::None" },
				{ "Server.Comment", "/**\n * \n */" },
				{ "Server.Name", "EMovieSceneServerClientMask::Server" },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneServerClientMask",
				"EMovieSceneServerClientMask",
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
	static UEnum* EMovieSceneSequenceFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneSequenceFlags"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSequenceFlags>()
	{
		return EMovieSceneSequenceFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneSequenceFlags(EMovieSceneSequenceFlags_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneSequenceFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Hash() { return 161670836U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneSequenceFlags"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneSequenceFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneSequenceFlags::None", (int64)EMovieSceneSequenceFlags::None },
				{ "EMovieSceneSequenceFlags::Volatile", (int64)EMovieSceneSequenceFlags::Volatile },
				{ "EMovieSceneSequenceFlags::BlockingEvaluation", (int64)EMovieSceneSequenceFlags::BlockingEvaluation },
				{ "EMovieSceneSequenceFlags::InheritedFlags", (int64)EMovieSceneSequenceFlags::InheritedFlags },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockingEvaluation.Comment", "/**\n\x09 * Indicates that a sequence must fully evaluate and apply its state every time it is updated, blocking until complete. Should be used sparingly as it will severely affect performance.\n\x09 */" },
				{ "BlockingEvaluation.Name", "EMovieSceneSequenceFlags::BlockingEvaluation" },
				{ "BlockingEvaluation.ToolTip", "Indicates that a sequence must fully evaluate and apply its state every time it is updated, blocking until complete. Should be used sparingly as it will severely affect performance." },
				{ "Comment", "/**\n * Bitfield flags that define special behavior for any UMovieSceneSequence.\n */" },
				{ "InheritedFlags.Comment", "/** Symbolic entry for all flags that should be inherited by parent sequences when present on a sub sequence */" },
				{ "InheritedFlags.Hidden", "" },
				{ "InheritedFlags.Name", "EMovieSceneSequenceFlags::InheritedFlags" },
				{ "InheritedFlags.ToolTip", "Symbolic entry for all flags that should be inherited by parent sequences when present on a sub sequence" },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "None.Comment", "/** Symbolic entry for no flags */" },
				{ "None.Hidden", "" },
				{ "None.Name", "EMovieSceneSequenceFlags::None" },
				{ "None.ToolTip", "Symbolic entry for no flags" },
				{ "ToolTip", "Bitfield flags that define special behavior for any UMovieSceneSequence." },
				{ "Volatile.Comment", "/**\n\x09 * Flag signifying that this sequence can change dynamically at runtime or during the game so the template must be checked for validity and recompiled as necessary before each evaluation.\n\x09 * The absence of this flag will result in the same compiled data being used for the duration of the program, as well as being pre-built during cook. As such, any dynamic changes to the \n\x09 * sequence will not be reflected in the evaluation itself. This flag *must* be set if *any* procedural changes will be made to the source sequence data in-game.\n\x09 */" },
				{ "Volatile.Name", "EMovieSceneSequenceFlags::Volatile" },
				{ "Volatile.ToolTip", "Flag signifying that this sequence can change dynamically at runtime or during the game so the template must be checked for validity and recompiled as necessary before each evaluation.\nThe absence of this flag will result in the same compiled data being used for the duration of the program, as well as being pre-built during cook. As such, any dynamic changes to the\nsequence will not be reflected in the evaluation itself. This flag *must* be set if *any* procedural changes will be made to the source sequence data in-game." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneSequenceFlags",
				"EMovieSceneSequenceFlags",
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
	static UEnum* EUpdateClockSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdateClockSource, Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdateClockSource"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EUpdateClockSource>()
	{
		return EUpdateClockSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateClockSource(EUpdateClockSource_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EUpdateClockSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EUpdateClockSource_Hash() { return 2144460810U; }
	UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateClockSource"), 0, Get_Z_Construct_UEnum_MovieScene_EUpdateClockSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateClockSource::Tick", (int64)EUpdateClockSource::Tick },
				{ "EUpdateClockSource::Platform", (int64)EUpdateClockSource::Platform },
				{ "EUpdateClockSource::Audio", (int64)EUpdateClockSource::Audio },
				{ "EUpdateClockSource::RelativeTimecode", (int64)EUpdateClockSource::RelativeTimecode },
				{ "EUpdateClockSource::Timecode", (int64)EUpdateClockSource::Timecode },
				{ "EUpdateClockSource::Custom", (int64)EUpdateClockSource::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Audio.Comment", "/** Use the audio clock for timing. Does not honor world or actor pause state. */" },
				{ "Audio.Name", "EUpdateClockSource::Audio" },
				{ "Audio.ToolTip", "Use the audio clock for timing. Does not honor world or actor pause state." },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Enum used to define how to update to a particular time\n */" },
				{ "Custom.Comment", "/** Custom clock source created and defined externally. */" },
				{ "Custom.Name", "EUpdateClockSource::Custom" },
				{ "Custom.ToolTip", "Custom clock source created and defined externally." },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "Platform.Comment", "/** Use the platform clock for timing. Does not honor world or actor pause state. */" },
				{ "Platform.Name", "EUpdateClockSource::Platform" },
				{ "Platform.ToolTip", "Use the platform clock for timing. Does not honor world or actor pause state." },
				{ "RelativeTimecode.Comment", "/** Time relative to the timecode provider for timing. Does not honor world or actor pause state. */" },
				{ "RelativeTimecode.Name", "EUpdateClockSource::RelativeTimecode" },
				{ "RelativeTimecode.ToolTip", "Time relative to the timecode provider for timing. Does not honor world or actor pause state." },
				{ "Tick.Comment", "/** Use the default world tick delta for timing. Honors world and actor pause state, but is susceptible to accumulation errors */" },
				{ "Tick.Name", "EUpdateClockSource::Tick" },
				{ "Tick.ToolTip", "Use the default world tick delta for timing. Honors world and actor pause state, but is susceptible to accumulation errors" },
				{ "Timecode.Comment", "/** Use current timecode provider for timing. Does not honor world or actor pause state. */" },
				{ "Timecode.Name", "EUpdateClockSource::Timecode" },
				{ "Timecode.ToolTip", "Use current timecode provider for timing. Does not honor world or actor pause state." },
				{ "ToolTip", "Enum used to define how to update to a particular time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EUpdateClockSource",
				"EUpdateClockSource",
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
	static UEnum* EMovieSceneEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneEvaluationType"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneEvaluationType>()
	{
		return EMovieSceneEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneEvaluationType(EMovieSceneEvaluationType_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Hash() { return 1867495308U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneEvaluationType"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneEvaluationType::FrameLocked", (int64)EMovieSceneEvaluationType::FrameLocked },
				{ "EMovieSceneEvaluationType::WithSubFrames", (int64)EMovieSceneEvaluationType::WithSubFrames },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrameLocked.Comment", "/** Play the sequence frame-locked to its playback rate (snapped to the tick resolution - no sub-frames) */" },
				{ "FrameLocked.Name", "EMovieSceneEvaluationType::FrameLocked" },
				{ "FrameLocked.ToolTip", "Play the sequence frame-locked to its playback rate (snapped to the tick resolution - no sub-frames)" },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "WithSubFrames.Comment", "/** Play the sequence in real-time, with sub-frame interpolation if necessary */" },
				{ "WithSubFrames.Name", "EMovieSceneEvaluationType::WithSubFrames" },
				{ "WithSubFrames.ToolTip", "Play the sequence in real-time, with sub-frame interpolation if necessary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneEvaluationType",
				"EMovieSceneEvaluationType",
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
	static UEnum* EMovieScenePlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePlayerStatus"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePlayerStatus::Type>()
	{
		return EMovieScenePlayerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieScenePlayerStatus(EMovieScenePlayerStatus_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieScenePlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Hash() { return 1598200131U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieScenePlayerStatus"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieScenePlayerStatus::Stopped", (int64)EMovieScenePlayerStatus::Stopped },
				{ "EMovieScenePlayerStatus::Playing", (int64)EMovieScenePlayerStatus::Playing },
				{ "EMovieScenePlayerStatus::Scrubbing", (int64)EMovieScenePlayerStatus::Scrubbing },
				{ "EMovieScenePlayerStatus::Jumping", (int64)EMovieScenePlayerStatus::Jumping },
				{ "EMovieScenePlayerStatus::Stepping", (int64)EMovieScenePlayerStatus::Stepping },
				{ "EMovieScenePlayerStatus::Paused", (int64)EMovieScenePlayerStatus::Paused },
				{ "EMovieScenePlayerStatus::MAX", (int64)EMovieScenePlayerStatus::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Jumping.Name", "EMovieScenePlayerStatus::Jumping" },
				{ "MAX.Name", "EMovieScenePlayerStatus::MAX" },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "Paused.Name", "EMovieScenePlayerStatus::Paused" },
				{ "Playing.Name", "EMovieScenePlayerStatus::Playing" },
				{ "Scrubbing.Name", "EMovieScenePlayerStatus::Scrubbing" },
				{ "Stepping.Name", "EMovieScenePlayerStatus::Stepping" },
				{ "Stopped.Name", "EMovieScenePlayerStatus::Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieScenePlayerStatus",
				"EMovieScenePlayerStatus::Type",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

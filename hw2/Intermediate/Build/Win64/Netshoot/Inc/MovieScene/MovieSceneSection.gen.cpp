// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSection() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneEasingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEasingSettings, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEasingSettings>()
{
	return FMovieSceneEasingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEasingSettings(FMovieSceneEasingSettings::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEasingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEasingSettings>(FName(TEXT("MovieSceneEasingSettings")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoEaseInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoEaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseIn_MetaData[];
#endif
		static void NewProp_bManualEaseIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManualEaseInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseOut_MetaData[];
#endif
		static void NewProp_bManualEaseOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManualEaseOutDuration;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseOutTime;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEasingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData[] = {
		{ "Comment", "/** Automatically applied ease in duration in frames */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Automatically applied ease in duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration = { "AutoEaseInDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData[] = {
		{ "Comment", "/** Automatically applied ease out time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Automatically applied ease out time" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration = { "AutoEaseOutDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn = { "EaseIn", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseIn), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData[] = {
		{ "Comment", "/** Whether to manually override this section's ease in time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether to manually override this section's ease in time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_SetBit(void* Obj)
	{
		((FMovieSceneEasingSettings*)Obj)->bManualEaseIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn = { "bManualEaseIn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneEasingSettings), &Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData[] = {
		{ "Comment", "/** Manually override this section's ease in duration in frames */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Manually override this section's ease in duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration = { "ManualEaseInDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut = { "EaseOut", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseOut), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData[] = {
		{ "Comment", "/** Whether to manually override this section's ease out time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether to manually override this section's ease out time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_SetBit(void* Obj)
	{
		((FMovieSceneEasingSettings*)Obj)->bManualEaseOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut = { "bManualEaseOut", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneEasingSettings), &Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData[] = {
		{ "Comment", "/** Manually override this section's ease-out duration in frames */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Manually override this section's ease-out duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration = { "ManualEaseOutDuration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime = { "AutoEaseInTime", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime = { "AutoEaseOutTime", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime = { "ManualEaseInTime", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime = { "ManualEaseOutTime", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEasingSettings",
		sizeof(FMovieSceneEasingSettings),
		alignof(FMovieSceneEasingSettings),
		Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Hash() { return 3726866362U; }
class UScriptStruct* FMovieSceneSectionEvalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionEvalOptions>()
{
	return FMovieSceneSectionEvalOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionEvalOptions(FMovieSceneSectionEvalOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionEvalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSectionEvalOptions>(FName(TEXT("MovieSceneSectionEvalOptions")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions;
	struct Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEditCompletionMode_MetaData[];
#endif
		static void NewProp_bCanEditCompletionMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEditCompletionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionEvalOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_SetBit(void* Obj)
	{
		((FMovieSceneSectionEvalOptions*)Obj)->bCanEditCompletionMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode = { "bCanEditCompletionMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSectionEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** When set to \"RestoreState\", this section will restore any animation back to its previous state  */" },
		{ "DisplayName", "When Finished" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "When set to \"RestoreState\", this section will restore any animation back to its previous state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode = { "CompletionMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionEvalOptions, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSectionEvalOptions",
		sizeof(FMovieSceneSectionEvalOptions),
		alignof(FMovieSceneSectionEvalOptions),
		Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Hash() { return 3976468449U; }
	DEFINE_FUNCTION(UMovieSceneSection::execGetPostRollFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPostRollFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetPostRollFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPostRollFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostRollFrames(Z_Param_InPostRollFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execGetPreRollFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPreRollFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetPreRollFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPreRollFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreRollFrames(Z_Param_InPreRollFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_bInIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_bInIsLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetIsActive)
	{
		P_GET_UBOOL(Z_Param_bInIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsActive(Z_Param_bInIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execGetOverlapPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOverlapPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetOverlapPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlapPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execGetRowIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRowIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetRowIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRowIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRowIndex(Z_Param_NewRowIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetBlendType)
	{
		P_GET_ENUM(EMovieSceneBlendType,Z_Param_InBlendType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendType(EMovieSceneBlendType(Z_Param_InBlendType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execGetBlendType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOptionalMovieSceneBlendType*)Z_Param__Result=P_THIS->GetBlendType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execSetCompletionMode)
	{
		P_GET_ENUM(EMovieSceneCompletionMode,Z_Param_InCompletionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompletionMode(EMovieSceneCompletionMode(Z_Param_InCompletionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSection::execGetCompletionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieSceneCompletionMode*)Z_Param__Result=P_THIS->GetCompletionMode();
		P_NATIVE_END;
	}
	void UMovieSceneSection::StaticRegisterNativesUMovieSceneSection()
	{
		UClass* Class = UMovieSceneSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlendType", &UMovieSceneSection::execGetBlendType },
			{ "GetCompletionMode", &UMovieSceneSection::execGetCompletionMode },
			{ "GetOverlapPriority", &UMovieSceneSection::execGetOverlapPriority },
			{ "GetPostRollFrames", &UMovieSceneSection::execGetPostRollFrames },
			{ "GetPreRollFrames", &UMovieSceneSection::execGetPreRollFrames },
			{ "GetRowIndex", &UMovieSceneSection::execGetRowIndex },
			{ "IsActive", &UMovieSceneSection::execIsActive },
			{ "IsLocked", &UMovieSceneSection::execIsLocked },
			{ "SetBlendType", &UMovieSceneSection::execSetBlendType },
			{ "SetCompletionMode", &UMovieSceneSection::execSetCompletionMode },
			{ "SetIsActive", &UMovieSceneSection::execSetIsActive },
			{ "SetIsLocked", &UMovieSceneSection::execSetIsLocked },
			{ "SetOverlapPriority", &UMovieSceneSection::execSetOverlapPriority },
			{ "SetPostRollFrames", &UMovieSceneSection::execSetPostRollFrames },
			{ "SetPreRollFrames", &UMovieSceneSection::execSetPreRollFrames },
			{ "SetRowIndex", &UMovieSceneSection::execSetRowIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics
	{
		struct MovieSceneSection_eventGetBlendType_Parms
		{
			FOptionalMovieSceneBlendType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetBlendType_Parms, ReturnValue), Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Gets this section's blend type\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets this section's blend type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetBlendType", nullptr, nullptr, sizeof(MovieSceneSection_eventGetBlendType_Parms), Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetBlendType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetBlendType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics
	{
		struct MovieSceneSection_eventGetCompletionMode_Parms
		{
			EMovieSceneCompletionMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetCompletionMode_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Gets this section's completion mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets this section's completion mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetCompletionMode", nullptr, nullptr, sizeof(MovieSceneSection_eventGetCompletionMode_Parms), Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics
	{
		struct MovieSceneSection_eventGetOverlapPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetOverlapPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets this section's priority over overlapping sections (higher wins) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets this section's priority over overlapping sections (higher wins)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetOverlapPriority", nullptr, nullptr, sizeof(MovieSceneSection_eventGetOverlapPriority_Parms), Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics
	{
		struct MovieSceneSection_eventGetPostRollFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetPostRollFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetPostRollFrames", nullptr, nullptr, sizeof(MovieSceneSection_eventGetPostRollFrames_Parms), Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics
	{
		struct MovieSceneSection_eventGetPreRollFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetPreRollFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetPreRollFrames", nullptr, nullptr, sizeof(MovieSceneSection_eventGetPreRollFrames_Parms), Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics
	{
		struct MovieSceneSection_eventGetRowIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventGetRowIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the row index for this section */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets the row index for this section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "GetRowIndex", nullptr, nullptr, sizeof(MovieSceneSection_eventGetRowIndex_Parms), Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_GetRowIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_GetRowIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics
	{
		struct MovieSceneSection_eventIsActive_Parms
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
	void Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSection_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSection_eventIsActive_Parms), &Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "IsActive", nullptr, nullptr, sizeof(MovieSceneSection_eventIsActive_Parms), Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics
	{
		struct MovieSceneSection_eventIsLocked_Parms
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
	void Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSection_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSection_eventIsLocked_Parms), &Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "IsLocked", nullptr, nullptr, sizeof(MovieSceneSection_eventIsLocked_Parms), Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics
	{
		struct MovieSceneSection_eventSetBlendType_Parms
		{
			EMovieSceneBlendType InBlendType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBlendType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InBlendType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::NewProp_InBlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::NewProp_InBlendType = { "InBlendType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetBlendType_Parms, InBlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::NewProp_InBlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::NewProp_InBlendType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Sets this section's blend type\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Sets this section's blend type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetBlendType", nullptr, nullptr, sizeof(MovieSceneSection_eventSetBlendType_Parms), Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetBlendType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetBlendType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics
	{
		struct MovieSceneSection_eventSetCompletionMode_Parms
		{
			EMovieSceneCompletionMode InCompletionMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompletionMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCompletionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::NewProp_InCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::NewProp_InCompletionMode = { "InCompletionMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetCompletionMode_Parms, InCompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::NewProp_InCompletionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::NewProp_InCompletionMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/*\n\x09 * Sets this section's completion mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "* Sets this section's completion mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetCompletionMode", nullptr, nullptr, sizeof(MovieSceneSection_eventSetCompletionMode_Parms), Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics
	{
		struct MovieSceneSection_eventSetIsActive_Parms
		{
			bool bInIsActive;
		};
		static void NewProp_bInIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::NewProp_bInIsActive_SetBit(void* Obj)
	{
		((MovieSceneSection_eventSetIsActive_Parms*)Obj)->bInIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::NewProp_bInIsActive = { "bInIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSection_eventSetIsActive_Parms), &Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::NewProp_bInIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::NewProp_bInIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Whether or not this section is active. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether or not this section is active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetIsActive", nullptr, nullptr, sizeof(MovieSceneSection_eventSetIsActive_Parms), Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics
	{
		struct MovieSceneSection_eventSetIsLocked_Parms
		{
			bool bInIsLocked;
		};
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((MovieSceneSection_eventSetIsLocked_Parms*)Obj)->bInIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSection_eventSetIsLocked_Parms), &Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Whether or not this section is locked. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether or not this section is locked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(MovieSceneSection_eventSetIsLocked_Parms), Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics
	{
		struct MovieSceneSection_eventSetOverlapPriority_Parms
		{
			int32 NewPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetOverlapPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets this section's priority over overlapping sections (higher wins) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Sets this section's priority over overlapping sections (higher wins)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetOverlapPriority", nullptr, nullptr, sizeof(MovieSceneSection_eventSetOverlapPriority_Parms), Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics
	{
		struct MovieSceneSection_eventSetPostRollFrames_Parms
		{
			int32 InPostRollFrames;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPostRollFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::NewProp_InPostRollFrames = { "InPostRollFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetPostRollFrames_Parms, InPostRollFrames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::NewProp_InPostRollFrames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets/sets the number of frames to continue 'postrolling' this section for after evaluation has ended. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets/sets the number of frames to continue 'postrolling' this section for after evaluation has ended." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetPostRollFrames", nullptr, nullptr, sizeof(MovieSceneSection_eventSetPostRollFrames_Parms), Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics
	{
		struct MovieSceneSection_eventSetPreRollFrames_Parms
		{
			int32 InPreRollFrames;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPreRollFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::NewProp_InPreRollFrames = { "InPreRollFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetPreRollFrames_Parms, InPreRollFrames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::NewProp_InPreRollFrames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the number of frames to prepare this section for evaluation before it actually starts. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Gets the number of frames to prepare this section for evaluation before it actually starts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetPreRollFrames", nullptr, nullptr, sizeof(MovieSceneSection_eventSetPreRollFrames_Parms), Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics
	{
		struct MovieSceneSection_eventSetRowIndex_Parms
		{
			int32 NewRowIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewRowIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::NewProp_NewRowIndex = { "NewRowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSection_eventSetRowIndex_Parms, NewRowIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::NewProp_NewRowIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets this section's new row index */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Sets this section's new row index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSection, nullptr, "SetRowIndex", nullptr, nullptr, sizeof(MovieSceneSection_eventSetRowIndex_Parms), Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSection_SetRowIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSection_SetRowIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister()
	{
		return UMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Easing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionRange;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimecodeSource;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreRollFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostRollFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverlapPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreRollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostRollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInfinite_MetaData[];
#endif
		static void NewProp_bIsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsInfiniteRange_MetaData[];
#endif
		static void NewProp_bSupportsInfiniteRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsInfiniteRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSection_GetBlendType, "GetBlendType" }, // 3601950612
		{ &Z_Construct_UFunction_UMovieSceneSection_GetCompletionMode, "GetCompletionMode" }, // 3756113586
		{ &Z_Construct_UFunction_UMovieSceneSection_GetOverlapPriority, "GetOverlapPriority" }, // 372124824
		{ &Z_Construct_UFunction_UMovieSceneSection_GetPostRollFrames, "GetPostRollFrames" }, // 1582860085
		{ &Z_Construct_UFunction_UMovieSceneSection_GetPreRollFrames, "GetPreRollFrames" }, // 1604263716
		{ &Z_Construct_UFunction_UMovieSceneSection_GetRowIndex, "GetRowIndex" }, // 2599401483
		{ &Z_Construct_UFunction_UMovieSceneSection_IsActive, "IsActive" }, // 3105815811
		{ &Z_Construct_UFunction_UMovieSceneSection_IsLocked, "IsLocked" }, // 1198089206
		{ &Z_Construct_UFunction_UMovieSceneSection_SetBlendType, "SetBlendType" }, // 2606075472
		{ &Z_Construct_UFunction_UMovieSceneSection_SetCompletionMode, "SetCompletionMode" }, // 964196484
		{ &Z_Construct_UFunction_UMovieSceneSection_SetIsActive, "SetIsActive" }, // 2568082699
		{ &Z_Construct_UFunction_UMovieSceneSection_SetIsLocked, "SetIsLocked" }, // 1794412338
		{ &Z_Construct_UFunction_UMovieSceneSection_SetOverlapPriority, "SetOverlapPriority" }, // 393964391
		{ &Z_Construct_UFunction_UMovieSceneSection_SetPostRollFrames, "SetPostRollFrames" }, // 2597809262
		{ &Z_Construct_UFunction_UMovieSceneSection_SetPreRollFrames, "SetPreRollFrames" }, // 1533291119
		{ &Z_Construct_UFunction_UMovieSceneSection_SetRowIndex, "SetRowIndex" }, // 3009748401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for movie scene sections\n */" },
		{ "IncludePath", "MovieSceneSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Base class for movie scene sections" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions = { "EvalOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData[] = {
		{ "Category", "Easing" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing = { "Easing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, Easing), Z_Construct_UScriptStruct_FMovieSceneEasingSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The range in which this section is active */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The range in which this section is active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange = { "SectionRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, SectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The timecode at which this movie scene section is based (ie. when it was recorded) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The timecode at which this movie scene section is based (ie. when it was recorded)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource = { "TimecodeSource", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, TimecodeSource), Z_Construct_UScriptStruct_FMovieSceneTimecodeSource, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The amount of time to prepare this section for evaluation before it actually starts. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to prepare this section for evaluation before it actually starts." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames = { "PreRollFrames", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, PreRollFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The amount of time to continue 'postrolling' this section for after evaluation has ended. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to continue 'postrolling' this section for after evaluation has ended." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames = { "PostRollFrames", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, PostRollFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData[] = {
		{ "Comment", "/** The row index that this section sits on */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The row index that this section sits on" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, RowIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData[] = {
		{ "Comment", "/** This section's priority over overlapping sections */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "This section's priority over overlapping sections" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority = { "OverlapPriority", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, OverlapPriority), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Toggle whether this section is active/inactive */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle whether this section is active/inactive" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Toggle whether this section is locked/unlocked */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle whether this section is locked/unlocked" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** The start time of the section */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The start time of the section" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData[] = {
		{ "Comment", "/** The end time of the section */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The end time of the section" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, EndTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData[] = {
		{ "Comment", "/** The amount of time to prepare this section for evaluation before it actually starts. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to prepare this section for evaluation before it actually starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime = { "PreRollTime", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, PreRollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData[] = {
		{ "Comment", "/** The amount of time to continue 'postrolling' this section for after evaluation has ended. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to continue 'postrolling' this section for after evaluation has ended." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime = { "PostRollTime", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, PostRollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData[] = {
		{ "Comment", "/** Toggle to set this section to be infinite */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle to set this section to be infinite" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsInfinite_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite = { "bIsInfinite", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData[] = {
		{ "Comment", "/** Does this section support infinite ranges in the track editor? */" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Does this section support infinite ranges in the track editor?" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bSupportsInfiniteRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange = { "bSupportsInfiniteRange", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSection, BlendType), Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSection_Statics::ClassParams = {
		&UMovieSceneSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers),
		0,
		0x002800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSection, 3125057583);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSection>()
	{
		return UMovieSceneSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSection(Z_Construct_UClass_UMovieSceneSection, &UMovieSceneSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

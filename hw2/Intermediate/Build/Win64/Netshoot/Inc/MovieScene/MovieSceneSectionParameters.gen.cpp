// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSectionParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionParameters() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneSectionParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionParameters, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionParameters>()
{
	return FMovieSceneSectionParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionParameters(FMovieSceneSectionParameters::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSectionParameters>(FName(TEXT("MovieSceneSectionParameters")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters;
	struct Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[];
#endif
		static void NewProp_bCanLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostrollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostrollTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to skip at the beginning of the sub-sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to skip at the beginning of the sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Whether this section supports looping the sub-sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Whether this section supports looping the sub-sequence." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_SetBit(void* Obj)
	{
		((FMovieSceneSectionParameters*)Obj)->bCanLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSectionParameters), &Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to skip at the beginning of the sub-sequence. */" },
		{ "EditCondition", "bCanLoop" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to skip at the beginning of the sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Number of frames (in display rate) to offset the first loop of the sub-sequence. */" },
		{ "EditCondition", "bCanLoop" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames (in display rate) to offset the first loop of the sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Playback time scaling factor. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Playback time scaling factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Hierachical bias. Higher bias will take precedence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Hierachical bias. Higher bias will take precedence." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias = { "HierarchicalBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, HierarchicalBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime = { "PrerollTime", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, PrerollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime = { "PostrollTime", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSectionParameters, PostrollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_bCanLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_EndFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSectionParameters",
		sizeof(FMovieSceneSectionParameters),
		alignof(FMovieSceneSectionParameters),
		Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Hash() { return 1011280529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Evaluation/MovieSceneCameraAnimTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraAnimSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraAnimSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneCameraAnimSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraAnimSectionTemplate"), sizeof(FMovieSceneCameraAnimSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraAnimSectionTemplate>()
{
	return FMovieSceneCameraAnimSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate(FMovieSceneCameraAnimSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraAnimSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneCameraAnimSectionTemplate>(FName(TEXT("MovieSceneCameraAnimSectionTemplate")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraAnimSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Section template for a camera anim */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraAnimTemplate.h" },
		{ "ToolTip", "Section template for a camera anim" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Source data taken from the section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraAnimTemplate.h" },
		{ "ToolTip", "Source data taken from the section" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SourceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Cached section start time */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraAnimTemplate.h" },
		{ "ToolTip", "Cached section start time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SourceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::NewProp_SectionStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraAnimSectionTemplate",
		sizeof(FMovieSceneCameraAnimSectionTemplate),
		alignof(FMovieSceneCameraAnimSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraAnimSectionTemplate"), sizeof(FMovieSceneCameraAnimSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionTemplate_Hash() { return 677428568U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

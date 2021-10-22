// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Evaluation/MovieSceneCameraShakeTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraShakeSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneCameraShakeSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSectionTemplate>()
{
	return FMovieSceneCameraShakeSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate(FMovieSceneCameraShakeSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraShakeSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneCameraShakeSectionTemplate>(FName(TEXT("MovieSceneCameraShakeSectionTemplate")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraShakeSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Section template for a camera anim */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Section template for a camera anim" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Source data taken from the section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Source data taken from the section" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Cached section start time */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Cached section start time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraShakeSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SourceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::NewProp_SectionStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraShakeSectionTemplate",
		sizeof(FMovieSceneCameraShakeSectionTemplate),
		alignof(FMovieSceneCameraShakeSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraShakeSectionTemplate"), sizeof(FMovieSceneCameraShakeSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionTemplate_Hash() { return 1466258004U; }
	void UMovieSceneCameraShakeEvaluator::StaticRegisterNativesUMovieSceneCameraShakeEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_NoRegister()
	{
		return UMovieSceneCameraShakeEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom logic for playing camera shakes inside sequences.\n *\n * Factory methods for these evaluators are registered on the FMovieSceneCameraShakeEvaluatorRegistry. An evaluator is created for\n * each camera shake running in a sequence.\n */" },
		{ "IncludePath", "Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCameraShakeTemplate.h" },
		{ "ToolTip", "Custom logic for playing camera shakes inside sequences.\n\nFactory methods for these evaluators are registered on the FMovieSceneCameraShakeEvaluatorRegistry. An evaluator is created for\neach camera shake running in a sequence." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::ClassParams = {
		&UMovieSceneCameraShakeEvaluator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraShakeEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraShakeEvaluator, 901343404);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeEvaluator>()
	{
		return UMovieSceneCameraShakeEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraShakeEvaluator(Z_Construct_UClass_UMovieSceneCameraShakeEvaluator, &UMovieSceneCameraShakeEvaluator::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraShakeEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

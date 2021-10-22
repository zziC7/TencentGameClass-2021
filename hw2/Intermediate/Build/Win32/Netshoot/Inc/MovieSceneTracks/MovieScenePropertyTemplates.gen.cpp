// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplates() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneStringPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneStringPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneStringPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneStringPropertySectionTemplate>()
{
	return FMovieSceneStringPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneStringPropertySectionTemplate(FMovieSceneStringPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneStringPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneStringPropertySectionTemplate>(FName(TEXT("MovieSceneStringPropertySectionTemplate")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneStringPropertySectionTemplate, StringCurve), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::NewProp_StringCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneStringPropertySectionTemplate",
		sizeof(FMovieSceneStringPropertySectionTemplate),
		alignof(FMovieSceneStringPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_Hash() { return 288785249U; }

static_assert(std::is_polymorphic<FMovieSceneBoolPropertySectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneBoolPropertySectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneBoolPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBoolPropertySectionTemplate>()
{
	return FMovieSceneBoolPropertySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate(FMovieSceneBoolPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneBoolPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneBoolPropertySectionTemplate>(FName(TEXT("MovieSceneBoolPropertySectionTemplate")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve = { "BoolCurve", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBoolPropertySectionTemplate, BoolCurve), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::NewProp_BoolCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneBoolPropertySectionTemplate",
		sizeof(FMovieSceneBoolPropertySectionTemplate),
		alignof(FMovieSceneBoolPropertySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_Hash() { return 3598620156U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

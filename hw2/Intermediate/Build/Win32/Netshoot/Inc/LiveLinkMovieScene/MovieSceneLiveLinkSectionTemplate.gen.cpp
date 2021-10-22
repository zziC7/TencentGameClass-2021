// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSectionTemplate() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneLiveLinkSectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneLiveLinkSectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

class UScriptStruct* FMovieSceneLiveLinkSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate, Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("MovieSceneLiveLinkSectionTemplate"), sizeof(FMovieSceneLiveLinkSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Hash());
	}
	return Singleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneLiveLinkSectionTemplate>()
{
	return FMovieSceneLiveLinkSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate(FMovieSceneLiveLinkSectionTemplate::StaticStruct, TEXT("/Script/LiveLinkMovieScene"), TEXT("MovieSceneLiveLinkSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFMovieSceneLiveLinkSectionTemplate
{
	FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFMovieSceneLiveLinkSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneLiveLinkSectionTemplate>(FName(TEXT("MovieSceneLiveLinkSectionTemplate")));
	}
} ScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFMovieSceneLiveLinkSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectPreset;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChannelMask_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelMask;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubSectionsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A movie scene evaluation template for post move settings live link sections. */" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
		{ "ToolTip", "A movie scene evaluation template for post move settings live link sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneLiveLinkSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset = { "SubjectPreset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, SubjectPreset), Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_Inner = { "ChannelMask", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, ChannelMask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_Inner = { "SubSectionsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubSectionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData = { "SubSectionsData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, SubSectionsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneLiveLinkSectionTemplate",
		sizeof(FMovieSceneLiveLinkSectionTemplate),
		alignof(FMovieSceneLiveLinkSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneLiveLinkSectionTemplate"), sizeof(FMovieSceneLiveLinkSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Hash() { return 2279396255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkStructProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkStructProperties() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
// End Cross Module References
class UScriptStruct* FLiveLinkSubSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubSectionData, Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkSubSectionData"), sizeof(FLiveLinkSubSectionData), Get_Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Hash());
	}
	return Singleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkSubSectionData>()
{
	return FLiveLinkSubSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubSectionData(FLiveLinkSubSectionData::StaticStruct, TEXT("/Script/LiveLinkMovieScene"), TEXT("LiveLinkSubSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkSubSectionData
{
	FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkSubSectionData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkSubSectionData>(FName(TEXT("LiveLinkSubSectionData")));
	}
} ScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkSubSectionData;
	struct Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubSectionData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkPropertyData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubSectionData, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		nullptr,
		&NewStructOps,
		"LiveLinkSubSectionData",
		sizeof(FLiveLinkSubSectionData),
		alignof(FLiveLinkSubSectionData),
		Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubSectionData"), sizeof(FLiveLinkSubSectionData), Get_Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Hash() { return 2140160515U; }
class UScriptStruct* FLiveLinkPropertyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPropertyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPropertyData, Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkPropertyData"), sizeof(FLiveLinkPropertyData), Get_Z_Construct_UScriptStruct_FLiveLinkPropertyData_Hash());
	}
	return Singleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkPropertyData>()
{
	return FLiveLinkPropertyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkPropertyData(FLiveLinkPropertyData::StaticStruct, TEXT("/Script/LiveLinkMovieScene"), TEXT("LiveLinkPropertyData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkPropertyData
{
	FScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkPropertyData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkPropertyData>(FName(TEXT("LiveLinkPropertyData")));
	}
} ScriptStruct_LiveLinkMovieScene_StaticRegisterNativesFLiveLinkPropertyData;
	struct Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatChannel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringChannel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerChannel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntegerChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolChannel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByteChannel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPropertyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner = { "FloatChannel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel = { "FloatChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, FloatChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner = { "StringChannel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel = { "StringChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, StringChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner = { "IntegerChannel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, IntegerChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner = { "BoolChannel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel = { "BoolChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, BoolChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner = { "ByteChannel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel = { "ByteChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPropertyData, ByteChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		nullptr,
		&NewStructOps,
		"LiveLinkPropertyData",
		sizeof(FLiveLinkPropertyData),
		alignof(FLiveLinkPropertyData),
		Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPropertyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkPropertyData"), sizeof(FLiveLinkPropertyData), Get_Z_Construct_UScriptStruct_FLiveLinkPropertyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPropertyData_Hash() { return 2360280481U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

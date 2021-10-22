// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneActorReferenceData>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneActorReferenceData cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

class UScriptStruct* FMovieSceneActorReferenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceData"), sizeof(FMovieSceneActorReferenceData), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceData>()
{
	return FMovieSceneActorReferenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneActorReferenceData(FMovieSceneActorReferenceData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneActorReferenceData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceData()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneActorReferenceData>(FName(TEXT("MovieSceneActorReferenceData")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceData;
	struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A curve of events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Sorted array of key times */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Sorted array of key times" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value used when there are no keys */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Default value used when there are no keys" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, DefaultValue), Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneActorReferenceData",
		sizeof(FMovieSceneActorReferenceData),
		alignof(FMovieSceneActorReferenceData),
		Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneActorReferenceData"), sizeof(FMovieSceneActorReferenceData), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Hash() { return 4141701369U; }
class UScriptStruct* FMovieSceneActorReferenceKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceKey"), sizeof(FMovieSceneActorReferenceKey), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceKey>()
{
	return FMovieSceneActorReferenceKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneActorReferenceKey(FMovieSceneActorReferenceKey::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneActorReferenceKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceKey
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceKey()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneActorReferenceKey>(FName(TEXT("MovieSceneActorReferenceKey")));
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneActorReferenceKey;
	struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, Object), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneActorReferenceKey, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneActorReferenceKey",
		sizeof(FMovieSceneActorReferenceKey),
		alignof(FMovieSceneActorReferenceKey),
		Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneActorReferenceKey"), sizeof(FMovieSceneActorReferenceKey), Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Hash() { return 2404862586U; }
	void UMovieSceneActorReferenceSection::StaticRegisterNativesUMovieSceneActorReferenceSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister()
	{
		return UMovieSceneActorReferenceSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorReferenceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuidIndexCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorGuidIndexCurve;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorGuidStrings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGuidStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorGuidStrings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single actor reference point section\n */" },
		{ "IncludePath", "Sections/MovieSceneActorReferenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A single actor reference point section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData = { "ActorReferenceData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorReferenceData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData[] = {
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve = { "ActorGuidIndexCurve", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidIndexCurve_DEPRECATED), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidStrings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneActorReferenceSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams = {
		&UMovieSceneActorReferenceSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneActorReferenceSection, 3642472472);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneActorReferenceSection>()
	{
		return UMovieSceneActorReferenceSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneActorReferenceSection(Z_Construct_UClass_UMovieSceneActorReferenceSection, &UMovieSceneActorReferenceSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneActorReferenceSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSpawnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnable() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* ESpawnOwnership_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESpawnOwnership, Z_Construct_UPackage__Script_MovieScene(), TEXT("ESpawnOwnership"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<ESpawnOwnership>()
	{
		return ESpawnOwnership_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpawnOwnership(ESpawnOwnership_StaticEnum, TEXT("/Script/MovieScene"), TEXT("ESpawnOwnership"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_ESpawnOwnership_Hash() { return 691863583U; }
	UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpawnOwnership"), 0, Get_Z_Construct_UEnum_MovieScene_ESpawnOwnership_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpawnOwnership::InnerSequence", (int64)ESpawnOwnership::InnerSequence },
				{ "ESpawnOwnership::MasterSequence", (int64)ESpawnOwnership::MasterSequence },
				{ "ESpawnOwnership::External", (int64)ESpawnOwnership::External },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "External.Comment", "/** Once spawned, the object's lifetime is managed externally. */" },
				{ "External.Name", "ESpawnOwnership::External" },
				{ "External.ToolTip", "Once spawned, the object's lifetime is managed externally." },
				{ "InnerSequence.Comment", "/** The object's lifetime is managed by the sequence that spawned it */" },
				{ "InnerSequence.Name", "ESpawnOwnership::InnerSequence" },
				{ "InnerSequence.ToolTip", "The object's lifetime is managed by the sequence that spawned it" },
				{ "MasterSequence.Comment", "/** The object's lifetime is managed by the outermost sequence */" },
				{ "MasterSequence.Name", "ESpawnOwnership::MasterSequence" },
				{ "MasterSequence.ToolTip", "The object's lifetime is managed by the outermost sequence" },
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"ESpawnOwnership",
				"ESpawnOwnership",
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
class UScriptStruct* FMovieSceneSpawnable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSpawnable, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSpawnable"), sizeof(FMovieSceneSpawnable), Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSpawnable>()
{
	return FMovieSceneSpawnable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSpawnable(FMovieSceneSpawnable::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSpawnable"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSpawnable>(FName(TEXT("MovieSceneSpawnable")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable;
	struct Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinuouslyRespawn_MetaData[];
#endif
		static void NewProp_bContinuouslyRespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinuouslyRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNetAddressableName_MetaData[];
#endif
		static void NewProp_bNetAddressableName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNetAddressableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateTracksWhenNotSpawned_MetaData[];
#endif
		static void NewProp_bEvaluateTracksWhenNotSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateTracksWhenNotSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectTemplate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildPossessables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPossessables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildPossessables;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ownership_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ownership_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ownership;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MovieSceneSpawnable describes an object that can be spawned for this MovieScene\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "MovieSceneSpawnable describes an object that can be spawned for this MovieScene" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSpawnable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Optional spawn transform */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Optional spawn transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each spawn key even if it is destroyed externally. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "When enabled, this spawnable will always be respawned if it gets destroyed externally. When disabled, this object will only ever be spawned once for each spawn key even if it is destroyed externally." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_SetBit(void* Obj)
	{
		((FMovieSceneSpawnable*)Obj)->bContinuouslyRespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn = { "bContinuouslyRespawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSpawnable), &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "When enabled, the actor will be spawned with a unique name so that it can be addressable between clients and servers." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_SetBit(void* Obj)
	{
		((FMovieSceneSpawnable*)Obj)->bNetAddressableName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName = { "bNetAddressableName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSpawnable), &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** When enabled, any tracks on this object binding or its children will still be evaluated even when the object is not spawned. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "When enabled, any tracks on this object binding or its children will still be evaluated even when the object is not spawned." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned_SetBit(void* Obj)
	{
		((FMovieSceneSpawnable*)Obj)->bEvaluateTracksWhenNotSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned = { "bEvaluateTracksWhenNotSpawned", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneSpawnable), &Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Unique identifier of the spawnable object. */// @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//\x09\x09\x09\x09\x09Sometimes we'll need to generate fresh Guids.\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Unique identifier of the spawnable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name label */// @todo sequencer: Should be editor-only probably\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Name label // @todo sequencer: Should be editor-only probably" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate = { "ObjectTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, ObjectTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_Inner = { "ChildPossessables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_MetaData[] = {
		{ "Comment", "/** Set of GUIDs to possessable object bindings that are bound to an object inside this spawnable */// @todo sequencer: This should be a TSet, but they don't duplicate correctly atm\n" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Set of GUIDs to possessable object bindings that are bound to an object inside this spawnable // @todo sequencer: This should be a TSet, but they don't duplicate correctly atm" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables = { "ChildPossessables", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, ChildPossessables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_MetaData[] = {
		{ "Comment", "/** Property indicating where ownership responsibility for this object lies */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Property indicating where ownership responsibility for this object lies" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership = { "Ownership", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, Ownership), Z_Construct_UEnum_MovieScene_ESpawnOwnership, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass_MetaData[] = {
		{ "Comment", "/** Deprecated generated class */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Deprecated generated class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass = { "GeneratedClass", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, GeneratedClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName_MetaData[] = {
		{ "Comment", "/** Name of level to spawn into */" },
		{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
		{ "ToolTip", "Name of level to spawn into" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSpawnable, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bContinuouslyRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bNetAddressableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_bEvaluateTracksWhenNotSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ObjectTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_ChildPossessables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_Ownership,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_GeneratedClass,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::NewProp_LevelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSpawnable",
		sizeof(FMovieSceneSpawnable),
		alignof(FMovieSceneSpawnable),
		Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSpawnable"), sizeof(FMovieSceneSpawnable), Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSpawnable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_Hash() { return 2950181129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

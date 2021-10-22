// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceLegacyObjectReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
// End Cross Module References
class UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObjectReferenceMap>()
{
	return FLevelSequenceObjectReferenceMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObjectReferenceMap(FLevelSequenceObjectReferenceMap::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObjectReferenceMap"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequenceObjectReferenceMap>(FName(TEXT("LevelSequenceObjectReferenceMap")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap;
	struct Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceObjectReferenceMap",
		sizeof(FLevelSequenceObjectReferenceMap),
		alignof(FLevelSequenceObjectReferenceMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Hash() { return 1248983415U; }
class UScriptStruct* FLevelSequenceLegacyObjectReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceLegacyObjectReference>()
{
	return FLevelSequenceLegacyObjectReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceLegacyObjectReference(FLevelSequenceLegacyObjectReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceLegacyObjectReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequenceLegacyObjectReference>(FName(TEXT("LevelSequenceLegacyObjectReference")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference;
	struct Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
		{ "ToolTip", "Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceLegacyObjectReference",
		sizeof(FLevelSequenceLegacyObjectReference),
		alignof(FLevelSequenceLegacyObjectReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Hash() { return 4214423224U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

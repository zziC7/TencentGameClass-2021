// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceObject() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObject>()
{
	return FLevelSequenceObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObject(FLevelSequenceObject::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObject"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequenceObject>(FName(TEXT("LevelSequenceObject")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject;
	struct Z_Construct_UScriptStruct_FLevelSequenceObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectOrOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ObjectOrOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CachedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for animated Actor objects.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Structure for animated Actor objects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData[] = {
		{ "Comment", "/** The object or the owner of the object being possessed. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "The object or the owner of the object being possessed." },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner = { "ObjectOrOwner", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceObject, ObjectOrOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** Optional name of an ActorComponent. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Optional name of an ActorComponent." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceObject, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData[] = {
		{ "Comment", "/** Cached pointer to the Actor component (only if ComponentName is set). */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Cached pointer to the Actor component (only if ComponentName is set)." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceObject, CachedComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceObject",
		sizeof(FLevelSequenceObject),
		alignof(FLevelSequenceObject),
		Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_Hash() { return 1738228412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

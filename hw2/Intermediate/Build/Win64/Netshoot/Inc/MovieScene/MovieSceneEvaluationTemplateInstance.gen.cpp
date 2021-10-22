// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplateInstance() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
// End Cross Module References
class UScriptStruct* FMovieSceneRootEvaluationTemplateInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneRootEvaluationTemplateInstance"), sizeof(FMovieSceneRootEvaluationTemplateInstance), Get_Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneRootEvaluationTemplateInstance>()
{
	return FMovieSceneRootEvaluationTemplateInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance(FMovieSceneRootEvaluationTemplateInstance::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneRootEvaluationTemplateInstance"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneRootEvaluationTemplateInstance
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneRootEvaluationTemplateInstance()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneRootEvaluationTemplateInstance>(FName(TEXT("MovieSceneRootEvaluationTemplateInstance")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneRootEvaluationTemplateInstance;
	struct Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakRootSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakRootSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompiledDataManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompiledDataManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitySystemLinker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntitySystemLinker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorInstances_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectorInstances_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DirectorInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Root evaluation template instance used to play back any sequence\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
		{ "ToolTip", "Root evaluation template instance used to play back any sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneRootEvaluationTemplateInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence = { "WeakRootSequence", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, WeakRootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager = { "CompiledDataManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, CompiledDataManager), Z_Construct_UClass_UMovieSceneCompiledDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker = { "EntitySystemLinker", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_ValueProp = { "DirectorInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_Key_KeyProp = { "DirectorInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData[] = {
		{ "Comment", "/** Map of director instances by sequence ID. Kept alive by this map assuming this struct is reference collected */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
		{ "ToolTip", "Map of director instances by sequence ID. Kept alive by this map assuming this struct is reference collected" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances = { "DirectorInstances", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, DirectorInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_WeakRootSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_CompiledDataManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_DirectorInstances,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneRootEvaluationTemplateInstance",
		sizeof(FMovieSceneRootEvaluationTemplateInstance),
		alignof(FMovieSceneRootEvaluationTemplateInstance),
		Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneRootEvaluationTemplateInstance"), sizeof(FMovieSceneRootEvaluationTemplateInstance), Get_Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Hash() { return 4263088565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

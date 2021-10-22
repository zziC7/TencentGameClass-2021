// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationOperand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationOperand() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationOperand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationOperand"), sizeof(FMovieSceneEvaluationOperand), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationOperand>()
{
	return FMovieSceneEvaluationOperand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationOperand(FMovieSceneEvaluationOperand::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationOperand"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationOperand
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationOperand()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEvaluationOperand>(FName(TEXT("MovieSceneEvaluationOperand")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationOperand;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationOperand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** A GUID relating to either a posessable, or a spawnable binding */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "A GUID relating to either a posessable, or a spawnable binding" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationOperand, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** The ID of the sequence within which the object binding resides */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "The ID of the sequence within which the object binding resides" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationOperand, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationOperand",
		sizeof(FMovieSceneEvaluationOperand),
		alignof(FMovieSceneEvaluationOperand),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationOperand"), sizeof(FMovieSceneEvaluationOperand), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Hash() { return 742794381U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

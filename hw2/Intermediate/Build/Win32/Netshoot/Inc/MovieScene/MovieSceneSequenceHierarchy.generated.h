// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequenceHierarchy_generated_h
#error "MovieSceneSequenceHierarchy.generated.h already included, missing '#pragma once' in MovieSceneSequenceHierarchy.h"
#endif
#define MOVIESCENE_MovieSceneSequenceHierarchy_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__RootNode() { return STRUCT_OFFSET(FMovieSceneSequenceHierarchy, RootNode); } \
	FORCEINLINE static uint32 __PPO__Tree() { return STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Tree); } \
	FORCEINLINE static uint32 __PPO__SubSequences() { return STRUCT_OFFSET(FMovieSceneSequenceHierarchy, SubSequences); } \
	FORCEINLINE static uint32 __PPO__Hierarchy() { return STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Hierarchy); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceHierarchy>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSubSequenceTree>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSubSequenceTreeEntry>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceHierarchyNode>();

#define Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SubSectionSignature() { return STRUCT_OFFSET(FMovieSceneSubSequenceData, SubSectionSignature); }


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSubSequenceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

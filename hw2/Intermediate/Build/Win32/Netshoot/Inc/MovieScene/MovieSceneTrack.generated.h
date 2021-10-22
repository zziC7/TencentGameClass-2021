// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTrack_generated_h
#error "MovieSceneTrack.generated.h already included, missing '#pragma once' in MovieSceneTrack.h"
#endif
#define MOVIESCENE_MovieSceneTrack_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackDisplayOptions>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackEvalOptions>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrack, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrack)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrack, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrack)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneTrack(UMovieSceneTrack&&); \
	MOVIESCENE_API UMovieSceneTrack(const UMovieSceneTrack&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneTrack(UMovieSceneTrack&&); \
	MOVIESCENE_API UMovieSceneTrack(const UMovieSceneTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrack)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsEvalDisabled() { return STRUCT_OFFSET(UMovieSceneTrack, bIsEvalDisabled); } \
	FORCEINLINE static uint32 __PPO__RowsDisabled() { return STRUCT_OFFSET(UMovieSceneTrack, RowsDisabled); } \
	FORCEINLINE static uint32 __PPO__EvaluationFieldGuid() { return STRUCT_OFFSET(UMovieSceneTrack, EvaluationFieldGuid); } \
	FORCEINLINE static uint32 __PPO__EvaluationField() { return STRUCT_OFFSET(UMovieSceneTrack, EvaluationField); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_133_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

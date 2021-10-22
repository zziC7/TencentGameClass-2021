// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h
#error "MovieSceneCameraCutSection.generated.h already included, missing '#pragma once' in MovieSceneCameraCutSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraCutSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraBindingID); \
	DECLARE_FUNCTION(execGetCameraBindingID);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraBindingID); \
	DECLARE_FUNCTION(execGetCameraBindingID);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCameraCutSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCameraCutSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCameraCutSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCameraCutSection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraCutSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(UMovieSceneCameraCutSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const UMovieSceneCameraCutSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(UMovieSceneCameraCutSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCameraCutSection(const UMovieSceneCameraCutSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCameraCutSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraGuid_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__CameraBindingID() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraBindingID); } \
	FORCEINLINE static uint32 __PPO__InitialCameraCutTransform() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, InitialCameraCutTransform); } \
	FORCEINLINE static uint32 __PPO__bHasInitialCameraCutTransform() { return STRUCT_OFFSET(UMovieSceneCameraCutSection, bHasInitialCameraCutTransform); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_23_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneCameraCutSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

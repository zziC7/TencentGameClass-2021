// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScenePropertySystem_generated_h
#error "MovieScenePropertySystem.generated.h already included, missing '#pragma once' in MovieScenePropertySystem.h"
#endif
#define MOVIESCENETRACKS_MovieScenePropertySystem_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePropertySystem(); \
	friend struct Z_Construct_UClass_UMovieScenePropertySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertySystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertySystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScenePropertySystem*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScenePropertySystem(); \
	friend struct Z_Construct_UClass_UMovieScenePropertySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertySystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertySystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScenePropertySystem*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertySystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertySystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertySystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertySystem(UMovieScenePropertySystem&&); \
	NO_API UMovieScenePropertySystem(const UMovieScenePropertySystem&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertySystem(UMovieScenePropertySystem&&); \
	NO_API UMovieScenePropertySystem(const UMovieScenePropertySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertySystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertySystem)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstantiatorSystem() { return STRUCT_OFFSET(UMovieScenePropertySystem, InstantiatorSystem); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_15_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScenePropertySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneEntityProvider_generated_h
#error "IMovieSceneEntityProvider.generated.h already included, missing '#pragma once' in IMovieSceneEntityProvider.h"
#endif
#define MOVIESCENE_IMovieSceneEntityProvider_generated_h

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEntityProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEntityProvider(UMovieSceneEntityProvider&&); \
	NO_API UMovieSceneEntityProvider(const UMovieSceneEntityProvider&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEntityProvider(UMovieSceneEntityProvider&&); \
	NO_API UMovieSceneEntityProvider(const UMovieSceneEntityProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEntityProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityProvider)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEntityProvider(); \
	friend struct Z_Construct_UClass_UMovieSceneEntityProvider_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEntityProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneEntityProvider)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEntityProvider() {} \
public: \
	typedef UMovieSceneEntityProvider UClassType; \
	typedef IMovieSceneEntityProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneEntityProvider() {} \
public: \
	typedef UMovieSceneEntityProvider UClassType; \
	typedef IMovieSceneEntityProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_96_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_100_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEntityProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

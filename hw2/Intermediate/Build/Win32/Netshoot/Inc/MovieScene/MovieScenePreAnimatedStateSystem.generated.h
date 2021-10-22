// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieScenePreAnimatedStateSystem_generated_h
#error "MovieScenePreAnimatedStateSystem.generated.h already included, missing '#pragma once' in MovieScenePreAnimatedStateSystem.h"
#endif
#define MOVIESCENE_MovieScenePreAnimatedStateSystem_generated_h

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePreAnimatedStateSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePreAnimatedStateSystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePreAnimatedStateSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePreAnimatedStateSystemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePreAnimatedStateSystemInterface(UMovieScenePreAnimatedStateSystemInterface&&); \
	NO_API UMovieScenePreAnimatedStateSystemInterface(const UMovieScenePreAnimatedStateSystemInterface&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePreAnimatedStateSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePreAnimatedStateSystemInterface(UMovieScenePreAnimatedStateSystemInterface&&); \
	NO_API UMovieScenePreAnimatedStateSystemInterface(const UMovieScenePreAnimatedStateSystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePreAnimatedStateSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePreAnimatedStateSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePreAnimatedStateSystemInterface)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface(); \
	friend struct Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePreAnimatedStateSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePreAnimatedStateSystemInterface)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieScenePreAnimatedStateSystemInterface() {} \
public: \
	typedef UMovieScenePreAnimatedStateSystemInterface UClassType; \
	typedef IMovieScenePreAnimatedStateSystemInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieScenePreAnimatedStateSystemInterface() {} \
public: \
	typedef UMovieScenePreAnimatedStateSystemInterface UClassType; \
	typedef IMovieScenePreAnimatedStateSystemInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_38_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_41_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScenePreAnimatedStateSystemInterface>();

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCachePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneCachePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCachePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneCachePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneCachePreAnimatedStateSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCachePreAnimatedStateSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCachePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCachePreAnimatedStateSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneCachePreAnimatedStateSystem(UMovieSceneCachePreAnimatedStateSystem&&); \
	MOVIESCENE_API UMovieSceneCachePreAnimatedStateSystem(const UMovieSceneCachePreAnimatedStateSystem&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneCachePreAnimatedStateSystem(UMovieSceneCachePreAnimatedStateSystem&&); \
	MOVIESCENE_API UMovieSceneCachePreAnimatedStateSystem(const UMovieSceneCachePreAnimatedStateSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCachePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCachePreAnimatedStateSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCachePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_84_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_90_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCachePreAnimatedStateSystem>();

#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_SPARSE_DATA
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneRestorePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneRestorePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneRestorePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneRestorePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneRestorePreAnimatedStateSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRestorePreAnimatedStateSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneRestorePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRestorePreAnimatedStateSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneRestorePreAnimatedStateSystem(UMovieSceneRestorePreAnimatedStateSystem&&); \
	MOVIESCENE_API UMovieSceneRestorePreAnimatedStateSystem(const UMovieSceneRestorePreAnimatedStateSystem&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneRestorePreAnimatedStateSystem(UMovieSceneRestorePreAnimatedStateSystem&&); \
	MOVIESCENE_API UMovieSceneRestorePreAnimatedStateSystem(const UMovieSceneRestorePreAnimatedStateSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneRestorePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRestorePreAnimatedStateSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRestorePreAnimatedStateSystem)


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_113_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_SPARSE_DATA \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_119_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneRestorePreAnimatedStateSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

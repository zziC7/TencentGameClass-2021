// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequence;
struct FMovieSceneObjectBindingID;
class AActor;
class UObject;
#ifdef LEVELSEQUENCE_LevelSequenceDirector_generated_h
#error "LevelSequenceDirector.generated.h already included, missing '#pragma once' in LevelSequenceDirector.h"
#endif
#define LEVELSEQUENCE_LevelSequenceDirector_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_EVENT_PARMS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceDirector(); \
	friend struct Z_Construct_UClass_ULevelSequenceDirector_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceDirector)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceDirector(); \
	friend struct Z_Construct_UClass_ULevelSequenceDirector_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceDirector)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceDirector(ULevelSequenceDirector&&); \
	NO_API ULevelSequenceDirector(const ULevelSequenceDirector&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceDirector(ULevelSequenceDirector&&); \
	NO_API ULevelSequenceDirector(const ULevelSequenceDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceDirector)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_15_PROLOG \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_EVENT_PARMS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceDirector>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint(); \
	friend struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULegacyLevelSequenceDirectorBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULegacyLevelSequenceDirectorBlueprint)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_INCLASS \
private: \
	static void StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint(); \
	friend struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULegacyLevelSequenceDirectorBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULegacyLevelSequenceDirectorBlueprint)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelSequenceDirectorBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelSequenceDirectorBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(ULegacyLevelSequenceDirectorBlueprint&&); \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const ULegacyLevelSequenceDirectorBlueprint&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(ULegacyLevelSequenceDirectorBlueprint&&); \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const ULegacyLevelSequenceDirectorBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelSequenceDirectorBlueprint)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_89_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULegacyLevelSequenceDirectorBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

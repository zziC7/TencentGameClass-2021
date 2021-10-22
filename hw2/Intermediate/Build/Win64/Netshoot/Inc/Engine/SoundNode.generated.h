// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNode_generated_h
#error "SoundNode.generated.h already included, missing '#pragma once' in SoundNode.h"
#endif
#define ENGINE_SoundNode_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNode, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNode(); \
	friend struct Z_Construct_UClass_USoundNode_Statics; \
public: \
	DECLARE_CLASS(USoundNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNode) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNode(); \
	friend struct Z_Construct_UClass_USoundNode_Statics; \
public: \
	DECLARE_CLASS(USoundNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNode) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNode(USoundNode&&); \
	NO_API USoundNode(const USoundNode&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNode(USoundNode&&); \
	NO_API USoundNode(const USoundNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNode)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_56_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

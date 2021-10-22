// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StreamableRenderAsset_generated_h
#error "StreamableRenderAsset.generated.h already included, missing '#pragma once' in StreamableRenderAsset.h"
#endif
#define ENGINE_StreamableRenderAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamableRenderAsset(); \
	friend struct Z_Construct_UClass_UStreamableRenderAsset_Statics; \
public: \
	DECLARE_CLASS(UStreamableRenderAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStreamableRenderAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUStreamableRenderAsset(); \
	friend struct Z_Construct_UClass_UStreamableRenderAsset_Statics; \
public: \
	DECLARE_CLASS(UStreamableRenderAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStreamableRenderAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableRenderAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableRenderAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableRenderAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableRenderAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStreamableRenderAsset(UStreamableRenderAsset&&); \
	ENGINE_API UStreamableRenderAsset(const UStreamableRenderAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableRenderAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStreamableRenderAsset(UStreamableRenderAsset&&); \
	ENGINE_API UStreamableRenderAsset(const UStreamableRenderAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableRenderAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableRenderAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableRenderAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ForceMipLevelsToBeResidentTimestamp() { return STRUCT_OFFSET(UStreamableRenderAsset, ForceMipLevelsToBeResidentTimestamp); } \
	FORCEINLINE static uint32 __PPO__StreamingIndex() { return STRUCT_OFFSET(UStreamableRenderAsset, StreamingIndex); } \
	FORCEINLINE static uint32 __PPO__CachedCombinedLODBias() { return STRUCT_OFFSET(UStreamableRenderAsset, CachedCombinedLODBias); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StreamableRenderAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStreamableRenderAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

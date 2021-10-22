// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeVirtualTexture_generated_h
#error "RuntimeVirtualTexture.generated.h already included, missing '#pragma once' in RuntimeVirtualTexture.h"
#endif
#define ENGINE_RuntimeVirtualTexture_generated_h

#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPageTableSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTileBorderSize); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execGetTileCount);


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPageTableSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTileBorderSize); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execGetTileCount);


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTexture(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTexture)


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTexture(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTexture)


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTexture(URuntimeVirtualTexture&&); \
	NO_API URuntimeVirtualTexture(const URuntimeVirtualTexture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTexture(URuntimeVirtualTexture&&); \
	NO_API URuntimeVirtualTexture(const URuntimeVirtualTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTexture)


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileCount() { return STRUCT_OFFSET(URuntimeVirtualTexture, TileCount); } \
	FORCEINLINE static uint32 __PPO__TileSize() { return STRUCT_OFFSET(URuntimeVirtualTexture, TileSize); } \
	FORCEINLINE static uint32 __PPO__TileBorderSize() { return STRUCT_OFFSET(URuntimeVirtualTexture, TileBorderSize); } \
	FORCEINLINE static uint32 __PPO__MaterialType() { return STRUCT_OFFSET(URuntimeVirtualTexture, MaterialType); } \
	FORCEINLINE static uint32 __PPO__bCompressTextures() { return STRUCT_OFFSET(URuntimeVirtualTexture, bCompressTextures); } \
	FORCEINLINE static uint32 __PPO__bClearTextures() { return STRUCT_OFFSET(URuntimeVirtualTexture, bClearTextures); } \
	FORCEINLINE static uint32 __PPO__bSinglePhysicalSpace() { return STRUCT_OFFSET(URuntimeVirtualTexture, bSinglePhysicalSpace); } \
	FORCEINLINE static uint32 __PPO__bPrivateSpace() { return STRUCT_OFFSET(URuntimeVirtualTexture, bPrivateSpace); } \
	FORCEINLINE static uint32 __PPO__bAdaptive() { return STRUCT_OFFSET(URuntimeVirtualTexture, bAdaptive); } \
	FORCEINLINE static uint32 __PPO__bContinuousUpdate() { return STRUCT_OFFSET(URuntimeVirtualTexture, bContinuousUpdate); } \
	FORCEINLINE static uint32 __PPO__RemoveLowMips() { return STRUCT_OFFSET(URuntimeVirtualTexture, RemoveLowMips); } \
	FORCEINLINE static uint32 __PPO__LODGroup() { return STRUCT_OFFSET(URuntimeVirtualTexture, LODGroup); } \
	FORCEINLINE static uint32 __PPO__Size_DEPRECATED() { return STRUCT_OFFSET(URuntimeVirtualTexture, Size_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__StreamingTexture_DEPRECATED() { return STRUCT_OFFSET(URuntimeVirtualTexture, StreamingTexture_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeVirtualTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeVirtualTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

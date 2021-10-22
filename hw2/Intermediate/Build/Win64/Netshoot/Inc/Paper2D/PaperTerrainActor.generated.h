// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTerrainActor_generated_h
#error "PaperTerrainActor.generated.h already included, missing '#pragma once' in PaperTerrainActor.h"
#endif
#define PAPER2D_PaperTerrainActor_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_SPARSE_DATA
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_RPC_WRAPPERS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperTerrainActor(); \
	friend struct Z_Construct_UClass_APaperTerrainActor_Statics; \
public: \
	DECLARE_CLASS(APaperTerrainActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperTerrainActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPaperTerrainActor(); \
	friend struct Z_Construct_UClass_APaperTerrainActor_Statics; \
public: \
	DECLARE_CLASS(APaperTerrainActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperTerrainActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperTerrainActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperTerrainActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperTerrainActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperTerrainActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperTerrainActor(APaperTerrainActor&&); \
	NO_API APaperTerrainActor(const APaperTerrainActor&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperTerrainActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperTerrainActor(APaperTerrainActor&&); \
	NO_API APaperTerrainActor(const APaperTerrainActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperTerrainActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperTerrainActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperTerrainActor)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(APaperTerrainActor, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__SplineComponent() { return STRUCT_OFFSET(APaperTerrainActor, SplineComponent); } \
	FORCEINLINE static uint32 __PPO__RenderComponent() { return STRUCT_OFFSET(APaperTerrainActor, RenderComponent); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_15_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_SPARSE_DATA \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTerrainActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class APaperTerrainActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

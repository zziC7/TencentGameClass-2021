// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FIntPoint;
class UTextureRenderTarget2D;
class UObject;
#ifdef LANDSCAPE_LandscapeBlueprintBrushBase_generated_h
#error "LandscapeBlueprintBrushBase.generated.h already included, missing '#pragma once' in LandscapeBlueprintBrushBase.h"
#endif
#define LANDSCAPE_LandscapeBlueprintBrushBase_generated_h

#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_RPC_WRAPPERS \
	virtual void Initialize_Implementation(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize); \
	virtual UTextureRenderTarget2D* Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName); \
 \
	DECLARE_FUNCTION(execRequestLandscapeUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRender);


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Initialize_Implementation(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize); \
	virtual UTextureRenderTarget2D* Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName); \
 \
	DECLARE_FUNCTION(execRequestLandscapeUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRender);


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_EVENT_PARMS \
	struct LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms \
	{ \
		TArray<UObject*> OutStreamableAssets; \
	}; \
	struct LandscapeBlueprintBrushBase_eventInitialize_Parms \
	{ \
		FTransform InLandscapeTransform; \
		FIntPoint InLandscapeSize; \
		FIntPoint InLandscapeRenderTargetSize; \
	}; \
	struct LandscapeBlueprintBrushBase_eventRender_Parms \
	{ \
		bool InIsHeightmap; \
		UTextureRenderTarget2D* InCombinedResult; \
		FName InWeightmapLayerName; \
		UTextureRenderTarget2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LandscapeBlueprintBrushBase_eventRender_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrushBase(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintBrushBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrushBase)


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrushBase(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintBrushBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrushBase)


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintBrushBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrushBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrushBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintBrushBase(ALandscapeBlueprintBrushBase&&); \
	NO_API ALandscapeBlueprintBrushBase(const ALandscapeBlueprintBrushBase&); \
public:


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapeBlueprintBrushBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapeBlueprintBrushBase(ALandscapeBlueprintBrushBase&&); \
	NO_API ALandscapeBlueprintBrushBase(const ALandscapeBlueprintBrushBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapeBlueprintBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrushBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrushBase)


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_13_PROLOG \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_EVENT_PARMS


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_INCLASS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeBlueprintBrushBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeBlueprintBrushBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

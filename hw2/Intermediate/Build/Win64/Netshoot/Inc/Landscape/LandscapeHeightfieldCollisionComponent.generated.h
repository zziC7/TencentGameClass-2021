// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULandscapeComponent;
#ifdef LANDSCAPE_LandscapeHeightfieldCollisionComponent_generated_h
#error "LandscapeHeightfieldCollisionComponent.generated.h already included, missing '#pragma once' in LandscapeHeightfieldCollisionComponent.h"
#endif
#define LANDSCAPE_LandscapeHeightfieldCollisionComponent_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderComponent);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderComponent);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightfieldCollisionComponent, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeHeightfieldCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeHeightfieldCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeHeightfieldCollisionComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeHeightfieldCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeHeightfieldCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeHeightfieldCollisionComponent) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeHeightfieldCollisionComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeHeightfieldCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(ULandscapeHeightfieldCollisionComponent&&); \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(const ULandscapeHeightfieldCollisionComponent&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(ULandscapeHeightfieldCollisionComponent&&); \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(const ULandscapeHeightfieldCollisionComponent&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeHeightfieldCollisionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeHeightfieldCollisionComponent)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_40_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeHeightfieldCollisionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeHeightfieldCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

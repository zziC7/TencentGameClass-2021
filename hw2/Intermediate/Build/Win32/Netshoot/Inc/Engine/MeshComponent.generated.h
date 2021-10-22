// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMaterialInterface;
#ifdef ENGINE_MeshComponent_generated_h
#error "MeshComponent.generated.h already included, missing '#pragma once' in MeshComponent.h"
#endif
#define ENGINE_MeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMaterials); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnMaterials); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetMaterials);


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVectorParameterValueOnMaterials); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnMaterials); \
	DECLARE_FUNCTION(execPrestreamTextures); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execGetMaterials);


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshComponent(); \
	friend struct Z_Construct_UClass_UMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMeshComponent(); \
	friend struct Z_Construct_UClass_UMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshComponent(UMeshComponent&&); \
	NO_API UMeshComponent(const UMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshComponent(UMeshComponent&&); \
	NO_API UMeshComponent(const UMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

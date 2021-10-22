// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
struct FSlateBrush;
struct FLinearColor;
struct FMargin;
#ifdef UMG_Border_generated_h
#error "Border.generated.h already included, missing '#pragma once' in Border.h"
#endif
#define UMG_Border_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushColor); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetContentColorAndOpacity);


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushColor); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetContentColorAndOpacity);


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder)


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Border_h_28_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Border."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Border_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

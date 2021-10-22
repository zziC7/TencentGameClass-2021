// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UUniformGridSlot;
struct FMargin;
#ifdef UMG_UniformGridPanel_generated_h
#error "UniformGridPanel.generated.h already included, missing '#pragma once' in UniformGridPanel.h"
#endif
#define UMG_UniformGridPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid); \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight); \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth); \
	DECLARE_FUNCTION(execSetSlotPadding);


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid); \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight); \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth); \
	DECLARE_FUNCTION(execSetSlotPadding);


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UniformGridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUniformGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

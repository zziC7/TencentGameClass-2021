// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FButtonStyle;
#ifdef UMG_Button_generated_h
#error "Button.generated.h already included, missing '#pragma once' in Button.h"
#endif
#define UMG_Button_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Button_h_20_DELEGATE \
static inline void FOnButtonHoverEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonHoverEvent) \
{ \
	OnButtonHoverEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_19_DELEGATE \
static inline void FOnButtonReleasedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonReleasedEvent) \
{ \
	OnButtonReleasedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_18_DELEGATE \
static inline void FOnButtonPressedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonPressedEvent) \
{ \
	OnButtonPressedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_17_DELEGATE \
static inline void FOnButtonClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClickedEvent) \
{ \
	OnButtonClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execSetStyle);


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execSetStyle);


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButton(); \
	friend struct Z_Construct_UClass_UButton_Statics; \
public: \
	DECLARE_CLASS(UButton, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UButton)


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUButton(); \
	friend struct Z_Construct_UClass_UButton_Statics; \
public: \
	DECLARE_CLASS(UButton, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UButton)


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButton(UButton&&); \
	NO_API UButton(const UButton&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButton(UButton&&); \
	NO_API UButton(const UButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButton)


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Button_h_30_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Button_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Button_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Button."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Button_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

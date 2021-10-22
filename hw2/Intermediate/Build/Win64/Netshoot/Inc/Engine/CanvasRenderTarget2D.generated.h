// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvas;
class UObject;
class UCanvasRenderTarget2D;
#ifdef ENGINE_CanvasRenderTarget2D_generated_h
#error "CanvasRenderTarget2D.generated.h already included, missing '#pragma once' in CanvasRenderTarget2D.h"
#endif
#define ENGINE_CanvasRenderTarget2D_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_15_DELEGATE \
struct _Script_Engine_eventOnCanvasRenderTargetUpdate_Parms \
{ \
	UCanvas* Canvas; \
	int32 Width; \
	int32 Height; \
}; \
static inline void FOnCanvasRenderTargetUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCanvasRenderTargetUpdate, UCanvas* Canvas, int32 Width, int32 Height) \
{ \
	_Script_Engine_eventOnCanvasRenderTargetUpdate_Parms Parms; \
	Parms.Canvas=Canvas; \
	Parms.Width=Width; \
	Parms.Height=Height; \
	OnCanvasRenderTargetUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execCreateCanvasRenderTarget2D); \
	DECLARE_FUNCTION(execUpdateResource);


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execCreateCanvasRenderTarget2D); \
	DECLARE_FUNCTION(execUpdateResource);


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_EVENT_PARMS \
	struct CanvasRenderTarget2D_eventReceiveUpdate_Parms \
	{ \
		UCanvas* Canvas; \
		int32 Width; \
		int32 Height; \
	};


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasRenderTarget2D(); \
	friend struct Z_Construct_UClass_UCanvasRenderTarget2D_Statics; \
public: \
	DECLARE_CLASS(UCanvasRenderTarget2D, UTextureRenderTarget2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvasRenderTarget2D)


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasRenderTarget2D(); \
	friend struct Z_Construct_UClass_UCanvasRenderTarget2D_Statics; \
public: \
	DECLARE_CLASS(UCanvasRenderTarget2D, UTextureRenderTarget2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCanvasRenderTarget2D)


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasRenderTarget2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasRenderTarget2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasRenderTarget2D(UCanvasRenderTarget2D&&); \
	NO_API UCanvasRenderTarget2D(const UCanvasRenderTarget2D&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasRenderTarget2D(UCanvasRenderTarget2D&&); \
	NO_API UCanvasRenderTarget2D(const UCanvasRenderTarget2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasRenderTarget2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasRenderTarget2D)


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UCanvasRenderTarget2D, World); } \
	FORCEINLINE static uint32 __PPO__bShouldClearRenderTargetOnReceiveUpdate() { return STRUCT_OFFSET(UCanvasRenderTarget2D, bShouldClearRenderTargetOnReceiveUpdate); }


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_26_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasRenderTarget2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCanvasRenderTarget2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

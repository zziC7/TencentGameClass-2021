// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UMGSequencePlayer_generated_h
#error "UMGSequencePlayer.generated.h already included, missing '#pragma once' in UMGSequencePlayer.h"
#endif
#define UMG_UMGSequencePlayer_generated_h

#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUserTag); \
	DECLARE_FUNCTION(execGetUserTag);


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUserTag); \
	DECLARE_FUNCTION(execGetUserTag);


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSequencePlayer(); \
	friend struct Z_Construct_UClass_UUMGSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UUMGSequencePlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUMGSequencePlayer)


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSequencePlayer(); \
	friend struct Z_Construct_UClass_UUMGSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UUMGSequencePlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUMGSequencePlayer)


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSequencePlayer(UUMGSequencePlayer&&); \
	NO_API UUMGSequencePlayer(const UUMGSequencePlayer&); \
public:


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSequencePlayer(UUMGSequencePlayer&&); \
	NO_API UUMGSequencePlayer(const UUMGSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSequencePlayer)


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Animation() { return STRUCT_OFFSET(UUMGSequencePlayer, Animation); } \
	FORCEINLINE static uint32 __PPO__RootTemplateInstance() { return STRUCT_OFFSET(UUMGSequencePlayer, RootTemplateInstance); }


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_17_PROLOG
#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UMGSequencePlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUMGSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

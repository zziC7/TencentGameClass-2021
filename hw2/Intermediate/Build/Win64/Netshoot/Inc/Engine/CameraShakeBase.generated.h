// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakePattern;
#ifdef ENGINE_CameraShakeBase_generated_h
#error "CameraShakeBase.generated.h already included, missing '#pragma once' in CameraShakeBase.h"
#endif
#define ENGINE_CameraShakeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeInfo>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(FCameraShakeDuration, Duration); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FCameraShakeDuration, Type); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeDuration>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeStopParams>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeUpdateResult>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeScrubParams>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeUpdateParams>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeStartParams>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct Z_Construct_UClass_UCameraShakeBase_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_INCLASS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct Z_Construct_UClass_UCameraShakeBase_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraShakeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeBase(UCameraShakeBase&&); \
	NO_API UCameraShakeBase(const UCameraShakeBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeBase(UCameraShakeBase&&); \
	NO_API UCameraShakeBase(const UCameraShakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootShakePattern() { return STRUCT_OFFSET(UCameraShakeBase, RootShakePattern); } \
	FORCEINLINE static uint32 __PPO__CameraManager() { return STRUCT_OFFSET(UCameraShakeBase, CameraManager); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_356_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakeBase>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct Z_Construct_UClass_UCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_INCLASS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct Z_Construct_UClass_UCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraShakePattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakePattern(UCameraShakePattern&&); \
	NO_API UCameraShakePattern(const UCameraShakePattern&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakePattern(UCameraShakePattern&&); \
	NO_API UCameraShakePattern(const UCameraShakePattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_548_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_551_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakePattern>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h


#define FOREACH_ENUM_ECAMERASHAKEDURATIONTYPE(op) \
	op(ECameraShakeDurationType::Fixed) \
	op(ECameraShakeDurationType::Infinite) \
	op(ECameraShakeDurationType::Custom) 

enum class ECameraShakeDurationType : uint8;
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>();

#define FOREACH_ENUM_ECAMERASHAKEUPDATERESULTFLAGS(op) \
	op(ECameraShakeUpdateResultFlags::ApplyAsAbsolute) \
	op(ECameraShakeUpdateResultFlags::SkipAutoScale) \
	op(ECameraShakeUpdateResultFlags::SkipAutoPlaySpace) \
	op(ECameraShakeUpdateResultFlags::Default) 

enum class ECameraShakeUpdateResultFlags : uint8;
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeUpdateResultFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

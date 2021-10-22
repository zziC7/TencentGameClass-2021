// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
#ifdef CINEMATICCAMERA_CineCameraActor_generated_h
#error "CineCameraActor.generated.h already included, missing '#pragma once' in CineCameraActor.h"
#endif
#define CINEMATICCAMERA_CineCameraActor_generated_h

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLookatTrackingSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_SPARSE_DATA
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCineCameraComponent);


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCineCameraComponent);


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraActor(); \
	friend struct Z_Construct_UClass_ACineCameraActor_Statics; \
public: \
	DECLARE_CLASS(ACineCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraActor)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_INCLASS \
private: \
	static void StaticRegisterNativesACineCameraActor(); \
	friend struct Z_Construct_UClass_ACineCameraActor_Statics; \
public: \
	DECLARE_CLASS(ACineCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACineCameraActor)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACineCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACineCameraActor(ACineCameraActor&&); \
	NO_API ACineCameraActor(const ACineCameraActor&); \
public:


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACineCameraActor(ACineCameraActor&&); \
	NO_API ACineCameraActor(const ACineCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraActor)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_60_PROLOG
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_SPARSE_DATA \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_INCLASS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_SPARSE_DATA \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class ACineCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

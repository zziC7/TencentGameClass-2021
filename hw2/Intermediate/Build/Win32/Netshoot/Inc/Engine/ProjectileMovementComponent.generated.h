// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
struct FRotator;
class USceneComponent;
#ifdef ENGINE_ProjectileMovementComponent_generated_h
#error "ProjectileMovementComponent.generated.h already included, missing '#pragma once' in ProjectileMovementComponent.h"
#endif
#define ENGINE_ProjectileMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_27_DELEGATE \
struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms \
{ \
	FHitResult ImpactResult; \
}; \
static inline void FOnProjectileStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileStopDelegate, FHitResult const& ImpactResult) \
{ \
	ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	OnProjectileStopDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_26_DELEGATE \
struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	FVector ImpactVelocity; \
}; \
static inline void FOnProjectileBounceDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileBounceDelegate, FHitResult const& ImpactResult, FVector const& ImpactVelocity) \
{ \
	ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.ImpactVelocity=ImpactVelocity; \
	OnProjectileBounceDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLimitVelocity); \
	DECLARE_FUNCTION(execIsInterpolationComplete); \
	DECLARE_FUNCTION(execResetInterpolation); \
	DECLARE_FUNCTION(execMoveInterpolationTarget); \
	DECLARE_FUNCTION(execSetInterpolatedComponent); \
	DECLARE_FUNCTION(execStopSimulating); \
	DECLARE_FUNCTION(execSetVelocityInLocalSpace); \
	DECLARE_FUNCTION(execIsVelocityUnderSimulationThreshold);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLimitVelocity); \
	DECLARE_FUNCTION(execIsInterpolationComplete); \
	DECLARE_FUNCTION(execResetInterpolation); \
	DECLARE_FUNCTION(execMoveInterpolationTarget); \
	DECLARE_FUNCTION(execSetInterpolatedComponent); \
	DECLARE_FUNCTION(execStopSimulating); \
	DECLARE_FUNCTION(execSetVelocityInLocalSpace); \
	DECLARE_FUNCTION(execIsVelocityUnderSimulationThreshold);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectileMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UProjectileMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectileMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UProjectileMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileMovementComponent(UProjectileMovementComponent&&); \
	NO_API UProjectileMovementComponent(const UProjectileMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectileMovementComponent(UProjectileMovementComponent&&); \
	NO_API UProjectileMovementComponent(const UProjectileMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectileMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectileMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectileMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProjectileMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UProjectileMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_ProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

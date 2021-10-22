// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClothingInteractor;
struct FVector;
#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationInteractor_generated_h
#error "ClothingSimulationInteractor.generated.h already included, missing '#pragma once' in ClothingSimulationInteractor.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationInteractor_generated_h

#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_SPARSE_DATA
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingInteractor(); \
	friend struct Z_Construct_UClass_UClothingInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUClothingInteractor(); \
	friend struct Z_Construct_UClass_UClothingInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingInteractor(UClothingInteractor&&); \
	NO_API UClothingInteractor(const UClothingInteractor&); \
public:


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingInteractor(UClothingInteractor&&); \
	NO_API UClothingInteractor(const UClothingInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingInteractor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_15_PROLOG
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_INCLASS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingInteractor>();

#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_SPARSE_DATA
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClothingInteractor); \
	DECLARE_FUNCTION(execGetSimulationTime); \
	DECLARE_FUNCTION(execGetNumSubsteps); \
	DECLARE_FUNCTION(execGetNumIterations); \
	DECLARE_FUNCTION(execGetNumDynamicParticles); \
	DECLARE_FUNCTION(execGetNumKinematicParticles); \
	DECLARE_FUNCTION(execGetNumCloths); \
	DECLARE_FUNCTION(execSetNumSubsteps); \
	DECLARE_FUNCTION(execSetNumIterations); \
	DECLARE_FUNCTION(execDisableGravityOverride); \
	DECLARE_FUNCTION(execEnableGravityOverride); \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness); \
	DECLARE_FUNCTION(execClothConfigUpdated); \
	DECLARE_FUNCTION(execPhysicsAssetUpdated);


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClothingInteractor); \
	DECLARE_FUNCTION(execGetSimulationTime); \
	DECLARE_FUNCTION(execGetNumSubsteps); \
	DECLARE_FUNCTION(execGetNumIterations); \
	DECLARE_FUNCTION(execGetNumDynamicParticles); \
	DECLARE_FUNCTION(execGetNumKinematicParticles); \
	DECLARE_FUNCTION(execGetNumCloths); \
	DECLARE_FUNCTION(execSetNumSubsteps); \
	DECLARE_FUNCTION(execSetNumIterations); \
	DECLARE_FUNCTION(execDisableGravityOverride); \
	DECLARE_FUNCTION(execEnableGravityOverride); \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness); \
	DECLARE_FUNCTION(execClothConfigUpdated); \
	DECLARE_FUNCTION(execPhysicsAssetUpdated);


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractor(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractor(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractor(UClothingSimulationInteractor&&); \
	NO_API UClothingSimulationInteractor(const UClothingSimulationInteractor&); \
public:


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractor(UClothingSimulationInteractor&&); \
	NO_API UClothingSimulationInteractor(const UClothingSimulationInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractor)


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_36_PROLOG
#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_INCLASS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_SPARSE_DATA \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingSimulationInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsSettings_generated_h
#error "PhysicsSettings.generated.h already included, missing '#pragma once' in PhysicsSettings.h"
#endif
#define ENGINE_PhysicsSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChaosPhysicsSettings>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalSurfaceName>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSettings(); \
	friend struct Z_Construct_UClass_UPhysicsSettings_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettings, UPhysicsSettingsCore, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettings)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSettings(); \
	friend struct Z_Construct_UClass_UPhysicsSettings_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettings, UPhysicsSettingsCore, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSettings)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettings(UPhysicsSettings&&); \
	NO_API UPhysicsSettings(const UPhysicsSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSettings(UPhysicsSettings&&); \
	NO_API UPhysicsSettings(const UPhysicsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettings)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_108_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_111_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h


#define FOREACH_ENUM_ESETTINGSLOCKEDAXIS(op) \
	op(ESettingsLockedAxis::None) \
	op(ESettingsLockedAxis::X) \
	op(ESettingsLockedAxis::Y) \
	op(ESettingsLockedAxis::Z) \
	op(ESettingsLockedAxis::Invalid) 
#define FOREACH_ENUM_ESETTINGSDOF(op) \
	op(ESettingsDOF::Full3D) \
	op(ESettingsDOF::YZPlane) \
	op(ESettingsDOF::XZPlane) \
	op(ESettingsDOF::XYPlane) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSettings_generated_h
#error "NiagaraSettings.generated.h already included, missing '#pragma once' in NiagaraSettings.h"
#endif
#define NIAGARA_NiagaraSettings_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_RPC_WRAPPERS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSettings(); \
	friend struct Z_Construct_UClass_UNiagaraSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSettings(); \
	friend struct Z_Construct_UClass_UNiagaraSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSettings(UNiagaraSettings&&); \
	NO_API UNiagaraSettings(const UNiagaraSettings&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSettings(UNiagaraSettings&&); \
	NO_API UNiagaraSettings(const UNiagaraSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSettings)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultEffectTypePtr() { return STRUCT_OFFSET(UNiagaraSettings, DefaultEffectTypePtr); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_55_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h


#define FOREACH_ENUM_ENDISKELMESH_ADJACENCYTRIANGLEINDEXFORMAT(op) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Full) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Half) 
#define FOREACH_ENUM_ENDISKELMESH_GPUUNIFORMSAMPLINGFORMAT(op) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Full) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9) 
#define FOREACH_ENUM_ENDISKELMESH_GPUMAXINFLUENCES(op) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax4) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax8) \
	op(ENDISkelMesh_GpuMaxInfluences::Unlimited) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

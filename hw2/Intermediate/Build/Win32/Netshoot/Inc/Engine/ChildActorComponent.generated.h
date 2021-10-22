// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_ChildActorComponent_generated_h
#error "ChildActorComponent.generated.h already included, missing '#pragma once' in ChildActorComponent.h"
#endif
#define ENGINE_ChildActorComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorAttachedActorInfo>();

#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChildActorClass);


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChildActorClass);


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct Z_Construct_UClass_UChildActorComponent_Statics; \
public: \
	DECLARE_CLASS(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct Z_Construct_UClass_UChildActorComponent_Statics; \
public: \
	DECLARE_CLASS(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChildActorComponent(UChildActorComponent&&); \
	NO_API UChildActorComponent(const UChildActorComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChildActorComponent(UChildActorComponent&&); \
	NO_API UChildActorComponent(const UChildActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChildActorClass() { return STRUCT_OFFSET(UChildActorComponent, ChildActorClass); } \
	FORCEINLINE static uint32 __PPO__ChildActor() { return STRUCT_OFFSET(UChildActorComponent, ChildActor); } \
	FORCEINLINE static uint32 __PPO__ChildActorTemplate() { return STRUCT_OFFSET(UChildActorComponent, ChildActorTemplate); }


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_79_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_82_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChildActorComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChildActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h


#define FOREACH_ENUM_ECHILDACTORCOMPONENTTREEVIEWVISUALIZATIONMODE(op) \
	op(EChildActorComponentTreeViewVisualizationMode::UseDefault) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor) \
	op(EChildActorComponentTreeViewVisualizationMode::ChildActorOnly) 

enum class EChildActorComponentTreeViewVisualizationMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<EChildActorComponentTreeViewVisualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

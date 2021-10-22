// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTaskResource_generated_h
#error "GameplayTaskResource.generated.h already included, missing '#pragma once' in GameplayTaskResource.h"
#endif
#define GAMEPLAYTASKS_GameplayTaskResource_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTaskResource(); \
	friend struct Z_Construct_UClass_UGameplayTaskResource_Statics; \
public: \
	DECLARE_CLASS(UGameplayTaskResource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTaskResource) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTaskResource(); \
	friend struct Z_Construct_UClass_UGameplayTaskResource_Statics; \
public: \
	DECLARE_CLASS(UGameplayTaskResource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTaskResource) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTaskResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskResource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTaskResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskResource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTaskResource(UGameplayTaskResource&&); \
	NO_API UGameplayTaskResource(const UGameplayTaskResource&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTaskResource(UGameplayTaskResource&&); \
	NO_API UGameplayTaskResource(const UGameplayTaskResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTaskResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskResource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskResource)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ManualResourceID() { return STRUCT_OFFSET(UGameplayTaskResource, ManualResourceID); } \
	FORCEINLINE static uint32 __PPO__AutoResourceID() { return STRUCT_OFFSET(UGameplayTaskResource, AutoResourceID); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_13_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTaskResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

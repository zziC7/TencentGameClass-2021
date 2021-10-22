// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class APawn;
class AActor;
#ifdef FUNCTIONALTESTING_FunctionalAITest_generated_h
#error "FunctionalAITest.generated.h already included, missing '#pragma once' in FunctionalAITest.h"
#endif
#define FUNCTIONALTESTING_FunctionalAITest_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SpawnInfoContainer() { return STRUCT_OFFSET(FAITestSpawnSet, SpawnInfoContainer); } \
	typedef FAITestSpawnSetBase Super;


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnSet>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnSetBase>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FPendingDelayedSpawn>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnInfoBase Super;


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnInfo>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnInfoBase>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_18_DELEGATE \
struct _Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms \
{ \
	AAIController* Controller; \
	APawn* Pawn; \
}; \
static inline void FFunctionalTestAISpawned_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestAISpawned, AAIController* Controller, APawn* Pawn) \
{ \
	_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms Parms; \
	Parms.Controller=Controller; \
	Parms.Pawn=Pawn; \
	FunctionalTestAISpawned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns);


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns);


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITestBase(); \
	friend struct Z_Construct_UClass_AFunctionalAITestBase_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITestBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalAITestBase(); \
	friend struct Z_Construct_UClass_AFunctionalAITestBase_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITestBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITestBase(AFunctionalAITestBase&&); \
	NO_API AFunctionalAITestBase(const AFunctionalAITestBase&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITestBase(AFunctionalAITestBase&&); \
	NO_API AFunctionalAITestBase(const AFunctionalAITestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITestBase)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnLocationRandomizationRange() { return STRUCT_OFFSET(AFunctionalAITestBase, SpawnLocationRandomizationRange); } \
	FORCEINLINE static uint32 __PPO__SpawnedPawns() { return STRUCT_OFFSET(AFunctionalAITestBase, SpawnedPawns); } \
	FORCEINLINE static uint32 __PPO__PendingDelayedSpawns() { return STRUCT_OFFSET(AFunctionalAITestBase, PendingDelayedSpawns); } \
	FORCEINLINE static uint32 __PPO__CurrentSpawnSetIndex() { return STRUCT_OFFSET(AFunctionalAITestBase, CurrentSpawnSetIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentSpawnSetName() { return STRUCT_OFFSET(AFunctionalAITestBase, CurrentSpawnSetName); } \
	FORCEINLINE static uint32 __PPO__OnAISpawned() { return STRUCT_OFFSET(AFunctionalAITestBase, OnAISpawned); } \
	FORCEINLINE static uint32 __PPO__OnAllAISPawned() { return STRUCT_OFFSET(AFunctionalAITestBase, OnAllAISPawned); } \
	FORCEINLINE static uint32 __PPO__NavMeshDebugOrigin() { return STRUCT_OFFSET(AFunctionalAITestBase, NavMeshDebugOrigin); } \
	FORCEINLINE static uint32 __PPO__NavMeshDebugExtent() { return STRUCT_OFFSET(AFunctionalAITestBase, NavMeshDebugExtent); }


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_237_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalAITestBase>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalAITestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalAITestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITest(AFunctionalAITest&&); \
	NO_API AFunctionalAITest(const AFunctionalAITest&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITest(AFunctionalAITest&&); \
	NO_API AFunctionalAITest(const AFunctionalAITest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnSets() { return STRUCT_OFFSET(AFunctionalAITest, SpawnSets); }


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_362_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalAITest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

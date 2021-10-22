// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequence_generated_h
#error "AnimSequence.generated.h already included, missing '#pragma once' in AnimSequence.h"
#endif
#define ENGINE_AnimSequence_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScaleTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScaleTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRotationTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTranslationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTranslationTrack>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSequenceTrackContainer>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllCustomAttributes); \
	DECLARE_FUNCTION(execRemoveAllCustomAttributesForBone); \
	DECLARE_FUNCTION(execRemoveCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneStringCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneIntegerCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneFloatCustomAttribute);


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllCustomAttributes); \
	DECLARE_FUNCTION(execRemoveAllCustomAttributesForBone); \
	DECLARE_FUNCTION(execRemoveCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneStringCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneIntegerCustomAttribute); \
	DECLARE_FUNCTION(execAddBoneFloatCustomAttribute);


#else
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct Z_Construct_UClass_UAnimSequence_Statics; \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequence(); \
	friend struct Z_Construct_UClass_UAnimSequence_Statics; \
public: \
	DECLARE_CLASS(UAnimSequence, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequence) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequence(UAnimSequence&&); \
	NO_API UAnimSequence(const UAnimSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequence)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumFrames() { return STRUCT_OFFSET(UAnimSequence, NumFrames); } \
	FORCEINLINE static uint32 __PPO__TrackToSkeletonMapTable() { return STRUCT_OFFSET(UAnimSequence, TrackToSkeletonMapTable); } \
	FORCEINLINE static uint32 __PPO__BakedPerBoneCustomAttributeData() { return STRUCT_OFFSET(UAnimSequence, BakedPerBoneCustomAttributeData); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_199_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_204_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

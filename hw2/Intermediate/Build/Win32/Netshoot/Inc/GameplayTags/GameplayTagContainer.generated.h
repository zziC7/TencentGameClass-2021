// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagContainer_generated_h
#error "GameplayTagContainer.generated.h already included, missing '#pragma once' in GameplayTagContainer.h"
#endif
#define GAMEPLAYTAGS_GameplayTagContainer_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_970_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TokenStreamVersion() { return STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion); } \
	FORCEINLINE static uint32 __PPO__TagDictionary() { return STRUCT_OFFSET(FGameplayTagQuery, TagDictionary); } \
	FORCEINLINE static uint32 __PPO__QueryTokenStream() { return STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream); } \
	FORCEINLINE static uint32 __PPO__UserDescription() { return STRUCT_OFFSET(FGameplayTagQuery, UserDescription); } \
	FORCEINLINE static uint32 __PPO__AutoDescription() { return STRUCT_OFFSET(FGameplayTagQuery, AutoDescription); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagQuery>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_915_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagCreationWidgetHelper>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_901_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagReferenceHelper>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__GameplayTags() { return STRUCT_OFFSET(FGameplayTagContainer, GameplayTags); } \
	FORCEINLINE static uint32 __PPO__ParentTags() { return STRUCT_OFFSET(FGameplayTagContainer, ParentTags); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagContainer>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TagName() { return STRUCT_OFFSET(FGameplayTag, TagName); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTag>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TagQueryExportText_Helper() { return STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1183_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQuery>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1214_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1230_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1233_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AnyTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1243_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AllTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1256_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1259_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_NoTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1269_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1272_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AnyExprMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1282_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1285_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AllExprMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1295_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1298_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_NoExprMatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h


#define FOREACH_ENUM_EGAMEPLAYTAGQUERYEXPRTYPE(op) \
	op(EGameplayTagQueryExprType::Undefined) \
	op(EGameplayTagQueryExprType::AnyTagsMatch) \
	op(EGameplayTagQueryExprType::AllTagsMatch) \
	op(EGameplayTagQueryExprType::NoTagsMatch) \
	op(EGameplayTagQueryExprType::AnyExprMatch) \
	op(EGameplayTagQueryExprType::AllExprMatch) \
	op(EGameplayTagQueryExprType::NoExprMatch) 
#define FOREACH_ENUM_EGAMEPLAYCONTAINERMATCHTYPE(op) \
	op(EGameplayContainerMatchType::Any) \
	op(EGameplayContainerMatchType::All) 

enum class EGameplayContainerMatchType : uint8;
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayContainerMatchType>();

#define FOREACH_ENUM_EGAMEPLAYTAGMATCHTYPE(op) \
	op(EGameplayTagMatchType::Explicit) \
	op(EGameplayTagMatchType::IncludeParentTags) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphNode_generated_h
#error "EdGraphNode.generated.h already included, missing '#pragma once' in EdGraphNode.h"
#endif
#define ENGINE_EdGraphNode_generated_h

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphTerminalType>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_INCLASS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphNodeContextMenuContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&); \
	NO_API UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&); \
	NO_API UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_197_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGraphNodeContextMenuContext>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode, NO_API)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphNode(UEdGraphNode&&); \
	NO_API UEdGraphNode(const UEdGraphNode&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphNode(UEdGraphNode&&); \
	NO_API UEdGraphNode(const UEdGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnabledState() { return STRUCT_OFFSET(UEdGraphNode, EnabledState); }


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_258_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_261_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h


#define FOREACH_ENUM_ENODEENABLEDSTATE(op) \
	op(ENodeEnabledState::Enabled) \
	op(ENodeEnabledState::Disabled) \
	op(ENodeEnabledState::DevelopmentOnly) 

enum class ENodeEnabledState : uint8;
template<> ENGINE_API UEnum* StaticEnum<ENodeEnabledState>();

#define FOREACH_ENUM_ENODEADVANCEDPINS(op) \
	op(ENodeAdvancedPins::NoPins) \
	op(ENodeAdvancedPins::Shown) \
	op(ENodeAdvancedPins::Hidden) 
#define FOREACH_ENUM_ENODETITLETYPE(op) \
	op(ENodeTitleType::FullTitle) \
	op(ENodeTitleType::ListView) \
	op(ENodeTitleType::EditableTitle) \
	op(ENodeTitleType::MenuTitle) \
	op(ENodeTitleType::MAX_TitleTypes) 
#define FOREACH_ENUM_EPINCONTAINERTYPE(op) \
	op(EPinContainerType::None) \
	op(EPinContainerType::Array) \
	op(EPinContainerType::Set) \
	op(EPinContainerType::Map) 

enum class EPinContainerType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPinContainerType>();

#define FOREACH_ENUM_EEDGRAPHPINDIRECTION(op) \
	op(EGPD_Input) \
	op(EGPD_Output) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

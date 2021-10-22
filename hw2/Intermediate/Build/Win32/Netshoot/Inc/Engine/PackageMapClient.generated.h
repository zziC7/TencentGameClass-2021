// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PackageMapClient_generated_h
#error "PackageMapClient.generated.h already included, missing '#pragma once' in PackageMapClient.h"
#endif
#define ENGINE_PackageMapClient_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPackageMapClient, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageMapClient(); \
	friend struct Z_Construct_UClass_UPackageMapClient_Statics; \
public: \
	DECLARE_CLASS(UPackageMapClient, UPackageMap, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPackageMapClient) \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_INCLASS \
private: \
	static void StaticRegisterNativesUPackageMapClient(); \
	friend struct Z_Construct_UClass_UPackageMapClient_Statics; \
public: \
	DECLARE_CLASS(UPackageMapClient, UPackageMap, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPackageMapClient) \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageMapClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageMapClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageMapClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageMapClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageMapClient(UPackageMapClient&&); \
	NO_API UPackageMapClient(const UPackageMapClient&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageMapClient(UPackageMapClient&&); \
	NO_API UPackageMapClient(const UPackageMapClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageMapClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageMapClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageMapClient)


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_422_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h_426_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPackageMapClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

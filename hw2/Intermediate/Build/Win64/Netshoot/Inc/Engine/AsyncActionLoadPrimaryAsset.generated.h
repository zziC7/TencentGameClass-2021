// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FPrimaryAssetId;
class UAsyncActionLoadPrimaryAsset;
class UAsyncActionLoadPrimaryAssetClass;
class UAsyncActionLoadPrimaryAssetList;
class UAsyncActionLoadPrimaryAssetClassList;
class UAsyncActionChangePrimaryAssetBundles;
#ifdef ENGINE_AsyncActionLoadPrimaryAsset_generated_h
#error "AsyncActionLoadPrimaryAsset.generated.h already included, missing '#pragma once' in AsyncActionLoadPrimaryAsset.h"
#endif
#define ENGINE_AsyncActionLoadPrimaryAsset_generated_h

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_147_DELEGATE \
static inline void FOnPrimaryAssetBundlesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetBundlesChanged) \
{ \
	OnPrimaryAssetBundlesChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_123_DELEGATE \
struct _Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms \
{ \
	TArray<TSubclassOf<UObject> > Loaded; \
}; \
static inline void FOnPrimaryAssetClassListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassListLoaded, TArray<TSubclassOf<UObject> > const& Loaded) \
{ \
	_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnPrimaryAssetClassListLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_99_DELEGATE \
struct _Script_Engine_eventOnPrimaryAssetListLoaded_Parms \
{ \
	TArray<UObject*> Loaded; \
}; \
static inline void FOnPrimaryAssetListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetListLoaded, TArray<UObject*> const& Loaded) \
{ \
	_Script_Engine_eventOnPrimaryAssetListLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnPrimaryAssetListLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_75_DELEGATE \
struct _Script_Engine_eventOnPrimaryAssetClassLoaded_Parms \
{ \
	TSubclassOf<UObject>  Loaded; \
}; \
static inline void FOnPrimaryAssetClassLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassLoaded, TSubclassOf<UObject>  Loaded) \
{ \
	_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnPrimaryAssetClassLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_51_DELEGATE \
struct _Script_Engine_eventOnPrimaryAssetLoaded_Parms \
{ \
	UObject* Loaded; \
}; \
static inline void FOnPrimaryAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetLoaded, UObject* Loaded) \
{ \
	_Script_Engine_eventOnPrimaryAssetLoaded_Parms Parms; \
	Parms.Loaded=Loaded; \
	OnPrimaryAssetLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetBase)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetBase)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(UAsyncActionLoadPrimaryAssetBase&&); \
	NO_API UAsyncActionLoadPrimaryAssetBase(const UAsyncActionLoadPrimaryAssetBase&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(UAsyncActionLoadPrimaryAssetBase&&); \
	NO_API UAsyncActionLoadPrimaryAssetBase(const UAsyncActionLoadPrimaryAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetBase)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetBase>();

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAsset);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAsset);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAsset(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAsset)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAsset(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAsset)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset&&); \
	NO_API UAsyncActionLoadPrimaryAsset(const UAsyncActionLoadPrimaryAsset&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset&&); \
	NO_API UAsyncActionLoadPrimaryAsset(const UAsyncActionLoadPrimaryAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAsset)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_53_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAsset>();

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClass);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClass);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClass)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClass)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(UAsyncActionLoadPrimaryAssetClass&&); \
	NO_API UAsyncActionLoadPrimaryAssetClass(const UAsyncActionLoadPrimaryAssetClass&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(UAsyncActionLoadPrimaryAssetClass&&); \
	NO_API UAsyncActionLoadPrimaryAssetClass(const UAsyncActionLoadPrimaryAssetClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClass)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_77_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetClass>();

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetList);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetList);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetList(UAsyncActionLoadPrimaryAssetList&&); \
	NO_API UAsyncActionLoadPrimaryAssetList(const UAsyncActionLoadPrimaryAssetList&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetList(UAsyncActionLoadPrimaryAssetList&&); \
	NO_API UAsyncActionLoadPrimaryAssetList(const UAsyncActionLoadPrimaryAssetList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_101_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetList>();

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClassList);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClassList);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClassList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClassList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClassList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClassList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(UAsyncActionLoadPrimaryAssetClassList&&); \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const UAsyncActionLoadPrimaryAssetClassList&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(UAsyncActionLoadPrimaryAssetClassList&&); \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const UAsyncActionLoadPrimaryAssetClassList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClassList)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_125_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetClassList>();

#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForPrimaryAssetList); \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForMatchingPrimaryAssets);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForPrimaryAssetList); \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForMatchingPrimaryAssets);


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles(); \
	friend struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionChangePrimaryAssetBundles, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionChangePrimaryAssetBundles)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles(); \
	friend struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionChangePrimaryAssetBundles, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionChangePrimaryAssetBundles)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionChangePrimaryAssetBundles) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionChangePrimaryAssetBundles); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(UAsyncActionChangePrimaryAssetBundles&&); \
	NO_API UAsyncActionChangePrimaryAssetBundles(const UAsyncActionChangePrimaryAssetBundles&); \
public:


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(UAsyncActionChangePrimaryAssetBundles&&); \
	NO_API UAsyncActionChangePrimaryAssetBundles(const UAsyncActionChangePrimaryAssetBundles&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionChangePrimaryAssetBundles)


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_149_PROLOG
#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_INCLASS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionChangePrimaryAssetBundles>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

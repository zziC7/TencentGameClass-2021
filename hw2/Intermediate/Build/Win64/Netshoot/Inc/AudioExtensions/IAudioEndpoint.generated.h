// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioEndpoint_generated_h
#error "IAudioEndpoint.generated.h already included, missing '#pragma once' in IAudioEndpoint.h"
#endif
#define AUDIOEXTENSIONS_IAudioEndpoint_generated_h

#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_SPARSE_DATA
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEndpointSettingsBase(); \
	friend struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAudioEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioEndpointSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUAudioEndpointSettingsBase(); \
	friend struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAudioEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioEndpointSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEndpointSettingsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEndpointSettingsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioEndpointSettingsBase(UAudioEndpointSettingsBase&&); \
	NO_API UAudioEndpointSettingsBase(const UAudioEndpointSettingsBase&); \
public:


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioEndpointSettingsBase(UAudioEndpointSettingsBase&&); \
	NO_API UAudioEndpointSettingsBase(const UAudioEndpointSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEndpointSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEndpointSettingsBase)


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_36_PROLOG
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_INCLASS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioEndpointSettingsBase>();

#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_SPARSE_DATA
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_RPC_WRAPPERS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDummyEndpointSettings(); \
	friend struct Z_Construct_UClass_UDummyEndpointSettings_Statics; \
public: \
	DECLARE_CLASS(UDummyEndpointSettings, UAudioEndpointSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UDummyEndpointSettings)


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUDummyEndpointSettings(); \
	friend struct Z_Construct_UClass_UDummyEndpointSettings_Statics; \
public: \
	DECLARE_CLASS(UDummyEndpointSettings, UAudioEndpointSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UDummyEndpointSettings)


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDummyEndpointSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDummyEndpointSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDummyEndpointSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDummyEndpointSettings(UDummyEndpointSettings&&); \
	NO_API UDummyEndpointSettings(const UDummyEndpointSettings&); \
public:


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDummyEndpointSettings(UDummyEndpointSettings&&); \
	NO_API UDummyEndpointSettings(const UDummyEndpointSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDummyEndpointSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDummyEndpointSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDummyEndpointSettings)


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_50_PROLOG
#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_INCLASS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_SPARSE_DATA \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UDummyEndpointSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

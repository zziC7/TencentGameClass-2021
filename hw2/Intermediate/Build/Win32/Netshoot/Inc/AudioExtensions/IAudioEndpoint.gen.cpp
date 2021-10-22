// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioExtensions/Public/IAudioEndpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioEndpoint() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings();
// End Cross Module References
	void UAudioEndpointSettingsBase::StaticRegisterNativesUAudioEndpointSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister()
	{
		return UAudioEndpointSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioEndpointSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams = {
		&UAudioEndpointSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioEndpointSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioEndpointSettingsBase, 3297478722);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioEndpointSettingsBase>()
	{
		return UAudioEndpointSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioEndpointSettingsBase(Z_Construct_UClass_UAudioEndpointSettingsBase, &UAudioEndpointSettingsBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("UAudioEndpointSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioEndpointSettingsBase);
	void UDummyEndpointSettings::StaticRegisterNativesUDummyEndpointSettings()
	{
	}
	UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister()
	{
		return UDummyEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDummyEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyEndpointSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams = {
		&UDummyEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDummyEndpointSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDummyEndpointSettings, 3607749378);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UDummyEndpointSettings>()
	{
		return UDummyEndpointSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDummyEndpointSettings(Z_Construct_UClass_UDummyEndpointSettings, &UDummyEndpointSettings::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("UDummyEndpointSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyEndpointSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

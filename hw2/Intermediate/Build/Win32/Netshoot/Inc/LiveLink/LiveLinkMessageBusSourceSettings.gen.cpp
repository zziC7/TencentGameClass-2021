// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Private/LiveLinkMessageBusSourceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceSettings() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkMessageBusSourceSettings::StaticRegisterNativesULiveLinkMessageBusSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister()
	{
		return ULiveLinkMessageBusSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkMessageBusSource.\n * Used to apply default Evaluation mode from project settings when constructed\n */" },
		{ "IncludePath", "LiveLinkMessageBusSourceSettings.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMessageBusSourceSettings.h" },
		{ "ToolTip", "Settings for LiveLinkMessageBusSource.\nUsed to apply default Evaluation mode from project settings when constructed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams = {
		&ULiveLinkMessageBusSourceSettings::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkMessageBusSourceSettings, 1371745327);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceSettings>()
	{
		return ULiveLinkMessageBusSourceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkMessageBusSourceSettings(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings, &ULiveLinkMessageBusSourceSettings::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkMessageBusSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkComponentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentSettings() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
// End Cross Module References
	void ULiveLinkComponentSettings::StaticRegisterNativesULiveLinkComponentSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkComponentSettings_NoRegister()
	{
		return ULiveLinkComponentSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultControllerForRole_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultControllerForRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultControllerForRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkComponentSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp = { "DefaultControllerForRole_Key", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Default Controller class to use for the specified role */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentSettings.h" },
		{ "ToolTip", "Default Controller class to use for the specified role" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole = { "DefaultControllerForRole", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentSettings, DefaultControllerForRole), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentSettings_Statics::NewProp_DefaultControllerForRole,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams = {
		&ULiveLinkComponentSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponentSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkComponentSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkComponentSettings, 3163428328);
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentSettings>()
	{
		return ULiveLinkComponentSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkComponentSettings(Z_Construct_UClass_ULiveLinkComponentSettings, &ULiveLinkComponentSettings::StaticClass, TEXT("/Script/LiveLinkComponents"), TEXT("ULiveLinkComponentSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

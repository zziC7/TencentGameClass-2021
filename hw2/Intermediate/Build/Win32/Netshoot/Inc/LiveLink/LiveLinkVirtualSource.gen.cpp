// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Private/LiveLinkVirtualSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSource() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkVirtualSubjectSourceSettings::StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister()
	{
		return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
		{ "IncludePath", "LiveLinkVirtualSource.h" },
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkVirtualSubjectSourceSettings, SourceName), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubjectSourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams = {
		&ULiveLinkVirtualSubjectSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkVirtualSubjectSourceSettings, 1717015173);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkVirtualSubjectSourceSettings>()
	{
		return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkVirtualSubjectSourceSettings(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings, &ULiveLinkVirtualSubjectSourceSettings::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkVirtualSubjectSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubjectSourceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

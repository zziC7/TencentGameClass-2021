// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMovieScene/Public/MovieSceneTakeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSettings() {}
// Cross Module References
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
// End Cross Module References
	void UMovieSceneTakeSettings::StaticRegisterNativesUMovieSceneTakeSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister()
	{
		return UMovieSceneTakeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTakeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoursName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HoursName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinutesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MinutesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecondsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FramesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFramesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubFramesName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal take recorder settings that apply to a whole take\n */" },
		{ "IncludePath", "MovieSceneTakeSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Universal take recorder settings that apply to a whole take" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Hours Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Hours Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName = { "HoursName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, HoursName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Minutes Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Minutes Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName = { "MinutesName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, MinutesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Seconds Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Seconds Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName = { "SecondsName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SecondsName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Frames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Frames Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName = { "FramesName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, FramesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** SubFrames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "SubFrames Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName = { "SubFramesName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SubFramesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Slate Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Slate Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName = { "SlateName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSettings, SlateName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTakeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams = {
		&UMovieSceneTakeSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTakeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTakeSettings, 1142591400);
	template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSettings>()
	{
		return UMovieSceneTakeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTakeSettings(Z_Construct_UClass_UMovieSceneTakeSettings, &UMovieSceneTakeSettings::StaticClass, TEXT("/Script/TakeMovieScene"), TEXT("UMovieSceneTakeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

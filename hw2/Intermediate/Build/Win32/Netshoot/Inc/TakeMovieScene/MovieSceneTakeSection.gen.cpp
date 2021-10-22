// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMovieScene/Public/MovieSceneTakeSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSection() {}
// Cross Module References
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
// End Cross Module References
	void UMovieSceneTakeSection::StaticRegisterNativesUMovieSceneTakeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister()
	{
		return UMovieSceneTakeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTakeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoursCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoursCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinutesCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinutesCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondsCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FramesCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFramesCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubFramesCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTakeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section in a Take track\n */" },
		{ "IncludePath", "MovieSceneTakeSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "A section in a Take track" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData[] = {
		{ "Comment", "/** Hours curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Hours curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve = { "HoursCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, HoursCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData[] = {
		{ "Comment", "/** Minutes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Minutes curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve = { "MinutesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, MinutesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData[] = {
		{ "Comment", "/** Seconds curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Seconds curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve = { "SecondsCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, SecondsCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData[] = {
		{ "Comment", "/** Frames curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Frames curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve = { "FramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, FramesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData[] = {
		{ "Comment", "/** Subframes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Subframes curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve = { "SubFramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, SubFramesCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData[] = {
		{ "Comment", "/** Slate data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Slate data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeSection, Slate), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTakeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams = {
		&UMovieSceneTakeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTakeSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTakeSection, 3915778822);
	template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSection>()
	{
		return UMovieSceneTakeSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTakeSection(Z_Construct_UClass_UMovieSceneTakeSection, &UMovieSceneTakeSection::StaticClass, TEXT("/Script/TakeMovieScene"), TEXT("UMovieSceneTakeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSection);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTakeSection)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

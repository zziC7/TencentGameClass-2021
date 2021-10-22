// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSection() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
// End Cross Module References
	void UMovieSceneLiveLinkSubSection::StaticRegisterNativesUMovieSceneLiveLinkSubSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister()
	{
		return UMovieSceneLiveLinkSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubjectRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class to manage recording live link data structure properties\n * If user specifics data need to be managed in a certain way, create your own sub section\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class to manage recording live link data structure properties\nIf user specifics data need to be managed in a certain way, create your own sub section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData_MetaData[] = {
		{ "Comment", "/** Data associated to properties managed by this sub section*/" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
		{ "ToolTip", "Data associated to properties managed by this sub section" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData = { "SubSectionData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSubSection, SubSectionData), Z_Construct_UScriptStruct_FLiveLinkSubSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole = { "SubjectRole", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneLiveLinkSubSection, SubjectRole), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubSectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::NewProp_SubjectRole,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::ClassParams = {
		&UMovieSceneLiveLinkSubSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLiveLinkSubSection, 717843953);
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSection>()
	{
		return UMovieSceneLiveLinkSubSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLiveLinkSubSection(Z_Construct_UClass_UMovieSceneLiveLinkSubSection, &UMovieSceneLiveLinkSubSection::StaticClass, TEXT("/Script/LiveLinkMovieScene"), TEXT("UMovieSceneLiveLinkSubSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

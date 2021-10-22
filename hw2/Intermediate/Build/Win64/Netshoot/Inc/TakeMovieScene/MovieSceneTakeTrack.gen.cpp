// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeMovieScene/Public/MovieSceneTakeTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeTrack() {}
// Cross Module References
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneTakeTrack::StaticRegisterNativesUMovieSceneTakeTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneTakeTrack_NoRegister()
	{
		return UMovieSceneTakeTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTakeTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTakeTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of takes in a movie scene\n */" },
		{ "IncludePath", "MovieSceneTakeTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of takes in a movie scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The track's sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeTrack.h" },
		{ "ToolTip", "The track's sections." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneTakeTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTakeTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeTrack_Statics::ClassParams = {
		&UMovieSceneTakeTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTakeTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTakeTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTakeTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTakeTrack, 808954369);
	template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeTrack>()
	{
		return UMovieSceneTakeTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTakeTrack(Z_Construct_UClass_UMovieSceneTakeTrack, &UMovieSceneTakeTrack::StaticClass, TEXT("/Script/TakeMovieScene"), TEXT("UMovieSceneTakeTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkSubSectionAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionAnimation() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References
	void UMovieSceneLiveLinkSubSectionAnimation::StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister()
	{
		return UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneLiveLinkSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A LiveLinkSubSection managing array of transforms contained in the Animation Frame Data structure\n */" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSubSectionAnimation.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSubSectionAnimation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A LiveLinkSubSection managing array of transforms contained in the Animation Frame Data structure" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSubSectionAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::ClassParams = {
		&UMovieSceneLiveLinkSubSectionAnimation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLiveLinkSubSectionAnimation, 3910881023);
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSubSectionAnimation>()
	{
		return UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLiveLinkSubSectionAnimation(Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation, &UMovieSceneLiveLinkSubSectionAnimation::StaticClass, TEXT("/Script/LiveLinkMovieScene"), TEXT("UMovieSceneLiveLinkSubSectionAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSubSectionAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

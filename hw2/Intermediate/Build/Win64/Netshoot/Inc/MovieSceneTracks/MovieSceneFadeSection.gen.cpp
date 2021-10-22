// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneFadeSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMovieSceneFadeSection::StaticRegisterNativesUMovieSceneFadeSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister()
	{
		return UMovieSceneFadeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFadeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[];
#endif
		static void NewProp_bFadeAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFadeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section.\n */" },
		{ "IncludePath", "Sections/MovieSceneFadeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "A single floating point section." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Float data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFadeSection, FloatCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData[] = {
		{ "Category", "Fade" },
		{ "Comment", "/** Fade color. */" },
		{ "InlineColorPicker", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Fade color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFadeSection, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData[] = {
		{ "Category", "Fade" },
		{ "Comment", "/** Fade audio. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Fade audio." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
	{
		((UMovieSceneFadeSection*)Obj)->bFadeAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneFadeSection), &Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFadeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFadeSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::ClassParams = {
		&UMovieSceneFadeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFadeSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneFadeSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneFadeSection, 4180827325);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFadeSection>()
	{
		return UMovieSceneFadeSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFadeSection(Z_Construct_UClass_UMovieSceneFadeSection, &UMovieSceneFadeSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneFadeSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFadeSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

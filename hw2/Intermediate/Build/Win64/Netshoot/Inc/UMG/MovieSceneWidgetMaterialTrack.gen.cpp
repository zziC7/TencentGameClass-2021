// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/MovieSceneWidgetMaterialTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister()
	{
		return UMovieSceneWidgetMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material track which is specialized for materials which are owned by widget brushes.\n */" },
		{ "IncludePath", "Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "A material track which is specialized for materials which are owned by widget brushes." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData[] = {
		{ "Comment", "/** The name of the brush property which will be animated by this track. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of the brush property which will be animated by this track." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** The name of this track, generated from the property name path. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of this track, generated from the property name path." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, TrackName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWidgetMaterialTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams = {
		&UMovieSceneWidgetMaterialTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneWidgetMaterialTrack, 3135146781);
	template<> UMG_API UClass* StaticClass<UMovieSceneWidgetMaterialTrack>()
	{
		return UMovieSceneWidgetMaterialTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneWidgetMaterialTrack(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack, &UMovieSceneWidgetMaterialTrack::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieSceneWidgetMaterialTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkTrack() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UMovieSceneLiveLinkTrack::StaticRegisterNativesUMovieSceneLiveLinkTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister()
	{
		return UMovieSceneLiveLinkTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A track for animating FMoveSceneLiveLinkTrack properties.\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track for animating FMoveSceneLiveLinkTrack properties." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole = { "TrackRole", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneLiveLinkTrack, TrackRole), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::NewProp_TrackRole,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLiveLinkTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::ClassParams = {
		&UMovieSceneLiveLinkTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLiveLinkTrack, 1262575029);
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkTrack>()
	{
		return UMovieSceneLiveLinkTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLiveLinkTrack(Z_Construct_UClass_UMovieSceneLiveLinkTrack, &UMovieSceneLiveLinkTrack::StaticClass, TEXT("/Script/LiveLinkMovieScene"), TEXT("UMovieSceneLiveLinkTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

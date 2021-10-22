// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Tracks/MovieSceneSpawnTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieSceneSpawnTrack::StaticRegisterNativesUMovieSceneSpawnTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister()
	{
		return UMovieSceneSpawnTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSpawnTrack_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles when a spawnable should be spawned and destroyed\n */" },
		{ "IncludePath", "Tracks/MovieSceneSpawnTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles when a spawnable should be spawned and destroyed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All the sections in this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ToolTip", "All the sections in this track" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSpawnTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Comment", "/** The guid relating to the object we are to spawn and destroy */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ToolTip", "The guid relating to the object we are to spawn and destroy" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSpawnTrack, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::ClassParams = {
		&UMovieSceneSpawnTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSpawnTrack, 413388117);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnTrack>()
	{
		return UMovieSceneSpawnTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSpawnTrack(Z_Construct_UClass_UMovieSceneSpawnTrack, &UMovieSceneSpawnTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSpawnTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

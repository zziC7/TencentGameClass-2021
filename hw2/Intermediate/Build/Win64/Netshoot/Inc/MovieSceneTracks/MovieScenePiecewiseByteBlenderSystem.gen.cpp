// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieScenePiecewiseByteBlenderSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseByteBlenderSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePiecewiseByteBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseByteBlenderSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister()
	{
		return UMovieScenePiecewiseByteBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScenePiecewiseByteBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseByteBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseByteBlenderSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::ClassParams = {
		&UMovieScenePiecewiseByteBlenderSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePiecewiseByteBlenderSystem, 3701767085);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseByteBlenderSystem>()
	{
		return UMovieScenePiecewiseByteBlenderSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePiecewiseByteBlenderSystem(Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem, &UMovieScenePiecewiseByteBlenderSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePiecewiseByteBlenderSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseByteBlenderSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

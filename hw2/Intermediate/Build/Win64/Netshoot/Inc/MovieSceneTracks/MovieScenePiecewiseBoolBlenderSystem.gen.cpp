// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieScenePiecewiseBoolBlenderSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePiecewiseBoolBlenderSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBlenderSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePiecewiseBoolBlenderSystem::StaticRegisterNativesUMovieScenePiecewiseBoolBlenderSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister()
	{
		return UMovieScenePiecewiseBoolBlenderSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneBlenderSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieScenePiecewiseBoolBlenderSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePiecewiseBoolBlenderSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePiecewiseBoolBlenderSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::ClassParams = {
		&UMovieScenePiecewiseBoolBlenderSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScenePiecewiseBoolBlenderSystem, 4041210536);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePiecewiseBoolBlenderSystem>()
	{
		return UMovieScenePiecewiseBoolBlenderSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScenePiecewiseBoolBlenderSystem(Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem, &UMovieScenePiecewiseBoolBlenderSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScenePiecewiseBoolBlenderSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePiecewiseBoolBlenderSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

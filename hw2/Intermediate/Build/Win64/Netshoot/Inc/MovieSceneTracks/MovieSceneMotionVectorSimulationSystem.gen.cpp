// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneMotionVectorSimulationSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMotionVectorSimulationSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneMotionVectorSimulationSystem::StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister()
	{
		return UMovieSceneMotionVectorSimulationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMotionVectorSimulationSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams = {
		&UMovieSceneMotionVectorSimulationSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMotionVectorSimulationSystem, 734615998);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMotionVectorSimulationSystem>()
	{
		return UMovieSceneMotionVectorSimulationSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMotionVectorSimulationSystem(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem, &UMovieSceneMotionVectorSimulationSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneMotionVectorSimulationSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMotionVectorSimulationSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneDeferredComponentMovementSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDeferredComponentMovementSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDeferredComponentMovementSystem::StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister()
	{
		return UMovieSceneDeferredComponentMovementSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that maintains a FScopedMovementUpdate for any USceneComponent that has an\n * animated transform or attachment for the duration of the evaluation to avoid repeatedly\n * updating child transforms and/or overlaps.\n * \n * This system can be enabled/disabled using the cvar Sequencer.DeferMovementUpdates (is disabled by default)\n * Output logging options are controlled by Sequencer.OutputDeferredMovementMode which is useful for tracking\n * how many components are being moved in any given frame.\n *\n * This system runs in the Initialization and Evaluaion phases:\n *     Initialization: Gathers and initializes deferred movement for any AttachParent components that need (un)link\n *     Evaluation: Gathers and initializes deferred movement for any Component Transforms; queues up an event trigger to be executed at the end of the phase\n *     Finalization: Applys all pending movement updates in reverse order\n */" },
		{ "IncludePath", "Systems/MovieSceneDeferredComponentMovementSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneDeferredComponentMovementSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that maintains a FScopedMovementUpdate for any USceneComponent that has an\nanimated transform or attachment for the duration of the evaluation to avoid repeatedly\nupdating child transforms and/or overlaps.\n\nThis system can be enabled/disabled using the cvar Sequencer.DeferMovementUpdates (is disabled by default)\nOutput logging options are controlled by Sequencer.OutputDeferredMovementMode which is useful for tracking\nhow many components are being moved in any given frame.\n\nThis system runs in the Initialization and Evaluaion phases:\n    Initialization: Gathers and initializes deferred movement for any AttachParent components that need (un)link\n    Evaluation: Gathers and initializes deferred movement for any Component Transforms; queues up an event trigger to be executed at the end of the phase\n    Finalization: Applys all pending movement updates in reverse order" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDeferredComponentMovementSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::ClassParams = {
		&UMovieSceneDeferredComponentMovementSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneDeferredComponentMovementSystem, 3714380932);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDeferredComponentMovementSystem>()
	{
		return UMovieSceneDeferredComponentMovementSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneDeferredComponentMovementSystem(Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem, &UMovieSceneDeferredComponentMovementSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneDeferredComponentMovementSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDeferredComponentMovementSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

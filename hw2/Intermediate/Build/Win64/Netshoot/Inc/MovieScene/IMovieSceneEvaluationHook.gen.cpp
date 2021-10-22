// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/IMovieSceneEvaluationHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneEvaluationHook() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEvaluationHook::StaticRegisterNativesUMovieSceneEvaluationHook()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister()
	{
		return UMovieSceneEvaluationHook::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEvaluationHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneEvaluationHook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEvaluationHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams = {
		&UMovieSceneEvaluationHook::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEvaluationHook, 1803404193);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvaluationHook>()
	{
		return UMovieSceneEvaluationHook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEvaluationHook(Z_Construct_UClass_UMovieSceneEvaluationHook, &UMovieSceneEvaluationHook::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEvaluationHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvaluationHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

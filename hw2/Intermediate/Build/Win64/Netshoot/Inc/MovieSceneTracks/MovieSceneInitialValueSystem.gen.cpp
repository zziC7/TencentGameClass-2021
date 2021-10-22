// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Systems/MovieSceneInitialValueSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneInitialValueSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneInitialValueSystem::StaticRegisterNativesUMovieSceneInitialValueSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister()
	{
		return UMovieSceneInitialValueSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for initializing initial values for all property types\n * Will handle the presence of an FInitialValueCache extension on the linker\n */" },
		{ "IncludePath", "Systems/MovieSceneInitialValueSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneInitialValueSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for initializing initial values for all property types\nWill handle the presence of an FInitialValueCache extension on the linker" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneInitialValueSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::ClassParams = {
		&UMovieSceneInitialValueSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneInitialValueSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneInitialValueSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneInitialValueSystem, 1911923714);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneInitialValueSystem>()
	{
		return UMovieSceneInitialValueSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneInitialValueSystem(Z_Construct_UClass_UMovieSceneInitialValueSystem, &UMovieSceneInitialValueSystem::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneInitialValueSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneInitialValueSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

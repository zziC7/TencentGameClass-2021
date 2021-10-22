// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Private/Animation/MovieSceneMarginPropertySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginPropertySystem() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneMarginPropertySystem::StaticRegisterNativesUMovieSceneMarginPropertySystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem_NoRegister()
	{
		return UMovieSceneMarginPropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieSceneMarginPropertySystem.h" },
		{ "ModuleRelativePath", "Private/Animation/MovieSceneMarginPropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginPropertySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams = {
		&UMovieSceneMarginPropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMarginPropertySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMarginPropertySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMarginPropertySystem, 2588070553);
	template<> UMG_API UClass* StaticClass<UMovieSceneMarginPropertySystem>()
	{
		return UMovieSceneMarginPropertySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMarginPropertySystem(Z_Construct_UClass_UMovieSceneMarginPropertySystem, &UMovieSceneMarginPropertySystem::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieSceneMarginPropertySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginPropertySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

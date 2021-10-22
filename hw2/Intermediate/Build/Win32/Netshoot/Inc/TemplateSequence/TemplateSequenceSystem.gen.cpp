// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Private/Systems/TemplateSequenceSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSystem() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSystem_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem();
// End Cross Module References
	void UTemplateSequenceSystem::StaticRegisterNativesUTemplateSequenceSystem()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequenceSystem_NoRegister()
	{
		return UTemplateSequenceSystem::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceSystem_Statics::ClassParams = {
		&UTemplateSequenceSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequenceSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequenceSystem, 3084188420);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceSystem>()
	{
		return UTemplateSequenceSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequenceSystem(Z_Construct_UClass_UTemplateSequenceSystem, &UTemplateSequenceSystem::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequenceSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceSystem);
	void UTemplateSequencePropertyScalingInstantiatorSystem::StaticRegisterNativesUTemplateSequencePropertyScalingInstantiatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_NoRegister()
	{
		return UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePropertyScalingInstantiatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::ClassParams = {
		&UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequencePropertyScalingInstantiatorSystem, 101432062);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePropertyScalingInstantiatorSystem>()
	{
		return UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequencePropertyScalingInstantiatorSystem(Z_Construct_UClass_UTemplateSequencePropertyScalingInstantiatorSystem, &UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequencePropertyScalingInstantiatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePropertyScalingInstantiatorSystem);
	void UTemplateSequencePropertyScalingEvaluatorSystem::StaticRegisterNativesUTemplateSequencePropertyScalingEvaluatorSystem()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_NoRegister()
	{
		return UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/TemplateSequenceSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/TemplateSequenceSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePropertyScalingEvaluatorSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::ClassParams = {
		&UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequencePropertyScalingEvaluatorSystem, 951688256);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePropertyScalingEvaluatorSystem>()
	{
		return UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequencePropertyScalingEvaluatorSystem(Z_Construct_UClass_UTemplateSequencePropertyScalingEvaluatorSystem, &UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequencePropertyScalingEvaluatorSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePropertyScalingEvaluatorSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

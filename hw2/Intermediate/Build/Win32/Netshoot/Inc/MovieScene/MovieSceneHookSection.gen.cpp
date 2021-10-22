// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Sections/MovieSceneHookSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneHookSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
// End Cross Module References
	void UMovieSceneHookSection::StaticRegisterNativesUMovieSceneHookSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneHookSection_NoRegister()
	{
		return UMovieSceneHookSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHookSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresRangedHook_MetaData[];
#endif
		static void NewProp_bRequiresRangedHook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresRangedHook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresTriggerHooks_MetaData[];
#endif
		static void NewProp_bRequiresTriggerHooks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresTriggerHooks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHookSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Sections/MovieSceneHookSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_SetBit(void* Obj)
	{
		((UMovieSceneHookSection*)Obj)->bRequiresRangedHook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook = { "bRequiresRangedHook", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneHookSection), &Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneHookSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_SetBit(void* Obj)
	{
		((UMovieSceneHookSection*)Obj)->bRequiresTriggerHooks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks = { "bRequiresTriggerHooks", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneHookSection), &Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresRangedHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHookSection_Statics::NewProp_bRequiresTriggerHooks,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneHookSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneHookSection, IMovieSceneEntityProvider), false },
			{ Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneHookSection, IMovieSceneEvaluationHook), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHookSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHookSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHookSection_Statics::ClassParams = {
		&UMovieSceneHookSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHookSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHookSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneHookSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneHookSection, 3055758353);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneHookSection>()
	{
		return UMovieSceneHookSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneHookSection(Z_Construct_UClass_UMovieSceneHookSection, &UMovieSceneHookSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneHookSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHookSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

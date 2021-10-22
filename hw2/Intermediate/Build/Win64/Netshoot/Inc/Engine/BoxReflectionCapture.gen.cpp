// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BoxReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABoxReflectionCapture::StaticRegisterNativesABoxReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister()
	{
		return ABoxReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_ABoxReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Actor used to capture the scene for reflection in a box shape \n * @see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html\n */" },
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/BoxReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/BoxReflectionCapture.h" },
		{ "ToolTip", "Actor used to capture the scene for reflection in a box shape\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxReflectionCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams = {
		&ABoxReflectionCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxReflectionCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxReflectionCapture, 814146589);
	template<> ENGINE_API UClass* StaticClass<ABoxReflectionCapture>()
	{
		return ABoxReflectionCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxReflectionCapture(Z_Construct_UClass_ABoxReflectionCapture, &ABoxReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("ABoxReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

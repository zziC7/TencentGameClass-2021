// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionObjectOrientation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectOrientation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectOrientation::StaticRegisterNativesUMaterialExpressionObjectOrientation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister()
	{
		return UMaterialExpressionObjectOrientation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectOrientation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectOrientation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectOrientation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams = {
		&UMaterialExpressionObjectOrientation::StaticClass,
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
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionObjectOrientation, 137838607);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectOrientation>()
	{
		return UMaterialExpressionObjectOrientation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionObjectOrientation(Z_Construct_UClass_UMaterialExpressionObjectOrientation, &UMaterialExpressionObjectOrientation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionObjectOrientation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectOrientation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

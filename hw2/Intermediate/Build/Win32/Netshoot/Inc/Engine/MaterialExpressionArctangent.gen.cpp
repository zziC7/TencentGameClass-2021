// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionArctangent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArctangent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionArctangent::StaticRegisterNativesUMaterialExpressionArctangent()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister()
	{
		return UMaterialExpressionArctangent::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionArctangent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionArctangent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionArctangent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionArctangent.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionArctangent_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionArctangent_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionArctangent, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionArctangent_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionArctangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionArctangent_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionArctangent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionArctangent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionArctangent_Statics::ClassParams = {
		&UMaterialExpressionArctangent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionArctangent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionArctangent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArctangent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionArctangent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionArctangent, 2270930516);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionArctangent>()
	{
		return UMaterialExpressionArctangent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionArctangent(Z_Construct_UClass_UMaterialExpressionArctangent, &UMaterialExpressionArctangent::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionArctangent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArctangent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

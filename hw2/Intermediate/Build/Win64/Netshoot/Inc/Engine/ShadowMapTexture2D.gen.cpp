// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ShadowMapTexture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapFlags();
// End Cross Module References
	void UShadowMapTexture2D::StaticRegisterNativesUShadowMapTexture2D()
	{
	}
	UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister()
	{
		return UShadowMapTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UShadowMapTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowmapFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadowmapFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowMapTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/ShadowMapTexture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData[] = {
		{ "Comment", "/** Bit-field with shadowmap flags. */" },
		{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
		{ "ToolTip", "Bit-field with shadowmap flags." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags = { "ShadowmapFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowMapTexture2D, ShadowmapFlags), Z_Construct_UEnum_Engine_EShadowMapFlags, METADATA_PARAMS(Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowMapTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowMapTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowMapTexture2D_Statics::ClassParams = {
		&UShadowMapTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowMapTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowMapTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowMapTexture2D, 1179064316);
	template<> ENGINE_API UClass* StaticClass<UShadowMapTexture2D>()
	{
		return UShadowMapTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowMapTexture2D(Z_Construct_UClass_UShadowMapTexture2D, &UShadowMapTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("UShadowMapTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowMapTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

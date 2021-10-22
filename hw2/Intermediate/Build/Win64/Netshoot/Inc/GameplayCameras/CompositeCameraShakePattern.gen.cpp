// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/CompositeCameraShakePattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCompositeCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
// End Cross Module References
	void UCompositeCameraShakePattern::StaticRegisterNativesUCompositeCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister()
	{
		return UCompositeCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPatterns_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildPatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildPatterns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CameraShake" },
		{ "Comment", "/**\n * A base class for a simple camera shake.\n */" },
		{ "IncludePath", "CompositeCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base class for a simple camera shake." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The list of child shake patterns */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ToolTip", "The list of child shake patterns" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner = { "ChildPatterns", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The list of child shake patterns */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ToolTip", "The list of child shake patterns" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns = { "ChildPatterns", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeCameraShakePattern, ChildPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::ClassParams = {
		&UCompositeCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeCameraShakePattern, 2460106341);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCompositeCameraShakePattern>()
	{
		return UCompositeCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeCameraShakePattern(Z_Construct_UClass_UCompositeCameraShakePattern, &UCompositeCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UCompositeCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

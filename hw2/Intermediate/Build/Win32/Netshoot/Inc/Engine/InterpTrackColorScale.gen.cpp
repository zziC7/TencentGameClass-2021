// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackColorScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackColorScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackColorScale::StaticRegisterNativesUInterpTrackColorScale()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister()
	{
		return UInterpTrackColorScale::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackColorScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackColorScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color Scale Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackColorScale.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackColorScale.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackColorScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackColorScale>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackColorScale_Statics::ClassParams = {
		&UInterpTrackColorScale::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackColorScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackColorScale_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackColorScale, 2020349069);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackColorScale>()
	{
		return UInterpTrackColorScale::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackColorScale(Z_Construct_UClass_UInterpTrackColorScale, &UInterpTrackColorScale::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackColorScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackColorScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

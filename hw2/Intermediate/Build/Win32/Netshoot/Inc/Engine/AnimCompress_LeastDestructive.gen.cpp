// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_LeastDestructive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister()
	{
		return UAnimCompress_LeastDestructive::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_LeastDestructive.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_LeastDestructive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_LeastDestructive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams = {
		&UAnimCompress_LeastDestructive::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_LeastDestructive, 49970034);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_LeastDestructive>()
	{
		return UAnimCompress_LeastDestructive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_LeastDestructive(Z_Construct_UClass_UAnimCompress_LeastDestructive, &UAnimCompress_LeastDestructive::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_LeastDestructive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_LeastDestructive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

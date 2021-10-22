// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkRetargetAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAsset() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkRetargetAsset::StaticRegisterNativesULiveLinkRetargetAsset()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister()
	{
		return ULiveLinkRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for retargeting live link data. \n" },
		{ "IncludePath", "LiveLinkRetargetAsset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkRetargetAsset.h" },
		{ "ToolTip", "Base class for retargeting live link data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkRetargetAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::ClassParams = {
		&ULiveLinkRetargetAsset::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkRetargetAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkRetargetAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkRetargetAsset, 3833903950);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkRetargetAsset>()
	{
		return ULiveLinkRetargetAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkRetargetAsset(Z_Construct_UClass_ULiveLinkRetargetAsset, &ULiveLinkRetargetAsset::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkRetargetAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkRetargetAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

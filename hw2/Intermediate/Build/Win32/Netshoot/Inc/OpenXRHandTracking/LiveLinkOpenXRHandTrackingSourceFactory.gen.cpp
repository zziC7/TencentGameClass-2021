// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRHandTracking/Private/LiveLinkOpenXRHandTrackingSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkOpenXRHandTrackingSourceFactory() {}
// Cross Module References
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_NoRegister();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_OpenXRHandTracking();
// End Cross Module References
	void ULiveLinkOpenXRHandTrackingSourceFactory::StaticRegisterNativesULiveLinkOpenXRHandTrackingSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_NoRegister()
	{
		return ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkOpenXRHandTrackingSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkOpenXRHandTrackingSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkOpenXRHandTrackingSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::ClassParams = {
		&ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkOpenXRHandTrackingSourceFactory, 823092760);
	template<> OPENXRHANDTRACKING_API UClass* StaticClass<ULiveLinkOpenXRHandTrackingSourceFactory>()
	{
		return ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkOpenXRHandTrackingSourceFactory(Z_Construct_UClass_ULiveLinkOpenXRHandTrackingSourceFactory, &ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass, TEXT("/Script/OpenXRHandTracking"), TEXT("ULiveLinkOpenXRHandTrackingSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkOpenXRHandTrackingSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

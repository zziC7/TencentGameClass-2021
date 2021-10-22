// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Private/LiveLinkMessageBusSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceFactory() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkMessageBusSourceFactory::StaticRegisterNativesULiveLinkMessageBusSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister()
	{
		return ULiveLinkMessageBusSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMessageBusSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMessageBusSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams = {
		&ULiveLinkMessageBusSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkMessageBusSourceFactory, 3981578905);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceFactory>()
	{
		return ULiveLinkMessageBusSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkMessageBusSourceFactory(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory, &ULiveLinkMessageBusSourceFactory::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkMessageBusSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

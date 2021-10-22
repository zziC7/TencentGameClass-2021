// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationFrameInterpolateProcessor() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkAnimationFrameInterpolationProcessor::StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_NoRegister()
	{
		return ULiveLinkAnimationFrameInterpolationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for animation frames\n */" },
		{ "DisplayName", "Animation Interpolation" },
		{ "IncludePath", "InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkAnimationFrameInterpolateProcessor.h" },
		{ "ToolTip", "Default blending method for animation frames" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationFrameInterpolationProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::ClassParams = {
		&ULiveLinkAnimationFrameInterpolationProcessor::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationFrameInterpolationProcessor, 3464372051);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationFrameInterpolationProcessor>()
	{
		return ULiveLinkAnimationFrameInterpolationProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationFrameInterpolationProcessor(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolationProcessor, &ULiveLinkAnimationFrameInterpolationProcessor::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkAnimationFrameInterpolationProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationFrameInterpolationProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

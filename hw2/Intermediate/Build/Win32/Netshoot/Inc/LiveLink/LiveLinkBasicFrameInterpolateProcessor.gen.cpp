// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicFrameInterpolateProcessor() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkBasicFrameInterpolationProcessor::StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister()
	{
		return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePropertyValues_MetaData[];
#endif
		static void NewProp_bInterpolatePropertyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePropertyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for any type of frames.\n * It will interpolate numerical properties that are mark with \"Interp\".\n */" },
		{ "DisplayName", "Base Interpolation" },
		{ "IncludePath", "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ToolTip", "Default blending method for any type of frames.\nIt will interpolate numerical properties that are mark with \"Interp\"." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit(void* Obj)
	{
		((ULiveLinkBasicFrameInterpolationProcessor*)Obj)->bInterpolatePropertyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues = { "bInterpolatePropertyValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkBasicFrameInterpolationProcessor), &Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicFrameInterpolationProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams = {
		&ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkBasicFrameInterpolationProcessor, 2239615751);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkBasicFrameInterpolationProcessor>()
	{
		return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkBasicFrameInterpolationProcessor(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor, &ULiveLinkBasicFrameInterpolationProcessor::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkBasicFrameInterpolationProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicFrameInterpolationProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

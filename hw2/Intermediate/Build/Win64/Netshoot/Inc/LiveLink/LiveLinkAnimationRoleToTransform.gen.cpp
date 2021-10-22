// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/Translator/LiveLinkAnimationRoleToTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRoleToTransform() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkAnimationRoleToTransform::StaticRegisterNativesULiveLinkAnimationRoleToTransform()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n */" },
		{ "DisplayName", "Animation To Transform" },
		{ "IncludePath", "Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ToolTip", "Basic object to translate data from one role to another" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkAnimationRoleToTransform, BoneName), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRoleToTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams = {
		&ULiveLinkAnimationRoleToTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationRoleToTransform, 1166595842);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationRoleToTransform>()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationRoleToTransform(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform, &ULiveLinkAnimationRoleToTransform::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkAnimationRoleToTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRoleToTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

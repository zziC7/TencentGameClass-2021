// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkTimeSynchronizationSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimeSynchronizationSource() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References
	void ULiveLinkTimeSynchronizationSource::StaticRegisterNativesULiveLinkTimeSynchronizationSource()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_NoRegister()
	{
		return ULiveLinkTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizationSource,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkTimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTimeSynchronizationSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTimeSynchronizationSource, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::NewProp_SubjectName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimeSynchronizationSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams = {
		&ULiveLinkTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTimeSynchronizationSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkTimeSynchronizationSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkTimeSynchronizationSource, 659641408);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimeSynchronizationSource>()
	{
		return ULiveLinkTimeSynchronizationSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkTimeSynchronizationSource(Z_Construct_UClass_ULiveLinkTimeSynchronizationSource, &ULiveLinkTimeSynchronizationSource::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkTimeSynchronizationSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimeSynchronizationSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

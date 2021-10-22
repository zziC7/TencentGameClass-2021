// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DAttachSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
// End Cross Module References
	void UMovieScene3DAttachSection::StaticRegisterNativesUMovieScene3DAttachSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister()
	{
		return UMovieScene3DAttachSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DAttachSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachComponentName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFullRevertOnDetach_MetaData[];
#endif
		static void NewProp_bFullRevertOnDetach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFullRevertOnDetach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReAttachOnDetach_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReAttachOnDetach;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 3D Attach section\n */" },
		{ "IncludePath", "Sections/MovieScene3DAttachSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
		{ "ToolTip", "A 3D Attach section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName = { "AttachComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachComponentName), METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit(void* Obj)
	{
		((UMovieScene3DAttachSection*)Obj)->bFullRevertOnDetach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach = { "bFullRevertOnDetach", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieScene3DAttachSection), &Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach = { "ReAttachOnDetach", nullptr, (EPropertyFlags)0x0014000800002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, ReAttachOnDetach), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule = { "AttachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule = { "AttachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule = { "AttachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule = { "DetachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule = { "DetachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule = { "DetachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DAttachSection, IMovieSceneEntityProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DAttachSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams = {
		&UMovieScene3DAttachSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DAttachSection, 1295150265);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DAttachSection>()
	{
		return UMovieScene3DAttachSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DAttachSection(Z_Construct_UClass_UMovieScene3DAttachSection, &UMovieScene3DAttachSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DAttachSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Sections/TemplateSequenceSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSection() {}
// Cross Module References
	TEMPLATESEQUENCE_API UEnum* Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSectionPropertyScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
// End Cross Module References
	static UEnum* ETemplateSectionPropertyScaleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType, Z_Construct_UPackage__Script_TemplateSequence(), TEXT("ETemplateSectionPropertyScaleType"));
		}
		return Singleton;
	}
	template<> TEMPLATESEQUENCE_API UEnum* StaticEnum<ETemplateSectionPropertyScaleType>()
	{
		return ETemplateSectionPropertyScaleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETemplateSectionPropertyScaleType(ETemplateSectionPropertyScaleType_StaticEnum, TEXT("/Script/TemplateSequence"), TEXT("ETemplateSectionPropertyScaleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Hash() { return 893270235U; }
	UEnum* Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TemplateSequence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETemplateSectionPropertyScaleType"), 0, Get_Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETemplateSectionPropertyScaleType::FloatProperty", (int64)ETemplateSectionPropertyScaleType::FloatProperty },
				{ "ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly", (int64)ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly },
				{ "ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly", (int64)ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Defines the type of property scaling for a template sequence.\n */" },
				{ "FloatProperty.Comment", "/** Scales a float property */" },
				{ "FloatProperty.Name", "ETemplateSectionPropertyScaleType::FloatProperty" },
				{ "FloatProperty.ToolTip", "Scales a float property" },
				{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
				{ "ToolTip", "Defines the type of property scaling for a template sequence." },
				{ "TransformPropertyLocationOnly.Comment", "/** Scales the location channels (X, Y, Z) of a transform property */" },
				{ "TransformPropertyLocationOnly.Name", "ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly" },
				{ "TransformPropertyLocationOnly.ToolTip", "Scales the location channels (X, Y, Z) of a transform property" },
				{ "TransformPropertyRotationOnly.Comment", "/** Scales the rotation channels (yaw, pitch, roll) of a transform property */" },
				{ "TransformPropertyRotationOnly.Name", "ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly" },
				{ "TransformPropertyRotationOnly.ToolTip", "Scales the rotation channels (yaw, pitch, roll) of a transform property" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TemplateSequence,
				nullptr,
				"ETemplateSectionPropertyScaleType",
				"ETemplateSectionPropertyScaleType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTemplateSectionPropertyScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TEMPLATESEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale, Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSectionPropertyScale"), sizeof(FTemplateSectionPropertyScale), Get_Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Hash());
	}
	return Singleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSectionPropertyScale>()
{
	return FTemplateSectionPropertyScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateSectionPropertyScale(FTemplateSectionPropertyScale::StaticStruct, TEXT("/Script/TemplateSequence"), TEXT("TemplateSectionPropertyScale"), false, nullptr, nullptr);
static struct FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSectionPropertyScale
{
	FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSectionPropertyScale()
	{
		UScriptStruct::DeferCppStructOps<FTemplateSectionPropertyScale>(FName(TEXT("TemplateSectionPropertyScale")));
	}
} ScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSectionPropertyScale;
	struct Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyBinding;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PropertyScaleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyScaleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyScaleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a property scaling for a template sequence.\n */" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
		{ "ToolTip", "Defines a property scaling for a template sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSectionPropertyScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, ObjectBinding), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding = { "PropertyBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, PropertyBinding), Z_Construct_UScriptStruct_FMovieScenePropertyBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType = { "PropertyScaleType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, PropertyScaleType), Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel = { "FloatChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, FloatChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
		nullptr,
		&NewStructOps,
		"TemplateSectionPropertyScale",
		sizeof(FTemplateSectionPropertyScale),
		alignof(FTemplateSectionPropertyScale),
		Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateSectionPropertyScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TemplateSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateSectionPropertyScale"), sizeof(FTemplateSectionPropertyScale), Get_Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Hash() { return 2207980370U; }
	void UTemplateSequenceSection::StaticRegisterNativesUTemplateSequenceSection()
	{
	}
	UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister()
	{
		return UTemplateSequenceSection::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyScales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyScales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyScales;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the section for a template sequence track.\n */" },
		{ "IncludePath", "Sections/TemplateSequenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Defines the section for a template sequence track." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_Inner = { "PropertyScales", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateSectionPropertyScale, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales = { "PropertyScales", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateSequenceSection, PropertyScales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTemplateSequenceSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UTemplateSequenceSection, IMovieSceneEntityProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams = {
		&UTemplateSequenceSection::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequenceSection, 3973636370);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceSection>()
	{
		return UTemplateSequenceSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequenceSection(Z_Construct_UClass_UTemplateSequenceSection, &UTemplateSequenceSection::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequenceSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

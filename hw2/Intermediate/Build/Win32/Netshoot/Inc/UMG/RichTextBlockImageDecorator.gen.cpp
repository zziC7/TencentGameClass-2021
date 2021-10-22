// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RichTextBlockImageDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockImageDecorator() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRichImageRow();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FRichImageRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRichImageRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FRichImageRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FRichImageRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichImageRow, Z_Construct_UPackage__Script_UMG(), TEXT("RichImageRow"), sizeof(FRichImageRow), Get_Z_Construct_UScriptStruct_FRichImageRow_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRichImageRow>()
{
	return FRichImageRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichImageRow(FRichImageRow::StaticStruct, TEXT("/Script/UMG"), TEXT("RichImageRow"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFRichImageRow
{
	FScriptStruct_UMG_StaticRegisterNativesFRichImageRow()
	{
		UScriptStruct::DeferCppStructOps<FRichImageRow>(FName(TEXT("RichImageRow")));
	}
} ScriptStruct_UMG_StaticRegisterNativesFRichImageRow;
	struct Z_Construct_UScriptStruct_FRichImageRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Simple struct for rich text styles */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "ToolTip", "Simple struct for rich text styles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichImageRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichImageRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichImageRow, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichImageRow_Statics::NewProp_Brush,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichImageRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichImageRow",
		sizeof(FRichImageRow),
		alignof(FRichImageRow),
		Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichImageRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichImageRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichImageRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichImageRow"), sizeof(FRichImageRow), Get_Z_Construct_UScriptStruct_FRichImageRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichImageRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichImageRow_Hash() { return 597388864U; }
	void URichTextBlockImageDecorator::StaticRegisterNativesURichTextBlockImageDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister()
	{
		return URichTextBlockImageDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockImageDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockImageDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows you to setup an image decorator that can be configured\n * to map certain keys to certain images.  We recommend you subclass this\n * as a blueprint to configure the instance.\n *\n * Understands the format <img id=\"NameOfBrushInTable\"></>\n */" },
		{ "IncludePath", "Components/RichTextBlockImageDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows you to setup an image decorator that can be configured\nto map certain keys to certain images.  We recommend you subclass this\nas a blueprint to configure the instance.\n\nUnderstands the format <img id=\"NameOfBrushInTable\"></>" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockImageDecorator.h" },
		{ "RequiredAssetDataTags", "RowStructure=RichImageRow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet = { "ImageSet", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlockImageDecorator, ImageSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlockImageDecorator_Statics::NewProp_ImageSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockImageDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockImageDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockImageDecorator_Statics::ClassParams = {
		&URichTextBlockImageDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockImageDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockImageDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlockImageDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlockImageDecorator, 3414681809);
	template<> UMG_API UClass* StaticClass<URichTextBlockImageDecorator>()
	{
		return URichTextBlockImageDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlockImageDecorator(Z_Construct_UClass_URichTextBlockImageDecorator, &URichTextBlockImageDecorator::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlockImageDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockImageDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

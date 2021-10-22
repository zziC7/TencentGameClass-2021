// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunction.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
// End Cross Module References
	void UMaterialFunction::StaticRegisterNativesUMaterialFunction()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunction_NoRegister()
	{
		return UMaterialFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentFunction;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionExpressions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionExpressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionExpressions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrefixParameterNames_MetaData[];
#endif
		static void NewProp_bPrefixParameterNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrefixParameterNames;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LibraryCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategories;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LibraryCategoriesText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LibraryCategoriesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LibraryCategoriesText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionEditorComments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEditorComments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionEditorComments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DependentFunctionExpressionCandidates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependentFunctionExpressionCandidates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DependentFunctionExpressionCandidates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReentrantFlag_MetaData[];
#endif
		static void NewProp_bReentrantFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReentrantFlag;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Material Function is a collection of material expressions that can be reused in different materials\n */" },
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData[] = {
		{ "Comment", "/** Used in the material editor, points to the function asset being edited, which this function is just a preview for. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Used in the material editor, points to the function asset being edited, which this function is just a preview for." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction = { "ParentFunction", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, ParentFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** Description of the function which will be displayed as a tooltip wherever the function is used. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Description of the function which will be displayed as a tooltip wherever the function is used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData[] = {
		{ "Comment", "/** Array of material expressions, excluding Comments.  Used by the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions = { "FunctionExpressions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, FunctionExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bExposeToLibrary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** If true, parameters in this function will have a prefix added to their group name. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "If true, parameters in this function will have a prefix added to their group name." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bPrefixParameterNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames = { "bPrefixParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner = { "LibraryCategories", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData[] = {
		{ "Comment", "/** \n\x09 * Categories that this function belongs to in the material function library.  \n\x09 * Ideally categories should be chosen carefully so that there are not too many.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories = { "LibraryCategories", nullptr, (EPropertyFlags)0x0010010820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, LibraryCategories_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData[] = {
		{ "Category", "MaterialFunction" },
		{ "Comment", "/** \n\x09 * Categories that this function belongs to in the material function library.  \n\x09 * Ideally categories should be chosen carefully so that there are not too many.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Categories that this function belongs to in the material function library.\nIdeally categories should be chosen carefully so that there are not too many." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText = { "LibraryCategoriesText", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, LibraryCategoriesText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData[] = {
		{ "Comment", "/** Array of comments associated with this material; viewed in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments = { "FunctionEditorComments", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, FunctionEditorComments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_Inner = { "DependentFunctionExpressionCandidates", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates = { "DependentFunctionExpressionCandidates", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunction, DependentFunctionExpressionCandidates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData[] = {
		{ "Comment", "/** Transient flag used to track re-entrance in recursive functions like IsDependent. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunction.h" },
		{ "ToolTip", "Transient flag used to track re-entrance in recursive functions like IsDependent." },
	};
#endif
	void Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit(void* Obj)
	{
		((UMaterialFunction*)Obj)->bReentrantFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag = { "bReentrantFlag", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialFunction), &Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunction_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_ParentFunction,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_Description,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionExpressions,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bExposeToLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bPrefixParameterNames,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_LibraryCategoriesText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_FunctionEditorComments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_PreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_DependentFunctionExpressionCandidates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunction_Statics::NewProp_bReentrantFlag,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunction_Statics::ClassParams = {
		&UMaterialFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunction, 81266503);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunction>()
	{
		return UMaterialFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunction(Z_Construct_UClass_UMaterialFunction, &UMaterialFunction::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunction);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunction)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetBase() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UClothingAssetBase::StaticRegisterNativesUClothingAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister()
	{
		return UClothingAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportedFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// An interface object for any clothing asset the engine can use. Any\n// clothing asset concrete object should derive from this.\n" },
		{ "IncludePath", "ClothingAssetBase.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "An interface object for any clothing asset the engine can use. Any\nclothing asset concrete object should derive from this." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "// If this asset was imported from a file, this will be the original path\n" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "If this asset was imported from a file, this will be the original path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath = { "ImportedFilePath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetBase, ImportedFilePath), METADATA_PARAMS(Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "Comment", "/** Guid to identify this asset. Will be embedded into chunks that are created using this asset */" },
		{ "ModuleRelativePath", "Public/ClothingAssetBase.h" },
		{ "ToolTip", "Guid to identify this asset. Will be embedded into chunks that are created using this asset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetBase, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_ImportedFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetBase_Statics::NewProp_AssetGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetBase_Statics::ClassParams = {
		&UClothingAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetBase, 2027008127);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingAssetBase>()
	{
		return UClothingAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetBase(Z_Construct_UClass_UClothingAssetBase, &UClothingAssetBase::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

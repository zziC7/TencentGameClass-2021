// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/AssetUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAssetUserData::StaticRegisterNativesUAssetUserData()
	{
	}
	UClass* Z_Construct_UClass_UAssetUserData_NoRegister()
	{
		return UAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that can be subclassed to store custom data on Unreal asset objects.\n */" },
		{ "IncludePath", "Engine/AssetUserData.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetUserData.h" },
		{ "ToolTip", "Object that can be subclassed to store custom data on Unreal asset objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetUserData_Statics::ClassParams = {
		&UAssetUserData::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetUserData, 398400109);
	template<> ENGINE_API UClass* StaticClass<UAssetUserData>()
	{
		return UAssetUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetUserData(Z_Construct_UClass_UAssetUserData, &UAssetUserData::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

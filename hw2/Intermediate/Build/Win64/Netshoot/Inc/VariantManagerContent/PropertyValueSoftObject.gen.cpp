// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/PropertyValueSoftObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueSoftObject() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueSoftObject_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueSoftObject();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
// End Cross Module References
	void UPropertyValueSoftObject::StaticRegisterNativesUPropertyValueSoftObject()
	{
	}
	UClass* Z_Construct_UClass_UPropertyValueSoftObject_NoRegister()
	{
		return UPropertyValueSoftObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueSoftObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueSoftObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores data from a USoftObjectProperty.\n * It will store it's recorded data as a raw UObject*, and use the usual UPropertyValue\n * facilities for serializing it as a Soft object ptr. This derived class handles converting\n * to and from the property's underlying FSoftObjectPtr to our UObject*.\n * We can't keep a FSoftObjectPtr ourselves, neither as a temp member nor as raw bytes, as it has\n * internal heap-allocated data members like FName and FString.\n */" },
		{ "IncludePath", "PropertyValueSoftObject.h" },
		{ "ModuleRelativePath", "Public/PropertyValueSoftObject.h" },
		{ "ToolTip", "Stores data from a USoftObjectProperty.\nIt will store it's recorded data as a raw UObject*, and use the usual UPropertyValue\nfacilities for serializing it as a Soft object ptr. This derived class handles converting\nto and from the property's underlying FSoftObjectPtr to our UObject*.\nWe can't keep a FSoftObjectPtr ourselves, neither as a temp member nor as raw bytes, as it has\ninternal heap-allocated data members like FName and FString." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueSoftObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueSoftObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueSoftObject_Statics::ClassParams = {
		&UPropertyValueSoftObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueSoftObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyValueSoftObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyValueSoftObject, 2395266845);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueSoftObject>()
	{
		return UPropertyValueSoftObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyValueSoftObject(Z_Construct_UClass_UPropertyValueSoftObject, &UPropertyValueSoftObject::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UPropertyValueSoftObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueSoftObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

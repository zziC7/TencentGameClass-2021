// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CompositeCurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
// End Cross Module References
	void UCompositeCurveTable::StaticRegisterNativesUCompositeCurveTable()
	{
	}
	UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister()
	{
		return UCompositeCurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldParentTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldParentTables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Curve table composed of a stack of other curve tables.\n */" },
		{ "IncludePath", "Engine/CompositeCurveTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Curve table composed of a stack of other curve tables." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "Comment", "// Parent tables\n// Tables with higher indices override data in tables with lower indices\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeCurveTable, ParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData[] = {
		{ "Comment", "// temporary copy used to detect changes so we can update delegates correctly on removal\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeCurveTable, OldParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCurveTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams = {
		&UCompositeCurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCurveTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeCurveTable, 2458298895);
	template<> ENGINE_API UClass* StaticClass<UCompositeCurveTable>()
	{
		return UCompositeCurveTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeCurveTable(Z_Construct_UClass_UCompositeCurveTable, &UCompositeCurveTable::StaticClass, TEXT("/Script/Engine"), TEXT("UCompositeCurveTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

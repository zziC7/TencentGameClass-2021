// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DataTable.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FDataTableCategoryHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableCategoryHandle, Z_Construct_UPackage__Script_Engine(), TEXT("DataTableCategoryHandle"), sizeof(FDataTableCategoryHandle), Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableCategoryHandle>()
{
	return FDataTableCategoryHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableCategoryHandle(FDataTableCategoryHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("DataTableCategoryHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle()
	{
		UScriptStruct::DeferCppStructOps<FDataTableCategoryHandle>(FName(TEXT("DataTableCategoryHandle")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFDataTableCategoryHandle;
	struct Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColumnName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowContents_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowContents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular set of rows in a table */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular set of rows in a table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableCategoryHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableCategoryHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Name of column in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of column in the table that we want" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableCategoryHandle, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Contents of rows in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Contents of rows in the table that we want" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents = { "RowContents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableCategoryHandle, RowContents), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataTableCategoryHandle",
		sizeof(FDataTableCategoryHandle),
		alignof(FDataTableCategoryHandle),
		Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableCategoryHandle"), sizeof(FDataTableCategoryHandle), Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableCategoryHandle_Hash() { return 2918971450U; }
class UScriptStruct* FDataTableRowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle, Z_Construct_UPackage__Script_Engine(), TEXT("DataTableRowHandle"), sizeof(FDataTableRowHandle), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableRowHandle>()
{
	return FDataTableRowHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableRowHandle(FDataTableRowHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("DataTableRowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle()
	{
		UScriptStruct::DeferCppStructOps<FDataTableRowHandle>(FName(TEXT("DataTableRowHandle")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFDataTableRowHandle;
	struct Z_Construct_UScriptStruct_FDataTableRowHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular row in a table*/" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular row in a table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRowHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableRowHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableRowHandle, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataTableRowHandle",
		sizeof(FDataTableRowHandle),
		alignof(FDataTableRowHandle),
		Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableRowHandle"), sizeof(FDataTableRowHandle), Get_Z_Construct_UScriptStruct_FDataTableRowHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableRowHandle_Hash() { return 1158788547U; }
class UScriptStruct* FTableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase, Z_Construct_UPackage__Script_Engine(), TEXT("TableRowBase"), sizeof(FTableRowBase), Get_Z_Construct_UScriptStruct_FTableRowBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTableRowBase>()
{
	return FTableRowBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTableRowBase(FTableRowBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTableRowBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTableRowBase()
	{
		UScriptStruct::DeferCppStructOps<FTableRowBase>(FName(TEXT("TableRowBase")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTableRowBase;
	struct Z_Construct_UScriptStruct_FTableRowBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all table row structs to inherit from.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Base class for all table row structs to inherit from." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TableRowBase",
		sizeof(FTableRowBase),
		alignof(FTableRowBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TableRowBase"), sizeof(FTableRowBase), Get_Z_Construct_UScriptStruct_FTableRowBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTableRowBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTableRowBase_Hash() { return 747974536U; }
	void UDataTable::StaticRegisterNativesUDataTable()
	{
	}
	UClass* Z_Construct_UClass_UDataTable_NoRegister()
	{
		return UDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripFromClientBuilds_MetaData[];
#endif
		static void NewProp_bStripFromClientBuilds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripFromClientBuilds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreExtraFields_MetaData[];
#endif
		static void NewProp_bIgnoreExtraFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreExtraFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingFields_MetaData[];
#endif
		static void NewProp_bIgnoreMissingFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportKeyField_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportKeyField;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowStructName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowStructName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RowsSerializedWithTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowsSerializedWithTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowsSerializedWithTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemporarilyReferencedObjects_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemporarilyReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TemporarilyReferencedObjects;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Imported spreadsheet table.\n */" },
		{ "IncludePath", "Engine/DataTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Imported spreadsheet table." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Structure to use for each row of the table, must inherit from FTableRowBase */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Structure to use for each row of the table, must inherit from FTableRowBase" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct = { "RowStruct", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about. */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about." },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bStripFromClientBuilds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds = { "bStripFromClientBuilds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore extra fields in the import data, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore extra fields in the import data, if false it will warn about them" },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bIgnoreExtraFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields = { "bIgnoreExtraFields", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore any fields that are expected but missing, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore any fields that are expected but missing, if false it will warn about them" },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bIgnoreMissingFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields = { "bIgnoreMissingFields", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField = { "ImportKeyField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, ImportKeyField), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSource" },
		{ "Comment", "/** The file this data table was imported from, may be empty */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The file this data table was imported from, may be empty" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, ImportPath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData[] = {
		{ "Comment", "/** The name of the RowStruct we were using when we were last saved */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName = { "RowStructName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, RowStructName), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData[] = {
		{ "Comment", "/** When RowStruct is being modified, row data is stored serialized with tags */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "When RowStruct is being modified, row data is stored serialized with tags" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, RowsSerializedWithTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTable, TemporarilyReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataTable_Statics::ClassParams = {
		&UDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataTable, 1155030761);
	template<> ENGINE_API UClass* StaticClass<UDataTable>()
	{
		return UDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataTable(Z_Construct_UClass_UDataTable, &UDataTable::StaticClass, TEXT("/Script/Engine"), TEXT("UDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTable);
	IMPLEMENT_FARCHIVE_SERIALIZER(UDataTable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

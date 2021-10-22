// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EditorFramework/AssetImportData.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetImportData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAssetImportInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetImportInfo, Z_Construct_UPackage__Script_Engine(), TEXT("AssetImportInfo"), sizeof(FAssetImportInfo), Get_Z_Construct_UScriptStruct_FAssetImportInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetImportInfo>()
{
	return FAssetImportInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetImportInfo(FAssetImportInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetImportInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo()
	{
		UScriptStruct::DeferCppStructOps<FAssetImportInfo>(FName(TEXT("AssetImportInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetImportInfo;
	struct Z_Construct_UScriptStruct_FAssetImportInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetImportInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that is used to store an array of asset import data as an asset registry tag */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Struct that is used to store an array of asset import data as an asset registry tag" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetImportInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetImportInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetImportInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetImportInfo",
		sizeof(FAssetImportInfo),
		alignof(FAssetImportInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetImportInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetImportInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetImportInfo"), sizeof(FAssetImportInfo), Get_Z_Construct_UScriptStruct_FAssetImportInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetImportInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetImportInfo_Hash() { return 1748829716U; }
#if WITH_EDITOR
	DEFINE_FUNCTION(UAssetImportData::execK2_ExtractFilenames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->K2_ExtractFilenames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetImportData::execK2_GetFirstFilename)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->K2_GetFirstFilename();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetImportData::execScriptedAddFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceFileLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedAddFilename(Z_Param_InPath,Z_Param_Index,Z_Param_SourceFileLabel);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAssetImportData::StaticRegisterNativesUAssetImportData()
	{
#if WITH_EDITOR
		UClass* Class = UAssetImportData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_ExtractFilenames", &UAssetImportData::execK2_ExtractFilenames },
			{ "K2_GetFirstFilename", &UAssetImportData::execK2_GetFirstFilename },
			{ "ScriptedAddFilename", &UAssetImportData::execScriptedAddFilename },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics
	{
		struct AssetImportData_eventK2_ExtractFilenames_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000800000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetImportData_eventK2_ExtractFilenames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::NewProp_ReturnValue,
	};
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "DisplayName", "ExtractFilenames" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ScriptName", "ExtractFilenames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "K2_ExtractFilenames", nullptr, nullptr, sizeof(AssetImportData_eventK2_ExtractFilenames_Parms), IF_WITH_EDITORONLY_DATA(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::PropPointers), 0), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics
	{
		struct AssetImportData_eventK2_GetFirstFilename_Parms
		{
			FString ReturnValue;
		};
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000800000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetImportData_eventK2_GetFirstFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::NewProp_ReturnValue,
	};
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "Comment", "/** Helper function to return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset).  */" },
		{ "DisplayName", "GetFirstFilename" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ScriptName", "GetFirstFilename" },
		{ "ToolTip", "Helper function to return the first filename stored in this data. The resulting filename will be absolute (ie, not relative to the asset)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "K2_GetFirstFilename", nullptr, nullptr, sizeof(AssetImportData_eventK2_GetFirstFilename_Parms), IF_WITH_EDITORONLY_DATA(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::PropPointers), 0), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics
	{
		struct AssetImportData_eventScriptedAddFilename_Parms
		{
			FString InPath;
			int32 Index;
			FString SourceFileLabel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_SourceFileLabel = { "SourceFileLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssetImportData_eventScriptedAddFilename_Parms, SourceFileLabel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_InPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::NewProp_SourceFileLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssetImportData" },
		{ "Comment", "/**\n\x09 * Add or update a filename at the specified index. If the index is greater then the number of source file,\n\x09 * it will add empty filenames to fill up to the specified index. The timespan and MD5 will be computed.\n\x09 *\n\x09 * @Param InPath: The filename we want to set at the specified index.\n\x09 * @Param Index: This specify the source file index in case you have many source file for an imported asset\n\x09 * @Param SourceFileLabel: Optional, can be empty string, the label we want to see in the UI when displaying the source file. (useful for multi source)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Add or update a filename at the specified index. If the index is greater then the number of source file,\nit will add empty filenames to fill up to the specified index. The timespan and MD5 will be computed.\n\n@Param InPath: The filename we want to set at the specified index.\n@Param Index: This specify the source file index in case you have many source file for an imported asset\n@Param SourceFileLabel: Optional, can be empty string, the label we want to see in the UI when displaying the source file. (useful for multi source)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetImportData, nullptr, "ScriptedAddFilename", nullptr, nullptr, sizeof(AssetImportData_eventScriptedAddFilename_Parms), Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAssetImportData_NoRegister()
	{
		return UAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetImportData_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetImportData_K2_ExtractFilenames, "K2_ExtractFilenames" }, // 1539837396
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetImportData_K2_GetFirstFilename, "K2_GetFirstFilename" }, // 2602431523
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAssetImportData_ScriptedAddFilename, "ScriptedAddFilename" }, // 1994761344
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array? */" },
		{ "IncludePath", "EditorFramework/AssetImportData.h" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "todo: Make this class better suited to multiple import paths - maybe have FAssetImportInfo use a map rather than array?" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this static mesh. Relative to the object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Path to the resource used to construct this static mesh. Relative to the object's package, BaseDir() or absolute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportData, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportData, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData_MetaData[] = {
		{ "Category", "File Path" },
		{ "Comment", "/** Source file data describing the files that were used to import this asset. */" },
		{ "ModuleRelativePath", "Classes/EditorFramework/AssetImportData.h" },
		{ "ToolTip", "Source file data describing the files that were used to import this asset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetImportData, SourceData), Z_Construct_UScriptStruct_FAssetImportInfo, METADATA_PARAMS(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetImportData_Statics::NewProp_SourceData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetImportData_Statics::ClassParams = {
		&UAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAssetImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetImportData, 3725396763);
	template<> ENGINE_API UClass* StaticClass<UAssetImportData>()
	{
		return UAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetImportData(Z_Construct_UClass_UAssetImportData, &UAssetImportData::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetImportData);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FARCHIVE_SERIALIZER(UAssetImportData)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Exporters/Exporter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExporter::execRunAssetExportTasks)
	{
		P_GET_TARRAY_REF(UAssetExportTask*,Z_Param_Out_ExportTasks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTasks(Z_Param_Out_ExportTasks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExporter::execRunAssetExportTask)
	{
		P_GET_OBJECT(UAssetExportTask,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTask(Z_Param_Task);
		P_NATIVE_END;
	}
	static FName NAME_UExporter_ScriptRunAssetExportTask = FName(TEXT("ScriptRunAssetExportTask"));
	bool UExporter::ScriptRunAssetExportTask(UAssetExportTask* Task)
	{
		Exporter_eventScriptRunAssetExportTask_Parms Parms;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UExporter_ScriptRunAssetExportTask),&Parms);
		return !!Parms.ReturnValue;
	}
	void UExporter::StaticRegisterNativesUExporter()
	{
		UClass* Class = UExporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAssetExportTask", &UExporter::execRunAssetExportTask },
			{ "RunAssetExportTasks", &UExporter::execRunAssetExportTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics
	{
		struct Exporter_eventRunAssetExportTask_Parms
		{
			UAssetExportTask* Task;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Exporter_eventRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Exporter_eventRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Child classes do not override this, but they do provide an Export() function\n\x09* to do the resource-specific export work.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if the the object was successfully exported\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param        Task            The task to export.\n\n@return       true if the the object was successfully exported" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTask", nullptr, nullptr, sizeof(Exporter_eventRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics
	{
		struct Exporter_eventRunAssetExportTasks_Parms
		{
			TArray<UAssetExportTask*> ExportTasks;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExportTasks;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner = { "ExportTasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks = { "ExportTasks", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Exporter_eventRunAssetExportTasks_Parms, ExportTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData)) };
	void Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTasks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Exporter_eventRunAssetExportTasks_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\n\x09 * to do the resource-specific export work.\n\x09 * \n\x09 * @param\x09""ExportTasks\x09\x09The array of tasks to export.\n\x09 *\n\x09 * @return\x09true if all tasks ran without error\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param       ExportTasks             The array of tasks to export.\n\n@return      true if all tasks ran without error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTasks", nullptr, nullptr, sizeof(Exporter_eventRunAssetExportTasks_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Exporter_eventScriptRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventScriptRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Exporter_eventScriptRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Overridden by script based exporters.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if overridden by script exporter.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Overridden by script based exporters.\n\n@param        Task            The task to export.\n\n@return       true if overridden by script exporter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "ScriptRunAssetExportTask", nullptr, nullptr, sizeof(Exporter_eventScriptRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExporter_NoRegister()
	{
		return UExporter::StaticClass();
	}
	struct Z_Construct_UClass_UExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportRootScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportRootScope;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatExtension_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatExtension;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FormatDescription_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FormatDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredFormatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreferredFormatIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextIndent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextIndent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[];
#endif
		static void NewProp_bText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectedOnly_MetaData[];
#endif
		static void NewProp_bSelectedOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectedOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFileOperations_MetaData[];
#endif
		static void NewProp_bForceFileOperations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFileOperations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExportTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTask, "RunAssetExportTask" }, // 4062764694
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTasks, "RunAssetExportTasks" }, // 1710661113
		{ &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask, "ScriptRunAssetExportTask" }, // 396912506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/Exporter.h" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Supported class of this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Supported class of this exporter" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, SupportedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData[] = {
		{ "Comment", "/**\n\x09 * The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\n\x09 * Objects being exported that are contained within ExportRootScope will use just their name instead of a full path\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\nObjects being exported that are contained within ExportRootScope will use just their name instead of a full path" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope = { "ExportRootScope", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, ExportRootScope), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner = { "FormatExtension", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** File extension to use for this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "File extension to use for this exporter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension = { "FormatExtension", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, FormatExtension), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner = { "FormatDescription", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Descriptiong of the export format */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Descriptiong of the export format" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription = { "FormatDescription", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, FormatDescription), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData[] = {
		{ "Comment", "/** Index into FormatExtension/FormatDescription of the preferred export format. */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Index into FormatExtension/FormatDescription of the preferred export format." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex = { "PreferredFormatIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, PreferredFormatIndex), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData[] = {
		{ "Comment", "/** Current indentation of spaces of the exported text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Current indentation of spaces of the exported text" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent = { "TextIndent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, TextIndent), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If true, this will export the data as text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export the data as text" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bText = { "bText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData[] = {
		{ "Comment", "/** If true, this will export only the selected objects */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export only the selected objects" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bSelectedOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly = { "bSelectedOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData[] = {
		{ "Comment", "/** If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory) */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bForceFileOperations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations = { "bForceFileOperations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask = { "ExportTask", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExporter, ExportTask), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExporter_Statics::ClassParams = {
		&UExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::PropPointers),
		0,
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExporter, 3243795784);
	template<> ENGINE_API UClass* StaticClass<UExporter>()
	{
		return UExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExporter(Z_Construct_UClass_UExporter, &UExporter::StaticClass, TEXT("/Script/Engine"), TEXT("UExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExporter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

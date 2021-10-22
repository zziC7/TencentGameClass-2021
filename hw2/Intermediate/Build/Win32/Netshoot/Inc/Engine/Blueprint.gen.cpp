// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Blueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprint() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
// End Cross Module References
	static UEnum* EBlueprintNativizationFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintNativizationFlag"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintNativizationFlag>()
	{
		return EBlueprintNativizationFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintNativizationFlag(EBlueprintNativizationFlag_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintNativizationFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Hash() { return 1324082013U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintNativizationFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintNativizationFlag"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintNativizationFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintNativizationFlag::Disabled", (int64)EBlueprintNativizationFlag::Disabled },
				{ "EBlueprintNativizationFlag::Dependency", (int64)EBlueprintNativizationFlag::Dependency },
				{ "EBlueprintNativizationFlag::ExplicitlyEnabled", (int64)EBlueprintNativizationFlag::ExplicitlyEnabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Dependency.Name", "EBlueprintNativizationFlag::Dependency" },
				{ "Disabled.Name", "EBlueprintNativizationFlag::Disabled" },
				{ "ExplicitlyEnabled.Comment", "// conditionally enabled (set from sub-class as a dependency)\n" },
				{ "ExplicitlyEnabled.Name", "EBlueprintNativizationFlag::ExplicitlyEnabled" },
				{ "ExplicitlyEnabled.ToolTip", "conditionally enabled (set from sub-class as a dependency)" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlueprintNativizationFlag",
				"EBlueprintNativizationFlag",
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
	static UEnum* EBlueprintCompileMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintCompileMode, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintCompileMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintCompileMode>()
	{
		return EBlueprintCompileMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintCompileMode(EBlueprintCompileMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintCompileMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintCompileMode_Hash() { return 2055080720U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintCompileMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintCompileMode"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintCompileMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintCompileMode::Default", (int64)EBlueprintCompileMode::Default },
				{ "EBlueprintCompileMode::Development", (int64)EBlueprintCompileMode::Development },
				{ "EBlueprintCompileMode::FinalRelease", (int64)EBlueprintCompileMode::FinalRelease },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Compile modes. */" },
				{ "Default.DisplayName", "Use Default" },
				{ "Default.Name", "EBlueprintCompileMode::Default" },
				{ "Default.ToolTip", "Use the default setting." },
				{ "Development.Name", "EBlueprintCompileMode::Development" },
				{ "Development.ToolTip", "Always compile in development mode (even when cooking)." },
				{ "FinalRelease.Name", "EBlueprintCompileMode::FinalRelease" },
				{ "FinalRelease.ToolTip", "Always compile in final release mode." },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Compile modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlueprintCompileMode",
				"EBlueprintCompileMode",
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
	static UEnum* EBlueprintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintType, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintType>()
	{
		return EBlueprintType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintType(EBlueprintType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintType_Hash() { return 2861152184U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintType"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BPTYPE_Normal", (int64)BPTYPE_Normal },
				{ "BPTYPE_Const", (int64)BPTYPE_Const },
				{ "BPTYPE_MacroLibrary", (int64)BPTYPE_MacroLibrary },
				{ "BPTYPE_Interface", (int64)BPTYPE_Interface },
				{ "BPTYPE_LevelScript", (int64)BPTYPE_LevelScript },
				{ "BPTYPE_FunctionLibrary", (int64)BPTYPE_FunctionLibrary },
				{ "BPTYPE_MAX", (int64)BPTYPE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BPTYPE_Const.Comment", "/** Blueprint that is const during execution (no state graph and methods cannot modify member variables). */" },
				{ "BPTYPE_Const.DisplayName", "Const Blueprint Class" },
				{ "BPTYPE_Const.Name", "BPTYPE_Const" },
				{ "BPTYPE_Const.ToolTip", "Blueprint that is const during execution (no state graph and methods cannot modify member variables)." },
				{ "BPTYPE_FunctionLibrary.Comment", "/** Blueprint that serves as a container for functions to be used in other blueprints. */" },
				{ "BPTYPE_FunctionLibrary.DisplayName", "Blueprint Function Library" },
				{ "BPTYPE_FunctionLibrary.Name", "BPTYPE_FunctionLibrary" },
				{ "BPTYPE_FunctionLibrary.ToolTip", "Blueprint that serves as a container for functions to be used in other blueprints." },
				{ "BPTYPE_Interface.Comment", "/** Blueprint that serves as an interface to be implemented by other blueprints. */" },
				{ "BPTYPE_Interface.DisplayName", "Blueprint Interface" },
				{ "BPTYPE_Interface.Name", "BPTYPE_Interface" },
				{ "BPTYPE_Interface.ToolTip", "Blueprint that serves as an interface to be implemented by other blueprints." },
				{ "BPTYPE_LevelScript.Comment", "/** Blueprint that handles level scripting. */" },
				{ "BPTYPE_LevelScript.DisplayName", "Level Blueprint" },
				{ "BPTYPE_LevelScript.Name", "BPTYPE_LevelScript" },
				{ "BPTYPE_LevelScript.ToolTip", "Blueprint that handles level scripting." },
				{ "BPTYPE_MacroLibrary.Comment", "/** Blueprint that serves as a container for macros to be used in other blueprints. */" },
				{ "BPTYPE_MacroLibrary.DisplayName", "Blueprint Macro Library" },
				{ "BPTYPE_MacroLibrary.Name", "BPTYPE_MacroLibrary" },
				{ "BPTYPE_MacroLibrary.ToolTip", "Blueprint that serves as a container for macros to be used in other blueprints." },
				{ "BPTYPE_MAX.Name", "BPTYPE_MAX" },
				{ "BPTYPE_Normal.Comment", "/** Normal blueprint. */" },
				{ "BPTYPE_Normal.DisplayName", "Blueprint Class" },
				{ "BPTYPE_Normal.Name", "BPTYPE_Normal" },
				{ "BPTYPE_Normal.ToolTip", "Normal blueprint." },
				{ "Comment", "/** Enumerates types of blueprints. */" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Enumerates types of blueprints." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlueprintType",
				"EBlueprintType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintStatus"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintStatus>()
	{
		return EBlueprintStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintStatus(EBlueprintStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintStatus_Hash() { return 4983715U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintStatus"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BS_Unknown", (int64)BS_Unknown },
				{ "BS_Dirty", (int64)BS_Dirty },
				{ "BS_Error", (int64)BS_Error },
				{ "BS_UpToDate", (int64)BS_UpToDate },
				{ "BS_BeingCreated", (int64)BS_BeingCreated },
				{ "BS_UpToDateWithWarnings", (int64)BS_UpToDateWithWarnings },
				{ "BS_MAX", (int64)BS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BS_BeingCreated.Comment", "/** Blueprint is in the process of being created for the first time. */" },
				{ "BS_BeingCreated.Name", "BS_BeingCreated" },
				{ "BS_BeingCreated.ToolTip", "Blueprint is in the process of being created for the first time." },
				{ "BS_Dirty.Comment", "/** Blueprint has been modified but not recompiled. */" },
				{ "BS_Dirty.Name", "BS_Dirty" },
				{ "BS_Dirty.ToolTip", "Blueprint has been modified but not recompiled." },
				{ "BS_Error.Comment", "/** Blueprint tried but failed to be compiled. */" },
				{ "BS_Error.Name", "BS_Error" },
				{ "BS_Error.ToolTip", "Blueprint tried but failed to be compiled." },
				{ "BS_MAX.Name", "BS_MAX" },
				{ "BS_Unknown.Comment", "/** Blueprint is in an unknown state. */" },
				{ "BS_Unknown.Name", "BS_Unknown" },
				{ "BS_Unknown.ToolTip", "Blueprint is in an unknown state." },
				{ "BS_UpToDate.Comment", "/** Blueprint has been compiled since it was last modified. */" },
				{ "BS_UpToDate.Name", "BS_UpToDate" },
				{ "BS_UpToDate.ToolTip", "Blueprint has been compiled since it was last modified." },
				{ "BS_UpToDateWithWarnings.Comment", "/** Blueprint has been compiled since it was last modified. There are warnings. */" },
				{ "BS_UpToDateWithWarnings.Name", "BS_UpToDateWithWarnings" },
				{ "BS_UpToDateWithWarnings.ToolTip", "Blueprint has been compiled since it was last modified. There are warnings." },
				{ "Comment", "/**\n * Enumerates states a blueprint can be in.\n */" },
				{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
				{ "ToolTip", "Enumerates states a blueprint can be in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlueprintStatus",
				"EBlueprintStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBPEditorBookmarkNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPEditorBookmarkNode, Z_Construct_UPackage__Script_Engine(), TEXT("BPEditorBookmarkNode"), sizeof(FBPEditorBookmarkNode), Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPEditorBookmarkNode>()
{
	return FBPEditorBookmarkNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPEditorBookmarkNode(FBPEditorBookmarkNode::StaticStruct, TEXT("/Script/Engine"), TEXT("BPEditorBookmarkNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPEditorBookmarkNode
{
	FScriptStruct_Engine_StaticRegisterNativesFBPEditorBookmarkNode()
	{
		UScriptStruct::DeferCppStructOps<FBPEditorBookmarkNode>(FName(TEXT("BPEditorBookmarkNode")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPEditorBookmarkNode;
	struct Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Bookmark node info */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark node info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPEditorBookmarkNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** Node ID */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Node ID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid_MetaData[] = {
		{ "Comment", "/** Parent ID */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Parent ID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid = { "ParentGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Display name */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Display name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPEditorBookmarkNode, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_ParentGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPEditorBookmarkNode",
		sizeof(FBPEditorBookmarkNode),
		alignof(FBPEditorBookmarkNode),
		Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPEditorBookmarkNode"), sizeof(FBPEditorBookmarkNode), Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Hash() { return 2185693991U; }
class UScriptStruct* FEditedDocumentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditedDocumentInfo, Z_Construct_UPackage__Script_Engine(), TEXT("EditedDocumentInfo"), sizeof(FEditedDocumentInfo), Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditedDocumentInfo>()
{
	return FEditedDocumentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditedDocumentInfo(FEditedDocumentInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("EditedDocumentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo()
	{
		UScriptStruct::DeferCppStructOps<FEditedDocumentInfo>(FName(TEXT("EditedDocumentInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditedDocumentInfo;
	struct Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditedObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditedObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedViewOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedViewOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedZoomAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedZoomAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditedDocumentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath_MetaData[] = {
		{ "Comment", "/** Edited object */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Edited object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath = { "EditedObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditedDocumentInfo, EditedObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset_MetaData[] = {
		{ "Comment", "/** Saved view position */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Saved view position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset = { "SavedViewOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditedDocumentInfo, SavedViewOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount_MetaData[] = {
		{ "Comment", "/** Saved zoom amount */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Saved zoom amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount = { "SavedZoomAmount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditedDocumentInfo, SavedZoomAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject_MetaData[] = {
		{ "Comment", "// Legacy hard reference is now serialized as a soft reference (see above).\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Legacy hard reference is now serialized as a soft reference (see above)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject = { "EditedObject", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditedDocumentInfo, EditedObject_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedViewOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_SavedZoomAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::NewProp_EditedObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditedDocumentInfo",
		sizeof(FEditedDocumentInfo),
		alignof(FEditedDocumentInfo),
		Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditedDocumentInfo"), sizeof(FEditedDocumentInfo), Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_Hash() { return 534005811U; }
class UScriptStruct* FBPInterfaceDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPInterfaceDescription, Z_Construct_UPackage__Script_Engine(), TEXT("BPInterfaceDescription"), sizeof(FBPInterfaceDescription), Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPInterfaceDescription>()
{
	return FBPInterfaceDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPInterfaceDescription(FBPInterfaceDescription::StaticStruct, TEXT("/Script/Engine"), TEXT("BPInterfaceDescription"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription
{
	FScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription()
	{
		UScriptStruct::DeferCppStructOps<FBPInterfaceDescription>(FName(TEXT("BPInterfaceDescription")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPInterfaceDescription;
	struct Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Graphs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing information about what interfaces are implemented in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Struct containing information about what interfaces are implemented in this blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPInterfaceDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface_MetaData[] = {
		{ "Comment", "/** Reference to the interface class we're adding to this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Reference to the interface class we're adding to this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceDescription, Interface), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_MetaData[] = {
		{ "Comment", "/** References to the graphs associated with the required functions for this interface */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "References to the graphs associated with the required functions for this interface" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPInterfaceDescription, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Interface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::NewProp_Graphs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPInterfaceDescription",
		sizeof(FBPInterfaceDescription),
		alignof(FBPInterfaceDescription),
		Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPInterfaceDescription"), sizeof(FBPInterfaceDescription), Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_Hash() { return 407138138U; }
class UScriptStruct* FBPVariableDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableDescription, Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableDescription"), sizeof(FBPVariableDescription), Get_Z_Construct_UScriptStruct_FBPVariableDescription_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPVariableDescription>()
{
	return FBPVariableDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVariableDescription(FBPVariableDescription::StaticStruct, TEXT("/Script/Engine"), TEXT("BPVariableDescription"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription
{
	FScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription()
	{
		UScriptStruct::DeferCppStructOps<FBPVariableDescription>(FName(TEXT("BPVariableDescription")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPVariableDescription;
	struct Z_Construct_UScriptStruct_FBPVariableDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_PropertyFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepNotifyFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RepNotifyFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReplicationCondition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct indicating a variable in the generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Struct indicating a variable in the generated class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Name of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of the variable" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid_MetaData[] = {
		{ "Comment", "/** A Guid that will remain constant even if the VarName changes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "A Guid that will remain constant even if the VarName changes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid = { "VarGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, VarGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Type of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Type of the variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType = { "VarType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, VarType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Friendly name of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Friendly name of the variable" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Category this variable should be in */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Category this variable should be in" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Property flags for this variable - Changed from int32 to uint64*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Property flags for this variable - Changed from int32 to uint64" },
	};
#endif
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags = { "PropertyFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, PropertyFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc_MetaData[] = {
		{ "Category", "BPVariableRepNotify" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc = { "RepNotifyFunc", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, RepNotifyFunc), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition = { "ReplicationCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, ReplicationCondition), Z_Construct_UEnum_CoreUObject_ELifetimeCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Metadata information for this variable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Optional new default value stored as string*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Optional new default value stored as string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_VarType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_PropertyFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_RepNotifyFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_ReplicationCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_MetaDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableDescription_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVariableDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPVariableDescription",
		sizeof(FBPVariableDescription),
		alignof(FBPVariableDescription),
		Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVariableDescription"), sizeof(FBPVariableDescription), Get_Z_Construct_UScriptStruct_FBPVariableDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVariableDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVariableDescription_Hash() { return 2146355096U; }
class UScriptStruct* FBPVariableMetaDataEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, Z_Construct_UPackage__Script_Engine(), TEXT("BPVariableMetaDataEntry"), sizeof(FBPVariableMetaDataEntry), Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPVariableMetaDataEntry>()
{
	return FBPVariableMetaDataEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPVariableMetaDataEntry(FBPVariableMetaDataEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("BPVariableMetaDataEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry()
	{
		UScriptStruct::DeferCppStructOps<FBPVariableMetaDataEntry>(FName(TEXT("BPVariableMetaDataEntry")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPVariableMetaDataEntry;
	struct Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** One metadata entry for a variable */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "One metadata entry for a variable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVariableMetaDataEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey_MetaData[] = {
		{ "Category", "BPVariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata key */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of metadata key" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey = { "DataKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue_MetaData[] = {
		{ "Category", "BPVariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata value */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Name of metadata value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue = { "DataValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPVariableMetaDataEntry, DataValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::NewProp_DataValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPVariableMetaDataEntry",
		sizeof(FBPVariableMetaDataEntry),
		alignof(FBPVariableMetaDataEntry),
		Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPVariableMetaDataEntry"), sizeof(FBPVariableMetaDataEntry), Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Hash() { return 1776683801U; }
class UScriptStruct* FBlueprintMacroCosmeticInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintMacroCosmeticInfo"), sizeof(FBlueprintMacroCosmeticInfo), Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintMacroCosmeticInfo>()
{
	return FBlueprintMacroCosmeticInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintMacroCosmeticInfo(FBlueprintMacroCosmeticInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintMacroCosmeticInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo()
	{
		UScriptStruct::DeferCppStructOps<FBlueprintMacroCosmeticInfo>(FName(TEXT("BlueprintMacroCosmeticInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintMacroCosmeticInfo;
	struct Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cached 'cosmetic' information about a macro graph (this is transient and is computed at load) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Cached 'cosmetic' information about a macro graph (this is transient and is computed at load)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintMacroCosmeticInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintMacroCosmeticInfo",
		sizeof(FBlueprintMacroCosmeticInfo),
		alignof(FBlueprintMacroCosmeticInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintMacroCosmeticInfo"), sizeof(FBlueprintMacroCosmeticInfo), Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Hash() { return 1906578879U; }
class UScriptStruct* FCompilerNativizationOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompilerNativizationOptions, Z_Construct_UPackage__Script_Engine(), TEXT("CompilerNativizationOptions"), sizeof(FCompilerNativizationOptions), Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompilerNativizationOptions>()
{
	return FCompilerNativizationOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompilerNativizationOptions(FCompilerNativizationOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("CompilerNativizationOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions()
	{
		UScriptStruct::DeferCppStructOps<FCompilerNativizationOptions>(FName(TEXT("CompilerNativizationOptions")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompilerNativizationOptions;
	struct Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerOnlyPlatform_MetaData[];
#endif
		static void NewProp_ServerOnlyPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ServerOnlyPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientOnlyPlatform_MetaData[];
#endif
		static void NewProp_ClientOnlyPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientOnlyPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeMonolithicHeaders_MetaData[];
#endif
		static void NewProp_bExcludeMonolithicHeaders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeMonolithicHeaders;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExcludedModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedModules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludedAssets_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ExcludedAssets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedFolderPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedFolderPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedFolderPaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompilerNativizationOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_PlatformName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompilerNativizationOptions, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform_SetBit(void* Obj)
	{
		((FCompilerNativizationOptions*)Obj)->ServerOnlyPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform = { "ServerOnlyPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCompilerNativizationOptions), &Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform_SetBit(void* Obj)
	{
		((FCompilerNativizationOptions*)Obj)->ClientOnlyPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform = { "ClientOnlyPlatform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCompilerNativizationOptions), &Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders_SetBit(void* Obj)
	{
		((FCompilerNativizationOptions*)Obj)->bExcludeMonolithicHeaders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders = { "bExcludeMonolithicHeaders", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCompilerNativizationOptions), &Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules_Inner = { "ExcludedModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules = { "ExcludedModules", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets_ElementProp = { "ExcludedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets_MetaData[] = {
		{ "Comment", "// Individually excluded assets\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Individually excluded assets" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets = { "ExcludedAssets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths_Inner = { "ExcludedFolderPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths_MetaData[] = {
		{ "Comment", "// Excluded folders. It excludes only BPGCs, enums and structures are still converted.\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Excluded folders. It excludes only BPGCs, enums and structures are still converted." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths = { "ExcludedFolderPaths", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompilerNativizationOptions, ExcludedFolderPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ServerOnlyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ClientOnlyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_bExcludeMonolithicHeaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::NewProp_ExcludedFolderPaths,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CompilerNativizationOptions",
		sizeof(FCompilerNativizationOptions),
		alignof(FCompilerNativizationOptions),
		Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompilerNativizationOptions"), sizeof(FCompilerNativizationOptions), Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompilerNativizationOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_Hash() { return 889174834U; }
	void UBlueprint::StaticRegisterNativesUBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UBlueprint_NoRegister()
	{
		return UBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecompileOnLoad_MetaData[];
#endif
		static void NewProp_bRecompileOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecompileOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenRegenerated_MetaData[];
#endif
		static void NewProp_bHasBeenRegenerated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenRegenerated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRegeneratingOnLoad_MetaData[];
#endif
		static void NewProp_bIsRegeneratingOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRegeneratingOnLoad;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBeingCompiled_MetaData[];
#endif
		static void NewProp_bBeingCompiled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBeingCompiled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNewlyCreated_MetaData[];
#endif
		static void NewProp_bIsNewlyCreated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNewlyCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFullEditor_MetaData[];
#endif
		static void NewProp_bForceFullEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFullEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQueuedForCompilation_MetaData[];
#endif
		static void NewProp_bQueuedForCompilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQueuedForCompilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptOnDrag_MetaData[];
#endif
		static void NewProp_bRunConstructionScriptOnDrag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptOnDrag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunConstructionScriptInSequencer_MetaData[];
#endif
		static void NewProp_bRunConstructionScriptInSequencer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunConstructionScriptInSequencer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateConstClass_MetaData[];
#endif
		static void NewProp_bGenerateConstClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateConstClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateAbstractClass_MetaData[];
#endif
		static void NewProp_bGenerateAbstractClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateAbstractClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayCompilePIEWarning_MetaData[];
#endif
		static void NewProp_bDisplayCompilePIEWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayCompilePIEWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeprecate_MetaData[];
#endif
		static void NewProp_bDeprecate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeprecate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDuplicatingReadOnly_MetaData[];
#endif
		static void NewProp_bDuplicatingReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDuplicatingReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNativize_MetaData[];
#endif
		static void NewProp_bNativize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNativize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NativizationFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativizationFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NativizationFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompileMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompileMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlueprintCategory;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HideCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HideCategories;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintSystemVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueprintSystemVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UbergraphPages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UbergraphPages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UbergraphPages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionGraphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DelegateSignatureGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateSignatureGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DelegateSignatureGraphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MacroGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MacroGraphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IntermediateGeneratedGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntermediateGeneratedGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntermediateGeneratedGraphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventGraphs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventGraphs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PRIVATE_CachedMacroInfo_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PRIVATE_CachedMacroInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PRIVATE_CachedMacroInfo;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Timelines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentClassOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClassOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentClassOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVariables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewVariables;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategorySorting_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySorting_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategorySorting;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImplementedInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplementedInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImplementedInterfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Bookmarks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookmarkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BookmarkNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Breakpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Breakpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Breakpoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WatchedPins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchedPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WatchedPins;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPinWatches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPinWatches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPinWatches;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentTemplateNameIndex_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentTemplateNameIndex_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplateNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ComponentTemplateNameIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldToNewComponentTemplateNames_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldToNewComponentTemplateNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OldToNewComponentTemplateNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Extensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledCDO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrcLastCompiledSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CrcLastCompiledSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OriginalClass;
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
	UObject* (*const Z_Construct_UClass_UBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintCore,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprints are special assets that provide an intuitive, node-based interface that can be used to create new types of Actors\n * and script level events; giving designers and gameplay programmers the tools to quickly create and iterate gameplay from\n * within Unreal Editor without ever needing to write a line of code.\n */" },
		{ "IncludePath", "Engine/Blueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Blueprints are special assets that provide an intuitive, node-based interface that can be used to create new types of Actors\nand script level events; giving designers and gameplay programmers the tools to quickly create and iterate gameplay from\nwithin Unreal Editor without ever needing to write a line of code." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "/** \n\x09 * Pointer to the parent class that the generated class should derive from. This *can* be null under rare circumstances, \n\x09 * one such case can be created by creating a blueprint (A) based on another blueprint (B), shutting down the editor, and\n\x09 * deleting the parent blueprint. Exported as Alphabetical in GetAssetRegistryTags\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Pointer to the parent class that the generated class should derive from. This *can* be null under rare circumstances,\none such case can be created by creating a blueprint (A) based on another blueprint (B), shutting down the editor, and\ndeleting the parent blueprint. Exported as Alphabetical in GetAssetRegistryTags" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ParentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Comment", "/** The type of this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The type of this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_MetaData[] = {
		{ "Comment", "/** Whether or not this blueprint should recompile itself on load */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint should recompile itself on load" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bRecompileOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad = { "bRecompileOnLoad", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_MetaData[] = {
		{ "Comment", "/** When the class generated by this blueprint is loaded, it will be recompiled the first time.  After that initial recompile, subsequent loads will skip the regeneration step */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "When the class generated by this blueprint is loaded, it will be recompiled the first time.  After that initial recompile, subsequent loads will skip the regeneration step" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bHasBeenRegenerated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated = { "bHasBeenRegenerated", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_MetaData[] = {
		{ "Comment", "/** State flag to indicate whether or not the Blueprint is currently being regenerated on load */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "State flag to indicate whether or not the Blueprint is currently being regenerated on load" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bIsRegeneratingOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad = { "bIsRegeneratingOnLoad", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_MetaData[] = {
		{ "Comment", "/** The blueprint is currently compiled */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The blueprint is currently compiled" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bBeingCompiled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled = { "bBeingCompiled", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_MetaData[] = {
		{ "Comment", "/** Whether or not this blueprint is newly created, and hasn't been opened in an editor yet */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint is newly created, and hasn't been opened in an editor yet" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bIsNewlyCreated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated = { "bIsNewlyCreated", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_MetaData[] = {
		{ "Comment", "/** Whether to force opening the full (non data-only) editor for this blueprint. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether to force opening the full (non data-only) editor for this blueprint." },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bForceFullEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor = { "bForceFullEditor", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bQueuedForCompilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation = { "bQueuedForCompilation", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/**whether or not you want to continuously rerun the construction script for an actor as you drag it in the editor, or only when the drag operation is complete*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor as you drag it in the editor, or only when the drag operation is complete" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bRunConstructionScriptOnDrag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag = { "bRunConstructionScriptOnDrag", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/**whether or not you want to continuously rerun the construction script for an actor in sequencer*/" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "whether or not you want to continuously rerun the construction script for an actor in sequencer" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bRunConstructionScriptInSequencer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer = { "bRunConstructionScriptInSequencer", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Whether or not this blueprint's class is a const class or not.  Should set CLASS_Const in the KismetCompiler. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint's class is a const class or not.  Should set CLASS_Const in the KismetCompiler." },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bGenerateConstClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass = { "bGenerateConstClass", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Whether or not this blueprint's class is a abstract class or not.  Should set CLASS_Abstract in the KismetCompiler. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Whether or not this blueprint's class is a abstract class or not.  Should set CLASS_Abstract in the KismetCompiler." },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bGenerateAbstractClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass = { "bGenerateAbstractClass", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_MetaData[] = {
		{ "Comment", "/** TRUE to show a warning when attempting to start in PIE and there is a compiler error on this Blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "TRUE to show a warning when attempting to start in PIE and there is a compiler error on this Blueprint" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bDisplayCompilePIEWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning = { "bDisplayCompilePIEWarning", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** Deprecates the Blueprint, marking the generated class with the CLASS_Deprecated flag */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Deprecates the Blueprint, marking the generated class with the CLASS_Deprecated flag" },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bDeprecate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate = { "bDeprecate", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_MetaData[] = {
		{ "Comment", "/** \n\x09 * Flag indicating that a read only duplicate of this blueprint is being created, used to disable logic in ::PostDuplicate,\n\x09 *\n\x09 * This flag needs to be copied on duplication (because it's the duplicated object that we're disabling on PostDuplicate),\n\x09 * but we don't *need* to serialize it for permanent objects.\n\x09 *\n\x09 * Without setting this flag a blueprint will be marked dirty when it is duplicated and if saved while in this dirty\n\x09 * state you will not be able to open the blueprint. More specifically, UClass::Rename (called by DestroyGeneratedClass)\n\x09 * sets a dirty flag on the package. Once saved the package will fail to open because some unnamed objects are present in\n\x09 * the pacakge.\n\x09 *\n\x09 * This flag can be used to avoid the package being marked as dirty in the first place. Ideally PostDuplicateObject\n\x09 * would not rename classes that are still in use by the original object.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Flag indicating that a read only duplicate of this blueprint is being created, used to disable logic in ::PostDuplicate,\n\nThis flag needs to be copied on duplication (because it's the duplicated object that we're disabling on PostDuplicate),\nbut we don't *need* to serialize it for permanent objects.\n\nWithout setting this flag a blueprint will be marked dirty when it is duplicated and if saved while in this dirty\nstate you will not be able to open the blueprint. More specifically, UClass::Rename (called by DestroyGeneratedClass)\nsets a dirty flag on the package. Once saved the package will fail to open because some unnamed objects are present in\nthe pacakge.\n\nThis flag can be used to avoid the package being marked as dirty in the first place. Ideally PostDuplicateObject\nwould not rename classes that are still in use by the original object." },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bDuplicatingReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly = { "bDuplicatingReadOnly", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize_MetaData[] = {
		{ "Comment", "/** Deprecated properties. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Deprecated properties." },
	};
#endif
	void Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize_SetBit(void* Obj)
	{
		((UBlueprint*)Obj)->bNativize_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize = { "bNativize", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprint), &Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_MetaData[] = {
		{ "Comment", "/** When exclusive nativization is enabled, then this asset will be nativized. All super classes must be also nativized. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "When exclusive nativization is enabled, then this asset will be nativized. All super classes must be also nativized." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag = { "NativizationFlag", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, NativizationFlag), Z_Construct_UEnum_Engine_EBlueprintNativizationFlag, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/** The mode that will be used when compiling this class. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The mode that will be used when compiling this class." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode = { "CompileMode", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, CompileMode), Z_Construct_UEnum_Engine_EBlueprintCompileMode, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** The current status of this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The current status of this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, Status), Z_Construct_UEnum_Engine_EBlueprintStatus, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Overrides the BP's display name in the editor UI */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Overrides the BP's display name in the editor UI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName = { "BlueprintDisplayName", nullptr, (EPropertyFlags)0x0010000800200001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintDisplayName), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Shows up in the content browser tooltip when the blueprint is hovered */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shows up in the content browser tooltip when the blueprint is hovered" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription = { "BlueprintDescription", nullptr, (EPropertyFlags)0x0010000800200001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintDescription), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** The namespace of this blueprint (if set, the Blueprint will be treated differently for the context menu) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The namespace of this blueprint (if set, the Blueprint will be treated differently for the context menu)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace = { "BlueprintNamespace", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintNamespace), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** The category of the Blueprint, used to organize this Blueprint class when displayed in palette windows */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The category of the Blueprint, used to organize this Blueprint class when displayed in palette windows" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory = { "BlueprintCategory", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintCategory), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_Inner = { "HideCategories", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_MetaData[] = {
		{ "Category", "BlueprintOptions" },
		{ "Comment", "/** Additional HideCategories. These are added to HideCategories from parent. */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Additional HideCategories. These are added to HideCategories from parent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories = { "HideCategories", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, HideCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion_MetaData[] = {
		{ "Comment", "/** The version of the blueprint system that was used to  create this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "The version of the blueprint system that was used to  create this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion = { "BlueprintSystemVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BlueprintSystemVersion), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript_MetaData[] = {
		{ "Comment", "/** 'Simple' construction script - graph of components to instance */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript = { "SimpleConstructionScript", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_Inner = { "UbergraphPages", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_MetaData[] = {
		{ "Comment", "/** Set of pages that combine into a single uber-graph */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of pages that combine into a single uber-graph" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages = { "UbergraphPages", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, UbergraphPages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_Inner = { "FunctionGraphs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions implemented for this class graphically */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions implemented for this class graphically" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs = { "FunctionGraphs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, FunctionGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_Inner = { "DelegateSignatureGraphs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_MetaData[] = {
		{ "Comment", "/** Graphs of signatures for delegates */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Graphs of signatures for delegates" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs = { "DelegateSignatureGraphs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, DelegateSignatureGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_Inner = { "MacroGraphs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_MetaData[] = {
		{ "Comment", "/** Set of macros implemented for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of macros implemented for this class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs = { "MacroGraphs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, MacroGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_Inner = { "IntermediateGeneratedGraphs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions actually compiled for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions actually compiled for this class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs = { "IntermediateGeneratedGraphs", nullptr, (EPropertyFlags)0x0010000800202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, IntermediateGeneratedGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_Inner = { "EventGraphs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_MetaData[] = {
		{ "Comment", "/** Set of functions actually compiled for this class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of functions actually compiled for this class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs = { "EventGraphs", nullptr, (EPropertyFlags)0x0010000800202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, EventGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_ValueProp = { "PRIVATE_CachedMacroInfo", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp = { "PRIVATE_CachedMacroInfo_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_MetaData[] = {
		{ "Comment", "/** Cached cosmetic information about macro graphs, use GetCosmeticInfoForMacro() to access */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Cached cosmetic information about macro graphs, use GetCosmeticInfoForMacro() to access" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo = { "PRIVATE_CachedMacroInfo", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, PRIVATE_CachedMacroInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_Inner = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_MetaData[] = {
		{ "Comment", "/** Array of component template objects, used by AddComponent function */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ComponentTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_Inner = { "Timelines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_MetaData[] = {
		{ "Comment", "/** Array of templates for timelines that should be created */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines = { "Timelines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, Timelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_Inner = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPComponentClassOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_MetaData[] = {
		{ "Comment", "/** Array of blueprint overrides of component classes in parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of blueprint overrides of component classes in parent classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ComponentClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler_MetaData[] = {
		{ "Comment", "/** Stores data to override (in children classes) components (created by SCS) from parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler = { "InheritableComponentHandler", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_Inner = { "NewVariables", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_MetaData[] = {
		{ "Comment", "/** Array of new variables to be added to generated class */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of new variables to be added to generated class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables = { "NewVariables", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, NewVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_Inner = { "CategorySorting", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_MetaData[] = {
		{ "Comment", "/** Array of user sorted categories */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of user sorted categories" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting = { "CategorySorting", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, CategorySorting), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_Inner = { "ImplementedInterfaces", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPInterfaceDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_MetaData[] = {
		{ "Comment", "/** Array of info about the interfaces we implement in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of info about the interfaces we implement in this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces = { "ImplementedInterfaces", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ImplementedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Set of documents that were being edited in this blueprint, so we can open them right away */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Set of documents that were being edited in this blueprint, so we can open them right away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_ValueProp = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_Key_KeyProp = { "Bookmarks_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "Comment", "/** Bookmark data */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark data" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, Bookmarks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_Inner = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPEditorBookmarkNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_MetaData[] = {
		{ "Comment", "/** Bookmark nodes (for display) */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Bookmark nodes (for display)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, BookmarkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_Inner = { "Breakpoints", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBreakpoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_MetaData[] = {
		{ "Comment", "/** Persistent debugging options */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Persistent debugging options" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints = { "Breakpoints", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, Breakpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_Inner = { "WatchedPins", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins = { "WatchedPins", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, WatchedPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_Inner = { "DeprecatedPinWatches", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches = { "DeprecatedPinWatches", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, DeprecatedPinWatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_ValueProp = { "ComponentTemplateNameIndex", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_Key_KeyProp = { "ComponentTemplateNameIndex_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_MetaData[] = {
		{ "Comment", "/** Index map for component template names */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Index map for component template names" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex = { "ComponentTemplateNameIndex", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ComponentTemplateNameIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_ValueProp = { "OldToNewComponentTemplateNames", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_Key_KeyProp = { "OldToNewComponentTemplateNames_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_MetaData[] = {
		{ "Comment", "/** Maps old to new component template names */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Maps old to new component template names" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames = { "OldToNewComponentTemplateNames", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, OldToNewComponentTemplateNames), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlueprintExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_MetaData[] = {
		{ "Comment", "/** Array of extensions for this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Array of extensions for this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO_MetaData[] = {
		{ "Comment", "/** CRC for CDO calculated right after the latest compilation used by Reinstancer to check if default values were changed */" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "CRC for CDO calculated right after the latest compilation used by Reinstancer to check if default values were changed" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO = { "CrcLastCompiledCDO", nullptr, (EPropertyFlags)0x0010000800202000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, CrcLastCompiledCDO), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature = { "CrcLastCompiledSignature", nullptr, (EPropertyFlags)0x0010000800202000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, CrcLastCompiledSignature), METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass_MetaData[] = {
		{ "Comment", "// If this BP is just a duplicate created for a specific compilation, the reference to original GeneratedClass is needed\n" },
		{ "ModuleRelativePath", "Classes/Engine/Blueprint.h" },
		{ "ToolTip", "If this BP is just a duplicate created for a specific compilation, the reference to original GeneratedClass is needed" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass = { "OriginalClass", nullptr, (EPropertyFlags)0x0010000800202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprint, OriginalClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRecompileOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bHasBeenRegenerated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsRegeneratingOnLoad,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bBeingCompiled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bIsNewlyCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bForceFullEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bQueuedForCompilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptOnDrag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bRunConstructionScriptInSequencer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateConstClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bGenerateAbstractClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDisplayCompilePIEWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDeprecate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bDuplicatingReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_bNativize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NativizationFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CompileMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_HideCategories,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BlueprintSystemVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_SimpleConstructionScript,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_UbergraphPages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_FunctionGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DelegateSignatureGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_MacroGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_IntermediateGeneratedGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_EventGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_PRIVATE_CachedMacroInfo,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Timelines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentClassOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_InheritableComponentHandler,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_NewVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CategorySorting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ImplementedInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_LastEditedDocuments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Bookmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_BookmarkNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Breakpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_WatchedPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_DeprecatedPinWatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ComponentTemplateNameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OldToNewComponentTemplateNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_CrcLastCompiledSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprint_Statics::NewProp_OriginalClass,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprint_Statics::ClassParams = {
		&UBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprint, 2265090230);
	template<> ENGINE_API UClass* StaticClass<UBlueprint>()
	{
		return UBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprint(Z_Construct_UClass_UBlueprint, &UBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprint);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprint)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

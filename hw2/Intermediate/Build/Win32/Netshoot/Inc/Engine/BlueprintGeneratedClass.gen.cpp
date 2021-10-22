// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FBPComponentClassOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBPComponentClassOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPComponentClassOverride, Z_Construct_UPackage__Script_Engine(), TEXT("BPComponentClassOverride"), sizeof(FBPComponentClassOverride), Get_Z_Construct_UScriptStruct_FBPComponentClassOverride_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBPComponentClassOverride>()
{
	return FBPComponentClassOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPComponentClassOverride(FBPComponentClassOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("BPComponentClassOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBPComponentClassOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFBPComponentClassOverride()
	{
		UScriptStruct::DeferCppStructOps<FBPComponentClassOverride>(FName(TEXT("BPComponentClassOverride")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBPComponentClassOverride;
	struct Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Utility struct to store class overrides for components. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Utility struct to store class overrides for components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPComponentClassOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** The component name an override is being specified for. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The component name an override is being specified for." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPComponentClassOverride, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** The class to use when constructing the component. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The class to use when constructing the component." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPComponentClassOverride, ComponentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::NewProp_ComponentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BPComponentClassOverride",
		sizeof(FBPComponentClassOverride),
		alignof(FBPComponentClassOverride),
		Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPComponentClassOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPComponentClassOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPComponentClassOverride"), sizeof(FBPComponentClassOverride), Get_Z_Construct_UScriptStruct_FBPComponentClassOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPComponentClassOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPComponentClassOverride_Hash() { return 2052126820U; }
class UScriptStruct* FBlueprintCookedComponentInstancingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintCookedComponentInstancingData>()
{
	return FBlueprintCookedComponentInstancingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintCookedComponentInstancingData(FBlueprintCookedComponentInstancingData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintCookedComponentInstancingData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData()
	{
		UScriptStruct::DeferCppStructOps<FBlueprintCookedComponentInstancingData>(FName(TEXT("BlueprintCookedComponentInstancingData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData;
	struct Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedPropertyList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedPropertyList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangedPropertyList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasValidCookedData_MetaData[];
#endif
		static void NewProp_bHasValidCookedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasValidCookedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cooked data for a Blueprint component template. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Cooked data for a Blueprint component template." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData[] = {
		{ "Comment", "/** List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList = { "ChangedPropertyList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintCookedComponentInstancingData, ChangedPropertyList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData[] = {
		{ "Comment", "/** Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context." },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit(void* Obj)
	{
		((FBlueprintCookedComponentInstancingData*)Obj)->bHasValidCookedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData = { "bHasValidCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlueprintCookedComponentInstancingData), &Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bHasValidCookedData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintCookedComponentInstancingData",
		sizeof(FBlueprintCookedComponentInstancingData),
		alignof(FBlueprintCookedComponentInstancingData),
		Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Hash() { return 1429842922U; }
class UScriptStruct* FBlueprintComponentChangedPropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentChangedPropertyInfo>()
{
	return FBlueprintComponentChangedPropertyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintComponentChangedPropertyInfo(FBlueprintComponentChangedPropertyInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintComponentChangedPropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo()
	{
		UScriptStruct::DeferCppStructOps<FBlueprintComponentChangedPropertyInfo>(FName(TEXT("BlueprintComponentChangedPropertyInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo;
	struct Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyScope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single changed Blueprint component property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "A single changed Blueprint component property." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The name of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The name of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The array index of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The array index of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData[] = {
		{ "Comment", "/** The parent struct (owner) of the changed property. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The parent struct (owner) of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope = { "PropertyScope", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyScope), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintComponentChangedPropertyInfo",
		sizeof(FBlueprintComponentChangedPropertyInfo),
		alignof(FBlueprintComponentChangedPropertyInfo),
		Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Hash() { return 447431432U; }
class UScriptStruct* FEventGraphFastCallPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventGraphFastCallPair, Z_Construct_UPackage__Script_Engine(), TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEventGraphFastCallPair>()
{
	return FEventGraphFastCallPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventGraphFastCallPair(FEventGraphFastCallPair::StaticStruct, TEXT("/Script/Engine"), TEXT("EventGraphFastCallPair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair
{
	FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair()
	{
		UScriptStruct::DeferCppStructOps<FEventGraphFastCallPair>(FName(TEXT("EventGraphFastCallPair")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair;
	struct Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionToPatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionToPatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGraphCallOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventGraphCallOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch = { "FunctionToPatch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventGraphFastCallPair, FunctionToPatch), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset = { "EventGraphCallOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventGraphFastCallPair, EventGraphCallOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EventGraphFastCallPair",
		sizeof(FEventGraphFastCallPair),
		alignof(FEventGraphFastCallPair),
		Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_Hash() { return 367999498U; }
class UScriptStruct* FBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintDebugData>()
{
	return FBlueprintDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintDebugData(FBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps<FBlueprintDebugData>(FName(TEXT("BlueprintDebugData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData;
	struct Z_Construct_UScriptStruct_FBlueprintDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintDebugData",
		sizeof(FBlueprintDebugData),
		alignof(FBlueprintDebugData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_Hash() { return 253242516U; }
class UScriptStruct* FPointerToUberGraphFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerToUberGraphFrame, Z_Construct_UPackage__Script_Engine(), TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPointerToUberGraphFrame>()
{
	return FPointerToUberGraphFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerToUberGraphFrame(FPointerToUberGraphFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("PointerToUberGraphFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame()
	{
		UScriptStruct::DeferCppStructOps<FPointerToUberGraphFrame>(FName(TEXT("PointerToUberGraphFrame")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame;
	struct Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PointerToUberGraphFrame",
		sizeof(FPointerToUberGraphFrame),
		alignof(FPointerToUberGraphFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Hash() { return 2325168266U; }
class UScriptStruct* FDebuggingInfoForSingleFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction, Z_Construct_UPackage__Script_Engine(), TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebuggingInfoForSingleFunction>()
{
	return FDebuggingInfoForSingleFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebuggingInfoForSingleFunction(FDebuggingInfoForSingleFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("DebuggingInfoForSingleFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction()
	{
		UScriptStruct::DeferCppStructOps<FDebuggingInfoForSingleFunction>(FName(TEXT("DebuggingInfoForSingleFunction")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction;
	struct Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebuggingInfoForSingleFunction",
		sizeof(FDebuggingInfoForSingleFunction),
		alignof(FDebuggingInfoForSingleFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Hash() { return 595057737U; }
class UScriptStruct* FNodeToCodeAssociation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeToCodeAssociation, Z_Construct_UPackage__Script_Engine(), TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeToCodeAssociation>()
{
	return FNodeToCodeAssociation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeToCodeAssociation(FNodeToCodeAssociation::StaticStruct, TEXT("/Script/Engine"), TEXT("NodeToCodeAssociation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation
{
	FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation()
	{
		UScriptStruct::DeferCppStructOps<FNodeToCodeAssociation>(FName(TEXT("NodeToCodeAssociation")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation;
	struct Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NodeToCodeAssociation",
		sizeof(FNodeToCodeAssociation),
		alignof(FNodeToCodeAssociation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_Hash() { return 1934798434U; }
	void UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumReplicatedProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNativizedParent_MetaData[];
#endif
		static void NewProp_bHasNativizedParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNativizedParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCookedComponentInstancingData_MetaData[];
#endif
		static void NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSparseClassDataSerializable_MetaData[];
#endif
		static void NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSparseClassDataSerializable;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicBindingObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBindingObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicBindingObjects;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UberGraphFramePointerProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UberGraphFramePointerProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UberGraphFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UberGraphFunction;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastCallPairs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastCallPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FastCallPairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenArchetypeForCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridenArchetypeForCDO;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyGuids_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyGuids_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertyGuids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CalledFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalledFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CalledFunctions;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CookedComponentInstancingData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CookedComponentInstancingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties = { "NumReplicatedProperties", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, NumReplicatedProperties), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData[] = {
		{ "Comment", "/** Flag used to indicate if this class has a nativized parent in a cooked build. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag used to indicate if this class has a nativized parent in a cooked build." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bHasNativizedParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent = { "bHasNativizedParent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData[] = {
		{ "Comment", "/** Flag used to indicate if this class has data to support the component instancing fast path. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag used to indicate if this class has data to support the component instancing fast path." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bHasCookedComponentInstancingData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData = { "bHasCookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData[] = {
		{ "Comment", "/** Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Used to check if this class has sparse data that can be serialized. This will be false when loading the data if it hasn't already been saved out." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bIsSparseClassDataSerializable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable = { "bIsSparseClassDataSerializable", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData[] = {
		{ "Comment", "/** Array of objects containing information for dynamically binding delegates to functions in this blueprint */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of objects containing information for dynamically binding delegates to functions in this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects = { "DynamicBindingObjects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, DynamicBindingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData[] = {
		{ "Comment", "/** Array of component template objects, used by AddComponent function */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates = { "ComponentTemplates", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner = { "Timelines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData[] = {
		{ "Comment", "/** Array of templates for timelines that should be created */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines = { "Timelines", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, Timelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPComponentClassOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData[] = {
		{ "Comment", "/** Array of blueprint overrides of component classes in parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of blueprint overrides of component classes in parent classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides = { "ComponentClassOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData[] = {
		{ "Comment", "/** 'Simple' construction script - graph of components to instance */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript = { "SimpleConstructionScript", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData[] = {
		{ "Comment", "/** Stores data to override (in children classes) components (created by SCS) from parent classes */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler = { "InheritableComponentHandler", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty = { "UberGraphFramePointerProperty", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFramePointerProperty_DEPRECATED), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction = { "UberGraphFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner = { "FastCallPairs", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventGraphFastCallPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData[] = {
		{ "Comment", "// This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\n// It is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\nIt is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs = { "FastCallPairs", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, FastCallPairs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO = { "OverridenArchetypeForCDO", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, OverridenArchetypeForCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp = { "PropertyGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp = { "PropertyGuids_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData[] = {
		{ "Comment", "/** Property guid map */" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids = { "PropertyGuids", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, PropertyGuids), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner = { "CalledFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions = { "CalledFunctions", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CalledFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp = { "CookedComponentInstancingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "Comment", "// Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\n// Note: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\nNote: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedComponentInstancingData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasCookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bIsSparseClassDataSerializable,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentClassOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFramePointerProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CalledFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams = {
		&UBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintGeneratedClass, 1268779990);
	template<> ENGINE_API UClass* StaticClass<UBlueprintGeneratedClass>()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGeneratedClass(Z_Construct_UClass_UBlueprintGeneratedClass, &UBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGeneratedClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintGeneratedClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyPath/Public/PropertyPathHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPathHelpers() {}
// Cross Module References
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
	UPackage* Z_Construct_UPackage__Script_PropertyPath();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
class UScriptStruct* FCachedPropertyPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYPATH_API uint32 Get_Z_Construct_UScriptStruct_FCachedPropertyPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPropertyPath, Z_Construct_UPackage__Script_PropertyPath(), TEXT("CachedPropertyPath"), sizeof(FCachedPropertyPath), Get_Z_Construct_UScriptStruct_FCachedPropertyPath_Hash());
	}
	return Singleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FCachedPropertyPath>()
{
	return FCachedPropertyPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedPropertyPath(FCachedPropertyPath::StaticStruct, TEXT("/Script/PropertyPath"), TEXT("CachedPropertyPath"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyPath_StaticRegisterNativesFCachedPropertyPath
{
	FScriptStruct_PropertyPath_StaticRegisterNativesFCachedPropertyPath()
	{
		UScriptStruct::DeferCppStructOps<FCachedPropertyPath>(FName(TEXT("CachedPropertyPath")));
	}
} ScriptStruct_PropertyPath_StaticRegisterNativesFCachedPropertyPath;
	struct Z_Construct_UScriptStruct_FCachedPropertyPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for cached property paths */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Base class for cached property paths" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPropertyPath>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertyPathSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_MetaData[] = {
		{ "Comment", "/** Path segments for this path */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Path segments for this path" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedPropertyPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction_MetaData[] = {
		{ "Comment", "/** Cached function for function-terminated paths */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Cached function for function-terminated paths" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction = { "CachedFunction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedPropertyPath, CachedFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::NewProp_CachedFunction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		&NewStructOps,
		"CachedPropertyPath",
		sizeof(FCachedPropertyPath),
		alignof(FCachedPropertyPath),
		Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedPropertyPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyPath();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedPropertyPath"), sizeof(FCachedPropertyPath), Get_Z_Construct_UScriptStruct_FCachedPropertyPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedPropertyPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedPropertyPath_Hash() { return 2848771609U; }
class UScriptStruct* FPropertyPathSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROPERTYPATH_API uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathSegment, Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathSegment"), sizeof(FPropertyPathSegment), Get_Z_Construct_UScriptStruct_FPropertyPathSegment_Hash());
	}
	return Singleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathSegment>()
{
	return FPropertyPathSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertyPathSegment(FPropertyPathSegment::StaticStruct, TEXT("/Script/PropertyPath"), TEXT("PropertyPathSegment"), false, nullptr, nullptr);
static struct FScriptStruct_PropertyPath_StaticRegisterNativesFPropertyPathSegment
{
	FScriptStruct_PropertyPath_StaticRegisterNativesFPropertyPathSegment()
	{
		UScriptStruct::DeferCppStructOps<FPropertyPathSegment>(FName(TEXT("PropertyPathSegment")));
	}
} ScriptStruct_PropertyPath_StaticRegisterNativesFPropertyPathSegment;
	struct Z_Construct_UScriptStruct_FPropertyPathSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for cached property path segments */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "Base class for cached property path segments" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The sub-component of the property path, a single value between .'s of the path */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The sub-component of the property path, a single value between .'s of the path" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyPathSegment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The optional array index. */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The optional array index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyPathSegment, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The cached Class or ScriptStruct that was used last to resolve Name to a property. */" },
		{ "ModuleRelativePath", "Public/PropertyPathHelpers.h" },
		{ "ToolTip", "The cached Class or ScriptStruct that was used last to resolve Name to a property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertyPathSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::NewProp_Struct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
		nullptr,
		&NewStructOps,
		"PropertyPathSegment",
		sizeof(FPropertyPathSegment),
		alignof(FPropertyPathSegment),
		Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PropertyPath();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyPathSegment"), sizeof(FPropertyPathSegment), Get_Z_Construct_UScriptStruct_FPropertyPathSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyPathSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_Hash() { return 1221755107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

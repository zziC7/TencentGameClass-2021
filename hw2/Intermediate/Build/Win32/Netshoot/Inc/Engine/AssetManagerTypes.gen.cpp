// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/AssetManagerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
// End Cross Module References
	static UEnum* EPrimaryAssetCookRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, Z_Construct_UPackage__Script_Engine(), TEXT("EPrimaryAssetCookRule"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPrimaryAssetCookRule>()
	{
		return EPrimaryAssetCookRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryAssetCookRule(EPrimaryAssetCookRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EPrimaryAssetCookRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Hash() { return 1137644209U; }
	UEnum* Z_Construct_UEnum_Engine_EPrimaryAssetCookRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryAssetCookRule"), 0, Get_Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryAssetCookRule::Unknown", (int64)EPrimaryAssetCookRule::Unknown },
				{ "EPrimaryAssetCookRule::NeverCook", (int64)EPrimaryAssetCookRule::NeverCook },
				{ "EPrimaryAssetCookRule::DevelopmentCook", (int64)EPrimaryAssetCookRule::DevelopmentCook },
				{ "EPrimaryAssetCookRule::DevelopmentAlwaysCook", (int64)EPrimaryAssetCookRule::DevelopmentAlwaysCook },
				{ "EPrimaryAssetCookRule::AlwaysCook", (int64)EPrimaryAssetCookRule::AlwaysCook },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysCook.Comment", "/** Asset will always be cooked, in both production and development. */" },
				{ "AlwaysCook.Name", "EPrimaryAssetCookRule::AlwaysCook" },
				{ "AlwaysCook.ToolTip", "Asset will always be cooked, in both production and development." },
				{ "Comment", "/** Rule about when to cook/ship a primary asset */" },
				{ "DevelopmentAlwaysCook.Comment", "/** Asset will always be cooked in development, but should never be cooked in a production build. */" },
				{ "DevelopmentAlwaysCook.Name", "EPrimaryAssetCookRule::DevelopmentAlwaysCook" },
				{ "DevelopmentAlwaysCook.ToolTip", "Asset will always be cooked in development, but should never be cooked in a production build." },
				{ "DevelopmentCook.Comment", "/** Asset will be cooked in development if something else depends on it, but will never be cooked in a production build. */" },
				{ "DevelopmentCook.Name", "EPrimaryAssetCookRule::DevelopmentCook" },
				{ "DevelopmentCook.ToolTip", "Asset will be cooked in development if something else depends on it, but will never be cooked in a production build." },
				{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
				{ "NeverCook.Comment", "/** Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it. */" },
				{ "NeverCook.Name", "EPrimaryAssetCookRule::NeverCook" },
				{ "NeverCook.ToolTip", "Asset should never be cooked/shipped in any situation. An error will be generated if something depends on it." },
				{ "ToolTip", "Rule about when to cook/ship a primary asset" },
				{ "Unknown.Comment", "/** Nothing is known about this asset specifically. It will cook if something else depends on it. */" },
				{ "Unknown.Name", "EPrimaryAssetCookRule::Unknown" },
				{ "Unknown.ToolTip", "Nothing is known about this asset specifically. It will cook if something else depends on it." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPrimaryAssetCookRule",
				"EPrimaryAssetCookRule",
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
class UScriptStruct* FAssetManagerSearchRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetManagerSearchRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerSearchRules, Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerSearchRules"), sizeof(FAssetManagerSearchRules), Get_Z_Construct_UScriptStruct_FAssetManagerSearchRules_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetManagerSearchRules>()
{
	return FAssetManagerSearchRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetManagerSearchRules(FAssetManagerSearchRules::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetManagerSearchRules"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetManagerSearchRules
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetManagerSearchRules()
	{
		UScriptStruct::DeferCppStructOps<FAssetManagerSearchRules>(FName(TEXT("AssetManagerSearchRules")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetManagerSearchRules;
	struct Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncludePatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludePatterns;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludePatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePatterns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetBaseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[];
#endif
		static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceSynchronousScan_MetaData[];
#endif
		static void NewProp_bForceSynchronousScan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSynchronousScan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipVirtualPathExpansion_MetaData[];
#endif
		static void NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipVirtualPathExpansion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipManagerIncludeCheck_MetaData[];
#endif
		static void NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipManagerIncludeCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rules for how to scan the asset registry for assets matching path and type descriptions */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rules for how to scan the asset registry for assets matching path and type descriptions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerSearchRules>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing / */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "List of top-level directories and specific assets to search, must be paths starting with /, directories should not have a trailing /" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerSearchRules, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner = { "IncludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of include wildcard patterns using * that will get matched against full package path. If there are any at least one of these must match" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns = { "IncludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerSearchRules, IncludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Optional list of exclude wildcard patterns that can use *, if any of these match it will be excluded" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns = { "ExcludePatterns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerSearchRules, ExcludePatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Assets must inherit from this class, for blueprints this should be the instance base class */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets must inherit from this class, for blueprints this should be the instance base class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerSearchRules, AssetBaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if scanning for blueprints, false for all other assets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if scanning for blueprints, false for all other assets" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bHasBlueprintClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this should force a synchronous scan of the disk even if an async scan is in progress */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this should force a synchronous scan of the disk even if an async scan is in progress" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bForceSynchronousScan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan = { "bForceSynchronousScan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if AssetScanPaths are real paths that do not need expansion */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if AssetScanPaths are real paths that do not need expansion" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bSkipVirtualPathExpansion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion = { "bSkipVirtualPathExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this test should skip the ShouldIncludeInAssetSearch function on AssetManager" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit(void* Obj)
	{
		((FAssetManagerSearchRules*)Obj)->bSkipManagerIncludeCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck = { "bSkipManagerIncludeCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetManagerSearchRules), &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetScanPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_IncludePatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_ExcludePatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_AssetBaseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetManagerSearchRules",
		sizeof(FAssetManagerSearchRules),
		alignof(FAssetManagerSearchRules),
		Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetManagerSearchRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetManagerSearchRules"), sizeof(FAssetManagerSearchRules), Get_Z_Construct_UScriptStruct_FAssetManagerSearchRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetManagerSearchRules_Hash() { return 3440016602U; }
class UScriptStruct* FPrimaryAssetTypeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetTypeInfo"), sizeof(FPrimaryAssetTypeInfo), Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetTypeInfo>()
{
	return FPrimaryAssetTypeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetTypeInfo(FPrimaryAssetTypeInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetTypeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo()
	{
		UScriptStruct::DeferCppStructOps<FPrimaryAssetTypeInfo>(FName(TEXT("PrimaryAssetTypeInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetTypeInfo;
	struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryAssetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AssetBaseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBaseClassLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetBaseClassLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[];
#endif
		static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Directories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Directories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecificAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecificAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetScanPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetScanPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetScanPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicAsset_MetaData[];
#endif
		static void NewProp_bIsDynamicAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure with publicly exposed information about an asset type. These can be loaded out of a config file. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure with publicly exposed information about an asset type. These can be loaded out of a config file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetTypeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** The logical name for this type of Primary Asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "The logical name for this type of Primary Asset" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, PrimaryAssetType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "AssetType" },
		{ "Comment", "/** Base Class of all assets of this type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Base Class of all assets of this type" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass = { "AssetBaseClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData[] = {
		{ "Comment", "/** Base Class of all assets of this type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Base Class of all assets of this type" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded = { "AssetBaseClassLoaded", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClassLoaded), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** True if the assets loaded are blueprints classes, false if they are normal UObjects */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if the assets loaded are blueprints classes, false if they are normal UObjects" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bHasBlueprintClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses = { "bHasBlueprintClasses", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** True if this type is editor only */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this type is editor only" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bIsEditorOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Directories to search for this asset type */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Directories to search for this asset type" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner = { "SpecificAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData[] = {
		{ "Category", "AssetType" },
		{ "Comment", "/** Individual assets to scan */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Individual assets to scan" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets = { "SpecificAssets", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Default management rules for this type, individual assets can be overridden */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default management rules for this type, individual assets can be overridden" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData[] = {
		{ "Comment", "/** Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Combination of directories and individual assets to search for this asset type. Will have the Directories and Assets added to it but may include virtual paths" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths = { "AssetScanPaths", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetScanPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData[] = {
		{ "Comment", "/** True if this is an asset created at runtime that has no on disk representation. Cannot be set in config */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "True if this is an asset created at runtime that has no on disk representation. Cannot be set in config" },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit(void* Obj)
	{
		((FPrimaryAssetTypeInfo*)Obj)->bIsDynamicAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset = { "bIsDynamicAsset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrimaryAssetTypeInfo), &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData[] = {
		{ "Comment", "/** Number of tracked assets of that type */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Number of tracked assets of that type" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets = { "NumberOfAssets", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetTypeInfo, NumberOfAssets), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_PrimaryAssetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetBaseClassLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Directories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_SpecificAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_AssetScanPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_NumberOfAssets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetTypeInfo",
		sizeof(FPrimaryAssetTypeInfo),
		alignof(FPrimaryAssetTypeInfo),
		Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetTypeInfo"), sizeof(FPrimaryAssetTypeInfo), Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Hash() { return 1801549615U; }
class UScriptStruct* FPrimaryAssetRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRules, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRules"), sizeof(FPrimaryAssetRules), Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRules>()
{
	return FPrimaryAssetRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetRules(FPrimaryAssetRules::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetRules"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules()
	{
		UScriptStruct::DeferCppStructOps<FPrimaryAssetRules>(FName(TEXT("PrimaryAssetRules")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRules;
	struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyRecursively_MetaData[];
#endif
		static void NewProp_bApplyRecursively_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyRecursively;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CookRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CookRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Structure defining rules for what to do with assets, this is defined per type and can be overridden per asset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Primary Assets with a higher priority will take precedence over lower priorities when assigning management for referenced assets. If priorities match, both will manage the same Secondary Asset." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRules, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0. */" },
		{ "DisplayName", "Chunk ID" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Assets will be put into this Chunk ID specifically, if set to something other than -1. The default Chunk is Chunk 0." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId = { "ChunkId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRules, ChunkId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "If true, this rule will apply to all referenced Secondary Assets recursively, as long as they are not managed by a higher-priority Primary Asset." },
	};
#endif
	void Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit(void* Obj)
	{
		((FPrimaryAssetRules*)Obj)->bApplyRecursively = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively = { "bApplyRecursively", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPrimaryAssetRules), &Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Rule describing when this asset should be cooked. */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerTypes.h" },
		{ "ToolTip", "Rule describing when this asset should be cooked." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule = { "CookRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRules, CookRule), Z_Construct_UEnum_Engine_EPrimaryAssetCookRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_ChunkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_CookRule,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetRules",
		sizeof(FPrimaryAssetRules),
		alignof(FPrimaryAssetRules),
		Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetRules"), sizeof(FPrimaryAssetRules), Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRules_Hash() { return 2998794044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

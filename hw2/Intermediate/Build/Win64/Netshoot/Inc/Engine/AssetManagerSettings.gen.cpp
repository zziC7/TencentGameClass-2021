// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/AssetManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
// End Cross Module References
class UScriptStruct* FPrimaryAssetRulesCustomOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRulesCustomOverride"), sizeof(FPrimaryAssetRulesCustomOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRulesCustomOverride>()
{
	return FPrimaryAssetRulesCustomOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetRulesCustomOverride(FPrimaryAssetRulesCustomOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetRulesCustomOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesCustomOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesCustomOverride()
	{
		UScriptStruct::DeferCppStructOps<FPrimaryAssetRulesCustomOverride>(FName(TEXT("PrimaryAssetRulesCustomOverride")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesCustomOverride;
	struct Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Apply primary asset rules to groups of primary assets, using type + filter directory or string */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Apply primary asset rules to groups of primary assets, using type + filter directory or string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRulesCustomOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Which type to apply rules for */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Which type to apply rules for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, PrimaryAssetType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Will only apply to files in this directory */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Will only apply to files in this directory" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory = { "FilterDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, FilterDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Game-specific string defining which assets to apply this to */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Game-specific string defining which assets to apply this to" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, FilterString), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** What to overrides the rules with */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "What to overrides the rules with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesCustomOverride, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_PrimaryAssetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_FilterString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::NewProp_Rules,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetRulesCustomOverride",
		sizeof(FPrimaryAssetRulesCustomOverride),
		alignof(FPrimaryAssetRulesCustomOverride),
		Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetRulesCustomOverride"), sizeof(FPrimaryAssetRulesCustomOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Hash() { return 4020892555U; }
class UScriptStruct* FPrimaryAssetRulesOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRulesOverride"), sizeof(FPrimaryAssetRulesOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimaryAssetRulesOverride>()
{
	return FPrimaryAssetRulesOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetRulesOverride(FPrimaryAssetRulesOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetRulesOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride()
	{
		UScriptStruct::DeferCppStructOps<FPrimaryAssetRulesOverride>(FName(TEXT("PrimaryAssetRulesOverride")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride;
	struct Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple structure to allow overriding asset rules for a specific primary asset. This can be used to set chunks */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure to allow overriding asset rules for a specific primary asset. This can be used to set chunks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRulesOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** Which primary asset to override the rules for */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Which primary asset to override the rules for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId = { "PrimaryAssetId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesOverride, PrimaryAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "PrimaryAssetRules" },
		{ "Comment", "/** What to overrides the rules with */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "What to overrides the rules with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPrimaryAssetRulesOverride, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetRulesOverride",
		sizeof(FPrimaryAssetRulesOverride),
		alignof(FPrimaryAssetRulesOverride),
		Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetRulesOverride"), sizeof(FPrimaryAssetRulesOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Hash() { return 542672058U; }
class UScriptStruct* FAssetManagerRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerRedirect"), sizeof(FAssetManagerRedirect), Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetManagerRedirect>()
{
	return FAssetManagerRedirect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetManagerRedirect(FAssetManagerRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetManagerRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect()
	{
		UScriptStruct::DeferCppStructOps<FAssetManagerRedirect>(FName(TEXT("AssetManagerRedirect")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect;
	struct Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Old;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_New;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple structure for redirecting an old asset name/path to a new one */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure for redirecting an old asset name/path to a new one" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerRedirect, Old), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetManagerRedirect, New), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetManagerRedirect",
		sizeof(FAssetManagerRedirect),
		alignof(FAssetManagerRedirect),
		Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetManagerRedirect"), sizeof(FAssetManagerRedirect), Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_Hash() { return 450945882U; }
	void UAssetManagerSettings::StaticRegisterNativesUAssetManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister()
	{
		return UAssetManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypesToScan_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypesToScan_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypesToScan;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToExclude_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToExclude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToExclude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetRules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetRules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPrimaryAssetRules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPrimaryAssetRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomPrimaryAssetRules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[];
#endif
		static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldManagerDetermineTypeAndName_MetaData[];
#endif
		static void NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldManagerDetermineTypeAndName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndNameInEditor_MetaData[];
#endif
		static void NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndNameInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[];
#endif
		static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetIdRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetIdRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetIdRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypeRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypeRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypeRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetPathRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPathRedirects;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataTagsForAssetRegistry_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataTagsForAssetRegistry_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MetaDataTagsForAssetRegistry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types */" },
		{ "DisplayName", "Asset Manager" },
		{ "IncludePath", "Engine/AssetManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of asset types to scan at startup */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "TitleProperty", "PrimaryAssetType" },
		{ "ToolTip", "List of asset types to scan at startup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypesToScan), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner = { "DirectoriesToExclude", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of directories to exclude from scanning for Primary Assets, useful to exclude test assets */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of directories to exclude from scanning for Primary Assets, useful to exclude test assets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude = { "DirectoriesToExclude", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, DirectoriesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner = { "PrimaryAssetRules", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of specific asset rule overrides */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of specific asset rule overrides" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules = { "PrimaryAssetRules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_Inner = { "CustomPrimaryAssetRules", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** List of game-specific asset rule overrides for types, this will not do anything by default */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of game-specific asset rule overrides for types, this will not do anything by default" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules = { "CustomPrimaryAssetRules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, CustomPrimaryAssetRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bOnlyCookProductionAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets = { "bOnlyCookProductionAssets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/**\n\x09 * If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings.\n\x09 * This works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings.\nThis works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldManagerDetermineTypeAndName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName = { "bShouldManagerDetermineTypeAndName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/**\n\x09 * If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false.\n\x09 * This guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false.\nThis guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldGuessTypeAndNameInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor = { "bShouldGuessTypeAndNameInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "Comment", "/** If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { "bShouldAcquireMissingChunksOnLoad", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner = { "PrimaryAssetIdRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from Type:Name to Type:NameNew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type:Name to Type:NameNew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects = { "PrimaryAssetIdRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetIdRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner = { "PrimaryAssetTypeRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from Type to TypeNew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type to TypeNew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects = { "PrimaryAssetTypeRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypeRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner = { "AssetPathRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "Comment", "/** Redirect from /game/assetpath to /game/assetpathnew */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from /game/assetpath to /game/assetpathnew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects = { "AssetPathRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, AssetPathRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/** The metadata tags to be transferred to the Asset Registry. */" },
		{ "DisplayName", "Metadata Tags For Asset Registry" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "The metadata tags to be transferred to the Asset Registry." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetManagerSettings, MetaDataTagsForAssetRegistry), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_CustomPrimaryAssetRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams = {
		&UAssetManagerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers),
		0,
		0x001002A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetManagerSettings, 3951182048);
	template<> ENGINE_API UClass* StaticClass<UAssetManagerSettings>()
	{
		return UAssetManagerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetManagerSettings(Z_Construct_UClass_UAssetManagerSettings, &UAssetManagerSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

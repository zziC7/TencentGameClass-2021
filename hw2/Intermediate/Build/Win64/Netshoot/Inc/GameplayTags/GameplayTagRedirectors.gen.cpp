// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Public/GameplayTagRedirectors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagRedirectors() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
class UScriptStruct* FGameplayTagRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRedirect, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagRedirect>()
{
	return FGameplayTagRedirect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagRedirect(FGameplayTagRedirect::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect()
	{
		UScriptStruct::DeferCppStructOps<FGameplayTagRedirect>(FName(TEXT("GameplayTagRedirect")));
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect;
	struct Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewTagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single redirect from a deleted tag to the new tag that should replace it */" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
		{ "ToolTip", "A single redirect from a deleted tag to the new tag that should replace it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName = { "OldTagName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagRedirect, OldTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName = { "NewTagName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagRedirect, NewTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagRedirect",
		sizeof(FGameplayTagRedirect),
		alignof(FGameplayTagRedirect),
		Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_Hash() { return 758639599U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

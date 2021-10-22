// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkRetargetAssetReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAssetReference() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
class UScriptStruct* FLiveLinkRetargetAssetReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference, Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRetargetAssetReference"), sizeof(FLiveLinkRetargetAssetReference), Get_Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Hash());
	}
	return Singleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRetargetAssetReference>()
{
	return FLiveLinkRetargetAssetReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkRetargetAssetReference(FLiveLinkRetargetAssetReference::StaticStruct, TEXT("/Script/LiveLink"), TEXT("LiveLinkRetargetAssetReference"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRetargetAssetReference
{
	FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRetargetAssetReference()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkRetargetAssetReference>(FName(TEXT("LiveLinkRetargetAssetReference")));
	}
} ScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRetargetAssetReference;
	struct Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// References a live link retarget asset and handles recreation when\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRetargetAssetReference.h" },
		{ "ToolTip", "References a live link retarget asset and handles recreation when" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRetargetAssetReference>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		&NewStructOps,
		"LiveLinkRetargetAssetReference",
		sizeof(FLiveLinkRetargetAssetReference),
		alignof(FLiveLinkRetargetAssetReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkRetargetAssetReference"), sizeof(FLiveLinkRetargetAssetReference), Get_Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Hash() { return 235570483U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

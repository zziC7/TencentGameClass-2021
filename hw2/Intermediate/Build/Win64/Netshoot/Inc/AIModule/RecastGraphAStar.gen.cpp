// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/RecastGraphAStar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastGraphAStar() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FRecastGraphWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FRecastGraphWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastGraphWrapper, Z_Construct_UPackage__Script_AIModule(), TEXT("RecastGraphWrapper"), sizeof(FRecastGraphWrapper), Get_Z_Construct_UScriptStruct_FRecastGraphWrapper_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FRecastGraphWrapper>()
{
	return FRecastGraphWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecastGraphWrapper(FRecastGraphWrapper::StaticStruct, TEXT("/Script/AIModule"), TEXT("RecastGraphWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFRecastGraphWrapper
{
	FScriptStruct_AIModule_StaticRegisterNativesFRecastGraphWrapper()
	{
		UScriptStruct::DeferCppStructOps<FRecastGraphWrapper>(FName(TEXT("RecastGraphWrapper")));
	}
} ScriptStruct_AIModule_StaticRegisterNativesFRecastGraphWrapper;
	struct Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecastNavMeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecastNavMeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastGraphWrapper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor = { "RecastNavMeshActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecastGraphWrapper, RecastNavMeshActor), Z_Construct_UClass_ARecastNavMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"RecastGraphWrapper",
		sizeof(FRecastGraphWrapper),
		alignof(FRecastGraphWrapper),
		Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecastGraphWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecastGraphWrapper"), sizeof(FRecastGraphWrapper), Get_Z_Construct_UScriptStruct_FRecastGraphWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecastGraphWrapper_Hash() { return 3644269958U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

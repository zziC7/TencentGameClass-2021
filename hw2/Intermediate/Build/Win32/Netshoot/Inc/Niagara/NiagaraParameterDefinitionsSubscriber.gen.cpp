// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsSubscriber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsSubscriber() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FParameterDefinitionsSubscription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, Z_Construct_UPackage__Script_Niagara(), TEXT("ParameterDefinitionsSubscription"), sizeof(FParameterDefinitionsSubscription), Get_Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FParameterDefinitionsSubscription>()
{
	return FParameterDefinitionsSubscription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameterDefinitionsSubscription(FParameterDefinitionsSubscription::StaticStruct, TEXT("/Script/Niagara"), TEXT("ParameterDefinitionsSubscription"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFParameterDefinitionsSubscription
{
	FScriptStruct_Niagara_StaticRegisterNativesFParameterDefinitionsSubscription()
	{
		UScriptStruct::DeferCppStructOps<FParameterDefinitionsSubscription>(FName(TEXT("ParameterDefinitionsSubscription")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFParameterDefinitionsSubscription;
	struct Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefinitionsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefinitionsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedChangeIdHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CachedChangeIdHash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterDefinitionsSubscription>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_ParameterDefinitions_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_ParameterDefinitions = { "ParameterDefinitions", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, ParameterDefinitions_DEPRECATED), Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_ParameterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_ParameterDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId = { "DefinitionsId", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, DefinitionsId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash = { "CachedChangeIdHash", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, CachedChangeIdHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_ParameterDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"ParameterDefinitionsSubscription",
		sizeof(FParameterDefinitionsSubscription),
		alignof(FParameterDefinitionsSubscription),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParameterDefinitionsSubscription"), sizeof(FParameterDefinitionsSubscription), Get_Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Hash() { return 153154278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

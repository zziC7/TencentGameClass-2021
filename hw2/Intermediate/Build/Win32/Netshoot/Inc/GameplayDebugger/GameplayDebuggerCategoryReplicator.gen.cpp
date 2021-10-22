// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebugger/Public/GameplayDebuggerCategoryReplicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerCategoryReplicator() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FGameplayDebuggerVisLogSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerVisLogSync"), sizeof(FGameplayDebuggerVisLogSync), Get_Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerVisLogSync>()
{
	return FGameplayDebuggerVisLogSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerVisLogSync(FGameplayDebuggerVisLogSync::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerVisLogSync"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerVisLogSync
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerVisLogSync()
	{
		UScriptStruct::DeferCppStructOps<FGameplayDebuggerVisLogSync>(FName(TEXT("GameplayDebuggerVisLogSync")));
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerVisLogSync;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerVisLogSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs = { "DeviceIDs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerVisLogSync, DeviceIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::NewProp_DeviceIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerVisLogSync",
		sizeof(FGameplayDebuggerVisLogSync),
		alignof(FGameplayDebuggerVisLogSync),
		Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerVisLogSync"), sizeof(FGameplayDebuggerVisLogSync), Get_Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync_Hash() { return 3761795406U; }
class UScriptStruct* FGameplayDebuggerDebugActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerDebugActor>()
{
	return FGameplayDebuggerDebugActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerDebugActor(FGameplayDebuggerDebugActor::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerDebugActor"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor()
	{
		UScriptStruct::DeferCppStructOps<FGameplayDebuggerDebugActor>(FName(TEXT("GameplayDebuggerDebugActor")));
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerDebugActor;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SyncCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerDebugActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter = { "SyncCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayDebuggerDebugActor, SyncCounter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_ActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::NewProp_SyncCounter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerDebugActor",
		sizeof(FGameplayDebuggerDebugActor),
		alignof(FGameplayDebuggerDebugActor),
		Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerDebugActor"), sizeof(FGameplayDebuggerDebugActor), Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Hash() { return 1780910133U; }
class UScriptStruct* FGameplayDebuggerNetPack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerNetPack>()
{
	return FGameplayDebuggerNetPack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerNetPack(FGameplayDebuggerNetPack::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerNetPack"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack()
	{
		UScriptStruct::DeferCppStructOps<FGameplayDebuggerNetPack>(FName(TEXT("GameplayDebuggerNetPack")));
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerNetPack;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerNetPack>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerNetPack",
		sizeof(FGameplayDebuggerNetPack),
		alignof(FGameplayDebuggerNetPack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerNetPack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerNetPack"), sizeof(FGameplayDebuggerNetPack), Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Hash() { return 1512163881U; }
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ExtensionId);
		P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendExtensionInputEvent_Validate(Z_Param_ExtensionId,Z_Param_HandlerId))
		{
			RPC_ValidateFailed(TEXT("ServerSendExtensionInputEvent_Validate"));
			return;
		}
		P_THIS->ServerSendExtensionInputEvent_Implementation(Z_Param_ExtensionId,Z_Param_HandlerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_PROPERTY(FIntProperty,Z_Param_HandlerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendCategoryInputEvent_Validate(Z_Param_CategoryId,Z_Param_HandlerId))
		{
			RPC_ValidateFailed(TEXT("ServerSendCategoryInputEvent_Validate"));
			return;
		}
		P_THIS->ServerSendCategoryInputEvent_Implementation(Z_Param_CategoryId,Z_Param_HandlerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetCategoryEnabled_Validate(Z_Param_CategoryId,Z_Param_bEnable))
		{
			RPC_ValidateFailed(TEXT("ServerSetCategoryEnabled_Validate"));
			return;
		}
		P_THIS->ServerSetCategoryEnabled_Implementation(Z_Param_CategoryId,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetDebugActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bSelectInEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetDebugActor_Validate(Z_Param_Actor,Z_Param_bSelectInEditor))
		{
			RPC_ValidateFailed(TEXT("ServerSetDebugActor_Validate"));
			return;
		}
		P_THIS->ServerSetDebugActor_Implementation(Z_Param_Actor,Z_Param_bSelectInEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayDebuggerCategoryReplicator::execServerSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetEnabled_Validate(Z_Param_bEnable))
		{
			RPC_ValidateFailed(TEXT("ServerSetEnabled_Validate"));
			return;
		}
		P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnable);
		P_NATIVE_END;
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent = FName(TEXT("ServerSendCategoryInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent = FName(TEXT("ServerSendExtensionInputEvent"));
	void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
	{
		GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms Parms;
		Parms.ExtensionId=ExtensionId;
		Parms.HandlerId=HandlerId;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled = FName(TEXT("ServerSetCategoryEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms Parms;
		Parms.CategoryId=CategoryId;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor = FName(TEXT("ServerSetDebugActor"));
	void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(AActor* Actor, bool bSelectInEditor)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms Parms;
		Parms.Actor=Actor;
		Parms.bSelectInEditor=bSelectInEditor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor),&Parms);
	}
	static FName NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled = FName(TEXT("ServerSetEnabled"));
	void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
	{
		GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms Parms;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayDebuggerCategoryReplicator_ServerSetEnabled),&Parms);
	}
	void AGameplayDebuggerCategoryReplicator::StaticRegisterNativesAGameplayDebuggerCategoryReplicator()
	{
		UClass* Class = AGameplayDebuggerCategoryReplicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerSendCategoryInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendCategoryInputEvent },
			{ "ServerSendExtensionInputEvent", &AGameplayDebuggerCategoryReplicator::execServerSendExtensionInputEvent },
			{ "ServerSetCategoryEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetCategoryEnabled },
			{ "ServerSetDebugActor", &AGameplayDebuggerCategoryReplicator::execServerSetDebugActor },
			{ "ServerSetEnabled", &AGameplayDebuggerCategoryReplicator::execServerSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandlerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_CategoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::NewProp_HandlerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for category handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for category handlers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendCategoryInputEvent", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtensionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandlerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId = { "ExtensionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, ExtensionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId = { "HandlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms, HandlerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_ExtensionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::NewProp_HandlerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** helper function for replicating input for extension handlers */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "helper function for replicating input for extension handlers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSendExtensionInputEvent", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_CategoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetCategoryEnabled", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bSelectInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms*)Obj)->bSelectInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor = { "bSelectInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::NewProp_bSelectInEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetDebugActor", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics
	{
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, nullptr, "ServerSetEnabled", nullptr, nullptr, sizeof(GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms), Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisLogSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisLogSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent, "ServerSendCategoryInputEvent" }, // 1241903320
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent, "ServerSendExtensionInputEvent" }, // 404440100
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled, "ServerSetCategoryEnabled" }, // 250483995
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetDebugActor, "ServerSetDebugActor" }, // 1334271920
		{ &Z_Construct_UFunction_AGameplayDebuggerCategoryReplicator_ServerSetEnabled, "ServerSetEnabled" }, // 2193993472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerCategoryReplicator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	void Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((AGameplayDebuggerCategoryReplicator*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameplayDebuggerCategoryReplicator), &Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData = { "ReplicatedData", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, ReplicatedData), Z_Construct_UScriptStruct_FGameplayDebuggerNetPack, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor = { "DebugActor", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, DebugActor), Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync = { "VisLogSync", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, VisLogSync), Z_Construct_UScriptStruct_FGameplayDebuggerVisLogSync, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData[] = {
		{ "Comment", "/** rendering component needs to attached to some actor, and this is as good as any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerCategoryReplicator.h" },
		{ "ToolTip", "rendering component needs to attached to some actor, and this is as good as any" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, RenderingComp), Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_OwnerPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_ReplicatedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_DebugActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_VisLogSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::NewProp_RenderingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerCategoryReplicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams = {
		&AGameplayDebuggerCategoryReplicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::PropPointers),
		0,
		0x049002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayDebuggerCategoryReplicator, 2435293575);
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerCategoryReplicator>()
	{
		return AGameplayDebuggerCategoryReplicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayDebuggerCategoryReplicator(Z_Construct_UClass_AGameplayDebuggerCategoryReplicator, &AGameplayDebuggerCategoryReplicator::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("AGameplayDebuggerCategoryReplicator"), false, nullptr, nullptr, nullptr);

	void AGameplayDebuggerCategoryReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OwnerPC(TEXT("OwnerPC"));
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));
		static const FName Name_ReplicatedData(TEXT("ReplicatedData"));
		static const FName Name_DebugActor(TEXT("DebugActor"));
		static const FName Name_VisLogSync(TEXT("VisLogSync"));

		const bool bIsValid = true
			&& Name_OwnerPC == ClassReps[(int32)ENetFields_Private::OwnerPC].Property->GetFName()
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName()
			&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName()
			&& Name_DebugActor == ClassReps[(int32)ENetFields_Private::DebugActor].Property->GetFName()
			&& Name_VisLogSync == ClassReps[(int32)ENetFields_Private::VisLogSync].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayDebuggerCategoryReplicator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerCategoryReplicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

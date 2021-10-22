// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkMessageBusFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusFinder() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FProviderPollResult();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
class UScriptStruct* FProviderPollResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FProviderPollResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProviderPollResult, Z_Construct_UPackage__Script_LiveLink(), TEXT("ProviderPollResult"), sizeof(FProviderPollResult), Get_Z_Construct_UScriptStruct_FProviderPollResult_Hash());
	}
	return Singleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FProviderPollResult>()
{
	return FProviderPollResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProviderPollResult(FProviderPollResult::StaticStruct, TEXT("/Script/LiveLink"), TEXT("ProviderPollResult"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLink_StaticRegisterNativesFProviderPollResult
{
	FScriptStruct_LiveLink_StaticRegisterNativesFProviderPollResult()
	{
		UScriptStruct::DeferCppStructOps<FProviderPollResult>(FName(TEXT("ProviderPollResult")));
	}
} ScriptStruct_LiveLink_StaticRegisterNativesFProviderPollResult;
	struct Z_Construct_UScriptStruct_FProviderPollResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MachineTimeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderPollResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProviderPollResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The name of the provider\n" },
		{ "DisplayName", "Provider Name" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "The name of the provider" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderPollResult, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The name of the machine the provider is running on\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "The name of the machine the provider is running on" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderPollResult, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset_MetaData[] = {
		{ "Comment", "// Offset between sender's engine time and receiver's engine time\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "Offset between sender's engine time and receiver's engine time" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset = { "MachineTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderPollResult, MachineTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderPollResult_Statics::NewProp_MachineTimeOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProviderPollResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		&NewStructOps,
		"ProviderPollResult",
		sizeof(FProviderPollResult),
		alignof(FProviderPollResult),
		Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderPollResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderPollResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProviderPollResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProviderPollResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProviderPollResult"), sizeof(FProviderPollResult), Get_Z_Construct_UScriptStruct_FProviderPollResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProviderPollResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProviderPollResult_Hash() { return 1828184439U; }
	DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execConstructMessageBusFinder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULiveLinkMessageBusFinder**)Z_Param__Result=ULiveLinkMessageBusFinder::ConstructMessageBusFinder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execConnectToProvider)
	{
		P_GET_STRUCT_REF(FProviderPollResult,Z_Param_Out_Provider);
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULiveLinkMessageBusFinder::ConnectToProvider(Z_Param_Out_Provider,Z_Param_Out_SourceHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkMessageBusFinder::execGetAvailableProviders)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_TARRAY_REF(FProviderPollResult,Z_Param_Out_AvailableProviders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAvailableProviders(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Duration,Z_Param_Out_AvailableProviders);
		P_NATIVE_END;
	}
	void ULiveLinkMessageBusFinder::StaticRegisterNativesULiveLinkMessageBusFinder()
	{
		UClass* Class = ULiveLinkMessageBusFinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToProvider", &ULiveLinkMessageBusFinder::execConnectToProvider },
			{ "ConstructMessageBusFinder", &ULiveLinkMessageBusFinder::execConstructMessageBusFinder },
			{ "GetAvailableProviders", &ULiveLinkMessageBusFinder::execGetAvailableProviders },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics
	{
		struct LiveLinkMessageBusFinder_eventConnectToProvider_Parms
		{
			FProviderPollResult Provider;
			FLiveLinkSourceHandle SourceHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Provider;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConnectToProvider_Parms, Provider), Z_Construct_UScriptStruct_FProviderPollResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConnectToProvider_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Connects to a given Message Bus Provider and returns a handle to the created LiveLink Source\n\x09*\n\x09* @param Provider The provider to connect to.\n\x09* @param SourceHandle A handle to the created LiveLink Source, lets you query information about the created source and request a shutdown\n\x09*/" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Connects to a given Message Bus Provider and returns a handle to the created LiveLink Source\n*\n* @param Provider The provider to connect to.\n* @param SourceHandle A handle to the created LiveLink Source, lets you query information about the created source and request a shutdown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "ConnectToProvider", nullptr, nullptr, sizeof(LiveLinkMessageBusFinder_eventConnectToProvider_Parms), Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics
	{
		struct LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms
		{
			ULiveLinkMessageBusFinder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms, ReturnValue), Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Constructs a new Message Bus Finder which enables you to detect available Message Bus Providers on the network\n\x09*\n\x09* @return The newly constructed Message Bus Finder\n\x09*/" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Constructs a new Message Bus Finder which enables you to detect available Message Bus Providers on the network\n*\n* @return The newly constructed Message Bus Finder" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "ConstructMessageBusFinder", nullptr, nullptr, sizeof(LiveLinkMessageBusFinder_eventConstructMessageBusFinder_Parms), Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics
	{
		struct LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			float Duration;
			TArray<FProviderPollResult> AvailableProviders;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvailableProviders_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableProviders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders_Inner = { "AvailableProviders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProviderPollResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders = { "AvailableProviders", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms, AvailableProviders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::NewProp_AvailableProviders,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/*\n\x09* Broadcasts a message to the network and returns a list of all providers who replied within a set amount of time.\n\x09*\n\x09* @param AvailableProviders Will contain the collection of found Message Bus Providers.\n\x09* @param Duration The amount of time to wait for replies in seconds\n\x09*/" },
		{ "Duration", "0.2" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "* Broadcasts a message to the network and returns a list of all providers who replied within a set amount of time.\n*\n* @param AvailableProviders Will contain the collection of found Message Bus Providers.\n* @param Duration The amount of time to wait for replies in seconds" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMessageBusFinder, nullptr, "GetAvailableProviders", nullptr, nullptr, sizeof(LiveLinkMessageBusFinder_eventGetAvailableProviders_Parms), Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder_NoRegister()
	{
		return ULiveLinkMessageBusFinder::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConnectToProvider, "ConnectToProvider" }, // 38389452
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_ConstructMessageBusFinder, "ConstructMessageBusFinder" }, // 3955311525
		{ &Z_Construct_UFunction_ULiveLinkMessageBusFinder_GetAvailableProviders, "GetAvailableProviders" }, // 1813225820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Asset for finding available Message Bus Sources.\n" },
		{ "IncludePath", "LiveLinkMessageBusFinder.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusFinder.h" },
		{ "ToolTip", "Asset for finding available Message Bus Sources." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::ClassParams = {
		&ULiveLinkMessageBusFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMessageBusFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkMessageBusFinder, 1784510049);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusFinder>()
	{
		return ULiveLinkMessageBusFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkMessageBusFinder(Z_Construct_UClass_ULiveLinkMessageBusFinder, &ULiveLinkMessageBusFinder::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkMessageBusFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

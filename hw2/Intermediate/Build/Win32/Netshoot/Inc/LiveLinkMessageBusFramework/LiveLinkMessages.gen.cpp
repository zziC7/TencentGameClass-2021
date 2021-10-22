// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMessageBusFramework/Public/LiveLinkMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessages() {}
// Cross Module References
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage();
// End Cross Module References
class UScriptStruct* FLiveLinkSubjectFrameMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectFrameMessage"), sizeof(FLiveLinkSubjectFrameMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectFrameMessage>()
{
	return FLiveLinkSubjectFrameMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectFrameMessage(FLiveLinkSubjectFrameMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkSubjectFrameMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkSubjectFrameMessage>(FName(TEXT("LiveLinkSubjectFrameMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectFrameMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectFrameMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData[] = {
		{ "Comment", "// Bone Transform data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Bone Transform data for this frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "// Curve data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Curve data for this frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "// Subject MetaData for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Subject MetaData for this frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "// Incrementing time for interpolation\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Incrementing time for interpolation" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectFrameMessage",
		sizeof(FLiveLinkSubjectFrameMessage),
		alignof(FLiveLinkSubjectFrameMessage),
		Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectFrameMessage"), sizeof(FLiveLinkSubjectFrameMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Hash() { return 509659389U; }
class UScriptStruct* FLiveLinkSubjectDataMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectDataMessage"), sizeof(FLiveLinkSubjectDataMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectDataMessage>()
{
	return FLiveLinkSubjectDataMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkSubjectDataMessage(FLiveLinkSubjectDataMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkSubjectDataMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkSubjectDataMessage>(FName(TEXT("LiveLinkSubjectDataMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkSubjectDataMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectDataMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton = { "RefSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, RefSkeleton), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectDataMessage",
		sizeof(FLiveLinkSubjectDataMessage),
		alignof(FLiveLinkSubjectDataMessage),
		Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkSubjectDataMessage"), sizeof(FLiveLinkSubjectDataMessage), Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Hash() { return 1045509976U; }
class UScriptStruct* FLiveLinkClearSubject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkClearSubject"), sizeof(FLiveLinkClearSubject), Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkClearSubject>()
{
	return FLiveLinkClearSubject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkClearSubject(FLiveLinkClearSubject::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkClearSubject"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkClearSubject>(FName(TEXT("LiveLinkClearSubject")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkClearSubject;
	struct Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkClearSubject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Comment", "// Name of the subject to clear\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Name of the subject to clear" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkClearSubject, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkClearSubject",
		sizeof(FLiveLinkClearSubject),
		alignof(FLiveLinkClearSubject),
		Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkClearSubject"), sizeof(FLiveLinkClearSubject), Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkClearSubject_Hash() { return 1924540810U; }
class UScriptStruct* FLiveLinkHeartbeatMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkHeartbeatMessage"), sizeof(FLiveLinkHeartbeatMessage), Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkHeartbeatMessage>()
{
	return FLiveLinkHeartbeatMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkHeartbeatMessage(FLiveLinkHeartbeatMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkHeartbeatMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkHeartbeatMessage>(FName(TEXT("LiveLinkHeartbeatMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkHeartbeatMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkHeartbeatMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkHeartbeatMessage",
		sizeof(FLiveLinkHeartbeatMessage),
		alignof(FLiveLinkHeartbeatMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkHeartbeatMessage"), sizeof(FLiveLinkHeartbeatMessage), Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Hash() { return 3794607488U; }
class UScriptStruct* FLiveLinkConnectMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkConnectMessage"), sizeof(FLiveLinkConnectMessage), Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkConnectMessage>()
{
	return FLiveLinkConnectMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkConnectMessage(FLiveLinkConnectMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkConnectMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkConnectMessage>(FName(TEXT("LiveLinkConnectMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkConnectMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkConnectMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkConnectMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkConnectMessage",
		sizeof(FLiveLinkConnectMessage),
		alignof(FLiveLinkConnectMessage),
		Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkConnectMessage"), sizeof(FLiveLinkConnectMessage), Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Hash() { return 2866776233U; }
class UScriptStruct* FLiveLinkPongMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPongMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPongMessage"), sizeof(FLiveLinkPongMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPongMessage>()
{
	return FLiveLinkPongMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkPongMessage(FLiveLinkPongMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkPongMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkPongMessage>(FName(TEXT("LiveLinkPongMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPongMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PollRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationPlatformTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_CreationPlatformTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPongMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPongMessage, ProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPongMessage, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPongMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPongMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime = { "CreationPlatformTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPongMessage, CreationPlatformTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkPongMessage",
		sizeof(FLiveLinkPongMessage),
		alignof(FLiveLinkPongMessage),
		Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkPongMessage"), sizeof(FLiveLinkPongMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPongMessage_Hash() { return 3297573752U; }
class UScriptStruct* FLiveLinkPingMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKMESSAGEBUSFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage, Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPingMessage"), sizeof(FLiveLinkPingMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_Hash());
	}
	return Singleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPingMessage>()
{
	return FLiveLinkPingMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkPingMessage(FLiveLinkPingMessage::StaticStruct, TEXT("/Script/LiveLinkMessageBusFramework"), TEXT("LiveLinkPingMessage"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage
{
	FScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkPingMessage>(FName(TEXT("LiveLinkPingMessage")));
	}
} ScriptStruct_LiveLinkMessageBusFramework_StaticRegisterNativesFLiveLinkPingMessage;
	struct Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PollRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPingMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPingMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkPingMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkPingMessage",
		sizeof(FLiveLinkPingMessage),
		alignof(FLiveLinkPingMessage),
		Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkPingMessage"), sizeof(FLiveLinkPingMessage), Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkPingMessage_Hash() { return 3475750478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

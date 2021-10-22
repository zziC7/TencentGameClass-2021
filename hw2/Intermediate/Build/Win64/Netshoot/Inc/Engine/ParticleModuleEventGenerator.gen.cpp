// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventGenerator() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
// End Cross Module References
class UScriptStruct* FParticleEvent_GenerateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEvent_GenerateInfo"), sizeof(FParticleEvent_GenerateInfo), Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEvent_GenerateInfo>()
{
	return FParticleEvent_GenerateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEvent_GenerateInfo(FParticleEvent_GenerateInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEvent_GenerateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo()
	{
		UScriptStruct::DeferCppStructOps<FParticleEvent_GenerateInfo>(FName(TEXT("ParticleEvent_GenerateInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo;
	struct Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimeOnly_MetaData[];
#endif
		static void NewProp_FirstTimeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTimeOnly_MetaData[];
#endif
		static void NewProp_LastTimeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LastTimeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseReflectedImpactVector_MetaData[];
#endif
		static void NewProp_UseReflectedImpactVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseReflectedImpactVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOrbitOffset_MetaData[];
#endif
		static void NewProp_bUseOrbitOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOrbitOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleModuleEventsToSendToGame_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleModuleEventsToSendToGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEvent_GenerateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The type of event. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The type of event." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Type), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** How often to trigger the event (<= 1 means EVERY time). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "How often to trigger the event (<= 1 means EVERY time)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency = { "ParticleFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->FirstTimeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly = { "FirstTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the last time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the last time (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->LastTimeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly = { "LastTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the impact FVector not the hit normal (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the impact FVector not the hit normal (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->UseReflectedImpactVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector = { "UseReflectedImpactVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the orbit offset when computing the position at which the event occurred. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the orbit offset when computing the position at which the event occurred." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->bUseOrbitOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset = { "bUseOrbitOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Should the event tag with a custom name? Leave blank for the default. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Should the event tag with a custom name? Leave blank for the default." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, CustomName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEvent_GenerateInfo",
		sizeof(FParticleEvent_GenerateInfo),
		alignof(FParticleEvent_GenerateInfo),
		Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEvent_GenerateInfo"), sizeof(FParticleEvent_GenerateInfo), Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Hash() { return 3889749205U; }
	void UParticleModuleEventGenerator::StaticRegisterNativesUParticleModuleEventGenerator()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister()
	{
		return UParticleModuleEventGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Event Generator" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010008002000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleEventGenerator, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams = {
		&UParticleModuleEventGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventGenerator, 448458107);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventGenerator>()
	{
		return UParticleModuleEventGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventGenerator(Z_Construct_UClass_UParticleModuleEventGenerator, &UParticleModuleEventGenerator::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/MovieSceneEvaluationHookSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationHookSystem() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationInstanceKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationInstanceKey"), sizeof(FMovieSceneEvaluationInstanceKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationInstanceKey>()
{
	return FMovieSceneEvaluationInstanceKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationInstanceKey(FMovieSceneEvaluationInstanceKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationInstanceKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationInstanceKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationInstanceKey()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEvaluationInstanceKey>(FName(TEXT("MovieSceneEvaluationInstanceKey")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationInstanceKey;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationInstanceKey>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationInstanceKey",
		sizeof(FMovieSceneEvaluationInstanceKey),
		alignof(FMovieSceneEvaluationInstanceKey),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationInstanceKey"), sizeof(FMovieSceneEvaluationInstanceKey), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Hash() { return 3403655145U; }
class UScriptStruct* FMovieSceneEvaluationHookEventContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookEventContainer"), sizeof(FMovieSceneEvaluationHookEventContainer), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookEventContainer>()
{
	return FMovieSceneEvaluationHookEventContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationHookEventContainer(FMovieSceneEvaluationHookEventContainer::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationHookEventContainer"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEventContainer
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEventContainer()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEvaluationHookEventContainer>(FName(TEXT("MovieSceneEvaluationHookEventContainer")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEventContainer;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookEventContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationHookEventContainer, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::NewProp_Events,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationHookEventContainer",
		sizeof(FMovieSceneEvaluationHookEventContainer),
		alignof(FMovieSceneEvaluationHookEventContainer),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationHookEventContainer"), sizeof(FMovieSceneEvaluationHookEventContainer), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Hash() { return 3857852754U; }
class UScriptStruct* FMovieSceneEvaluationHookEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookEvent"), sizeof(FMovieSceneEvaluationHookEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookEvent>()
{
	return FMovieSceneEvaluationHookEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationHookEvent(FMovieSceneEvaluationHookEvent::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationHookEvent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEvent
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEvent()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEvaluationHookEvent>(FName(TEXT("MovieSceneEvaluationHookEvent")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookEvent;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hook_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook = { "Hook", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationHookEvent, Hook), Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::NewProp_Hook,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationHookEvent",
		sizeof(FMovieSceneEvaluationHookEvent),
		alignof(FMovieSceneEvaluationHookEvent),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationHookEvent"), sizeof(FMovieSceneEvaluationHookEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Hash() { return 791299020U; }
	void UMovieSceneEvaluationHookSystem::StaticRegisterNativesUMovieSceneEvaluationHookSystem()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem_NoRegister()
	{
		return UMovieSceneEvaluationHookSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingEventsByRootInstance_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingEventsByRootInstance_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingEventsByRootInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PendingEventsByRootInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEvaluationHookSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_ValueProp = { "PendingEventsByRootInstance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_Key_KeyProp = { "PendingEventsByRootInstance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvaluationHookSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance = { "PendingEventsByRootInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEvaluationHookSystem, PendingEventsByRootInstance), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::NewProp_PendingEventsByRootInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEvaluationHookSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::ClassParams = {
		&UMovieSceneEvaluationHookSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHookSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEvaluationHookSystem, 3957636938);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvaluationHookSystem>()
	{
		return UMovieSceneEvaluationHookSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEvaluationHookSystem(Z_Construct_UClass_UMovieSceneEvaluationHookSystem, &UMovieSceneEvaluationHookSystem::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEvaluationHookSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvaluationHookSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

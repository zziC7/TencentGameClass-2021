// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSequenceTickManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManager() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceActorPointers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceActorPointers"), sizeof(FMovieSceneSequenceActorPointers), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceActorPointers>()
{
	return FMovieSceneSequenceActorPointers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceActorPointers(FMovieSceneSequenceActorPointers::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceActorPointers"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceActorPointers
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceActorPointers()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSequenceActorPointers>(FName(TEXT("MovieSceneSequenceActorPointers")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceActorPointers;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceActorInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_SequenceActorInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure for storing pointers to a sequence actor.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
		{ "ToolTip", "A structure for storing pointers to a sequence actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceActorPointers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceActorPointers, SequenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface = { "SequenceActorInterface", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceActorPointers, SequenceActorInterface), Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceActorPointers",
		sizeof(FMovieSceneSequenceActorPointers),
		alignof(FMovieSceneSequenceActorPointers),
		Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceActorPointers"), sizeof(FMovieSceneSequenceActorPointers), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Hash() { return 3411742629U; }
	void UMovieSceneSequenceActor::StaticRegisterNativesUMovieSceneSequenceActor()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister()
	{
		return UMovieSceneSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceActor_Statics::ClassParams = {
		&UMovieSceneSequenceActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSequenceActor, 2656481655);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceActor>()
	{
		return UMovieSceneSequenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequenceActor(Z_Construct_UClass_UMovieSceneSequenceActor, &UMovieSceneSequenceActor::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequenceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceActor);
	void UMovieSceneSequenceTickManager::StaticRegisterNativesUMovieSceneSequenceTickManager()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SequenceActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Linker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An automatically created global object that will manage all level sequence actors' updates.\n */" },
		{ "IncludePath", "MovieSceneSequenceTickManager.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An automatically created global object that will manage all level sequence actors' updates." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_Inner = { "SequenceActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors = { "SequenceActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequenceTickManager, SequenceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequenceTickManager, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequenceTickManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams = {
		&UMovieSceneSequenceTickManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSequenceTickManager, 2660223486);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceTickManager>()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequenceTickManager(Z_Construct_UClass_UMovieSceneSequenceTickManager, &UMovieSceneSequenceTickManager::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequenceTickManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceTickManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

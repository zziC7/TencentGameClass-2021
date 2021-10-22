// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/EntitySystem/BuiltInComponentTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltInComponentTypes() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackInstanceInputComponent();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FEasingComponentData();
// End Cross Module References
class UScriptStruct* FTrackInstanceInputComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackInstanceInputComponent, Z_Construct_UPackage__Script_MovieScene(), TEXT("TrackInstanceInputComponent"), sizeof(FTrackInstanceInputComponent), Get_Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FTrackInstanceInputComponent>()
{
	return FTrackInstanceInputComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackInstanceInputComponent(FTrackInstanceInputComponent::StaticStruct, TEXT("/Script/MovieScene"), TEXT("TrackInstanceInputComponent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFTrackInstanceInputComponent
{
	FScriptStruct_MovieScene_StaticRegisterNativesFTrackInstanceInputComponent()
	{
		UScriptStruct::DeferCppStructOps<FTrackInstanceInputComponent>(FName(TEXT("TrackInstanceInputComponent")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFTrackInstanceInputComponent;
	struct Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackInstanceInputComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackInstanceInputComponent, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackInstanceInputComponent, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"TrackInstanceInputComponent",
		sizeof(FTrackInstanceInputComponent),
		alignof(FTrackInstanceInputComponent),
		Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackInstanceInputComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackInstanceInputComponent"), sizeof(FTrackInstanceInputComponent), Get_Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Hash() { return 3804229816U; }
class UScriptStruct* FMovieSceneEvaluationHookComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookComponent"), sizeof(FMovieSceneEvaluationHookComponent), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookComponent>()
{
	return FMovieSceneEvaluationHookComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationHookComponent(FMovieSceneEvaluationHookComponent::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationHookComponent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookComponent
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookComponent()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneEvaluationHookComponent>(FName(TEXT("MovieSceneEvaluationHookComponent")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationHookComponent;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A component that defines a hook for direct evaluation\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "A component that defines a hook for direct evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvaluationHookComponent, Interface), Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationHookComponent",
		sizeof(FMovieSceneEvaluationHookComponent),
		alignof(FMovieSceneEvaluationHookComponent),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationHookComponent"), sizeof(FMovieSceneEvaluationHookComponent), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Hash() { return 2301998383U; }
class UScriptStruct* FMovieSceneTrackInstanceComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceComponent"), sizeof(FMovieSceneTrackInstanceComponent), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceComponent>()
{
	return FMovieSceneTrackInstanceComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackInstanceComponent(FMovieSceneTrackInstanceComponent::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackInstanceComponent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceComponent
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceComponent()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneTrackInstanceComponent>(FName(TEXT("MovieSceneTrackInstanceComponent")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackInstanceComponent;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackInstanceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A component that defines a type for a track instance\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "A component that defines a type for a track instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceComponent, Owner), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass = { "TrackInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceComponent, TrackInstanceClass), Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackInstanceComponent",
		sizeof(FMovieSceneTrackInstanceComponent),
		alignof(FMovieSceneTrackInstanceComponent),
		Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackInstanceComponent"), sizeof(FMovieSceneTrackInstanceComponent), Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Hash() { return 1357214871U; }
class UScriptStruct* FEasingComponentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FEasingComponentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEasingComponentData, Z_Construct_UPackage__Script_MovieScene(), TEXT("EasingComponentData"), sizeof(FEasingComponentData), Get_Z_Construct_UScriptStruct_FEasingComponentData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FEasingComponentData>()
{
	return FEasingComponentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEasingComponentData(FEasingComponentData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("EasingComponentData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFEasingComponentData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFEasingComponentData()
	{
		UScriptStruct::DeferCppStructOps<FEasingComponentData>(FName(TEXT("EasingComponentData")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFEasingComponentData;
	struct Z_Construct_UScriptStruct_FEasingComponentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEasingComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Easing component data.\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "Easing component data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEasingComponentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEasingComponentData, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEasingComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"EasingComponentData",
		sizeof(FEasingComponentData),
		alignof(FEasingComponentData),
		Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEasingComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEasingComponentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEasingComponentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EasingComponentData"), sizeof(FEasingComponentData), Get_Z_Construct_UScriptStruct_FEasingComponentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEasingComponentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEasingComponentData_Hash() { return 3811276428U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

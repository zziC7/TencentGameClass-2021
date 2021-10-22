// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Compilation/IMovieSceneDeterminismSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneDeterminismSource() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FMovieSceneDeterminismData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDeterminismData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDeterminismData"), sizeof(FMovieSceneDeterminismData), Get_Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDeterminismData>()
{
	return FMovieSceneDeterminismData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneDeterminismData(FMovieSceneDeterminismData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneDeterminismData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneDeterminismData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneDeterminismData()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneDeterminismData>(FName(TEXT("MovieSceneDeterminismData")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneDeterminismData;
	struct Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Fences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresLowerFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresLowerFence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentSequenceRequiresUpperFence_MetaData[];
#endif
		static void NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentSequenceRequiresUpperFence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Determinism data that is generated on compile of a UMovieSceneSequence */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "Determinism data that is generated on compile of a UMovieSceneSequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDeterminismData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_Inner = { "Fences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of times that should be treated as fences. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts.\n\x09 * Duplicates are allowed during compilation, but will be removed in the final compiled data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "Array of times that should be treated as fences. Fences cannot be crossed in a single evaluation, and force the evaluation to be split into 2 separate parts.\nDuplicates are allowed during compilation, but will be removed in the final compiled data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences = { "Fences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneDeterminismData, Fences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the lower bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "True if this sequence should include a fence on the lower bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit(void* Obj)
	{
		((FMovieSceneDeterminismData*)Obj)->bParentSequenceRequiresLowerFence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence = { "bParentSequenceRequiresLowerFence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneDeterminismData), &Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData[] = {
		{ "Comment", "/** True if this sequence should include a fence on the upper bound of any sub sequence's that include it */" },
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
		{ "ToolTip", "True if this sequence should include a fence on the upper bound of any sub sequence's that include it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit(void* Obj)
	{
		((FMovieSceneDeterminismData*)Obj)->bParentSequenceRequiresUpperFence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence = { "bParentSequenceRequiresUpperFence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneDeterminismData), &Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_Fences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresLowerFence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::NewProp_bParentSequenceRequiresUpperFence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneDeterminismData",
		sizeof(FMovieSceneDeterminismData),
		alignof(FMovieSceneDeterminismData),
		Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDeterminismData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneDeterminismData"), sizeof(FMovieSceneDeterminismData), Get_Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Hash() { return 1023898921U; }
	void UMovieSceneDeterminismSource::StaticRegisterNativesUMovieSceneDeterminismSource()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister()
	{
		return UMovieSceneDeterminismSource::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDeterminismSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneDeterminismSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneDeterminismSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::ClassParams = {
		&UMovieSceneDeterminismSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDeterminismSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneDeterminismSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneDeterminismSource, 20831637);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneDeterminismSource>()
	{
		return UMovieSceneDeterminismSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneDeterminismSource(Z_Construct_UClass_UMovieSceneDeterminismSource, &UMovieSceneDeterminismSource::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneDeterminismSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDeterminismSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

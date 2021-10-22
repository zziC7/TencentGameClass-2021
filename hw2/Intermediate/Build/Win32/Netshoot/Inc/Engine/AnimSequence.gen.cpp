// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimSequence.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequence() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData();
// End Cross Module References
class UScriptStruct* FCompressedTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedTrack, Z_Construct_UPackage__Script_Engine(), TEXT("CompressedTrack"), sizeof(FCompressedTrack), Get_Z_Construct_UScriptStruct_FCompressedTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompressedTrack>()
{
	return FCompressedTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompressedTrack(FCompressedTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("CompressedTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompressedTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFCompressedTrack()
	{
		UScriptStruct::DeferCppStructOps<FCompressedTrack>(FName(TEXT("CompressedTrack")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompressedTrack;
	struct Z_Construct_UScriptStruct_FCompressedTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteStream_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteStream;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mins_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ranges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedTrack>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_Inner = { "ByteStream", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream = { "ByteStream", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompressedTrack, ByteStream), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompressedTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins = { "Mins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Mins, FCompressedTrack), STRUCT_OFFSET(FCompressedTrack, Mins), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Ranges, FCompressedTrack), STRUCT_OFFSET(FCompressedTrack, Ranges), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CompressedTrack",
		sizeof(FCompressedTrack),
		alignof(FCompressedTrack),
		Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompressedTrack"), sizeof(FCompressedTrack), Get_Z_Construct_UScriptStruct_FCompressedTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompressedTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompressedTrack_Hash() { return 655714208U; }
class UScriptStruct* FCurveTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTrack, Z_Construct_UPackage__Script_Engine(), TEXT("CurveTrack"), sizeof(FCurveTrack), Get_Z_Construct_UScriptStruct_FCurveTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveTrack>()
{
	return FCurveTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveTrack(FCurveTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveTrack()
	{
		UScriptStruct::DeferCppStructOps<FCurveTrack>(FName(TEXT("CurveTrack")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveTrack;
	struct Z_Construct_UScriptStruct_FCurveTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveWeights;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Key frame curve data for one track\n * CurveName: Morph Target Name\n * CurveWeights: List of weights for each frame\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Key frame curve data for one track\nCurveName: Morph Target Name\nCurveWeights: List of weights for each frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveTrack, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_Inner = { "CurveWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights = { "CurveWeights", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveTrack, CurveWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveTrack",
		sizeof(FCurveTrack),
		alignof(FCurveTrack),
		Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveTrack"), sizeof(FCurveTrack), Get_Z_Construct_UScriptStruct_FCurveTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveTrack_Hash() { return 3960580891U; }
class UScriptStruct* FScaleTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleTrack, Z_Construct_UPackage__Script_Engine(), TEXT("ScaleTrack"), sizeof(FScaleTrack), Get_Z_Construct_UScriptStruct_FScaleTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScaleTrack>()
{
	return FScaleTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScaleTrack(FScaleTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("ScaleTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFScaleTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFScaleTrack()
	{
		UScriptStruct::DeferCppStructOps<FScaleTrack>(FName(TEXT("ScaleTrack")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFScaleTrack;
	struct Z_Construct_UScriptStruct_FScaleTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScaleKeys;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe scale data for one track.  Scale(i) occurs at Time(i).  Rot.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe scale data for one track.  Scale(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScaleTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleTrack>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_Inner = { "ScaleKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys = { "ScaleKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScaleTrack, ScaleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScaleTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScaleTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ScaleTrack",
		sizeof(FScaleTrack),
		alignof(FScaleTrack),
		Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScaleTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScaleTrack"), sizeof(FScaleTrack), Get_Z_Construct_UScriptStruct_FScaleTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScaleTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScaleTrack_Hash() { return 1921570810U; }
class UScriptStruct* FRotationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("RotationTrack"), sizeof(FRotationTrack), Get_Z_Construct_UScriptStruct_FRotationTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRotationTrack>()
{
	return FRotationTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationTrack(FRotationTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("RotationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRotationTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFRotationTrack()
	{
		UScriptStruct::DeferCppStructOps<FRotationTrack>(FName(TEXT("RotationTrack")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRotationTrack;
	struct Z_Construct_UScriptStruct_FRotationTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotKeys;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe rotation data for one track.  Rot(i) occurs at Time(i).  Rot.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe rotation data for one track.  Rot(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationTrack>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_Inner = { "RotKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys = { "RotKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationTrack, RotKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RotationTrack",
		sizeof(FRotationTrack),
		alignof(FRotationTrack),
		Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationTrack"), sizeof(FRotationTrack), Get_Z_Construct_UScriptStruct_FRotationTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotationTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationTrack_Hash() { return 596759930U; }
class UScriptStruct* FTranslationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TranslationTrack"), sizeof(FTranslationTrack), Get_Z_Construct_UScriptStruct_FTranslationTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTranslationTrack>()
{
	return FTranslationTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTranslationTrack(FTranslationTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TranslationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTranslationTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTranslationTrack()
	{
		UScriptStruct::DeferCppStructOps<FTranslationTrack>(FName(TEXT("TranslationTrack")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTranslationTrack;
	struct Z_Construct_UScriptStruct_FTranslationTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PosKeys;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationTrack>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_Inner = { "PosKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys = { "PosKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationTrack, PosKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TranslationTrack",
		sizeof(FTranslationTrack),
		alignof(FTranslationTrack),
		Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TranslationTrack"), sizeof(FTranslationTrack), Get_Z_Construct_UScriptStruct_FTranslationTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTranslationTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTranslationTrack_Hash() { return 1644525554U; }
class UScriptStruct* FAnimSequenceTrackContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSequenceTrackContainer"), sizeof(FAnimSequenceTrackContainer), Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSequenceTrackContainer>()
{
	return FAnimSequenceTrackContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSequenceTrackContainer(FAnimSequenceTrackContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSequenceTrackContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer()
	{
		UScriptStruct::DeferCppStructOps<FAnimSequenceTrackContainer>(FName(TEXT("AnimSequenceTrackContainer")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSequenceTrackContainer;
	struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTracks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// These two always should go together, but it is not right now. \n// I wonder in the future, we change all compressed to be inside as well, so they all stay together\n// When remove tracks, it should be handled together \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "These two always should go together, but it is not right now.\nI wonder in the future, we change all compressed to be inside as well, so they all stay together\nWhen remove tracks, it should be handled together" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceTrackContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_Inner = { "AnimationTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks = { "AnimationTracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSequenceTrackContainer, AnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_Inner = { "TrackNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames = { "TrackNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSequenceTrackContainer, TrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSequenceTrackContainer",
		sizeof(FAnimSequenceTrackContainer),
		alignof(FAnimSequenceTrackContainer),
		Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSequenceTrackContainer"), sizeof(FAnimSequenceTrackContainer), Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Hash() { return 3922479019U; }
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimSequence::execRemoveAllCustomAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllCustomAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSequence::execRemoveAllCustomAttributesForBone)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllCustomAttributesForBone(Z_Param_Out_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSequence::execRemoveCustomAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSequence::execAddBoneStringCustomAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ValueKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoneStringCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSequence::execAddBoneIntegerCustomAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ValueKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoneIntegerCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSequence::execAddBoneFloatCustomAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
		P_GET_TARRAY_REF(float,Z_Param_Out_ValueKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoneFloatCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimSequence::StaticRegisterNativesUAnimSequence()
	{
#if WITH_EDITOR
		UClass* Class = UAnimSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoneFloatCustomAttribute", &UAnimSequence::execAddBoneFloatCustomAttribute },
			{ "AddBoneIntegerCustomAttribute", &UAnimSequence::execAddBoneIntegerCustomAttribute },
			{ "AddBoneStringCustomAttribute", &UAnimSequence::execAddBoneStringCustomAttribute },
			{ "RemoveAllCustomAttributes", &UAnimSequence::execRemoveAllCustomAttributes },
			{ "RemoveAllCustomAttributesForBone", &UAnimSequence::execRemoveAllCustomAttributesForBone },
			{ "RemoveCustomAttribute", &UAnimSequence::execRemoveCustomAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics
	{
		struct AnimSequence_eventAddBoneFloatCustomAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			TArray<float> TimeKeys;
			TArray<float> ValueKeys;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValueKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneFloatCustomAttribute", nullptr, nullptr, sizeof(AnimSequence_eventAddBoneFloatCustomAttribute_Parms), Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics
	{
		struct AnimSequence_eventAddBoneIntegerCustomAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			TArray<float> TimeKeys;
			TArray<int32> ValueKeys;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneIntegerCustomAttribute", nullptr, nullptr, sizeof(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms), Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics
	{
		struct AnimSequence_eventAddBoneStringCustomAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			TArray<float> TimeKeys;
			TArray<FString> ValueKeys;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneStringCustomAttribute", nullptr, nullptr, sizeof(AnimSequence_eventAddBoneStringCustomAttribute_Parms), Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveAllCustomAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics
	{
		struct AnimSequence_eventRemoveAllCustomAttributesForBone_Parms
		{
			FName BoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventRemoveAllCustomAttributesForBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveAllCustomAttributesForBone", nullptr, nullptr, sizeof(AnimSequence_eventRemoveAllCustomAttributesForBone_Parms), Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics
	{
		struct AnimSequence_eventRemoveCustomAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventRemoveCustomAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSequence_eventRemoveCustomAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveCustomAttribute", nullptr, nullptr, sizeof(AnimSequence_eventRemoveCustomAttribute_Parms), Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UAnimSequence_NoRegister()
	{
		return UAnimSequence::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportFileFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImportFileFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportResampleFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportResampleFramerate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFrames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackToSkeletonMapTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackToSkeletonMapTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackToSkeletonMapTable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawDataGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawDataGuid;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationTrackNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationTrackNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowFrameStripping_MetaData[];
#endif
		static void NewProp_bAllowFrameStripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowFrameStripping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionErrorThresholdScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionErrorThresholdScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneCompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneCompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveCompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveCompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveAnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RefPoseType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseSeq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefPoseSeq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefFrameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefFrameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RetargetSourceAsset;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RetargetSourceAssetReferencePose_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAssetReferencePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RetargetSourceAssetReferencePose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[];
#endif
		static void NewProp_bEnableRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRootLock_MetaData[];
#endif
		static void NewProp_bForceRootLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRootLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNormalizedRootMotionScale_MetaData[];
#endif
		static void NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNormalizedRootMotionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRootMotionSettingsCopiedFromMontage_MetaData[];
#endif
		static void NewProp_bRootMotionSettingsCopiedFromMontage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootMotionSettingsCopiedFromMontage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotOverrideCompression_MetaData[];
#endif
		static void NewProp_bDoNotOverrideCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotOverrideCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsRebake_MetaData[];
#endif
		static void NewProp_bNeedsRebake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsRebake;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneCustomAttributeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneCustomAttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneCustomAttributeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAttributesGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAttributesGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedCustomAttributesGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedCustomAttributesGuid;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedPerBoneCustomAttributeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedPerBoneCustomAttributeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedPerBoneCustomAttributeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSequence_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute, "AddBoneFloatCustomAttribute" }, // 3163905610
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute, "AddBoneIntegerCustomAttribute" }, // 2582140883
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute, "AddBoneStringCustomAttribute" }, // 1993119808
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes, "RemoveAllCustomAttributes" }, // 4280899110
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone, "RemoveAllCustomAttributesForBone" }, // 3781231987
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute, "RemoveCustomAttribute" }, // 182102943
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject Length" },
		{ "IncludePath", "Animation/AnimSequence.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate_MetaData[] = {
		{ "Comment", "/** The DCC framerate of the imported file. UI information only, unit are Hz */" },
		{ "DisplayName", "Import File Framerate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The DCC framerate of the imported file. UI information only, unit are Hz" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate = { "ImportFileFramerate", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, ImportFileFramerate), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate_MetaData[] = {
		{ "Comment", "/** The resample framerate that was computed during import. UI information only, unit are Hz */" },
		{ "DisplayName", "Import Resample Framerate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The resample framerate that was computed during import. UI information only, unit are Hz" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate = { "ImportResampleFramerate", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, ImportResampleFramerate), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Comment", "/** Number of raw frames in this sequence (not used by engine - just for informational purposes). */" },
		{ "DisplayName", "Number of Keys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Number of raw frames in this sequence (not used by engine - just for informational purposes)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0020090000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, NumFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable_Inner = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrackToSkeletonMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable_MetaData[] = {
		{ "Comment", "/**\n\x09 * In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\n\x09 * TrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i). \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "In the future, maybe keeping RawAnimSequenceTrack + TrackMap as one would be good idea to avoid inconsistent array size\nTrackToSkeletonMapTable(i) should contains  track mapping data for RawAnimationData(i)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable = { "TrackToSkeletonMapTable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, TrackToSkeletonMapTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid_MetaData[] = {
		{ "Comment", "// Update this if the contents of RawAnimationData changes;\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Update this if the contents of RawAnimationData changes;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid = { "RawDataGuid", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RawDataGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_Inner = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "This is name of RawAnimationData tracks for editoronly - if we lose skeleton, we'll need relink them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0020080800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, AnimationTrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Allow frame stripping to be performed on this animation if the platform requests it\n\x09 * Can be disabled if animation has high frequency movements that are being lost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Allow frame stripping to be performed on this animation if the platform requests it\nCan be disabled if animation has high frequency movements that are being lost." },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bAllowFrameStripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping = { "bAllowFrameStripping", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Set a scale for error threshold on compression. This is useful if the animation will \n\x09 * be played back at a different scale (e.g. if you know the animation will be played\n\x09 * on an actor/component that is scaled up by a factor of 10, set this value to 10)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Set a scale for error threshold on compression. This is useful if the animation will\nbe played back at a different scale (e.g. if you know the animation will be played\non an actor/component that is scaled up by a factor of 10, set this value to 10)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale = { "CompressionErrorThresholdScale", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, CompressionErrorThresholdScale), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The bone compression settings used to compress bones in this sequence. */" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The bone compression settings used to compress bones in this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings = { "BoneCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, BoneCompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The curve compression settings used to compress curves in this sequence. */" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The curve compression settings used to compress curves in this sequence." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings = { "CurveCompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, CurveCompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Additive animation type. **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive animation type. *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType = { "AdditiveAnimType", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, AdditiveAnimType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additive refrerence pose type. Refer above enum type */" },
		{ "DisplayName", "Base Pose Type" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive refrerence pose type. Refer above enum type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType = { "RefPoseType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RefPoseType), Z_Construct_UEnum_Engine_EAdditiveBasePoseType, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame **/" },
		{ "DisplayName", "Base Pose Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq = { "RefPoseSeq", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RefPoseSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additve reference frame if RefPoseType == AnimFrame **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additve reference frame if RefPoseType == AnimFrame *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex = { "RefFrameIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RefFrameIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset = { "RetargetSourceAsset", nullptr, (EPropertyFlags)0x0014010800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RetargetSourceAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_Inner = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData[] = {
		{ "Comment", "/** When using RetargetSourceAsset, use the post stored here */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "When using RetargetSourceAsset, use the post stored here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RetargetSourceAssetReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This defines how values between keys are calculated **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "This defines how values between keys are calculated *" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will allow extracting of root motion **/" },
		{ "DisplayName", "EnableRootMotion" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If this is on, it will allow extracting of root motion *" },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bEnableRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion = { "bEnableRootMotion", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion.**/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion.*" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Force Root Bone Lock even if Root Motion is not enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Force Root Bone Lock even if Root Motion is not enabled" },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bForceRootLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock = { "bForceRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) **/" },
		{ "DisplayName", "Use Normalized Root Motion Scale" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) *" },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bUseNormalizedRootMotionScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale = { "bUseNormalizedRootMotionScale", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_MetaData[] = {
		{ "Comment", "/** Have we copied root motion settings from an owning montage */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Have we copied root motion settings from an owning montage" },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bRootMotionSettingsCopiedFromMontage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage = { "bRootMotionSettingsCopiedFromMontage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Comment", "/** Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, CompressCommandletVersion), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Do not attempt to override compression scheme when running CompressAnimations commandlet.\n\x09 * Some high frequency animations are too sensitive and shouldn't be changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Do not attempt to override compression scheme when running CompressAnimations commandlet.\nSome high frequency animations are too sensitive and shouldn't be changed." },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bDoNotOverrideCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression = { "bDoNotOverrideCompression", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake_SetBit(void* Obj)
	{
		((UAnimSequence*)Obj)->bNeedsRebake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake = { "bNeedsRebake", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_Inner = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_MetaData[] = {
		{ "Comment", "/** Authored Sync markers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Authored Sync markers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, AuthoredSyncMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_Inner = { "PerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomAttributePerBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_MetaData[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData = { "PerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0040000800020041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, PerBoneCustomAttributeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_CustomAttributesGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CustomAttributesGuid = { "CustomAttributesGuid", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, CustomAttributesGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CustomAttributesGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_CustomAttributesGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedCustomAttributesGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedCustomAttributesGuid = { "BakedCustomAttributesGuid", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, BakedCustomAttributesGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedCustomAttributesGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedCustomAttributesGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData_Inner = { "BakedPerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData = { "BakedPerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSequence, BakedPerBoneCustomAttributeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_TrackToSkeletonMapTable,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bNeedsRebake,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CustomAttributesGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedCustomAttributesGuid,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_BakedPerBoneCustomAttributeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequence_Statics::ClassParams = {
		&UAnimSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAnimSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSequence, 2638475748);
	template<> ENGINE_API UClass* StaticClass<UAnimSequence>()
	{
		return UAnimSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSequence(Z_Construct_UClass_UAnimSequence, &UAnimSequence::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequence);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

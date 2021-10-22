// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/PoseAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAsset() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FPoseDataContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer, Z_Construct_UPackage__Script_Engine(), TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseDataContainer>()
{
	return FPoseDataContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseDataContainer(FPoseDataContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseDataContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer()
	{
		UScriptStruct::DeferCppStructOps<FPoseDataContainer>(FName(TEXT("PoseDataContainer")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer;
	struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Pose data container\n* \n* Contains animation and curve for all poses\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data container\n\nContains animation and curve for all poses" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDataContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData[] = {
		{ "Comment", "// pose names - horizontal data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "pose names - horizontal data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseDataContainer, PoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "// this is list of tracks - vertical data\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of tracks - vertical data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseDataContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_ValueProp = { "TrackMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_Key_KeyProp = { "TrackMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData[] = {
		{ "Comment", "// cache for the track names to skeleton index \n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "cache for the track names to skeleton index" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap = { "TrackMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseDataContainer, TrackMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPoseData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData[] = {
		{ "Comment", "// this is list of poses\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of poses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseDataContainer, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimCurveBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "// curve meta data # of Curve UIDs should match with Poses.CurveValues.Num\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "curve meta data # of Curve UIDs should match with Poses.CurveValues.Num" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseDataContainer, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseDataContainer",
		sizeof(FPoseDataContainer),
		alignof(FPoseDataContainer),
		Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_Hash() { return 1543928506U; }
class UScriptStruct* FPoseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseData, Z_Construct_UPackage__Script_Engine(), TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseData>()
{
	return FPoseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseData(FPoseData::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseData
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseData()
	{
		UScriptStruct::DeferCppStructOps<FPoseData>(FName(TEXT("PoseData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseData;
	struct Z_Construct_UScriptStruct_FPoseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocalSpacePose_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocalSpacePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceLocalSpacePose;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCurveData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceCurveData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSpacePose_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePose;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackToBufferIndex_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackToBufferIndex_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackToBufferIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackToBufferIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Pose data \n * \n * This is one pose data structure\n * This will let us blend poses quickly easily\n * All poses within this asset should contain same number of tracks, \n * so that we can blend quickly\n */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data\n\nThis is one pose data structure\nThis will let us blend poses quickly easily\nAll poses within this asset should contain same number of tracks,\nso that we can blend quickly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseData>();
	}
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData[] = {
		{ "Comment", "// source local space pose, this pose is always full pose\n// the size this array matches Tracks in the pose container\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source local space pose, this pose is always full pose\nthe size this array matches Tracks in the pose container" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose = { "SourceLocalSpacePose", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseData, SourceLocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner = { "SourceCurveData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData[] = {
		{ "Comment", "// source curve data that is full value\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source curve data that is full value" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData = { "SourceCurveData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseData, SourceCurveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData[] = {
		{ "Comment", "// local space pose, # of array match with # of TrackToBufferIndex\n// it only saves the one with delta as base pose or ref pose if full pose\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "local space pose, # of array match with # of TrackToBufferIndex\nit only saves the one with delta as base pose or ref pose if full pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose = { "LocalSpacePose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseData, LocalSpacePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_ValueProp = { "TrackToBufferIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_Key_KeyProp = { "TrackToBufferIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData[] = {
		{ "Comment", "// this is PoseContainer.Tracks to Buffer Index of LocalSpacePose\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is PoseContainer.Tracks to Buffer Index of LocalSpacePose" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex = { "TrackToBufferIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseData, TrackToBufferIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData[] = {
		{ "Comment", "// # of array match with # of Curves in PoseDataContainer\n// curve data is not compressed\n" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "# of array match with # of Curves in PoseDataContainer\ncurve data is not compressed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseData, CurveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseData",
		sizeof(FPoseData),
		alignof(FPoseData),
		Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseData_Hash() { return 2251229156U; }
	void UPoseAsset::StaticRegisterNativesUPoseAsset()
	{
	}
	UClass* Z_Construct_UClass_UPoseAsset_NoRegister()
	{
		return UPoseAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPoseAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditivePose_MetaData[];
#endif
		static void NewProp_bAdditivePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditivePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePoseIndex;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAnimation;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Pose Asset that can be blended by weight of curves \n */" },
		{ "IncludePath", "Animation/PoseAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "* Pose Asset that can be blended by weight of curves" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData[] = {
		{ "Comment", "/** Animation Pose Data*/" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Animation Pose Data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer = { "PoseContainer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, PoseContainer), Z_Construct_UScriptStruct_FPoseDataContainer, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData[] = {
		{ "Comment", "/** Whether or not Additive Pose or not - these are property that needs post process, so */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Whether or not Additive Pose or not - these are property that needs post process, so" },
	};
#endif
	void Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit(void* Obj)
	{
		((UPoseAsset*)Obj)->bAdditivePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose = { "bAdditivePose", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseAsset), &Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData[] = {
		{ "Comment", "/** if -1, use ref pose */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "if -1, use ref pose" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex = { "BasePoseIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, BasePoseIndex), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose. */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset = { "RetargetSourceAsset", nullptr, (EPropertyFlags)0x0014010800000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, RetargetSourceAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData[] = {
		{ "Comment", "/** When using RetargetSourceAsset, use the post stored here */" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "When using RetargetSourceAsset, use the post stored here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, RetargetSourceAssetReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseAsset, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSourceAssetReferencePose,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoseAsset_Statics::ClassParams = {
		&UPoseAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseAsset, 1633941428);
	template<> ENGINE_API UClass* StaticClass<UPoseAsset>()
	{
		return UPoseAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseAsset(Z_Construct_UClass_UPoseAsset, &UPoseAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_HandIKRetargeting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_HandIKRetargeting() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_HandIKRetargeting>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_HandIKRetargeting cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_HandIKRetargeting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_HandIKRetargeting"), sizeof(FAnimNode_HandIKRetargeting), Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_HandIKRetargeting>()
{
	return FAnimNode_HandIKRetargeting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_HandIKRetargeting(FAnimNode_HandIKRetargeting::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_HandIKRetargeting"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_HandIKRetargeting>(FName(TEXT("AnimNode_HandIKRetargeting")));
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_HandIKRetargeting;
	struct Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandFK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandFK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandFK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandFK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandIK;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBonesToMove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBonesToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IKBonesToMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandFKWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandFKWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Node to handle re-targeting of Hand IK bone chain.\n * It looks at position in Mesh Space of Left and Right IK bones, and moves Left and Right IK bones to those.\n * based on HandFKWeight. (0 = favor left hand, 1 = favor right hand, 0.5 = equal weight).\n * This is used so characters of different proportions can handle the same props.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Node to handle re-targeting of Hand IK bone chain.\nIt looks at position in Mesh Space of Left and Right IK bones, and moves Left and Right IK bones to those.\nbased on HandFKWeight. (0 = favor left hand, 1 = favor right hand, 0.5 = equal weight).\nThis is used so characters of different proportions can handle the same props." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_HandIKRetargeting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Right Hand FK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Right Hand FK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK = { "RightHandFK", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Left Hand FK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Left Hand FK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK = { "LeftHandFK", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Right Hand IK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Right Hand IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK = { "RightHandIK", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Left Hand IK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Left Hand IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK = { "LeftHandIK", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_Inner = { "IKBonesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** IK Bones to move. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "IK Bones to move." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove = { "IKBonesToMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, IKBonesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Which hand to favor. 0.5 is equal weight for both, 1 = right hand, 0 = left hand. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Which hand to favor. 0.5 is equal weight for both, 1 = right hand, 0 = left hand." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight = { "HandFKWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, HandFKWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_HandIKRetargeting",
		sizeof(FAnimNode_HandIKRetargeting),
		alignof(FAnimNode_HandIKRetargeting),
		Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_HandIKRetargeting"), sizeof(FAnimNode_HandIKRetargeting), Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Hash() { return 3005375208U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

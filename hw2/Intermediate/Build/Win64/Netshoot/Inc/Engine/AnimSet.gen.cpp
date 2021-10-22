// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSet() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimSetMeshLinkup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSetMeshLinkup, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSetMeshLinkup"), sizeof(FAnimSetMeshLinkup), Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSetMeshLinkup>()
{
	return FAnimSetMeshLinkup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSetMeshLinkup(FAnimSetMeshLinkup::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSetMeshLinkup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup()
	{
		UScriptStruct::DeferCppStructOps<FAnimSetMeshLinkup>(FName(TEXT("AnimSetMeshLinkup")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSetMeshLinkup;
	struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneToTrackTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToTrackTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneToTrackTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSetMeshLinkup>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData[] = {
		{ "Comment", "/** \n\x09 * Mapping table. Size must be same as size of SkelMesh reference skeleton. \n\x09 * No index should be more than the number of tracks in this AnimSet.\n\x09 * -1 indicates no track for this bone - will use reference pose instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of SkelMesh reference skeleton.\nNo index should be more than the number of tracks in this AnimSet.\n-1 indicates no track for this bone - will use reference pose instead." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimSetMeshLinkup, BoneToTrackTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSetMeshLinkup",
		sizeof(FAnimSetMeshLinkup),
		alignof(FAnimSetMeshLinkup),
		Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSetMeshLinkup"), sizeof(FAnimSetMeshLinkup), Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Hash() { return 2786754820U; }
	void UAnimSet::StaticRegisterNativesUAnimSet()
	{
	}
	UClass* Z_Construct_UClass_UAnimSet_NoRegister()
	{
		return UAnimSet::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimRotationOnly_MetaData[];
#endif
		static void NewProp_bAnimRotationOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimRotationOnly;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackBoneNames;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequences;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinkupCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkupCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkupCache;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneUseAnimTranslation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneUseAnimTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneUseAnimTranslation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceUseMeshTranslation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceUseMeshTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceUseMeshTranslation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UseTranslationBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTranslationBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UseTranslationBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForceMeshTranslationBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMeshTranslationBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForceMeshTranslationBoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkelMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviewSkelMeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestRatioSkelMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BestRatioSkelMeshName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimSet.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** \n\x09 *\x09Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose. \n\x09 *\x09Note that the root bone always takes translation from the animation, even if this flag is set.\n\x09 *\x09You can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose.\nNote that the root bone always takes translation from the animation, even if this flag is set.\nYou can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set." },
	};
#endif
	void Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit(void* Obj)
	{
		((UAnimSet*)Obj)->bAnimRotationOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly = { "bAnimRotationOnly", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimSet), &Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData[] = {
		{ "Comment", "/** Bone name that each track relates to. TrackBoneName.Num() == Number of tracks. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Bone name that each track relates to. TrackBoneName.Num() == Number of tracks." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, TrackBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData[] = {
		{ "Comment", "/** Actual animation sequence information. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Actual animation sequence information." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner = { "LinkupCache", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimSetMeshLinkup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData[] = {
		{ "Comment", "/** Non-serialised cache of linkups between different skeletal meshes and this AnimSet. */// @UE4: Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Non-serialised cache of linkups between different skeletal meshes and this AnimSet. // @UE4: Do not change private - they will go away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache = { "LinkupCache", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, LinkupCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\n\x09 *\x09This is basically a cooked down version of UseTranslationBoneNames for speed.\n\x09 *\x09Size matches the number of tracks.\n\x09 */// @UE4: Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\nThis is basically a cooked down version of UseTranslationBoneNames for speed.\nSize matches the number of tracks.\n   // @UE4: Do not change private - they will go away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, BoneUseAnimTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData[] = {
		{ "Comment", "/** Cooked down version of ForceMeshTranslationBoneNames */// @UE4: Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Cooked down version of ForceMeshTranslationBoneNames // @UE4: Do not change private - they will go away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, ForceUseMeshTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** Names of bones that should use translation from the animation, if bAnimRotationOnly is set. */// @UE4: Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Names of bones that should use translation from the animation, if bAnimRotationOnly is set. // @UE4: Do not change private - they will go away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, UseTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** List of bones which are ALWAYS going to use their translation from the mesh and not the animation. */// @UE4: Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "List of bones which are ALWAYS going to use their translation from the mesh and not the animation. // @UE4: Do not change private - they will go away" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, ForceMeshTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData[] = {
		{ "Comment", "/** In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName = { "PreviewSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, PreviewSkelMeshName), METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData[] = {
		{ "Comment", "/** Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName = { "BestRatioSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSet, BestRatioSkelMeshName), METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSet_Statics::ClassParams = {
		&UAnimSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSet, 2465765155);
	template<> ENGINE_API UClass* StaticClass<UAnimSet>()
	{
		return UAnimSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSet(Z_Construct_UClass_UAnimSet, &UAnimSet::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

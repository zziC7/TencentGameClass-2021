// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrack() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackActiveCondition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubTrackGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedSubTrackInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ETrackActiveCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrackActiveCondition, Z_Construct_UPackage__Script_Engine(), TEXT("ETrackActiveCondition"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrackActiveCondition>()
	{
		return ETrackActiveCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackActiveCondition(ETrackActiveCondition_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrackActiveCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrackActiveCondition_Hash() { return 1183646653U; }
	UEnum* Z_Construct_UEnum_Engine_ETrackActiveCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackActiveCondition"), 0, Get_Z_Construct_UEnum_Engine_ETrackActiveCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETAC_Always", (int64)ETAC_Always },
				{ "ETAC_GoreEnabled", (int64)ETAC_GoreEnabled },
				{ "ETAC_GoreDisabled", (int64)ETAC_GoreDisabled },
				{ "ETAC_MAX", (int64)ETAC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Required condition for this track to be enabled */" },
				{ "ETAC_Always.Comment", "/** Track is always active */" },
				{ "ETAC_Always.Name", "ETAC_Always" },
				{ "ETAC_Always.ToolTip", "Track is always active" },
				{ "ETAC_GoreDisabled.Comment", "/** Track is active when extreme content (gore) is disabled */" },
				{ "ETAC_GoreDisabled.Name", "ETAC_GoreDisabled" },
				{ "ETAC_GoreDisabled.ToolTip", "Track is active when extreme content (gore) is disabled" },
				{ "ETAC_GoreEnabled.Comment", "/** Track is active when extreme content (gore) is enabled */" },
				{ "ETAC_GoreEnabled.Name", "ETAC_GoreEnabled" },
				{ "ETAC_GoreEnabled.ToolTip", "Track is active when extreme content (gore) is enabled" },
				{ "ETAC_MAX.Name", "ETAC_MAX" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
				{ "ToolTip", "Required condition for this track to be enabled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETrackActiveCondition",
				"ETrackActiveCondition",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubTrackGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubTrackGroup, Z_Construct_UPackage__Script_Engine(), TEXT("SubTrackGroup"), sizeof(FSubTrackGroup), Get_Z_Construct_UScriptStruct_FSubTrackGroup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSubTrackGroup>()
{
	return FSubTrackGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubTrackGroup(FSubTrackGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("SubTrackGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup()
	{
		UScriptStruct::DeferCppStructOps<FSubTrackGroup>(FName(TEXT("SubTrackGroup")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSubTrackGroup;
	struct Z_Construct_UScriptStruct_FSubTrackGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollapsed_MetaData[];
#endif
		static void NewProp_bIsCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubTrackGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A small structure holding data for grouping subtracks. (For UI drawing purposes) */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "A small structure holding data for grouping subtracks. (For UI drawing purposes)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubTrackGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** Name of the subtrack  group */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Name of the subtrack  group" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubTrackGroup, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices_Inner = { "TrackIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices_MetaData[] = {
		{ "Comment", "/** Indices to tracks in the parent track subtrack array. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Indices to tracks in the parent track subtrack array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices = { "TrackIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubTrackGroup, TrackIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed_MetaData[] = {
		{ "Comment", "/** If this group is collapsed */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If this group is collapsed" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed_SetBit(void* Obj)
	{
		((FSubTrackGroup*)Obj)->bIsCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed = { "bIsCollapsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubTrackGroup), &Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Comment", "/** If this group is selected */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If this group is selected" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((FSubTrackGroup*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubTrackGroup), &Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubTrackGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_TrackIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsCollapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubTrackGroup_Statics::NewProp_bIsSelected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubTrackGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SubTrackGroup",
		sizeof(FSubTrackGroup),
		alignof(FSubTrackGroup),
		Z_Construct_UScriptStruct_FSubTrackGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubTrackGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubTrackGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubTrackGroup"), sizeof(FSubTrackGroup), Get_Z_Construct_UScriptStruct_FSubTrackGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubTrackGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubTrackGroup_Hash() { return 3667209825U; }
class UScriptStruct* FSupportedSubTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedSubTrackInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SupportedSubTrackInfo"), sizeof(FSupportedSubTrackInfo), Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSupportedSubTrackInfo>()
{
	return FSupportedSubTrackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSupportedSubTrackInfo(FSupportedSubTrackInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SupportedSubTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo()
	{
		UScriptStruct::DeferCppStructOps<FSupportedSubTrackInfo>(FName(TEXT("SupportedSubTrackInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSupportedSubTrackInfo;
	struct Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubTrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct for creating sub tracks supported by this track */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Helper struct for creating sub tracks supported by this track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedSubTrackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Comment", "/** The sub track class which is supported by this track */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "The sub track class which is supported by this track" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSupportedSubTrackInfo, SupportedClass), Z_Construct_UClass_UInterpTrack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SupportedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SubTrackName_MetaData[] = {
		{ "Comment", "/** The name of the subtrack */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "The name of the subtrack" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SubTrackName = { "SubTrackName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSupportedSubTrackInfo, SubTrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SubTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SubTrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Comment", "/** Index into the any subtrack group this subtrack belongs to (can be -1 for no group) */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Index into the any subtrack group this subtrack belongs to (can be -1 for no group)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSupportedSubTrackInfo, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SupportedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_SubTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::NewProp_GroupIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SupportedSubTrackInfo",
		sizeof(FSupportedSubTrackInfo),
		alignof(FSupportedSubTrackInfo),
		Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSupportedSubTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SupportedSubTrackInfo"), sizeof(FSupportedSubTrackInfo), Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSupportedSubTrackInfo_Hash() { return 3191367370U; }
	void UInterpTrack::StaticRegisterNativesUInterpTrack()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrack_NoRegister()
	{
		return UInterpTrack::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTracks;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubTrackGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubTrackGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubTrackGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedSubTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedSubTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedSubTracks;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInstClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackInstClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnePerGroup_MetaData[];
#endif
		static void NewProp_bOnePerGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnePerGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirGroupOnly_MetaData[];
#endif
		static void NewProp_bDirGroupOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirGroupOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTrack_MetaData[];
#endif
		static void NewProp_bDisableTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackIcon;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAnimControlTrack_MetaData[];
#endif
		static void NewProp_bIsAnimControlTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAnimControlTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubTrackOnly_MetaData[];
#endif
		static void NewProp_bSubTrackOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubTrackOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollapsed_MetaData[];
#endif
		static void NewProp_bIsCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollapsed;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrack.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks_Inner = { "SubTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks_MetaData[] = {
		{ "Category", "InterpTrack" },
		{ "Comment", "/** A list of subtracks that belong to this track */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "A list of subtracks that belong to this track" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks = { "SubTracks", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, SubTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups_Inner = { "SubTrackGroups", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubTrackGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups_MetaData[] = {
		{ "Comment", "/** A list of subtrack groups (for editor UI organization only) */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "A list of subtrack groups (for editor UI organization only)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups = { "SubTrackGroups", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, SubTrackGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks_Inner = { "SupportedSubTracks", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSupportedSubTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks_MetaData[] = {
		{ "Comment", "/** A list of supported tracks that can be a subtrack of this track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "A list of supported tracks that can be a subtrack of this track." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks = { "SupportedSubTracks", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, SupportedSubTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackInstClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackInstClass = { "TrackInstClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, TrackInstClass), Z_Construct_UClass_UInterpTrackInst_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackInstClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackInstClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_ActiveCondition_MetaData[] = {
		{ "Category", "InterpTrack" },
		{ "Comment", "/** Sets the condition that must be met for this track to be enabled */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Sets the condition that must be met for this track to be enabled" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_ActiveCondition = { "ActiveCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, ActiveCondition), Z_Construct_UEnum_Engine_ETrackActiveCondition, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_ActiveCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_ActiveCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackTitle_MetaData[] = {
		{ "Comment", "/** Title of track type. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Title of track type." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackTitle = { "TrackTitle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, TrackTitle), METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup_MetaData[] = {
		{ "Comment", "/** Whether there may only be one of this track in an UInterpGroup. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Whether there may only be one of this track in an UInterpGroup." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bOnePerGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup = { "bOnePerGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly_MetaData[] = {
		{ "Comment", "/** If this track can only exist inside the Director group. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If this track can only exist inside the Director group." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bDirGroupOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly = { "bDirGroupOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack_MetaData[] = {
		{ "Comment", "/** Whether or not this track should actually update the target actor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Whether or not this track should actually update the target actor." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bDisableTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack = { "bDisableTrack", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Comment", "/** Whether or not this track is selected in the editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Whether or not this track is selected in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackIcon_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackIcon = { "TrackIcon", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrack, TrackIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackIcon_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack_MetaData[] = {
		{ "Comment", "/** If true, the  AActor  this track is working on will have BeginAnimControl/FinishAnimControl called on it. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If true, the  AActor  this track is working on will have BeginAnimControl/FinishAnimControl called on it." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bIsAnimControlTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack = { "bIsAnimControlTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly_MetaData[] = {
		{ "Comment", "/** If this track can only exist as a sub track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If this track can only exist as a sub track." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bSubTrackOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly = { "bSubTrackOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Whether or not this track is visible in the editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Whether or not this track is visible in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "Comment", "/** Whether or not this track is recording in the editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "Whether or not this track is recording in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bIsRecording = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed_MetaData[] = {
		{ "Comment", "/** If this track is collapsed. (Only applies  to tracks with subtracks). */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrack.h" },
		{ "ToolTip", "If this track is collapsed. (Only applies  to tracks with subtracks)." },
	};
#endif
	void Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed_SetBit(void* Obj)
	{
		((UInterpTrack*)Obj)->bIsCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed = { "bIsCollapsed", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrack), &Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTracks,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SubTrackGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_SupportedSubTracks,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackInstClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_ActiveCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bOnePerGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDirGroupOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bDisableTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsSelected,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_TrackIcon,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsAnimControlTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bSubTrackOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsRecording,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrack_Statics::NewProp_bIsCollapsed,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrack_Statics::ClassParams = {
		&UInterpTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrack, 3231756093);
	template<> ENGINE_API UClass* StaticClass<UInterpTrack>()
	{
		return UInterpTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrack(Z_Construct_UClass_UInterpTrack, &UInterpTrack::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SkeletalMeshReductionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshReductionSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	static UEnum* SkeletalMeshOptimizationImportance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationImportance"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshOptimizationImportance>()
	{
		return SkeletalMeshOptimizationImportance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationImportance(SkeletalMeshOptimizationImportance_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationImportance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Hash() { return 1695174605U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationImportance"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOI_Off", (int64)SMOI_Off },
				{ "SMOI_Lowest", (int64)SMOI_Lowest },
				{ "SMOI_Low", (int64)SMOI_Low },
				{ "SMOI_Normal", (int64)SMOI_Normal },
				{ "SMOI_High", (int64)SMOI_High },
				{ "SMOI_Highest", (int64)SMOI_Highest },
				{ "SMOI_MAX", (int64)SMOI_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum specifying the importance of properties when simplifying skeletal meshes. */" },
				{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
				{ "SMOI_High.DisplayName", "High" },
				{ "SMOI_High.Name", "SMOI_High" },
				{ "SMOI_Highest.DisplayName", "Highest" },
				{ "SMOI_Highest.Name", "SMOI_Highest" },
				{ "SMOI_Low.DisplayName", "Low" },
				{ "SMOI_Low.Name", "SMOI_Low" },
				{ "SMOI_Lowest.DisplayName", "Lowest" },
				{ "SMOI_Lowest.Name", "SMOI_Lowest" },
				{ "SMOI_MAX.Hidden", "" },
				{ "SMOI_MAX.Name", "SMOI_MAX" },
				{ "SMOI_Normal.DisplayName", "Normal" },
				{ "SMOI_Normal.Name", "SMOI_Normal" },
				{ "SMOI_Off.DisplayName", "Off" },
				{ "SMOI_Off.Name", "SMOI_Off" },
				{ "ToolTip", "Enum specifying the importance of properties when simplifying skeletal meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"SkeletalMeshOptimizationImportance",
				"SkeletalMeshOptimizationImportance",
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
	static UEnum* SkeletalMeshOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshOptimizationType>()
	{
		return SkeletalMeshOptimizationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationType(SkeletalMeshOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Hash() { return 3768644205U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOT_NumOfTriangles", (int64)SMOT_NumOfTriangles },
				{ "SMOT_MaxDeviation", (int64)SMOT_MaxDeviation },
				{ "SMOT_TriangleOrDeviation", (int64)SMOT_TriangleOrDeviation },
				{ "SMOT_MAX", (int64)SMOT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum specifying the reduction type to use when simplifying skeletal meshes with Simmplygon */" },
				{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
				{ "SMOT_MAX.Hidden", "" },
				{ "SMOT_MAX.Name", "SMOT_MAX" },
				{ "SMOT_MaxDeviation.DisplayName", "Accuracy" },
				{ "SMOT_MaxDeviation.Name", "SMOT_MaxDeviation" },
				{ "SMOT_MaxDeviation.ToolTip", "Accuracy requirement will be used for simplification." },
				{ "SMOT_NumOfTriangles.DisplayName", "Triangles" },
				{ "SMOT_NumOfTriangles.Name", "SMOT_NumOfTriangles" },
				{ "SMOT_NumOfTriangles.ToolTip", "Triangle requirement will be used for simplification." },
				{ "SMOT_TriangleOrDeviation.DisplayName", "Any" },
				{ "SMOT_TriangleOrDeviation.Name", "SMOT_TriangleOrDeviation" },
				{ "SMOT_TriangleOrDeviation.ToolTip", "Simplification will continue until either Triangle or Accuracy requirement is met." },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes with Simmplygon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"SkeletalMeshOptimizationType",
				"SkeletalMeshOptimizationType",
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
	static UEnum* SkeletalMeshTerminationCriterion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshTerminationCriterion"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<SkeletalMeshTerminationCriterion>()
	{
		return SkeletalMeshTerminationCriterion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshTerminationCriterion(SkeletalMeshTerminationCriterion_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshTerminationCriterion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Hash() { return 1870984471U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshTerminationCriterion"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMTC_NumOfTriangles", (int64)SMTC_NumOfTriangles },
				{ "SMTC_NumOfVerts", (int64)SMTC_NumOfVerts },
				{ "SMTC_TriangleOrVert", (int64)SMTC_TriangleOrVert },
				{ "SMTC_AbsNumOfTriangles", (int64)SMTC_AbsNumOfTriangles },
				{ "SMTC_AbsNumOfVerts", (int64)SMTC_AbsNumOfVerts },
				{ "SMTC_AbsTriangleOrVert", (int64)SMTC_AbsTriangleOrVert },
				{ "SMTC_MAX", (int64)SMTC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum specifying the reduction type to use when simplifying skeletal meshes with internal tool */" },
				{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
				{ "SMTC_AbsNumOfTriangles.DisplayName", "Max Triangles" },
				{ "SMTC_AbsNumOfTriangles.Name", "SMTC_AbsNumOfTriangles" },
				{ "SMTC_AbsNumOfTriangles.ToolTip", "Triangle count criterion will be used for simplification." },
				{ "SMTC_AbsNumOfVerts.DisplayName", "Max Vertices" },
				{ "SMTC_AbsNumOfVerts.Name", "SMTC_AbsNumOfVerts" },
				{ "SMTC_AbsNumOfVerts.ToolTip", "Vertex cont criterion will be used for simplification." },
				{ "SMTC_AbsTriangleOrVert.DisplayName", "First Max Satisfied" },
				{ "SMTC_AbsTriangleOrVert.Name", "SMTC_AbsTriangleOrVert" },
				{ "SMTC_AbsTriangleOrVert.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
				{ "SMTC_MAX.Hidden", "" },
				{ "SMTC_MAX.Name", "SMTC_MAX" },
				{ "SMTC_NumOfTriangles.DisplayName", "Triangles" },
				{ "SMTC_NumOfTriangles.Name", "SMTC_NumOfTriangles" },
				{ "SMTC_NumOfTriangles.ToolTip", "Triangle count criterion will be used for simplification." },
				{ "SMTC_NumOfVerts.DisplayName", "Vertices" },
				{ "SMTC_NumOfVerts.Name", "SMTC_NumOfVerts" },
				{ "SMTC_NumOfVerts.ToolTip", "Vertex cont criterion will be used for simplification." },
				{ "SMTC_TriangleOrVert.DisplayName", "First Percent Satisfied" },
				{ "SMTC_TriangleOrVert.Name", "SMTC_TriangleOrVert" },
				{ "SMTC_TriangleOrVert.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes with internal tool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"SkeletalMeshTerminationCriterion",
				"SkeletalMeshTerminationCriterion",
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
class UScriptStruct* FSkeletalMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshOptimizationSettings>()
{
	return FSkeletalMeshOptimizationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshOptimizationSettings(FSkeletalMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps<FSkeletalMeshOptimizationSettings>(FName(TEXT("SkeletalMeshOptimizationSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings;
	struct Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminationCriterion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TerminationCriterion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfVertPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfVertPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVerts;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTrianglesPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTrianglesPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVertsPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVertsPercentage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinningImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinningImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemapMorphTargets_MetaData[];
#endif
		static void NewProp_bRemapMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBonesPerVertex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBonesPerVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnforceBoneBoundaries_MetaData[];
#endif
		static void NewProp_bEnforceBoneBoundaries_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnforceBoneBoundaries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockEdges_MetaData[];
#endif
		static void NewProp_bLockEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockColorBounaries_MetaData[];
#endif
		static void NewProp_bLockColorBounaries_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockColorBounaries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseLOD;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD.\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion = { "TerminationCriterion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TerminationCriterion), Z_Construct_UEnum_Engine_SkeletalMeshTerminationCriterion, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The percentage of triangles to retain as a ratio, e.g. 0.1 indicates 10 percent */" },
		{ "DisplayName", "Percent of Triangles" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The percentage of triangles to retain as a ratio, e.g. 0.1 indicates 10 percent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { "NumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The percentage of vertices to retain as a ratio, e.g. 0.1 indicates 10 percent */" },
		{ "DisplayName", "Percent of Vertices" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The percentage of vertices to retain as a ratio, e.g. 0.1 indicates 10 percent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage = { "NumOfVertPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfVertPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of triangles to retain */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of triangles to retain" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles = { "MaxNumOfTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "6" },
		{ "Comment", "/** The maximum number of vertices to retain */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of vertices to retain" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts = { "MaxNumOfVerts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of triangles to retain when using percentage termination criterion. */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of triangles to retain when using percentage termination criterion." },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage = { "MaxNumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "6" },
		{ "Comment", "/** The maximum number of vertices to retain when using percentage termination criterion. */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The maximum number of vertices to retain when using percentage termination criterion." },
		{ "UIMin", "6" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage = { "MaxNumOfVertsPercentage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxNumOfVertsPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/**If ReductionMethod equals MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere. \n\x09 * In code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]\n\x09 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If ReductionMethod equals MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere.\nIn code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { "MaxDeviationPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { "ReductionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important the shape of the geometry is. */" },
		{ "DisplayName", "Silhouette" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important the shape of the geometry is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important texture density is. */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important texture density is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TextureImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important shading quality is. */" },
		{ "DisplayName", "Shading" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important shading quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ShadingImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** How important skinning quality is. */" },
		{ "DisplayName", "Skinning" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important skinning quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance = { "SkinningImportance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SkinningImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/* Remap the morph targets from the base LOD onto the reduce LOD. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Remap the morph targets from the base LOD onto the reduce LOD." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bRemapMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets = { "bRemapMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Whether Normal smoothing groups should be preserved. If true then Hard Edge Angle (NormalsThreshold) is used **/" },
		{ "DisplayName", "Recompute Normal" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If true then Hard Edge Angle (NormalsThreshold) is used *" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** The welding threshold distance. Vertices under this distance will be welded. */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** If the angle between two triangles are above this value, the normals will not be\n\x09smooth over the edge between those two triangles. Set in degrees. This is only used when bRecalcNormals is set to true*/" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bRecalcNormals" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when bRecalcNormals is set to true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { "NormalsThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of bones that can be assigned to each vertex. */" },
		{ "DisplayName", "Max Bones Influence" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Maximum number of bones that can be assigned to each vertex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex = { "MaxBonesPerVertex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxBonesPerVertex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Penalize edge collapse between vertices that have different major bones.  This will help articulated segments like tongues but can lead to undesirable results under extreme simplification */" },
		{ "DisplayName", "Enforce Bone Boundaries" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Penalize edge collapse between vertices that have different major bones.  This will help articulated segments like tongues but can lead to undesirable results under extreme simplification" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bEnforceBoneBoundaries = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries = { "bEnforceBoneBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default value of 1 attempts to preserve volume.  Smaller values will loose volume by flattening curved surfaces, and larger values will accentuate curved surfaces.  */" },
		{ "DisplayName", "Volumetric Correction" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Default value of 1 attempts to preserve volume.  Smaller values will loose volume by flattening curved surfaces, and larger values will accentuate curved surfaces." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance = { "VolumeImportance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, VolumeImportance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Preserve cuts in the mesh surface by locking vertices in place.  Increases the quality of the simplified mesh at edges at the cost of more triangles*/" },
		{ "DisplayName", "Lock Mesh Edges" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Preserve cuts in the mesh surface by locking vertices in place.  Increases the quality of the simplified mesh at edges at the cost of more triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bLockEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges = { "bLockEdges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Disallow edge collapse when the vertices do not have a common color*/" },
		{ "DisplayName", "Lock Vertex Color Boundaries" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Disallow edge collapse when the vertices do not have a common color" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bLockColorBounaries = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries = { "bLockColorBounaries", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "Comment", "/** Base LOD index to generate this LOD. By default, we generate from LOD 0 */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Base LOD index to generate this LOD. By default, we generate from LOD 0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD = { "BaseLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BaseLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BonesToRemove_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BakePose_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TerminationCriterion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfVertPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVerts,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfTrianglesPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxNumOfVertsPercentage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bEnforceBoneBoundaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_VolumeImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bLockColorBounaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshOptimizationSettings",
		sizeof(FSkeletalMeshOptimizationSettings),
		alignof(FSkeletalMeshOptimizationSettings),
		Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Hash() { return 3665081937U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

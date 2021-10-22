// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/StaticMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOptimizationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENormalMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("EOptimizationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOptimizationType>()
	{
		return EOptimizationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOptimizationType(EOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOptimizationType_Hash() { return 1012157697U; }
	UEnum* Z_Construct_UEnum_Engine_EOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_EOptimizationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OT_NumOfTriangles", (int64)OT_NumOfTriangles },
				{ "OT_MaxDeviation", (int64)OT_MaxDeviation },
				{ "OT_MAX", (int64)OT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum specifying the reduction type to use when simplifying static meshes. */" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "OT_MAX.Name", "OT_MAX" },
				{ "OT_MaxDeviation.Name", "OT_MaxDeviation" },
				{ "OT_NumOfTriangles.Name", "OT_NumOfTriangles" },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EOptimizationType",
				"EOptimizationType",
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
	static UEnum* EImportanceLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel, Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceLevel"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EImportanceLevel>()
	{
		return EImportanceLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportanceLevel(EImportanceLevel_StaticEnum, TEXT("/Script/Engine"), TEXT("EImportanceLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EImportanceLevel_Hash() { return 465917417U; }
	UEnum* Z_Construct_UEnum_Engine_EImportanceLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportanceLevel"), 0, Get_Z_Construct_UEnum_Engine_EImportanceLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IL_Off", (int64)IL_Off },
				{ "IL_Lowest", (int64)IL_Lowest },
				{ "IL_Low", (int64)IL_Low },
				{ "IL_Normal", (int64)IL_Normal },
				{ "IL_High", (int64)IL_High },
				{ "IL_Highest", (int64)IL_Highest },
				{ "TEMP_BROKEN2", (int64)TEMP_BROKEN2 },
				{ "EImportanceLevel_MAX", (int64)EImportanceLevel_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EImportanceLevel_MAX.Name", "EImportanceLevel_MAX" },
				{ "IL_High.Name", "IL_High" },
				{ "IL_Highest.Name", "IL_Highest" },
				{ "IL_Low.Name", "IL_Low" },
				{ "IL_Lowest.Name", "IL_Lowest" },
				{ "IL_Normal.Name", "IL_Normal" },
				{ "IL_Off.Name", "IL_Off" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "TEMP_BROKEN2.Name", "TEMP_BROKEN2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EImportanceLevel",
				"EImportanceLevel",
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
	static UEnum* ENormalMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENormalMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENormalMode>()
	{
		return ENormalMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENormalMode(ENormalMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENormalMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENormalMode_Hash() { return 1896656159U; }
	UEnum* Z_Construct_UEnum_Engine_ENormalMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENormalMode"), 0, Get_Z_Construct_UEnum_Engine_ENormalMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NM_PreserveSmoothingGroups", (int64)NM_PreserveSmoothingGroups },
				{ "NM_RecalculateNormals", (int64)NM_RecalculateNormals },
				{ "NM_RecalculateNormalsSmooth", (int64)NM_RecalculateNormalsSmooth },
				{ "NM_RecalculateNormalsHard", (int64)NM_RecalculateNormalsHard },
				{ "TEMP_BROKEN", (int64)TEMP_BROKEN },
				{ "ENormalMode_MAX", (int64)ENormalMode_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Optimization settings used to simplify mesh LODs. */" },
				{ "ENormalMode_MAX.Name", "ENormalMode_MAX" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "NM_PreserveSmoothingGroups.Name", "NM_PreserveSmoothingGroups" },
				{ "NM_RecalculateNormals.Name", "NM_RecalculateNormals" },
				{ "NM_RecalculateNormalsHard.Name", "NM_RecalculateNormalsHard" },
				{ "NM_RecalculateNormalsSmooth.Name", "NM_RecalculateNormalsSmooth" },
				{ "TEMP_BROKEN.Name", "TEMP_BROKEN" },
				{ "ToolTip", "Optimization settings used to simplify mesh LODs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENormalMode",
				"ENormalMode",
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
class UScriptStruct* FMaterialRemapIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialRemapIndex, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialRemapIndex>()
{
	return FMaterialRemapIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialRemapIndex(FMaterialRemapIndex::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialRemapIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex()
	{
		UScriptStruct::DeferCppStructOps<FMaterialRemapIndex>(FName(TEXT("MaterialRemapIndex")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex;
	struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImportVersionKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialRemap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialRemapIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey = { "ImportVersionKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialRemapIndex, ImportVersionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner = { "MaterialRemap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap = { "MaterialRemap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialRemapIndex, MaterialRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialRemapIndex",
		sizeof(FMaterialRemapIndex),
		alignof(FMaterialRemapIndex),
		Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash() { return 3511495923U; }
class UScriptStruct* FStaticMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMaterial>()
{
	return FStaticMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMaterial(FStaticMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial()
	{
		UScriptStruct::DeferCppStructOps<FStaticMaterial>(FName(TEXT("StaticMaterial")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMaterial;
	struct Z_Construct_UScriptStruct_FStaticMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVChannelData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//~ Begin Material Interface for UStaticMesh - contains a material and other stuff\n" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/*This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/*This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName = { "ImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, ImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Data used for texture streaming relative to each UV channels. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData = { "UVChannelData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMaterial",
		sizeof(FStaticMaterial),
		alignof(FStaticMaterial),
		Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash() { return 76012268U; }
class UScriptStruct* FAssetEditorOrbitCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, Z_Construct_UPackage__Script_Engine(), TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetEditorOrbitCameraPosition>()
{
	return FAssetEditorOrbitCameraPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorOrbitCameraPosition(FAssetEditorOrbitCameraPosition::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetEditorOrbitCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition()
	{
		UScriptStruct::DeferCppStructOps<FAssetEditorOrbitCameraPosition>(FName(TEXT("AssetEditorOrbitCameraPosition")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition;
	struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData[] = {
		{ "Comment", "/** Whether or not this has been set to a valid value */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether or not this has been set to a valid value" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FAssetEditorOrbitCameraPosition*)Obj)->bIsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetEditorOrbitCameraPosition), &Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData[] = {
		{ "Comment", "/** The position to orbit the camera around */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The position to orbit the camera around" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint = { "CamOrbitPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData[] = {
		{ "Comment", "/** The distance of the camera from the orbit point */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The distance of the camera from the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom = { "CamOrbitZoom", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitZoom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData[] = {
		{ "Comment", "/** The rotation to apply around the orbit point */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The rotation to apply around the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation = { "CamOrbitRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetEditorOrbitCameraPosition",
		sizeof(FAssetEditorOrbitCameraPosition),
		alignof(FAssetEditorOrbitCameraPosition),
		Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash() { return 2287007612U; }
class UScriptStruct* FMeshSectionInfoMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfoMap, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfoMap>()
{
	return FMeshSectionInfoMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfoMap(FMeshSectionInfoMap::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfoMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap()
	{
		UScriptStruct::DeferCppStructOps<FMeshSectionInfoMap>(FName(TEXT("MeshSectionInfoMap")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap;
	struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Map containing per-section settings for each section of each LOD.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Map containing per-section settings for each section of each LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMeshSectionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData[] = {
		{ "Comment", "/** Maps an LOD+Section to the material it should render with. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Maps an LOD+Section to the material it should render with." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionInfoMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfoMap",
		sizeof(FMeshSectionInfoMap),
		alignof(FMeshSectionInfoMap),
		Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash() { return 3334808866U; }
class UScriptStruct* FMeshSectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfo>()
{
	return FMeshSectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfo(FMeshSectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo()
	{
		UScriptStruct::DeferCppStructOps<FMeshSectionInfo>(FName(TEXT("MeshSectionInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo;
	struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[];
#endif
		static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Per-section settings.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Per-section settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Comment", "/** Index in to the Materials array on UStaticMesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index in to the Materials array on UStaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionInfo, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** If true, collision is enabled for this section. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, collision is enabled for this section." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Comment", "/** If true, this section will cast shadows. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will cast shadows." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Comment", "/** If true, this section will be visible in ray tracing Geometry. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will be visible in ray tracing Geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bVisibleInRayTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Comment", "/** If true, this section will always considered opaque in ray tracing Geometry. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will always considered opaque in ray tracing Geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bForceOpaque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bVisibleInRayTracing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bForceOpaque,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfo",
		sizeof(FMeshSectionInfo),
		alignof(FMeshSectionInfo),
		Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash() { return 2846465771U; }
class UScriptStruct* FStaticMeshSourceModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshSourceModel, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshSourceModel>()
{
	return FStaticMeshSourceModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshSourceModel(FStaticMeshSourceModel::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshSourceModel"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshSourceModel>(FName(TEXT("StaticMeshSourceModel")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel;
	struct Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportWithBaseMesh_MetaData[];
#endif
		static void NewProp_bImportWithBaseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportWithBaseMesh;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Source model from which a renderable static mesh is built.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Source model from which a renderable static mesh is built." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** Settings applied when building the mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Settings applied when building the mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Reduction settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Reduction settings to apply when building render data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, LODDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** \n\x09 * ScreenSize to display this LOD.\n\x09 * The screen size is based around the projected diameter of the bounding\n\x09 * sphere of the model. i.e. 0.5 means half the screen's maximum dimension.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData[] = {
		{ "Category", "StaticMeshSourceModel" },
		{ "Comment", "/** The file path that was used to import this LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The file path that was used to import this LOD." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename = { "SourceImportFilename", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, SourceImportFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData[] = {
		{ "Comment", "/** Whether this LOD was imported in the same file as the base mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether this LOD was imported in the same file as the base mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit(void* Obj)
	{
		((FStaticMeshSourceModel*)Obj)->bImportWithBaseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh = { "bImportWithBaseMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticMeshSourceModel), &Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshSourceModel",
		sizeof(FStaticMeshSourceModel),
		alignof(FStaticMeshSourceModel),
		Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash() { return 4183583243U; }
class UScriptStruct* FStaticMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshOptimizationSettings>()
{
	return FStaticMeshOptimizationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshOptimizationSettings(FStaticMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshOptimizationSettings>(FName(TEXT("StaticMeshOptimizationSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings;
	struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Old optimization settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Old optimization settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData[] = {
		{ "Comment", "/** The method to use when optimizing the skeletal mesh LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { "ReductionMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_EOptimizationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "Comment", "/** If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { "NumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "Comment", "/**If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { "MaxDeviationPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Comment", "/** The welding threshold distance. Vertices under this distance will be welded. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "Comment", "/** Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used **/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used *" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((FStaticMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticMeshOptimizationSettings), &Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData[] = {
		{ "Comment", "/** If the angle between two triangles are above this value, the normals will not be\n\x09smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { "NormalsThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Comment", "/** How important the shape of the geometry is (EImportanceLevel). */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important the shape of the geometry is (EImportanceLevel)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, SilhouetteImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Comment", "/** How important texture density is (EImportanceLevel). */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important texture density is (EImportanceLevel)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, TextureImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Comment", "/** How important shading quality is. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important shading quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ShadingImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshOptimizationSettings",
		sizeof(FStaticMeshOptimizationSettings),
		alignof(FStaticMeshOptimizationSettings),
		Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash() { return 3555350409U; }
	DEFINE_FUNCTION(UStaticMesh::execRemoveSocket)
	{
		P_GET_OBJECT(UStaticMeshSocket,Z_Param_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSocket(Z_Param_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execFindSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execAddSocket)
	{
		P_GET_OBJECT(UStaticMeshSocket,Z_Param_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSocket(Z_Param_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execAddMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetNumSections)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(Z_Param_InLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetBoundingBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetNumLODs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execBuildFromStaticMeshDescriptions)
	{
		P_GET_TARRAY_REF(UStaticMeshDescription*,Z_Param_Out_StaticMeshDescriptions);
		P_GET_UBOOL(Z_Param_bBuildSimpleCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFromStaticMeshDescriptions(Z_Param_Out_StaticMeshDescriptions,Z_Param_bBuildSimpleCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execCreateStaticMeshDescription)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshDescription**)Z_Param__Result=UStaticMesh::CreateStaticMeshDescription(Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetStaticMaterials)
	{
		P_GET_TARRAY_REF(FStaticMaterial,Z_Param_Out_InStaticMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMaterials(Z_Param_Out_InStaticMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetStaticMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FStaticMaterial>*)Z_Param__Result=P_THIS->GetStaticMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForPlatform)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlatformName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinimumLODForPlatform(Z_Param_Out_PlatformName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execGetMinimumLODForPlatforms)
	{
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_PlatformMinimumLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMinimumLODForPlatforms(Z_Param_Out_PlatformMinimumLODs);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UStaticMesh::execSetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_MaterialIndex,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMesh::execSetNumSourceModels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumSourceModels(Z_Param_Num);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UStaticMesh::StaticRegisterNativesUStaticMesh()
	{
		UClass* Class = UStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaterial", &UStaticMesh::execAddMaterial },
			{ "AddSocket", &UStaticMesh::execAddSocket },
			{ "BuildFromStaticMeshDescriptions", &UStaticMesh::execBuildFromStaticMeshDescriptions },
			{ "CreateStaticMeshDescription", &UStaticMesh::execCreateStaticMeshDescription },
			{ "FindSocket", &UStaticMesh::execFindSocket },
			{ "GetBoundingBox", &UStaticMesh::execGetBoundingBox },
			{ "GetBounds", &UStaticMesh::execGetBounds },
			{ "GetMaterial", &UStaticMesh::execGetMaterial },
			{ "GetMaterialIndex", &UStaticMesh::execGetMaterialIndex },
			{ "GetMinimumLODForPlatform", &UStaticMesh::execGetMinimumLODForPlatform },
			{ "GetMinimumLODForPlatforms", &UStaticMesh::execGetMinimumLODForPlatforms },
			{ "GetNumLODs", &UStaticMesh::execGetNumLODs },
			{ "GetNumSections", &UStaticMesh::execGetNumSections },
			{ "GetStaticMaterials", &UStaticMesh::execGetStaticMaterials },
			{ "RemoveSocket", &UStaticMesh::execRemoveSocket },
#if WITH_EDITOR
			{ "SetMaterial", &UStaticMesh::execSetMaterial },
			{ "SetNumSourceModels", &UStaticMesh::execSetNumSourceModels },
#endif // WITH_EDITOR
			{ "SetStaticMaterials", &UStaticMesh::execSetStaticMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics
	{
		struct StaticMesh_eventAddMaterial_Parms
		{
			UMaterialInterface* Material;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventAddMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventAddMaterial_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Adds a new material and return its slot name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Adds a new material and return its slot name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "AddMaterial", nullptr, nullptr, sizeof(StaticMesh_eventAddMaterial_Parms), Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_AddMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_AddMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_AddSocket_Statics
	{
		struct StaticMesh_eventAddSocket_Parms
		{
			UStaticMeshSocket* Socket;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventAddSocket_Parms, Socket), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09""Add a socket object in this StaticMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Add a socket object in this StaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "AddSocket", nullptr, nullptr, sizeof(StaticMesh_eventAddSocket_Parms), Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_AddSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_AddSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics
	{
		struct StaticMesh_eventBuildFromStaticMeshDescriptions_Parms
		{
			TArray<UStaticMeshDescription*> StaticMeshDescriptions;
			bool bBuildSimpleCollision;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshDescriptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshDescriptions;
		static void NewProp_bBuildSimpleCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildSimpleCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_Inner = { "StaticMeshDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions = { "StaticMeshDescriptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms, StaticMeshDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_MetaData)) };
	void Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision_SetBit(void* Obj)
	{
		((StaticMesh_eventBuildFromStaticMeshDescriptions_Parms*)Obj)->bBuildSimpleCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision = { "bBuildSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms), &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_StaticMeshDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::NewProp_bBuildSimpleCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Builds static mesh LODs from the array of StaticMeshDescriptions passed in */" },
		{ "CPP_Default_bBuildSimpleCollision", "false" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Builds static mesh LODs from the array of StaticMeshDescriptions passed in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "BuildFromStaticMeshDescriptions", nullptr, nullptr, sizeof(StaticMesh_eventBuildFromStaticMeshDescriptions_Parms), Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics
	{
		struct StaticMesh_eventCreateStaticMeshDescription_Parms
		{
			UObject* Outer;
			UStaticMeshDescription* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventCreateStaticMeshDescription_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventCreateStaticMeshDescription_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Create an empty StaticMeshDescription object, to describe a static mesh at runtime */" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Create an empty StaticMeshDescription object, to describe a static mesh at runtime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "CreateStaticMeshDescription", nullptr, nullptr, sizeof(StaticMesh_eventCreateStaticMeshDescription_Parms), Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_FindSocket_Statics
	{
		struct StaticMesh_eventFindSocket_Parms
		{
			FName InSocketName;
			UStaticMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09""Find a socket object in this StaticMesh by name.\n\x09 *\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Find a socket object in this StaticMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "FindSocket", nullptr, nullptr, sizeof(StaticMesh_eventFindSocket_Parms), Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_FindSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics
	{
		struct StaticMesh_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBoundingBox", nullptr, nullptr, sizeof(StaticMesh_eventGetBoundingBox_Parms), Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBounds_Statics
	{
		struct StaticMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns the number of bounds of the mesh.\n\x09 *\n\x09 * @return\x09The bounding box represented as box origin with extents and also a sphere that encapsulates that box\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the number of bounds of the mesh.\n\n@return      The bounding box represented as box origin with extents and also a sphere that encapsulates that box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBounds", nullptr, nullptr, sizeof(StaticMesh_eventGetBounds_Parms), Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics
	{
		struct StaticMesh_eventGetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Gets a Material given a Material Index and an LOD number\n\x09 *\n\x09 * @return Requested material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material given a Material Index and an LOD number\n\n@return Requested material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterial", nullptr, nullptr, sizeof(StaticMesh_eventGetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics
	{
		struct StaticMesh_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Gets a Material index given a slot name\n\x09 *\n\x09 * @return Requested material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material index given a slot name\n\n@return Requested material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(StaticMesh_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics
	{
		struct StaticMesh_eventGetMinimumLODForPlatform_Parms
		{
			FName PlatformName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatform_Parms, PlatformName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForPlatform", nullptr, nullptr, sizeof(StaticMesh_eventGetMinimumLODForPlatform_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics
	{
		struct StaticMesh_eventGetMinimumLODForPlatforms_Parms
		{
			TMap<FName,int32> PlatformMinimumLODs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlatformMinimumLODs_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlatformMinimumLODs_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlatformMinimumLODs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp = { "PlatformMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs = { "PlatformMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMinimumLODForPlatforms_Parms, PlatformMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::NewProp_PlatformMinimumLODs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMinimumLODForPlatforms", nullptr, nullptr, sizeof(StaticMesh_eventGetMinimumLODForPlatforms_Parms), Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics
	{
		struct StaticMesh_eventGetNumLODs_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Returns the number of LODs used by the mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ScriptName", "GetNumLods" },
		{ "ToolTip", "Returns the number of LODs used by the mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumLODs", nullptr, nullptr, sizeof(StaticMesh_eventGetNumLODs_Parms), Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics
	{
		struct StaticMesh_eventGetNumSections_Parms
		{
			int32 InLOD;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLOD;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD = { "InLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, InLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest) */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumSections", nullptr, nullptr, sizeof(StaticMesh_eventGetNumSections_Parms), Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics
	{
		struct StaticMesh_eventGetStaticMaterials_Parms
		{
			TArray<FStaticMaterial> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetStaticMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetStaticMaterials", nullptr, nullptr, sizeof(StaticMesh_eventGetStaticMaterials_Parms), Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics
	{
		struct StaticMesh_eventRemoveSocket_Parms
		{
			UStaticMeshSocket* Socket;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventRemoveSocket_Parms, Socket), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::NewProp_Socket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 *\x09Remove a socket object in this StaticMesh by providing it's pointer. Use FindSocket() if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Remove a socket object in this StaticMesh by providing it's pointer. Use FindSocket() if needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "RemoveSocket", nullptr, nullptr, sizeof(StaticMesh_eventRemoveSocket_Parms), Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_RemoveSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_RemoveSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics
	{
		struct StaticMesh_eventSetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * Sets a Material given a Material Index\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Sets a Material given a Material Index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMaterial", nullptr, nullptr, sizeof(StaticMesh_eventSetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics
	{
		struct StaticMesh_eventSetNumSourceModels_Parms
		{
			int32 Num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetNumSourceModels_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetNumSourceModels", nullptr, nullptr, sizeof(StaticMesh_eventSetNumSourceModels_Parms), Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetNumSourceModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetNumSourceModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics
	{
		struct StaticMesh_eventSetStaticMaterials_Parms
		{
			TArray<FStaticMaterial> InStaticMaterials;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStaticMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStaticMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InStaticMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_Inner = { "InStaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials = { "InStaticMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetStaticMaterials_Parms, InStaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::NewProp_InStaticMaterials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetStaticMaterials", nullptr, nullptr, sizeof(StaticMesh_eventSetStaticMaterials_Parms), Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetStaticMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetStaticMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMesh_NoRegister()
	{
		return UStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceModels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSectionInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalSectionInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStreamedLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumStreamedLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportVersion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRemapIndexPerImportVersion_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemapIndexPerImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemapIndexPerImportVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightmapUVVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[];
#endif
		static void NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightmapUVDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODForCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODForCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceField_MetaData[];
#endif
		static void NewProp_bGenerateMeshDistanceField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripComplexCollisionForConsole_MetaData[];
#endif
		static void NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripComplexCollisionForConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNavigationData_MetaData[];
#endif
		static void NewProp_bHasNavigationData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNavigationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportPhysicalMaterialMasks_MetaData[];
#endif
		static void NewProp_bSupportPhysicalMaterialMasks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportPhysicalMaterialMasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBuiltAtRuntime_MetaData[];
#endif
		static void NewProp_bIsBuiltAtRuntime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBuiltAtRuntime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportGpuUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportGpuUniformlyDistributedSampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportGpuUniformlyDistributedSampling;
#if WITH_EDITORONLY_DATA
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCameraPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomizedCollision_MetaData[];
#endif
		static void NewProp_bCustomizedCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomizedCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODForOccluderMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODForOccluderMesh;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementToIgnoreForTexFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementToIgnoreForTexFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComplexCollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComplexCollisionMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMesh_AddMaterial, "AddMaterial" }, // 3391482099
		{ &Z_Construct_UFunction_UStaticMesh_AddSocket, "AddSocket" }, // 3350270522
		{ &Z_Construct_UFunction_UStaticMesh_BuildFromStaticMeshDescriptions, "BuildFromStaticMeshDescriptions" }, // 3183959156
		{ &Z_Construct_UFunction_UStaticMesh_CreateStaticMeshDescription, "CreateStaticMeshDescription" }, // 3889297590
		{ &Z_Construct_UFunction_UStaticMesh_FindSocket, "FindSocket" }, // 2258047914
		{ &Z_Construct_UFunction_UStaticMesh_GetBoundingBox, "GetBoundingBox" }, // 1146446261
		{ &Z_Construct_UFunction_UStaticMesh_GetBounds, "GetBounds" }, // 1636554797
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterial, "GetMaterial" }, // 3074619383
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterialIndex, "GetMaterialIndex" }, // 2169409031
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatform, "GetMinimumLODForPlatform" }, // 2397713805
		{ &Z_Construct_UFunction_UStaticMesh_GetMinimumLODForPlatforms, "GetMinimumLODForPlatforms" }, // 2551492267
		{ &Z_Construct_UFunction_UStaticMesh_GetNumLODs, "GetNumLODs" }, // 2385952178
		{ &Z_Construct_UFunction_UStaticMesh_GetNumSections, "GetNumSections" }, // 1181805246
		{ &Z_Construct_UFunction_UStaticMesh_GetStaticMaterials, "GetStaticMaterials" }, // 169639114
		{ &Z_Construct_UFunction_UStaticMesh_RemoveSocket, "RemoveSocket" }, // 2729276711
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetMaterial, "SetMaterial" }, // 936220053
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetNumSourceModels, "SetNumSourceModels" }, // 3752594637
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetStaticMaterials, "SetStaticMaterials" }, // 793060560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A StaticMesh is a piece of geometry that consists of a static set of polygons.\n * Static Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\n * to render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n * @see AStaticMeshActor, UStaticMeshComponent\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/StaticMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A StaticMesh is a piece of geometry that consists of a static set of polygons.\nStatic Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\nto render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see AStaticMeshActor, UStaticMeshComponent" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner = { "SourceModels", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMeshSourceModel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData[] = {
		{ "Comment", "/** Imported raw mesh bulk data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Imported raw mesh bulk data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels = { "SourceModels", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap = { "SectionInfoMap", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap = { "OriginalSectionInfoMap", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, OriginalSectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LodSettings" },
		{ "Comment", "/** The LOD group to which this mesh belongs. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The LOD group to which this mesh belongs." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODGroup), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData[] = {
		{ "Comment", "/**\n\x09 * If non-negative, specify the maximum number of streamed LODs. Only has effect if\n\x09 * mesh LOD streaming is enabled for the target platform.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If non-negative, specify the maximum number of streamed LODs. Only has effect if\nmesh LOD streaming is enabled for the target platform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs = { "NumStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, NumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData[] = {
		{ "Comment", "/* The last import version */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The last import version" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion = { "ImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialRemapIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, MaterialRemapIndexPerImportVersion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion = { "LightmapUVVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightmapUVVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "Comment", "/** If true, the screen sizees at which LODs swap are computed automatically. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, the screen sizees at which LODs swap are computed automatically." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize = { "bAutoComputeLODScreenSize", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials used by this static mesh. Individual sections index in to this array. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Materials used by this static mesh. Individual sections index in to this array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, Materials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Bias multiplier for Light Propagation Volume lighting */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LpvBiasMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData[] = {
		{ "BlueprintGetter", "GetStaticMaterials" },
		{ "BlueprintSetter", "SetStaticMaterials" },
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, StaticMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity = { "LightmapUVDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightmapUVDensity), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ClampMax", "4096" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map resolution" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map coordinate index" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0012000000282009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 *\x09Specifies which mesh LOD to use for complex (per-poly) collision. \n\x09 *\x09Sometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\n\x09 *\x09""Collision representation does not change based on distance to camera.\n\x09 */" },
		{ "DisplayName", "LOD For Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Specifies which mesh LOD to use for complex (per-poly) collision.\nSometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\nCollision representation does not change based on distance to camera." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision = { "LODForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODForCollision), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 * Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\n\x09 * This is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\nThis is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bGenerateMeshDistanceField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField = { "bGenerateMeshDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData[] = {
		{ "Comment", "/** If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n\x09\x09On the Playstation 3 data of this mesh will be stored in video memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n              On the Playstation 3 data of this mesh will be stored in video memory." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bStripComplexCollisionForConsole_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole = { "bStripComplexCollisionForConsole", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n\x09    Set to false for distant meshes (always outside navigation bounds) to save memory on collision data. */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n          Set to false for distant meshes (always outside navigation bounds) to save memory on collision data." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bHasNavigationData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData = { "bHasNavigationData", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\x09\n\x09\x09Mesh supports uniformly distributed sampling in constant time.\n\x09\x09Memory cost is 8 bytes per triangle.\n\x09\x09""Example usage is uniform spawning of particles.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09\x09If true, complex collision data will store UVs and face remap table for use when performing\n\x09    PhysicalMaterialMask lookups in cooked builds. Note the increased memory cost for this\n\x09\x09""functionality.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, complex collision data will store UVs and face remap table for use when performing\nPhysicalMaterialMask lookups in cooked builds. Note the increased memory cost for this\nfunctionality." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportPhysicalMaterialMasks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks = { "bSupportPhysicalMaterialMasks", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * If true, a ray tracing acceleration structure will be built for this mesh and it may be used in ray tracing effects\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, a ray tracing acceleration structure will be built for this mesh and it may be used in ray tracing effects" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportRayTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bIsBuiltAtRuntime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime = { "bIsBuiltAtRuntime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 *\x09If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\n\x09 *\x09This is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\nThis is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAllowCPUAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09 * If true, a GPU buffer containing required data for uniform mesh surface sampling will be created at load time.\n\x09 * It is created from the cpu data so bSupportUniformlyDistributedSampling is also required to be true.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, a GPU buffer containing required data for uniform mesh surface sampling will be created at load time.\nIt is created from the cpu data so bSupportUniformlyDistributedSampling is also required to be true." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportGpuUniformlyDistributedSampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling = { "bSupportGpuUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this static mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this static mesh" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120408000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData[] = {
		{ "Comment", "/** The stored camera position to use as a default for the static mesh editor */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The stored camera position to use as a default for the static mesh editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition = { "EditorCameraPosition", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, EditorCameraPosition), Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bCustomizedCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision = { "bCustomizedCollision", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** \n\x09 *\x09Specifies which mesh LOD to use as occluder geometry for software occlusion\n\x09 *  Set to -1 to not use this mesh as occluder \n\x09 */" },
		{ "DisplayName", "LOD For Occluder Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Specifies which mesh LOD to use as occluder geometry for software occlusion\nSet to -1 to not use this mesh as occluder" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh = { "LODForOccluderMesh", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODForOccluderMesh), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying\n\x09 *\x09""everything explicitly to AttachComponent in the StaticMeshComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Index of an element to ignore while gathering streaming texture factors.\n\x09 * This is useful to disregard automatically generated vertex data which breaks texture factor heuristics.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index of an element to ignore while gathering streaming texture factors.\nThis is useful to disregard automatically generated vertex data which breaks texture factor heuristics." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor = { "ElementToIgnoreForTexFactor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData[] = {
		{ "Comment", "/** The editable mesh representation of this static mesh */// @todo: Maybe we don't want this visible in the details panel in the end; for now, this might aid debugging.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The editable mesh representation of this static mesh // @todo: Maybe we don't want this visible in the details panel in the end; for now, this might aid debugging." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh = { "EditableMesh", nullptr, (EPropertyFlags)0x0012000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, EditableMesh), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh = { "ComplexCollisionMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ComplexCollisionMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision = { "NavCollision", nullptr, (EPropertyFlags)0x00120000002a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, NavCollision), Z_Construct_UClass_UNavCollisionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMesh_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NumStreamedLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportPhysicalMaterialMasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportRayTracing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bIsBuiltAtRuntime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportGpuUniformlyDistributedSampling,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ComplexCollisionMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_CollisionDataProvider), false },
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMesh_Statics::ClassParams = {
		&UStaticMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMesh, 2955676764);
	template<> ENGINE_API UClass* StaticClass<UStaticMesh>()
	{
		return UStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMesh(Z_Construct_UClass_UStaticMesh, &UStaticMesh::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

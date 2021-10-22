// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionObject() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FGeometryCollectionSizeSpecificData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSizeSpecificData"), sizeof(FGeometryCollectionSizeSpecificData), Get_Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSizeSpecificData>()
{
	return FGeometryCollectionSizeSpecificData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCollectionSizeSpecificData(FGeometryCollectionSizeSpecificData::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("GeometryCollectionSizeSpecificData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSizeSpecificData
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSizeSpecificData()
	{
		UScriptStruct::DeferCppStructOps<FGeometryCollectionSizeSpecificData>(FName(TEXT("GeometryCollectionSizeSpecificData")));
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSizeSpecificData;
	struct Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionObjectReductionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSizeSpecificData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/** The max size these settings apply to*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "The max size these settings apply to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionType), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, ImplicitType), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MinClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaxClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionObjectReductionPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, CollisionParticlesFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSizeSpecificData, MaximumCollisionParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_ImplicitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MinClusterLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaxClusterLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionObjectReductionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_CollisionParticlesFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::NewProp_MaximumCollisionParticles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionSizeSpecificData",
		sizeof(FGeometryCollectionSizeSpecificData),
		alignof(FGeometryCollectionSizeSpecificData),
		Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCollectionSizeSpecificData"), sizeof(FGeometryCollectionSizeSpecificData), Get_Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData_Hash() { return 3228015931U; }
class UScriptStruct* FGeometryCollectionSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSource, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionSource"), sizeof(FGeometryCollectionSource), Get_Z_Construct_UScriptStruct_FGeometryCollectionSource_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionSource>()
{
	return FGeometryCollectionSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometryCollectionSource(FGeometryCollectionSource::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("GeometryCollectionSource"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSource
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSource()
	{
		UScriptStruct::DeferCppStructOps<FGeometryCollectionSource>(FName(TEXT("GeometryCollectionSource")));
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFGeometryCollectionSource;
	struct Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceGeometryObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, SkeletalMesh" },
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject = { "SourceGeometryObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSource, SourceGeometryObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSource, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner = { "SourceMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeometryCollectionSource, SourceMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceGeometryObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_LocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::NewProp_SourceMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionSource",
		sizeof(FGeometryCollectionSource),
		alignof(FGeometryCollectionSource),
		Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeometryCollectionSource"), sizeof(FGeometryCollectionSource), Get_Z_Construct_UScriptStruct_FGeometryCollectionSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometryCollectionSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometryCollectionSource_Hash() { return 1508843262U; }
	void UGeometryCollection::StaticRegisterNativesUGeometryCollection()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCollection_NoRegister()
	{
		return UGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[];
#endif
		static void NewProp_EnableClustering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClusterConnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClusterConnectionType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometrySource_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometrySource_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeometrySource;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImplicitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImplicitType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClusterLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinClusterLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectReductionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionObjectReductionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMassAsDensity_MetaData[];
#endif
		static void NewProp_bMassAsDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMassAsDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumMassClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumMassClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionParticlesFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionParticlesFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCollisionParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumCollisionParticles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeSpecificData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeSpecificData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SizeSpecificData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRemovePiecesOnFracture_MetaData[];
#endif
		static void NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRemovePiecesOnFracture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveOnFractureMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveOnFractureMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveOnFractureMaterials;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneSelectedMaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UGeometryCollectionObject (UObject)\n*\n* UObject wrapper for the FGeometryCollection\n*\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionObject.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UGeometryCollectionObject (UObject)\n\nUObject wrapper for the FGeometryCollection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData[] = {
		{ "Category", "Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->EnableClustering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, ClusterGroupIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevel), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Damage threshold for clusters at different levels. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Damage threshold for clusters at different levels." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, DamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType = { "ClusterConnectionType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, ClusterConnectionType), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner = { "GeometrySource", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData[] = {
		{ "Category", "GeometrySource" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource = { "GeometrySource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, GeometrySource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, CollisionType), Z_Construct_UEnum_Chaos_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  CollisionType defines how to initialize the rigid collision structures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType = { "ImplicitType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, ImplicitType), Z_Construct_UEnum_Chaos_EImplicitTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 5)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution = { "MinClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MinClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution = { "MaxClusterLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MaxClusterLevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/*\n\x09*  Resolution on the smallest axes for the level set. (def: 10)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "*  Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage = { "CollisionObjectReductionPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, CollisionObjectReductionPercentage), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Mass As Density, units are in kg/m^3\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Mass As Density, units are in kg/m^3" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->bMassAsDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity = { "bMassAsDensity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Total Mass of Collection. If density, units are in kg/m^3\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Total Mass of Collection. If density, units are in kg/m^3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, Mass), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09* Smallest allowable mass (def:0.1)\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Smallest allowable mass (def:0.1)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp = { "MinimumMassClamp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MinimumMassClamp), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Number of particles on the triangulated surface to use for collisions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Number of particles on the triangulated surface to use for collisions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction = { "CollisionParticlesFraction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, CollisionParticlesFraction), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData[] = {
		{ "Category", "Collisions" },
		{ "Comment", "/**\n\x09 * Max number of particles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Max number of particles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles = { "MaximumCollisionParticles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, MaximumCollisionParticles), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGeometryCollectionSizeSpecificData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData[] = {
		{ "Category", "Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData = { "SizeSpecificData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, SizeSpecificData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData[] = {
		{ "Category", "Fracture" },
		{ "Comment", "/**\n\x09* Enable remove pieces on fracture\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Enable remove pieces on fracture" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit(void* Obj)
	{
		((UGeometryCollection*)Obj)->EnableRemovePiecesOnFracture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture = { "EnableRemovePiecesOnFracture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGeometryCollection), &Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData[] = {
		{ "Category", "Fracture" },
		{ "Comment", "/**\n\x09* Materials relating to remove on fracture\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Materials relating to remove on fracture" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials = { "RemoveOnFractureMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, RemoveOnFractureMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120408000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData[] = {
		{ "Comment", "/** Guid created on construction of this collection. It should be used to uniquely identify this collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid created on construction of this collection. It should be used to uniquely identify this collection" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData[] = {
		{ "Comment", "/** \n\x09 * Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\n\x09 * the geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\n\x09 * is still valid (hasn't structurally changed post-recording)\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\nthe geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\nis still valid (hasn't structurally changed post-recording)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData[] = {
		{ "Comment", "// #todo(dmp): rename to be consistent BoneSelectedMaterialID?\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "#todo(dmp): rename to be consistent BoneSelectedMaterialID?" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex = { "BoneSelectedMaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableClustering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterGroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_DamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ClusterConnectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_GeometrySource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ImplicitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinClusterLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaxClusterLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionObjectReductionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_bMassAsDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MinimumMassClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_CollisionParticlesFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_MaximumCollisionParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_SizeSpecificData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_EnableRemovePiecesOnFracture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_RemoveOnFractureMaterials,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollection_Statics::ClassParams = {
		&UGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCollection, 1271506579);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollection>()
	{
		return UGeometryCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCollection(Z_Construct_UClass_UGeometryCollection, &UGeometryCollection::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UGeometryCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FStaticMeshComponentInstanceData>() == std::is_polymorphic<FPrimitiveComponentInstanceData>(), "USTRUCT FStaticMeshComponentInstanceData cannot be polymorphic unless super FPrimitiveComponentInstanceData is polymorphic");

class UScriptStruct* FStaticMeshComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentInstanceData"), sizeof(FStaticMeshComponentInstanceData), Get_Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshComponentInstanceData>()
{
	return FStaticMeshComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshComponentInstanceData(FStaticMeshComponentInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshComponentInstanceData>(FName(TEXT("StaticMeshComponentInstanceData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentInstanceData;
	struct Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorLODs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColorLODs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedStaticLighting_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedStaticLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedStaticLighting;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "/** Mesh being used by component */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Mesh being used by component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_Inner = { "VertexColorLODs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_MetaData[] = {
		{ "Comment", "/** Array of cached vertex colors for each LOD */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Array of cached vertex colors for each LOD" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs = { "VertexColorLODs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, VertexColorLODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_Inner = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, CachedStaticLighting), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_Inner = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_MetaData[] = {
		{ "Comment", "/** Texture streaming build data */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Texture streaming build data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, StreamingTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
		{ "Comment", "/** Texture streaming editor data (for viewmodes) */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Texture streaming editor data (for viewmodes)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, MaterialStreamingRelativeBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData,
		&NewStructOps,
		"StaticMeshComponentInstanceData",
		sizeof(FStaticMeshComponentInstanceData),
		alignof(FStaticMeshComponentInstanceData),
		Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshComponentInstanceData"), sizeof(FStaticMeshComponentInstanceData), Get_Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Hash() { return 2674450458U; }
class UScriptStruct* FStaticMeshVertexColorLODData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshVertexColorLODData"), sizeof(FStaticMeshVertexColorLODData), Get_Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshVertexColorLODData>()
{
	return FStaticMeshVertexColorLODData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshVertexColorLODData(FStaticMeshVertexColorLODData::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshVertexColorLODData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshVertexColorLODData
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshVertexColorLODData()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshVertexColorLODData>(FName(TEXT("StaticMeshVertexColorLODData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshVertexColorLODData;
	struct Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintedVertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintedVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaintedVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexBufferColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexBufferColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexBufferColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Vertex data stored per-LOD */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Vertex data stored per-LOD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshVertexColorLODData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_Inner = { "PaintedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaintedVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_MetaData[] = {
		{ "Comment", "/** copy of painted vertex data */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "copy of painted vertex data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices = { "PaintedVertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, PaintedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_Inner = { "VertexBufferColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_MetaData[] = {
		{ "Comment", "/** Copy of vertex buffer colors */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Copy of vertex buffer colors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors = { "VertexBufferColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, VertexBufferColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Comment", "/** Index of the LOD that this data came from */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the LOD that this data came from" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshVertexColorLODData",
		sizeof(FStaticMeshVertexColorLODData),
		alignof(FStaticMeshVertexColorLODData),
		Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshVertexColorLODData"), sizeof(FStaticMeshVertexColorLODData), Get_Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Hash() { return 1893327039U; }
class UScriptStruct* FStaticMeshComponentLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshComponentLODInfo>()
{
	return FStaticMeshComponentLODInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshComponentLODInfo(FStaticMeshComponentLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshComponentLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshComponentLODInfo>(FName(TEXT("StaticMeshComponentLODInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshComponentLODInfo;
	struct Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshComponentLODInfo",
		sizeof(FStaticMeshComponentLODInfo),
		alignof(FStaticMeshComponentLODInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshComponentLODInfo"), sizeof(FStaticMeshComponentLODInfo), Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Hash() { return 3354839799U; }
class UScriptStruct* FPaintedVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintedVertex, Z_Construct_UPackage__Script_Engine(), TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPaintedVertex>()
{
	return FPaintedVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaintedVertex(FPaintedVertex::StaticStruct, TEXT("/Script/Engine"), TEXT("PaintedVertex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex
{
	FScriptStruct_Engine_StaticRegisterNativesFPaintedVertex()
	{
		UScriptStruct::DeferCppStructOps<FPaintedVertex>(FName(TEXT("PaintedVertex")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPaintedVertex;
	struct Z_Construct_UScriptStruct_FPaintedVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cached vertex information at the time the mesh was painted. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Cached vertex information at the time the mesh was painted." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintedVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaintedVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaintedVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaintedVertex, Normal), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PaintedVertex",
		sizeof(FPaintedVertex),
		alignof(FPaintedVertex),
		Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaintedVertex"), sizeof(FPaintedVertex), Get_Z_Construct_UScriptStruct_FPaintedVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaintedVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaintedVertex_Hash() { return 261983433U; }
	DEFINE_FUNCTION(UStaticMeshComponent::execSetReverseCulling)
	{
		P_GET_UBOOL(Z_Param_ReverseCulling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverseCulling(Z_Param_ReverseCulling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execGetLocalBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Min);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLocalBounds(Z_Param_Out_Min,Z_Param_Out_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execSetEvaluateWorldPositionOffsetInRayTracing)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEvaluateWorldPositionOffsetInRayTracing(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execSetDistanceFieldSelfShadowBias)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceFieldSelfShadowBias(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execSetForcedLodModel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewForcedLodModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForcedLodModel(Z_Param_NewForcedLodModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execSetStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStaticMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshComponent::execOnRep_StaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_OldStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StaticMesh(Z_Param_OldStaticMesh);
		P_NATIVE_END;
	}
	void UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent()
	{
		UClass* Class = UStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalBounds", &UStaticMeshComponent::execGetLocalBounds },
			{ "OnRep_StaticMesh", &UStaticMeshComponent::execOnRep_StaticMesh },
			{ "SetDistanceFieldSelfShadowBias", &UStaticMeshComponent::execSetDistanceFieldSelfShadowBias },
			{ "SetEvaluateWorldPositionOffsetInRayTracing", &UStaticMeshComponent::execSetEvaluateWorldPositionOffsetInRayTracing },
			{ "SetForcedLodModel", &UStaticMeshComponent::execSetForcedLodModel },
			{ "SetReverseCulling", &UStaticMeshComponent::execSetReverseCulling },
			{ "SetStaticMesh", &UStaticMeshComponent::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics
	{
		struct StaticMeshComponent_eventGetLocalBounds_Parms
		{
			FVector Min;
			FVector Max;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "Comment", "/** \n\x09 * Get Local bounds\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Get Local bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "GetLocalBounds", nullptr, nullptr, sizeof(StaticMeshComponent_eventGetLocalBounds_Parms), Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics
	{
		struct StaticMeshComponent_eventOnRep_StaticMesh_Parms
		{
			UStaticMesh* OldStaticMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh = { "OldStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventOnRep_StaticMesh_Parms, OldStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "OnRep_StaticMesh", nullptr, nullptr, sizeof(StaticMeshComponent_eventOnRep_StaticMesh_Parms), Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics
	{
		struct StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "/** Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetDistanceFieldSelfShadowBias", nullptr, nullptr, sizeof(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics
	{
		struct StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetEvaluateWorldPositionOffsetInRayTracing", nullptr, nullptr, sizeof(StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics
	{
		struct StaticMeshComponent_eventSetForcedLodModel_Parms
		{
			int32 NewForcedLodModel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewForcedLodModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel = { "NewForcedLodModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetForcedLodModel_Parms, NewForcedLodModel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetForcedLodModel", nullptr, nullptr, sizeof(StaticMeshComponent_eventSetForcedLodModel_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics
	{
		struct StaticMeshComponent_eventSetReverseCulling_Parms
		{
			bool ReverseCulling;
		};
		static void NewProp_ReverseCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReverseCulling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit(void* Obj)
	{
		((StaticMeshComponent_eventSetReverseCulling_Parms*)Obj)->ReverseCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling = { "ReverseCulling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetReverseCulling_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "/** \n\x09 * Set forced reverse culling\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Set forced reverse culling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetReverseCulling", nullptr, nullptr, sizeof(StaticMeshComponent_eventSetReverseCulling_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics
	{
		struct StaticMeshComponent_eventSetStaticMesh_Parms
		{
			UStaticMesh* NewMesh;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetStaticMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshComponent_eventSetStaticMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "Comment", "/** Change the StaticMesh used by this instance. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Change the StaticMesh used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetStaticMesh", nullptr, nullptr, sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister()
	{
		return UStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLODLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousLODLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubDivisionStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubDivisionStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeColorOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WireframeColorOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[];
#endif
		static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIndexPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndexPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndexPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticMeshImportVersion;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[];
#endif
		static void NewProp_bOverrideWireframeColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLOD_MetaData[];
#endif
		static void NewProp_bOverrideMinLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[];
#endif
		static void NewProp_bOverrideNavigationExport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[];
#endif
		static void NewProp_bForceNavigationObstacle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisallowMeshPaintPerInstance_MetaData[];
#endif
		static void NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisallowMeshPaintPerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstanceForTextureStreaming_MetaData[];
#endif
		static void NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstanceForTextureStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[];
#endif
		static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[];
#endif
		static void NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubDivisions_MetaData[];
#endif
		static void NewProp_bUseSubDivisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubDivisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[];
#endif
		static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomOverrideVertexColorPerLOD_MetaData[];
#endif
		static void NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomOverrideVertexColorPerLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[];
#endif
		static void NewProp_bDisplayVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayPhysicalMaterialMasks_MetaData[];
#endif
		static void NewProp_bDisplayPhysicalMaterialMasks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayPhysicalMaterialMasks;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[];
#endif
		static void NewProp_bReverseCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDerivedDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshDerivedDataKey;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	UObject* (*const Z_Construct_UClass_UStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds, "GetLocalBounds" }, // 3890572815
		{ &Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 3075457918
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias, "SetDistanceFieldSelfShadowBias" }, // 775974365
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing, "SetEvaluateWorldPositionOffsetInRayTracing" }, // 2058412629
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel, "SetForcedLodModel" }, // 1917098742
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling, "SetReverseCulling" }, // 600396460
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh, "SetStaticMesh" }, // 1042013695
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * StaticMeshComponent is used to create an instance of a UStaticMesh.\n * A static mesh is a piece of geometry that consists of a static set of polygons.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n * @see UStaticMesh\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/StaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "StaticMeshComponent is used to create an instance of a UStaticMesh.\nA static mesh is a piece of geometry that consists of a static set of polygons.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1). */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, ForcedLodModel), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData[] = {
		{ "Comment", "/** LOD that was desired for rendering this StaticMeshComponent last frame. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated and no longer supported." },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "LOD that was desired for rendering this StaticMeshComponent last frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel = { "PreviousLODLevel", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, PreviousLODLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 * Specifies the smallest LOD that will be used for this component.  \n\x09 * This is ignored if ForcedLodModel is enabled.\n\x09 */" },
		{ "editcondition", "bOverrideMinLOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nThis is ignored if ForcedLodModel is enabled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, MinLOD), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData[] = {
		{ "Comment", "/** Subdivision step size for static vertex lighting.\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Subdivision step size for static vertex lighting." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize = { "SubDivisionStepSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, SubDivisionStepSize), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh = { "StaticMesh", "OnRep_StaticMesh", (EPropertyFlags)0x0040000100000035, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Wireframe color to use if bOverrideWireframeColor is true */" },
		{ "editcondition", "bOverrideWireframeColor" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Wireframe color to use if bOverrideWireframeColor is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride = { "WireframeColorOverride", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, WireframeColorOverride), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bEvaluateWorldPositionOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData[] = {
		{ "Comment", "/** The section currently selected in the Editor. Used for highlighting */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The section currently selected in the Editor. Used for highlighting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection = { "SelectedEditorSection", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorSection), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData[] = {
		{ "Comment", "/** The material currently selected in the Editor. Used for highlighting */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The material currently selected in the Editor. Used for highlighting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial = { "SelectedEditorMaterial", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorMaterial), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData[] = {
		{ "Comment", "/** Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool **/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview = { "SectionIndexPreview", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, SectionIndexPreview), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData[] = {
		{ "Comment", "/** Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool **/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview = { "MaterialIndexPreview", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, MaterialIndexPreview), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData[] = {
		{ "Comment", "/*\n\x09 * The import version of the static mesh when it was assign this is update when:\n\x09 * - The user assign a new staticmesh to the component\n\x09 * - The component is serialize (IsSaving)\n\x09 * - Default value is BeforeImportStaticMeshVersionWasAdded\n\x09 *\n\x09 * If when the component get load (PostLoad) the version of the attach staticmesh is newer\n\x09 * then this value, we will remap the material override because the order of the materials list\n\x09 * in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "* The import version of the static mesh when it was assign this is update when:\n* - The user assign a new staticmesh to the component\n* - The component is serialize (IsSaving)\n* - Default value is BeforeImportStaticMeshVersionWasAdded\n*\n* If when the component get load (PostLoad) the version of the attach staticmesh is newer\n* then this value, we will remap the material override because the order of the materials list\n* in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion = { "StaticMeshImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideWireframeColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor = { "bOverrideWireframeColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideMinLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD = { "bOverrideMinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData[] = {
		{ "Comment", "/** If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideNavigationExport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport = { "bOverrideNavigationExport", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData[] = {
		{ "Comment", "/** Allows overriding navigation export behavior per component: full collisions or dynamic obstacle */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows overriding navigation export behavior per component: full collisions or dynamic obstacle" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bForceNavigationObstacle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle = { "bForceNavigationObstacle", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bDisallowMeshPaintPerInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance = { "bDisallowMeshPaintPerInstance", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "Comment", "/**\n\x09 *\x09Ignore this instance of this static mesh when calculating streaming information.\n\x09 *\x09This can be useful when doing things like applying character textures to static geometry,\n\x09 *\x09to avoid them using distance-based streaming.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Ignore this instance of this static mesh when calculating streaming information.\nThis can be useful when doing things like applying character textures to static geometry,\nto avoid them using distance-based streaming." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bIgnoreInstanceForTextureStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming = { "bIgnoreInstanceForTextureStreaming", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the lightmap resolution defined in the static mesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideLightMapRes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\n\x09 * This works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\n\x09 * The StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\nThis works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\nThe StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bCastDistanceFieldIndirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow = { "bCastDistanceFieldIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bOverrideDistanceFieldSelfShadowBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias = { "bOverrideDistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData[] = {
		{ "Comment", "/** Whether to use subdivisions or just the triangle's vertices.\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use subdivisions or just the triangle's vertices." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bUseSubDivisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions = { "bUseSubDivisions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Use the collision profile specified in the StaticMesh asset.*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Use the collision profile specified in the StaticMesh asset." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bUseDefaultCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData[] = {
		{ "Comment", "/** The component has some custom painting on LODs or not. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The component has some custom painting on LODs or not." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bCustomOverrideVertexColorPerLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD = { "bCustomOverrideVertexColorPerLOD", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bDisplayVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors = { "bDisplayVertexColors", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bDisplayPhysicalMaterialMasks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks = { "bDisplayPhysicalMaterialMasks", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Controls whether the static mesh component's backface culling should be reversed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls whether the static mesh component's backface culling should be reversed" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
	{
		((UStaticMeshComponent*)Obj)->bReverseCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh. */" },
		{ "editcondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, OverriddenLightMapRes), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the dynamic indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow Min Visibility" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls how dark the dynamic indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility = { "DistanceFieldIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired resolution of streaming textures that uses UV 0.  1.0 is the default, whereas a higher value increases the streamed-in resolution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, IrrelevantLights_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner = { "LODData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData[] = {
		{ "Comment", "/** Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData = { "LODData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, LODData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData[] = {
		{ "Comment", "/** The list of texture, bounds and scales. As computed in the texture streaming build process. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The list of texture, bounds and scales. As computed in the texture streaming build process." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, StreamingTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData[] = {
		{ "Comment", "/** Derived data key of the static mesh, used to determine if an update from the source static mesh is required. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Derived data key of the static mesh, used to determine if an update from the source static mesh is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey = { "StaticMeshDerivedDataKey", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshDerivedDataKey), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
		{ "Comment", "/** Material Bounds used for texture streaming. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Material Bounds used for texture streaming." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, MaterialStreamingRelativeBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams = {
		&UStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshComponent, 3659799514);
	template<> ENGINE_API UClass* StaticClass<UStaticMeshComponent>()
	{
		return UStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshComponent(Z_Construct_UClass_UStaticMeshComponent, &UStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMeshComponent"), false, nullptr, nullptr, nullptr);

	void UStaticMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StaticMesh(TEXT("StaticMesh"));

		const bool bIsValid = true
			&& Name_StaticMesh == ClassReps[(int32)ENetFields_Private::StaticMesh].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStaticMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

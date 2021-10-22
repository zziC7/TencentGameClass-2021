// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMeshRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
// End Cross Module References
	static UEnum* ENiagaraMeshLockedAxisSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshLockedAxisSpace"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>()
	{
		return ENiagaraMeshLockedAxisSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMeshLockedAxisSpace(ENiagaraMeshLockedAxisSpace_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMeshLockedAxisSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Hash() { return 2241561134U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshLockedAxisSpace"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshLockedAxisSpace::Simulation", (int64)ENiagaraMeshLockedAxisSpace::Simulation },
				{ "ENiagaraMeshLockedAxisSpace::World", (int64)ENiagaraMeshLockedAxisSpace::World },
				{ "ENiagaraMeshLockedAxisSpace::Local", (int64)ENiagaraMeshLockedAxisSpace::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.Comment", "/** The locked axis is in the emitter's local space */" },
				{ "Local.Name", "ENiagaraMeshLockedAxisSpace::Local" },
				{ "Local.ToolTip", "The locked axis is in the emitter's local space" },
				{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
				{ "Simulation.Comment", "/** The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
				{ "Simulation.Name", "ENiagaraMeshLockedAxisSpace::Simulation" },
				{ "Simulation.ToolTip", "The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
				{ "World.Comment", "/** The locked axis is in world space */" },
				{ "World.Name", "ENiagaraMeshLockedAxisSpace::World" },
				{ "World.ToolTip", "The locked axis is in world space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMeshLockedAxisSpace",
				"ENiagaraMeshLockedAxisSpace",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraMeshPivotOffsetSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshPivotOffsetSpace"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshPivotOffsetSpace>()
	{
		return ENiagaraMeshPivotOffsetSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMeshPivotOffsetSpace(ENiagaraMeshPivotOffsetSpace_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMeshPivotOffsetSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Hash() { return 323158778U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshPivotOffsetSpace"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshPivotOffsetSpace::Mesh", (int64)ENiagaraMeshPivotOffsetSpace::Mesh },
				{ "ENiagaraMeshPivotOffsetSpace::Simulation", (int64)ENiagaraMeshPivotOffsetSpace::Simulation },
				{ "ENiagaraMeshPivotOffsetSpace::World", (int64)ENiagaraMeshPivotOffsetSpace::World },
				{ "ENiagaraMeshPivotOffsetSpace::Local", (int64)ENiagaraMeshPivotOffsetSpace::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.Comment", "/** The pivot offset is in the emitter's local space */" },
				{ "Local.Name", "ENiagaraMeshPivotOffsetSpace::Local" },
				{ "Local.ToolTip", "The pivot offset is in the emitter's local space" },
				{ "Mesh.Comment", "/** The pivot offset is in the mesh's local space (default) */" },
				{ "Mesh.Name", "ENiagaraMeshPivotOffsetSpace::Mesh" },
				{ "Mesh.ToolTip", "The pivot offset is in the mesh's local space (default)" },
				{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
				{ "Simulation.Comment", "/** The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
				{ "Simulation.Name", "ENiagaraMeshPivotOffsetSpace::Simulation" },
				{ "Simulation.ToolTip", "The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
				{ "World.Comment", "/** The pivot offset is in world space */" },
				{ "World.Name", "ENiagaraMeshPivotOffsetSpace::World" },
				{ "World.ToolTip", "The pivot offset is in world space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMeshPivotOffsetSpace",
				"ENiagaraMeshPivotOffsetSpace",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENiagaraMeshFacingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshFacingMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshFacingMode>()
	{
		return ENiagaraMeshFacingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMeshFacingMode(ENiagaraMeshFacingMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMeshFacingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Hash() { return 3958586836U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshFacingMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshFacingMode::Default", (int64)ENiagaraMeshFacingMode::Default },
				{ "ENiagaraMeshFacingMode::Velocity", (int64)ENiagaraMeshFacingMode::Velocity },
				{ "ENiagaraMeshFacingMode::CameraPosition", (int64)ENiagaraMeshFacingMode::CameraPosition },
				{ "ENiagaraMeshFacingMode::CameraPlane", (int64)ENiagaraMeshFacingMode::CameraPlane },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraPlane.Comment", "/** Has the mesh local-space X-axis point towards the closest point on the camera view plane.*/" },
				{ "CameraPlane.Name", "ENiagaraMeshFacingMode::CameraPlane" },
				{ "CameraPlane.ToolTip", "Has the mesh local-space X-axis point towards the closest point on the camera view plane." },
				{ "CameraPosition.Comment", "/** Has the mesh local-space X-axis point towards the camera's position.*/" },
				{ "CameraPosition.Name", "ENiagaraMeshFacingMode::CameraPosition" },
				{ "CameraPosition.ToolTip", "Has the mesh local-space X-axis point towards the camera's position." },
				{ "Comment", "/** This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush*/" },
				{ "Default.Comment", "/** Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists).*/" },
				{ "Default.Name", "ENiagaraMeshFacingMode::Default" },
				{ "Default.ToolTip", "Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists)." },
				{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
				{ "ToolTip", "This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush" },
				{ "Velocity.Comment", "/** The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector.*/" },
				{ "Velocity.Name", "ENiagaraMeshFacingMode::Velocity" },
				{ "Velocity.ToolTip", "The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMeshFacingMode",
				"ENiagaraMeshFacingMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNiagaraMeshRendererMeshProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshRendererMeshProperties"), sizeof(FNiagaraMeshRendererMeshProperties), Get_Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshRendererMeshProperties>()
{
	return FNiagaraMeshRendererMeshProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMeshRendererMeshProperties(FNiagaraMeshRendererMeshProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMeshRendererMeshProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshRendererMeshProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshRendererMeshProperties()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraMeshRendererMeshProperties>(FName(TEXT("NiagaraMeshRendererMeshProperties")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshRendererMeshProperties;
	struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshRendererMeshProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The mesh to use when rendering this slot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The mesh to use when rendering this slot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Scale of the mesh */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Scale of the mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Offset of the mesh pivot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Offset of the mesh pivot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** What space is the pivot offset in? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "What space is the pivot offset in?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshRendererMeshProperties",
		sizeof(FNiagaraMeshRendererMeshProperties),
		alignof(FNiagaraMeshRendererMeshProperties),
		Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMeshRendererMeshProperties"), sizeof(FNiagaraMeshRendererMeshProperties), Get_Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Hash() { return 1434436925U; }
class UScriptStruct* FNiagaraMeshMaterialOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMaterialOverride"), sizeof(FNiagaraMeshMaterialOverride), Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMaterialOverride>()
{
	return FNiagaraMeshMaterialOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMeshMaterialOverride(FNiagaraMeshMaterialOverride::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMeshMaterialOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraMeshMaterialOverride>(FName(TEXT("NiagaraMeshMaterialOverride")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMeshMaterialOverride;
	struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplicitMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMaterialOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat = { "ExplicitMat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, ExplicitMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, UserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMeshMaterialOverride",
		sizeof(FNiagaraMeshMaterialOverride),
		alignof(FNiagaraMeshMaterialOverride),
		Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMeshMaterialOverride"), sizeof(FNiagaraMeshMaterialOverride), Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Hash() { return 2996777870U; }
	void UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterials_MetaData[];
#endif
		static void NewProp_bOverrideMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[];
#endif
		static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGpuLowLatencyTranslucency_MetaData[];
#endif
		static void NewProp_bGpuLowLatencyTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGpuLowLatencyTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[];
#endif
		static void NewProp_bSubImageBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFrustumCulling_MetaData[];
#endif
		static void NewProp_bEnableFrustumCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFrustumCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraDistanceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMeshFlipbook_MetaData[];
#endif
		static void NewProp_bEnableMeshFlipbook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMeshFlipbook;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockedAxisEnable_MetaData[];
#endif
		static void NewProp_bLockedAxisEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockedAxisEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxisSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxisSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LockedAxisSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOrientationBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshOrientationBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshIndexBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshIndexBinding;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevPositionBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevPositionBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevScaleBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevScaleBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevMeshOrientationBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevMeshOrientationBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevCameraOffsetBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevCameraOffsetBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevVelocityBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevVelocityBinding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstFlipbookFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstFlipbookFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FlipbookSuffixFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixNumDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FlipbookSuffixNumDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFlipbookFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumFlipbookFrames;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Renderer" },
		{ "IncludePath", "NiagaraMeshRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * The static mesh(es) to be instanced when rendering mesh particles.\n\x09 *\n\x09 * NOTES:\n\x09 * - If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n\x09 * - If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook.\n\x09 */" },
		{ "EditCondition", "!bEnableMeshFlipbook" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh(es) to be instanced when rendering mesh particles.\n\nNOTES:\n- If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n- If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to use the OverrideMaterials array instead of the mesh's existing materials.*/" },
		{ "DisplayName", "Enable Material Overrides" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to use the OverrideMaterials array instead of the mesh's existing materials." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bOverrideMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09If true and a GPU emitter, we will use the current frames data to render with regardless of where the batcher may execute the dispatches.\n\x09If you have other emitters that are not translucent and using data that forces it to be a frame latent (i.e. view uniform buffer) you may need to disable\n\x09on renderers with translucent materials if you need the frame they are reading to match exactly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true and a GPU emitter, we will use the current frames data to render with regardless of where the batcher may execute the dispatches.\nIf you have other emitters that are not translucent and using data that forces it to be a frame latent (i.e. view uniform buffer) you may need to disable\non renderers with translucent materials if you need the frame they are reading to match exactly." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bGpuLowLatencyTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency = { "bGpuLowLatencyTranslucency", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bSubImageBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableFrustumCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling = { "bEnableFrustumCulling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableCameraDistanceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling = { "bEnableCameraDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData[] = {
		{ "Category", "Mesh Flipbook" },
		{ "Comment", "/** When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bEnableMeshFlipbook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook = { "bEnableMeshFlipbook", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n\x09requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n      requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Determines how the mesh orients itself relative to the camera. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how the mesh orients itself relative to the camera." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit(void* Obj)
	{
		((UNiagaraMeshRendererProperties*)Obj)->bLockedAxisEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable = { "bLockedAxisEnable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Arbitrary axis by which to lock facing rotations */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Arbitrary axis by which to lock facing rotations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Specifies what space the locked axis is in */" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Specifies what space the locked axis is in" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace = { "LockedAxisSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxisSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MinCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaxCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for orienting meshes when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for orienting meshes when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding = { "MeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for scale when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for scale when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating instanced meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use custom sorting of particles in this emitter. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use custom sorting of particles in this emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when rendering meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when rendering meshes?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to pick the element in the mesh array on the mesh renderer? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to pick the element in the mesh array on the mesh renderer?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding = { "MeshIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParameterBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData[] = {
		{ "Comment", "// The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding = { "PrevPositionBinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevPositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding = { "PrevScaleBinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding = { "PrevMeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding = { "PrevCameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding = { "PrevVelocityBinding", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevVelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData[] = {
		{ "Category", "Mesh Flipbook" },
		{ "Comment", "/**\n\x09 * The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\n\x09 * NOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\n\x09 * will not be found or used.\n\x09 */" },
		{ "EditCondition", "bEnableMeshFlipbook" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\nNOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\nwill not be found or used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame = { "FirstFlipbookFrame", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FirstFlipbookFrame), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData[] = {
		{ "Category", "Mesh Flipbook" },
		{ "Comment", "/**\n\x09 * Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\n\x09 * where the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\n\x09 * the starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\n\x09 * starting with frame number 1.\n\x09 */" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\nwhere the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\nthe starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\nstarting with frame number 1." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat = { "FlipbookSuffixFormat", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData[] = {
		{ "Category", "Mesh Flipbook" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\n\x09* and can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)\n\x09*/" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\nand can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits = { "FlipbookSuffixNumDigits", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixNumDigits), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData[] = {
		{ "Category", "Mesh Flipbook" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of frames (static meshes) to be included in the flipbook. */" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of frames (static meshes) to be included in the flipbook." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames = { "NumFlipbookFrames", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NumFlipbookFrames), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData[] = {
		{ "Comment", "// These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh = { "ParticleMesh", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ParticleMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffsetSpace_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bGpuLowLatencyTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMeshRendererProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams = {
		&UNiagaraMeshRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraMeshRendererProperties, 1756640797);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraMeshRendererProperties>()
	{
		return UNiagaraMeshRendererProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraMeshRendererProperties(Z_Construct_UClass_UNiagaraMeshRendererProperties, &UNiagaraMeshRendererProperties::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraMeshRendererProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMeshRendererProperties);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

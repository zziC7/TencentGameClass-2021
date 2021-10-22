// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshDescription/Public/UVMapSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVMapSettings() {}
// Cross Module References
	STATICMESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings();
	UPackage* Z_Construct_UPackage__Script_StaticMeshDescription();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FUVMapSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATICMESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FUVMapSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUVMapSettings, Z_Construct_UPackage__Script_StaticMeshDescription(), TEXT("UVMapSettings"), sizeof(FUVMapSettings), Get_Z_Construct_UScriptStruct_FUVMapSettings_Hash());
	}
	return Singleton;
}
template<> STATICMESHDESCRIPTION_API UScriptStruct* StaticStruct<FUVMapSettings>()
{
	return FUVMapSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUVMapSettings(FUVMapSettings::StaticStruct, TEXT("/Script/StaticMeshDescription"), TEXT("UVMapSettings"), false, nullptr, nullptr);
static struct FScriptStruct_StaticMeshDescription_StaticRegisterNativesFUVMapSettings
{
	FScriptStruct_StaticMeshDescription_StaticRegisterNativesFUVMapSettings()
	{
		UScriptStruct::DeferCppStructOps<FUVMapSettings>(FName(TEXT("UVMapSettings")));
	}
} ScriptStruct_StaticMeshDescription_StaticRegisterNativesFUVMapSettings;
	struct Z_Construct_UScriptStruct_FUVMapSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UV map generation settings that are exposed to the user for scripting and through the editor */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "UV map generation settings that are exposed to the user for scripting and through the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUVMapSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Length, width, height of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Length, width, height of the UV mapping gizmo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUVMapSettings, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Tiling of the UV mapping */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Tiling of the UV mapping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile = { "UVTile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUVMapSettings, UVTile), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Position of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Position of the UV mapping gizmo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUVMapSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Rotation of the UV mapping gizmo (angles in degrees) */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Rotation of the UV mapping gizmo (angles in degrees)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUVMapSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Scale of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Scale of the UV mapping gizmo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUVMapSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshDescription,
		nullptr,
		&NewStructOps,
		"UVMapSettings",
		sizeof(FUVMapSettings),
		alignof(FUVMapSettings),
		Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUVMapSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StaticMeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UVMapSettings"), sizeof(FUVMapSettings), Get_Z_Construct_UScriptStruct_FUVMapSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUVMapSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUVMapSettings_Hash() { return 3783376380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

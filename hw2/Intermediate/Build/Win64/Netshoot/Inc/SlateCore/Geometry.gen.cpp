// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Layout/Geometry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometry() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
class UScriptStruct* FGeometry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FGeometry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometry, Z_Construct_UPackage__Script_SlateCore(), TEXT("Geometry"), sizeof(FGeometry), Get_Z_Construct_UScriptStruct_FGeometry_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FGeometry>()
{
	return FGeometry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeometry(FGeometry::StaticStruct, TEXT("/Script/SlateCore"), TEXT("Geometry"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFGeometry
{
	FScriptStruct_SlateCore_StaticRegisterNativesFGeometry()
	{
		UScriptStruct::DeferCppStructOps<FGeometry>(FName(TEXT("Geometry")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFGeometry;
	struct Z_Construct_UScriptStruct_FGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the position, size, and absolute position of a Widget in Slate.\n * The absolute location of a geometry is usually screen space or\n * window space depending on where the geometry originated.\n * Geometries are usually paired with a SWidget pointer in order\n * to provide information about a specific widget (see FArrangedWidget).\n * A Geometry's parent is generally thought to be the Geometry of the\n * the corresponding parent widget.\n */" },
		{ "ModuleRelativePath", "Public/Layout/Geometry.h" },
		{ "ToolTip", "Represents the position, size, and absolute position of a Widget in Slate.\nThe absolute location of a geometry is usually screen space or\nwindow space depending on where the geometry originated.\nGeometries are usually paired with a SWidget pointer in order\nto provide information about a specific widget (see FArrangedWidget).\nA Geometry's parent is generally thought to be the Geometry of the\nthe corresponding parent widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometry>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"Geometry",
		sizeof(FGeometry),
		alignof(FGeometry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeometry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Geometry"), sizeof(FGeometry), Get_Z_Construct_UScriptStruct_FGeometry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeometry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeometry_Hash() { return 4137476111U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

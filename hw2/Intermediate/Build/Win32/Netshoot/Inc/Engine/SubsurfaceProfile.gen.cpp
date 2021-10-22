// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SubsurfaceProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsurfaceProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubsurfaceProfileStruct();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSubsurfaceProfileStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct, Z_Construct_UPackage__Script_Engine(), TEXT("SubsurfaceProfileStruct"), sizeof(FSubsurfaceProfileStruct), Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSubsurfaceProfileStruct>()
{
	return FSubsurfaceProfileStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubsurfaceProfileStruct(FSubsurfaceProfileStruct::StaticStruct, TEXT("/Script/Engine"), TEXT("SubsurfaceProfileStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct
{
	FScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct()
	{
		UScriptStruct::DeferCppStructOps<FSubsurfaceProfileStruct>(FName(TEXT("SubsurfaceProfileStruct")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSubsurfaceProfileStruct;
	struct Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceAlbedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceAlbedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeanFreePathColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeanFreePathColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeanFreePathDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeanFreePathDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldUnitScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldUnitScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBurley_MetaData[];
#endif
		static void NewProp_bEnableBurley_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBurley;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FalloffColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryColorBleed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundaryColorBleed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtinctionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtinctionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScatteringDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScatteringDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOR_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IOR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roughness0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roughness1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobeMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LobeMix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmissionTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransmissionTintColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct with all the settings we want in USubsurfaceProfile, separate to make it easer to pass this data around in the engine.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "struct with all the settings we want in USubsurfaceProfile, separate to make it easer to pass this data around in the engine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubsurfaceProfileStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SurfaceAlbedo_MetaData[] = {
		{ "Category", "Burley Normalized" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09* It should match The base color of the corresponding material as much as possible.\n\x09*/" },
		{ "editcondition", "bEnableBurley" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "It should match The base color of the corresponding material as much as possible." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SurfaceAlbedo = { "SurfaceAlbedo", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, SurfaceAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SurfaceAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SurfaceAlbedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathColor_MetaData[] = {
		{ "Category", "Burley Normalized" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09* Controls how far light goes into the subsurface in the Red, Green and Blue channel. It is scaled by Mean Free path distance.\n\x09*/" },
		{ "editcondition", "bEnableBurley" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Controls how far light goes into the subsurface in the Red, Green and Blue channel. It is scaled by Mean Free path distance." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathColor = { "MeanFreePathColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, MeanFreePathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathDistance_MetaData[] = {
		{ "Category", "Burley Normalized" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09* Subsurface mean free path distance in world/unreal units (cm)\n\x09*/" },
		{ "editcondition", "bEnableBurley" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Subsurface mean free path distance in world/unreal units (cm)" },
		{ "UIMax", "50.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathDistance = { "MeanFreePathDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, MeanFreePathDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_WorldUnitScale_MetaData[] = {
		{ "Category", "Burley Normalized" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09* Control the scale of world/unreal units (cm)\n\x09*/" },
		{ "editcondition", "bEnableBurley" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Control the scale of world/unreal units (cm)" },
		{ "UIMax", "50.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_WorldUnitScale = { "WorldUnitScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, WorldUnitScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_WorldUnitScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_WorldUnitScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_MetaData[] = {
		{ "Category", "Burley Normalized" },
		{ "Comment", "/**\n\x09* Effective only when Burley subsurface scattering is enabled in cmd.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Effective only when Burley subsurface scattering is enabled in cmd." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_SetBit(void* Obj)
	{
		((FSubsurfaceProfileStruct*)Obj)->bEnableBurley = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley = { "bEnableBurley", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubsurfaceProfileStruct), &Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatterRadius_MetaData[] = {
		{ "Category", "SubsurfaceProfileStruct" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** in world/unreal units (cm) */" },
		{ "editcondition", "!bEnableBurley" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "in world/unreal units (cm)" },
		{ "UIMax", "50.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatterRadius = { "ScatterRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, ScatterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SubsurfaceColor_MetaData[] = {
		{ "Category", "SubsurfaceProfileStruct" },
		{ "Comment", "/**\n\x09* Specifies the how much of the diffuse light gets into the material,\n\x09* can be seen as a per-channel mix factor between the original image,\n\x09* and the SSS-filtered image (called \"strength\" in SeparableSSS, default there: 0.48, 0.41, 0.28)\n\x09*/" },
		{ "editcondition", "!bEnableBurley" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Specifies the how much of the diffuse light gets into the material,\ncan be seen as a per-channel mix factor between the original image,\nand the SSS-filtered image (called \"strength\" in SeparableSSS, default there: 0.48, 0.41, 0.28)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SubsurfaceColor = { "SubsurfaceColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, SubsurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SubsurfaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SubsurfaceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_FalloffColor_MetaData[] = {
		{ "Category", "SubsurfaceProfileStruct" },
		{ "Comment", "/**\n\x09* defines the per-channel falloff of the gradients\n\x09* produced by the subsurface scattering events, can be used to fine tune the color of the gradients\n\x09* (called \"falloff\" in SeparableSSS, default there: 1, 0.37, 0.3)\n\x09*/" },
		{ "editcondition", "!bEnableBurley" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "defines the per-channel falloff of the gradients\nproduced by the subsurface scattering events, can be used to fine tune the color of the gradients\n(called \"falloff\" in SeparableSSS, default there: 1, 0.37, 0.3)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_FalloffColor = { "FalloffColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, FalloffColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_FalloffColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_FalloffColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_BoundaryColorBleed_MetaData[] = {
		{ "Category", "SubsurfaceProfileStruct" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_BoundaryColorBleed = { "BoundaryColorBleed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, BoundaryColorBleed), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_BoundaryColorBleed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_BoundaryColorBleed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ExtinctionScale_MetaData[] = {
		{ "Category", "Transmission" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ExtinctionScale = { "ExtinctionScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, ExtinctionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ExtinctionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ExtinctionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_NormalScale_MetaData[] = {
		{ "Category", "Transmission" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "0.99" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_NormalScale = { "NormalScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, NormalScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_NormalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_NormalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatteringDistribution_MetaData[] = {
		{ "Category", "Transmission" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "0.99" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatteringDistribution = { "ScatteringDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, ScatteringDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatteringDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatteringDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_IOR_MetaData[] = {
		{ "Category", "Transmission" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "3.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_IOR = { "IOR", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, IOR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_IOR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_IOR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness0_MetaData[] = {
		{ "Category", "Dual Specular" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "2.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness0 = { "Roughness0", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, Roughness0), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness1_MetaData[] = {
		{ "Category", "Dual Specular" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "2.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness1 = { "Roughness1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, Roughness1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_LobeMix_MetaData[] = {
		{ "Category", "Dual Specular" },
		{ "ClampMax", "0.9" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "UIMax", "0.9" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_LobeMix = { "LobeMix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, LobeMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_LobeMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_LobeMix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_TransmissionTintColor_MetaData[] = {
		{ "Category", "Transmission" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09* Transmission tint control. It is multiplied on the transmission results. Works only when Burley is enabled.\n\x09*/" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Transmission tint control. It is multiplied on the transmission results. Works only when Burley is enabled." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_TransmissionTintColor = { "TransmissionTintColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubsurfaceProfileStruct, TransmissionTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_TransmissionTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_TransmissionTintColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SurfaceAlbedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_MeanFreePathDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_WorldUnitScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_bEnableBurley,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_SubsurfaceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_FalloffColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_BoundaryColorBleed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ExtinctionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_NormalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_ScatteringDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_IOR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_Roughness1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_LobeMix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::NewProp_TransmissionTintColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SubsurfaceProfileStruct",
		sizeof(FSubsurfaceProfileStruct),
		alignof(FSubsurfaceProfileStruct),
		Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubsurfaceProfileStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubsurfaceProfileStruct"), sizeof(FSubsurfaceProfileStruct), Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Hash() { return 11730718U; }
	void USubsurfaceProfile::StaticRegisterNativesUSubsurfaceProfile()
	{
	}
	UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister()
	{
		return USubsurfaceProfile::StaticClass();
	}
	struct Z_Construct_UClass_USubsurfaceProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsurfaceProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsurfaceProfile_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "SubsurfaceProfile" },
		{ "Comment", "/**\n * Subsurface Scattering profile asset, can be specified at the material. Only for \"Subsurface Profile\" materials, is use during Screenspace Subsurface Scattering\n * Don't change at runtime. All properties in here are per material - texture like variations need to come from properties that are in the GBuffer.\n */" },
		{ "IncludePath", "Engine/SubsurfaceProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ToolTip", "Subsurface Scattering profile asset, can be specified at the material. Only for \"Subsurface Profile\" materials, is use during Screenspace Subsurface Scattering\nDon't change at runtime. All properties in here are per material - texture like variations need to come from properties that are in the GBuffer." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsurfaceProfile_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "USubsurfaceProfile" },
		{ "ModuleRelativePath", "Classes/Engine/SubsurfaceProfile.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubsurfaceProfile_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubsurfaceProfile, Settings), Z_Construct_UScriptStruct_FSubsurfaceProfileStruct, METADATA_PARAMS(Z_Construct_UClass_USubsurfaceProfile_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubsurfaceProfile_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubsurfaceProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubsurfaceProfile_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsurfaceProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsurfaceProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubsurfaceProfile_Statics::ClassParams = {
		&USubsurfaceProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubsurfaceProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubsurfaceProfile_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubsurfaceProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubsurfaceProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsurfaceProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubsurfaceProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubsurfaceProfile, 11735420);
	template<> ENGINE_API UClass* StaticClass<USubsurfaceProfile>()
	{
		return USubsurfaceProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubsurfaceProfile(Z_Construct_UClass_USubsurfaceProfile, &USubsurfaceProfile::StaticClass, TEXT("/Script/Engine"), TEXT("USubsurfaceProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsurfaceProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

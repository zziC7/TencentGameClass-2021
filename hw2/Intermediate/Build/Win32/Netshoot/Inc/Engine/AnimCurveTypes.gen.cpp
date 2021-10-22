// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimCurveTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam();
// End Cross Module References
	static UEnum* ERawCurveTrackTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERawCurveTrackTypes, Z_Construct_UPackage__Script_Engine(), TEXT("ERawCurveTrackTypes"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERawCurveTrackTypes>()
	{
		return ERawCurveTrackTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERawCurveTrackTypes(ERawCurveTrackTypes_StaticEnum, TEXT("/Script/Engine"), TEXT("ERawCurveTrackTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Hash() { return 1104603970U; }
	UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERawCurveTrackTypes"), 0, Get_Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERawCurveTrackTypes::RCT_Float", (int64)ERawCurveTrackTypes::RCT_Float },
				{ "ERawCurveTrackTypes::RCT_Vector", (int64)ERawCurveTrackTypes::RCT_Vector },
				{ "ERawCurveTrackTypes::RCT_Transform", (int64)ERawCurveTrackTypes::RCT_Transform },
				{ "ERawCurveTrackTypes::RCT_MAX", (int64)ERawCurveTrackTypes::RCT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
				{ "RCT_Float.DisplayName", "Float Curve" },
				{ "RCT_Float.Name", "ERawCurveTrackTypes::RCT_Float" },
				{ "RCT_MAX.Name", "ERawCurveTrackTypes::RCT_MAX" },
				{ "RCT_Transform.DisplayName", "Transformation Curve" },
				{ "RCT_Transform.Name", "ERawCurveTrackTypes::RCT_Transform" },
				{ "RCT_Vector.DisplayName", "Vector Curve" },
				{ "RCT_Vector.Name", "ERawCurveTrackTypes::RCT_Vector" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERawCurveTrackTypes",
				"ERawCurveTrackTypes",
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
	static UEnum* EAnimAssetCurveFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAssetCurveFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimAssetCurveFlags>()
	{
		return EAnimAssetCurveFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimAssetCurveFlags(EAnimAssetCurveFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimAssetCurveFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Hash() { return 3946011121U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimAssetCurveFlags"), 0, Get_Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AACF_NONE", (int64)AACF_NONE },
				{ "AACF_DriveMorphTarget_DEPRECATED", (int64)AACF_DriveMorphTarget_DEPRECATED },
				{ "AACF_DriveAttribute_DEPRECATED", (int64)AACF_DriveAttribute_DEPRECATED },
				{ "AACF_Editable", (int64)AACF_Editable },
				{ "AACF_DriveMaterial_DEPRECATED", (int64)AACF_DriveMaterial_DEPRECATED },
				{ "AACF_Metadata", (int64)AACF_Metadata },
				{ "AACF_DriveTrack", (int64)AACF_DriveTrack },
				{ "AACF_Disabled", (int64)AACF_Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AACF_Disabled.Comment", "// @Todo: remove?\n// disabled, right now it's used by track\n" },
				{ "AACF_Disabled.Hidden", "" },
				{ "AACF_Disabled.Name", "AACF_Disabled" },
				{ "AACF_Disabled.ToolTip", "@Todo: remove?\ndisabled, right now it's used by track" },
				{ "AACF_DriveAttribute_DEPRECATED.Comment", "// This has moved to FAnimCurveType:bMorphTarget. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Used as triggering event\n" },
				{ "AACF_DriveAttribute_DEPRECATED.Hidden", "" },
				{ "AACF_DriveAttribute_DEPRECATED.Name", "AACF_DriveAttribute_DEPRECATED" },
				{ "AACF_DriveAttribute_DEPRECATED.ToolTip", "This has moved to FAnimCurveType:bMorphTarget. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nUsed as triggering event" },
				{ "AACF_DriveMaterial_DEPRECATED.Comment", "// per asset\n// Used as a material curve\n" },
				{ "AACF_DriveMaterial_DEPRECATED.Hidden", "" },
				{ "AACF_DriveMaterial_DEPRECATED.Name", "AACF_DriveMaterial_DEPRECATED" },
				{ "AACF_DriveMaterial_DEPRECATED.ToolTip", "per asset\nUsed as a material curve" },
				{ "AACF_DriveMorphTarget_DEPRECATED.Comment", "// Used as morph target curve\n" },
				{ "AACF_DriveMorphTarget_DEPRECATED.Hidden", "" },
				{ "AACF_DriveMorphTarget_DEPRECATED.Name", "AACF_DriveMorphTarget_DEPRECATED" },
				{ "AACF_DriveMorphTarget_DEPRECATED.ToolTip", "Used as morph target curve" },
				{ "AACF_DriveTrack.Comment", "// per asset\n// motifies bone track\n" },
				{ "AACF_DriveTrack.Hidden", "" },
				{ "AACF_DriveTrack.Name", "AACF_DriveTrack" },
				{ "AACF_DriveTrack.ToolTip", "per asset\nmotifies bone track" },
				{ "AACF_Editable.Comment", "// Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Is editable in Sequence Editor\n" },
				{ "AACF_Editable.DisplayName", "Editable" },
				{ "AACF_Editable.Name", "AACF_Editable" },
				{ "AACF_Editable.ToolTip", "Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs editable in Sequence Editor" },
				{ "AACF_Metadata.Comment", "// This has moved to FAnimCurveType:bMaterial. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Is a metadata 'curve'\n" },
				{ "AACF_Metadata.DisplayName", "Metadata" },
				{ "AACF_Metadata.Name", "AACF_Metadata" },
				{ "AACF_Metadata.ToolTip", "This has moved to FAnimCurveType:bMaterial. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs a metadata 'curve'" },
				{ "AACF_NONE.Hidden", "" },
				{ "AACF_NONE.Name", "AACF_NONE" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** This is curve flags that are saved in asset and **/" },
				{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
				{ "ToolTip", "This is curve flags that are saved in asset and *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAnimAssetCurveFlags",
				"EAnimAssetCurveFlags",
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
class UScriptStruct* FRawCurveTracks::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawCurveTracks, Z_Construct_UPackage__Script_Engine(), TEXT("RawCurveTracks"), sizeof(FRawCurveTracks), Get_Z_Construct_UScriptStruct_FRawCurveTracks_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawCurveTracks>()
{
	return FRawCurveTracks::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawCurveTracks(FRawCurveTracks::StaticStruct, TEXT("/Script/Engine"), TEXT("RawCurveTracks"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks
{
	FScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks()
	{
		UScriptStruct::DeferCppStructOps<FRawCurveTracks>(FName(TEXT("RawCurveTracks")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks;
	struct Z_Construct_UScriptStruct_FRawCurveTracks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatCurves;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformCurves;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Raw Curve data for serialization\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Raw Curve data for serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawCurveTracks>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner = { "FloatCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawCurveTracks, FloatCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner = { "VectorCurves", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData[] = {
		{ "Comment", "/**\n\x09 * @note : Currently VectorCurves are not evaluated or used for anything else but transient data for modifying bone track\n\x09 *\x09\x09\x09Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : Currently VectorCurves are not evaluated or used for anything else but transient data for modifying bone track\n                     Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves = { "VectorCurves", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawCurveTracks, VectorCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner = { "TransformCurves", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData[] = {
		{ "Comment", "/**\n\x09 * @note : TransformCurves are used to edit additive animation in editor. \n\x09 **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : TransformCurves are used to edit additive animation in editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves = { "TransformCurves", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawCurveTracks, TransformCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RawCurveTracks",
		sizeof(FRawCurveTracks),
		alignof(FRawCurveTracks),
		Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawCurveTracks"), sizeof(FRawCurveTracks), Get_Z_Construct_UScriptStruct_FRawCurveTracks_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_Hash() { return 1001991857U; }

static_assert(std::is_polymorphic<FTransformCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FTransformCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

class UScriptStruct* FTransformCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformCurve, Z_Construct_UPackage__Script_Engine(), TEXT("TransformCurve"), sizeof(FTransformCurve), Get_Z_Construct_UScriptStruct_FTransformCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformCurve>()
{
	return FTransformCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformCurve(FTransformCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformCurve()
	{
		UScriptStruct::DeferCppStructOps<FTransformCurve>(FName(TEXT("TransformCurve")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformCurve;
	struct Z_Construct_UScriptStruct_FTransformCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData[] = {
		{ "Comment", "/** Curve data for each transform. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for each transform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve = { "TranslationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformCurve, TranslationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Comment", "/** Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation\n\x09 * If you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock. \n\x09 * @TODO: Eventually we'll need FRotationCurve that would contain rotation curve - that will interpolate as slerp or as quaternion \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation\nIf you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock.\n@TODO: Eventually we'll need FRotationCurve that would contain rotation curve - that will interpolate as slerp or as quaternion" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformCurve, RotationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformCurve, ScaleCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"TransformCurve",
		sizeof(FTransformCurve),
		alignof(FTransformCurve),
		Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformCurve"), sizeof(FTransformCurve), Get_Z_Construct_UScriptStruct_FTransformCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_Hash() { return 3952012426U; }

static_assert(std::is_polymorphic<FVectorCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FVectorCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

class UScriptStruct* FVectorCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorCurve, Z_Construct_UPackage__Script_Engine(), TEXT("VectorCurve"), sizeof(FVectorCurve), Get_Z_Construct_UScriptStruct_FVectorCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorCurve>()
{
	return FVectorCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorCurve(FVectorCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("VectorCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVectorCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFVectorCurve()
	{
		UScriptStruct::DeferCppStructOps<FVectorCurve>(FName(TEXT("VectorCurve")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFVectorCurve;
	struct Z_Construct_UScriptStruct_FVectorCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Curve data for float. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, FVectorCurve), STRUCT_OFFSET(FVectorCurve, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"VectorCurve",
		sizeof(FVectorCurve),
		alignof(FVectorCurve),
		Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorCurve"), sizeof(FVectorCurve), Get_Z_Construct_UScriptStruct_FVectorCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_Hash() { return 2278082297U; }

static_assert(std::is_polymorphic<FFloatCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FFloatCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

class UScriptStruct* FFloatCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCurve, Z_Construct_UPackage__Script_Engine(), TEXT("FloatCurve"), sizeof(FFloatCurve), Get_Z_Construct_UScriptStruct_FFloatCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFloatCurve>()
{
	return FFloatCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloatCurve(FFloatCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("FloatCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFloatCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFFloatCurve()
	{
		UScriptStruct::DeferCppStructOps<FFloatCurve>(FName(TEXT("FloatCurve")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFFloatCurve;
	struct Z_Construct_UScriptStruct_FFloatCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Curve data for float. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatCurve, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"FloatCurve",
		sizeof(FFloatCurve),
		alignof(FFloatCurve),
		Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatCurve"), sizeof(FFloatCurve), Get_Z_Construct_UScriptStruct_FFloatCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_Hash() { return 4006872625U; }
class UScriptStruct* FAnimCurveBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveBase"), sizeof(FAnimCurveBase), Get_Z_Construct_UScriptStruct_FAnimCurveBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveBase>()
{
	return FAnimCurveBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveBase(FAnimCurveBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase()
	{
		UScriptStruct::DeferCppStructOps<FAnimCurveBase>(FName(TEXT("AnimCurveBase")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase;
	struct Z_Construct_UScriptStruct_FAnimCurveBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastObservedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastObservedName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurveTypeFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Float curve data for one track\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Float curve data for one track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData[] = {
		{ "Comment", "// Last observed name of the curve. We store this so we can recover from situations that\n// mean the skeleton doesn't have a mapped name for our UID (such as a user saving the an\n// animation but not the skeleton).\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Last observed name of the curve. We store this so we can recover from situations that\nmean the skeleton doesn't have a mapped name for our UID (such as a user saving the an\nanimation but not the skeleton)." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName = { "LastObservedName", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimCurveBase, LastObservedName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimCurveBase, Name), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimCurveBase, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData[] = {
		{ "Comment", "/** Curve Type Flags */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve Type Flags" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags = { "CurveTypeFlags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimCurveBase, CurveTypeFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveBase",
		sizeof(FAnimCurveBase),
		alignof(FAnimCurveBase),
		Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveBase"), sizeof(FAnimCurveBase), Get_Z_Construct_UScriptStruct_FAnimCurveBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_Hash() { return 4050758927U; }
class UScriptStruct* FAnimCurveParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveParam, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveParam"), sizeof(FAnimCurveParam), Get_Z_Construct_UScriptStruct_FAnimCurveParam_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveParam>()
{
	return FAnimCurveParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveParam(FAnimCurveParam::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam()
	{
		UScriptStruct::DeferCppStructOps<FAnimCurveParam>(FName(TEXT("AnimCurveParam")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam;
	struct Z_Construct_UScriptStruct_FAnimCurveParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UI Curve Parameter type\n * This gets name, and cached UID and use it when needed\n * Also it contains curve types \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "UI Curve Parameter type\nThis gets name, and cached UID and use it when needed\nAlso it contains curve types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FAnimCurveParam" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimCurveParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveParam",
		sizeof(FAnimCurveParam),
		alignof(FAnimCurveParam),
		Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveParam"), sizeof(FAnimCurveParam), Get_Z_Construct_UScriptStruct_FAnimCurveParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_Hash() { return 1701841185U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshLODSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
// End Cross Module References
	static UEnum* EBoneFilterActionOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneFilterActionOption, Z_Construct_UPackage__Script_Engine(), TEXT("EBoneFilterActionOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneFilterActionOption>()
	{
		return EBoneFilterActionOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneFilterActionOption(EBoneFilterActionOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EBoneFilterActionOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBoneFilterActionOption_Hash() { return 386408001U; }
	UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneFilterActionOption"), 0, Get_Z_Construct_UEnum_Engine_EBoneFilterActionOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneFilterActionOption::Remove", (int64)EBoneFilterActionOption::Remove },
				{ "EBoneFilterActionOption::Keep", (int64)EBoneFilterActionOption::Keep },
				{ "EBoneFilterActionOption::Invalid", (int64)EBoneFilterActionOption::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Comment", "/** Invalid*/" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EBoneFilterActionOption::Invalid" },
				{ "Invalid.ToolTip", "Invalid" },
				{ "Keep.Comment", "/** Only keep the joints specified and parents. All the other joints will be removed. */" },
				{ "Keep.DisplayName", "Only keep the joints specified and parents" },
				{ "Keep.Name", "EBoneFilterActionOption::Keep" },
				{ "Keep.ToolTip", "Only keep the joints specified and parents. All the other joints will be removed." },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
				{ "Remove.Comment", "/** Remove list of joints specified and children. All the other joints will be kept. */" },
				{ "Remove.DisplayName", "Remove the joints specified and children" },
				{ "Remove.Name", "EBoneFilterActionOption::Remove" },
				{ "Remove.ToolTip", "Remove list of joints specified and children. All the other joints will be kept." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBoneFilterActionOption",
				"EBoneFilterActionOption",
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
class UScriptStruct* FSkeletalMeshLODGroupSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODGroupSettings"), sizeof(FSkeletalMeshLODGroupSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshLODGroupSettings>()
{
	return FSkeletalMeshLODGroupSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshLODGroupSettings(FSkeletalMeshLODGroupSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshLODGroupSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings()
	{
		UScriptStruct::DeferCppStructOps<FSkeletalMeshLODGroupSettings>(FName(TEXT("SkeletalMeshLODGroupSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODGroupSettings;
	struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFilterActionOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFilterActionOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneFilterActionOption;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonesToPrioritize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToPrioritize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToPrioritize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightOfPrioritization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightOfPrioritization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODGroupSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/** The screen sizes to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The screen sizes to use for the respective LOD level" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/**\x09Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, LODHysteresis), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption = { "BoneFilterActionOption", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneFilterActionOption), Z_Construct_UEnum_Engine_EBoneFilterActionOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner = { "BoneList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList = { "BoneList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be prioritized for the quality, this will be weighted toward keeping source data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be prioritized for the quality, this will be weighted toward keeping source data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BonesToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData[] = {
		{ "Category", "Reduction" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Weight of how much consider for BonesToPrioritize. 0 means nothing, and 1 means take all source */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Weight of how much consider for BonesToPrioritize. 0 means nothing, and 1 means take all source" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization = { "WeightOfPrioritization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, WeightOfPrioritization), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** The optimization settings to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The optimization settings to use for the respective LOD level" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshLODGroupSettings",
		sizeof(FSkeletalMeshLODGroupSettings),
		alignof(FSkeletalMeshLODGroupSettings),
		Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshLODGroupSettings"), sizeof(FSkeletalMeshLODGroupSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Hash() { return 248266170U; }
class UScriptStruct* FBoneFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneFilter, Z_Construct_UPackage__Script_Engine(), TEXT("BoneFilter"), sizeof(FBoneFilter), Get_Z_Construct_UScriptStruct_FBoneFilter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneFilter>()
{
	return FBoneFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneFilter(FBoneFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneFilter()
	{
		UScriptStruct::DeferCppStructOps<FBoneFilter>(FName(TEXT("BoneFilter")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneFilter;
	struct Z_Construct_UScriptStruct_FBoneFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeSelf_MetaData[];
#endif
		static void NewProp_bExcludeSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/*\n\x09 * Do not include the joint specified\n\x09 *\n\x09 * This option will work differently based on EBoneFilterActionOption\n\x09 * If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n\x09 * For example, if you specify hand, it will only include children of hand(all fingers), \n\x09 * not the hand itself if this is true\n\x09 * \n\x09 * But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it \n\x09 * You can't remove joint without children removed, and you can't keep without your parents \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "* Do not include the joint specified\n*\n* This option will work differently based on EBoneFilterActionOption\n* If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n* For example, if you specify hand, it will only include children of hand(all fingers),\n* not the hand itself if this is true\n*\n* But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it\n* You can't remove joint without children removed, and you can't keep without your parents" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit(void* Obj)
	{
		((FBoneFilter*)Obj)->bExcludeSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf = { "bExcludeSelf", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneFilter), &Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/* Name of Bone Name */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Name of Bone Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneFilter",
		sizeof(FBoneFilter),
		alignof(FBoneFilter),
		Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneFilter"), sizeof(FBoneFilter), Get_Z_Construct_UScriptStruct_FBoneFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneFilter_Hash() { return 2112667171U; }
	void USkeletalMeshLODSettings::StaticRegisterNativesUSkeletalMeshLODSettings()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister()
	{
		return USkeletalMeshLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[];
#endif
		static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/SkeletalMeshLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Minimum LOD to render. Can be overridden per component as well as set here for all mesh instances here */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Minimum LOD to render. Can be overridden per component as well as set here for all mesh instances here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** When true LODs below MinLod will not be stripped during cook. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "When true LODs below MinLod will not be stripped during cook." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group override default LOD streaming settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group override default LOD streaming settings." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
	{
		((USkeletalMeshLODSettings*)Obj)->bOverrideLODStreamingSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkeletalMeshLODSettings), &Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group stream LODs by default */" },
		{ "DisplayName", "Stream LODs" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group stream LODs by default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of streamed LODs for meshes in this group */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of streamed LODs for meshes in this group" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod) */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner = { "LODGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups = { "LODGroups", nullptr, (EPropertyFlags)0x0020080000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, LODGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshLODSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams = {
		&USkeletalMeshLODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshLODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshLODSettings, 2322853996);
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshLODSettings>()
	{
		return USkeletalMeshLODSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshLODSettings(Z_Construct_UClass_USkeletalMeshLODSettings, &USkeletalMeshLODSettings::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshLODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshLODSettings);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

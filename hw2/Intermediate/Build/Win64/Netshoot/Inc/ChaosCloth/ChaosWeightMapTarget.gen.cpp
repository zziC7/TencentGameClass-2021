// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Private/ChaosCloth/ChaosWeightMapTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosWeightMapTarget() {}
// Cross Module References
	CHAOSCLOTH_API UEnum* Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	static UEnum* EChaosWeightMapTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget, Z_Construct_UPackage__Script_ChaosCloth(), TEXT("EChaosWeightMapTarget"));
		}
		return Singleton;
	}
	template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosWeightMapTarget>()
	{
		return EChaosWeightMapTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosWeightMapTarget(EChaosWeightMapTarget_StaticEnum, TEXT("/Script/ChaosCloth"), TEXT("EChaosWeightMapTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Hash() { return 1295464361U; }
	UEnum* Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ChaosCloth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosWeightMapTarget"), 0, Get_Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosWeightMapTarget::None", (int64)EChaosWeightMapTarget::None },
				{ "EChaosWeightMapTarget::MaxDistance", (int64)EChaosWeightMapTarget::MaxDistance },
				{ "EChaosWeightMapTarget::BackstopDistance", (int64)EChaosWeightMapTarget::BackstopDistance },
				{ "EChaosWeightMapTarget::BackstopRadius", (int64)EChaosWeightMapTarget::BackstopRadius },
				{ "EChaosWeightMapTarget::AnimDriveStiffness", (int64)EChaosWeightMapTarget::AnimDriveStiffness },
				{ "EChaosWeightMapTarget::AnimDriveDamping", (int64)EChaosWeightMapTarget::AnimDriveDamping },
				{ "EChaosWeightMapTarget::TetherStiffness", (int64)EChaosWeightMapTarget::TetherStiffness },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimDriveDamping.Name", "EChaosWeightMapTarget::AnimDriveDamping" },
				{ "AnimDriveStiffness.Name", "EChaosWeightMapTarget::AnimDriveStiffness" },
				{ "BackstopDistance.Name", "EChaosWeightMapTarget::BackstopDistance" },
				{ "BackstopRadius.Name", "EChaosWeightMapTarget::BackstopRadius" },
				{ "Comment", "/** Targets for painted weight maps (aka masks). */" },
				{ "MaxDistance.Name", "EChaosWeightMapTarget::MaxDistance" },
				{ "ModuleRelativePath", "Private/ChaosCloth/ChaosWeightMapTarget.h" },
				{ "None.Name", "EChaosWeightMapTarget::None" },
				{ "TetherStiffness.Comment", "// Add Chaos specific maps below this line\n" },
				{ "TetherStiffness.Name", "EChaosWeightMapTarget::TetherStiffness" },
				{ "TetherStiffness.ToolTip", "Add Chaos specific maps below this line" },
				{ "ToolTip", "Targets for painted weight maps (aka masks)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ChaosCloth,
				nullptr,
				"EChaosWeightMapTarget",
				"EChaosWeightMapTarget",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

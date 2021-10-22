// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ParticleHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleHelper() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleDetailMode();
// End Cross Module References
	static UEnum* EParticleSystemInsignificanceReaction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemInsignificanceReaction"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemInsignificanceReaction>()
	{
		return EParticleSystemInsignificanceReaction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSystemInsignificanceReaction(EParticleSystemInsignificanceReaction_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSystemInsignificanceReaction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Hash() { return 2087829045U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSystemInsignificanceReaction"), 0, Get_Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleSystemInsignificanceReaction::Auto", (int64)EParticleSystemInsignificanceReaction::Auto },
				{ "EParticleSystemInsignificanceReaction::Complete", (int64)EParticleSystemInsignificanceReaction::Complete },
				{ "EParticleSystemInsignificanceReaction::DisableTick", (int64)EParticleSystemInsignificanceReaction::DisableTick },
				{ "EParticleSystemInsignificanceReaction::DisableTickAndKill", (int64)EParticleSystemInsignificanceReaction::DisableTickAndKill },
				{ "EParticleSystemInsignificanceReaction::Num", (int64)EParticleSystemInsignificanceReaction::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "/** Looping systems will DisableTick. Non-looping systems will Complete.*/" },
				{ "Auto.Name", "EParticleSystemInsignificanceReaction::Auto" },
				{ "Auto.ToolTip", "Looping systems will DisableTick. Non-looping systems will Complete." },
				{ "Comment", "/** Determines what a particle system will do when all of it's emitters become insignificant. */" },
				{ "Complete.Comment", "/** The system will be considered complete and will auto destroy if desired etc.*/" },
				{ "Complete.Name", "EParticleSystemInsignificanceReaction::Complete" },
				{ "Complete.ToolTip", "The system will be considered complete and will auto destroy if desired etc." },
				{ "DisableTick.Comment", "/** The system will simply stop ticking. Tick will be re-enabled when any emitters become significant again. This is useful for persistent fx such as environmental fx.  */" },
				{ "DisableTick.Name", "EParticleSystemInsignificanceReaction::DisableTick" },
				{ "DisableTick.ToolTip", "The system will simply stop ticking. Tick will be re-enabled when any emitters become significant again. This is useful for persistent fx such as environmental fx." },
				{ "DisableTickAndKill.Comment", "/** As DisableTick but will also kill all particles. */" },
				{ "DisableTickAndKill.Hidden", "" },
				{ "DisableTickAndKill.Name", "EParticleSystemInsignificanceReaction::DisableTickAndKill" },
				{ "DisableTickAndKill.ToolTip", "As DisableTick but will also kill all particles." },
				{ "ModuleRelativePath", "Public/ParticleHelper.h" },
				{ "Num.Comment", "//Hidden for now until I make it useful i.e. Killing particles saves memory.\n" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "EParticleSystemInsignificanceReaction::Num" },
				{ "Num.ToolTip", "Hidden for now until I make it useful i.e. Killing particles saves memory." },
				{ "ToolTip", "Determines what a particle system will do when all of it's emitters become insignificant." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSystemInsignificanceReaction",
				"EParticleSystemInsignificanceReaction",
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
	static UEnum* EParticleSignificanceLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSignificanceLevel, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSignificanceLevel"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSignificanceLevel>()
	{
		return EParticleSignificanceLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSignificanceLevel(EParticleSignificanceLevel_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSignificanceLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Hash() { return 1532503650U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSignificanceLevel"), 0, Get_Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleSignificanceLevel::Low", (int64)EParticleSignificanceLevel::Low },
				{ "EParticleSignificanceLevel::Medium", (int64)EParticleSignificanceLevel::Medium },
				{ "EParticleSignificanceLevel::High", (int64)EParticleSignificanceLevel::High },
				{ "EParticleSignificanceLevel::Critical", (int64)EParticleSignificanceLevel::Critical },
				{ "EParticleSignificanceLevel::Num", (int64)EParticleSignificanceLevel::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** A level of significance for a particle system. Used by game code to enable/disable emitters progressively as they move away from the camera or are occluded/off screen. */" },
				{ "Critical.Comment", "/** Critical emitter. Never culled. */" },
				{ "Critical.Name", "EParticleSignificanceLevel::Critical" },
				{ "Critical.ToolTip", "Critical emitter. Never culled." },
				{ "High.Comment", "/** High significance emitter. Culled last. */" },
				{ "High.Name", "EParticleSignificanceLevel::High" },
				{ "High.ToolTip", "High significance emitter. Culled last." },
				{ "Low.Comment", "/** Low significance emitter. Culled first. */" },
				{ "Low.Name", "EParticleSignificanceLevel::Low" },
				{ "Low.ToolTip", "Low significance emitter. Culled first." },
				{ "Medium.Comment", "/** Medium significance emitter. */" },
				{ "Medium.Name", "EParticleSignificanceLevel::Medium" },
				{ "Medium.ToolTip", "Medium significance emitter." },
				{ "ModuleRelativePath", "Public/ParticleHelper.h" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "EParticleSignificanceLevel::Num" },
				{ "ToolTip", "A level of significance for a particle system. Used by game code to enable/disable emitters progressively as they move away from the camera or are occluded/off screen." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSignificanceLevel",
				"EParticleSignificanceLevel",
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
	static UEnum* EParticleDetailMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleDetailMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleDetailMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleDetailMode>()
	{
		return EParticleDetailMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleDetailMode(EParticleDetailMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleDetailMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleDetailMode_Hash() { return 2659561518U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleDetailMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleDetailMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleDetailMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PDM_Low", (int64)PDM_Low },
				{ "PDM_Medium", (int64)PDM_Medium },
				{ "PDM_High", (int64)PDM_High },
				{ "PDM_MAX", (int64)PDM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Detail mode for scene component rendering. */" },
				{ "ModuleRelativePath", "Public/ParticleHelper.h" },
				{ "PDM_High.DisplayName", "High" },
				{ "PDM_High.Name", "PDM_High" },
				{ "PDM_Low.DisplayName", "Low" },
				{ "PDM_Low.Name", "PDM_Low" },
				{ "PDM_MAX.Hidden", "" },
				{ "PDM_MAX.Name", "PDM_MAX" },
				{ "PDM_Medium.DisplayName", "Medium" },
				{ "PDM_Medium.Name", "PDM_Medium" },
				{ "ToolTip", "Detail mode for scene component rendering." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleDetailMode",
				"EParticleDetailMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/RootMotionSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionSource() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings();
// End Cross Module References
	static UEnum* ERootMotionFinishVelocityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionFinishVelocityMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionFinishVelocityMode>()
	{
		return ERootMotionFinishVelocityMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionFinishVelocityMode(ERootMotionFinishVelocityMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionFinishVelocityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Hash() { return 1435452607U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionFinishVelocityMode"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity", (int64)ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity },
				{ "ERootMotionFinishVelocityMode::SetVelocity", (int64)ERootMotionFinishVelocityMode::SetVelocity },
				{ "ERootMotionFinishVelocityMode::ClampVelocity", (int64)ERootMotionFinishVelocityMode::ClampVelocity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ClampVelocity.Comment", "// Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though. \n" },
				{ "ClampVelocity.Name", "ERootMotionFinishVelocityMode::ClampVelocity" },
				{ "ClampVelocity.ToolTip", "Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though." },
				{ "MaintainLastRootMotionVelocity.Comment", "// Maintain the last velocity root motion gave to the character\n" },
				{ "MaintainLastRootMotionVelocity.Name", "ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity" },
				{ "MaintainLastRootMotionVelocity.ToolTip", "Maintain the last velocity root motion gave to the character" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "SetVelocity.Comment", "// Set Velocity to the specified value (for example, 0,0,0 to stop the character)\n" },
				{ "SetVelocity.Name", "ERootMotionFinishVelocityMode::SetVelocity" },
				{ "SetVelocity.ToolTip", "Set Velocity to the specified value (for example, 0,0,0 to stop the character)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionFinishVelocityMode",
				"ERootMotionFinishVelocityMode",
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
	static UEnum* ERootMotionSourceSettingsFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceSettingsFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceSettingsFlags>()
	{
		return ERootMotionSourceSettingsFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionSourceSettingsFlags(ERootMotionSourceSettingsFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionSourceSettingsFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Hash() { return 2506626599U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionSourceSettingsFlags"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionSourceSettingsFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck", (int64)ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck },
				{ "ERootMotionSourceSettingsFlags::DisablePartialEndTick", (int64)ERootMotionSourceSettingsFlags::DisablePartialEndTick },
				{ "ERootMotionSourceSettingsFlags::IgnoreZAccumulate", (int64)ERootMotionSourceSettingsFlags::IgnoreZAccumulate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \n * Enumeration for RootMotionSource settings\n */" },
				{ "DisablePartialEndTick.Comment", "// If Duration of Source would end partway through the last tick it is active,\n// do not reduce SimulationTime. Disabling this is useful for sources that\n// are more about providing velocity (like jumps), vs. sources that need\n// the precision of partial ticks for say ending up at an exact location (MoveTo)\n" },
				{ "DisablePartialEndTick.Name", "ERootMotionSourceSettingsFlags::DisablePartialEndTick" },
				{ "DisablePartialEndTick.ToolTip", "If Duration of Source would end partway through the last tick it is active,\ndo not reduce SimulationTime. Disabling this is useful for sources that\nare more about providing velocity (like jumps), vs. sources that need\nthe precision of partial ticks for say ending up at an exact location (MoveTo)" },
				{ "IgnoreZAccumulate.Comment", "// Whether to ignore impact to Z when accumulating output to Velocity\n// Setting this flag on override sources provides the same behavior as\n// animation root motion\n" },
				{ "IgnoreZAccumulate.Name", "ERootMotionSourceSettingsFlags::IgnoreZAccumulate" },
				{ "IgnoreZAccumulate.ToolTip", "Whether to ignore impact to Z when accumulating output to Velocity\nSetting this flag on override sources provides the same behavior as\nanimation root motion" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "ToolTip", "Enumeration for RootMotionSource settings" },
				{ "UseSensitiveLiftoffCheck.Comment", "// Source will switch character to Falling mode with any \"Z up\" velocity added.\n// Use this for jump-like root motion. If not enabled, uses default jump impulse\n// detection (which keeps you stuck on ground in Walking fairly strongly)\n" },
				{ "UseSensitiveLiftoffCheck.Name", "ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck" },
				{ "UseSensitiveLiftoffCheck.ToolTip", "Source will switch character to Falling mode with any \"Z up\" velocity added.\nUse this for jump-like root motion. If not enabled, uses default jump impulse\ndetection (which keeps you stuck on ground in Walking fairly strongly)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionSourceSettingsFlags",
				"ERootMotionSourceSettingsFlags",
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
	static UEnum* ERootMotionSourceStatusFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionSourceStatusFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionSourceStatusFlags>()
	{
		return ERootMotionSourceStatusFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionSourceStatusFlags(ERootMotionSourceStatusFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionSourceStatusFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Hash() { return 3862528028U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionSourceStatusFlags"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionSourceStatusFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionSourceStatusFlags::Prepared", (int64)ERootMotionSourceStatusFlags::Prepared },
				{ "ERootMotionSourceStatusFlags::Finished", (int64)ERootMotionSourceStatusFlags::Finished },
				{ "ERootMotionSourceStatusFlags::MarkedForRemoval", (int64)ERootMotionSourceStatusFlags::MarkedForRemoval },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \n * Enumeration for RootMotionSource status flags\n */" },
				{ "Finished.Comment", "// Source has timed out or otherwise reached a state where it is considered \"done\"\n" },
				{ "Finished.Name", "ERootMotionSourceStatusFlags::Finished" },
				{ "Finished.ToolTip", "Source has timed out or otherwise reached a state where it is considered \"done\"" },
				{ "MarkedForRemoval.Comment", "// Source has been queued for removal, will be removed next PrepareRootMotion() by the SourceGroup\n" },
				{ "MarkedForRemoval.Name", "ERootMotionSourceStatusFlags::MarkedForRemoval" },
				{ "MarkedForRemoval.ToolTip", "Source has been queued for removal, will be removed next PrepareRootMotion() by the SourceGroup" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "Prepared.Comment", "// Source has been Prepared and can contribute to root motion \n" },
				{ "Prepared.Name", "ERootMotionSourceStatusFlags::Prepared" },
				{ "Prepared.ToolTip", "Source has been Prepared and can contribute to root motion" },
				{ "ToolTip", "Enumeration for RootMotionSource status flags" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionSourceStatusFlags",
				"ERootMotionSourceStatusFlags",
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
	static UEnum* ERootMotionAccumulateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionAccumulateMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionAccumulateMode>()
	{
		return ERootMotionAccumulateMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionAccumulateMode(ERootMotionAccumulateMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERootMotionAccumulateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Hash() { return 1530345390U; }
	UEnum* Z_Construct_UEnum_Engine_ERootMotionAccumulateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionAccumulateMode"), 0, Get_Z_Construct_UEnum_Engine_ERootMotionAccumulateMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionAccumulateMode::Override", (int64)ERootMotionAccumulateMode::Override },
				{ "ERootMotionAccumulateMode::Additive", (int64)ERootMotionAccumulateMode::Additive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.Comment", "// Gets added on top of existing velocity\n" },
				{ "Additive.Name", "ERootMotionAccumulateMode::Additive" },
				{ "Additive.ToolTip", "Gets added on top of existing velocity" },
				{ "Comment", "/** \n * Enumeration for RootMotionSource accumulation mode\n */" },
				{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
				{ "Override.Comment", "// Sets velocity to this value directly\n" },
				{ "Override.Name", "ERootMotionAccumulateMode::Override" },
				{ "Override.ToolTip", "Sets velocity to this value directly" },
				{ "ToolTip", "Enumeration for RootMotionSource accumulation mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERootMotionAccumulateMode",
				"ERootMotionAccumulateMode",
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
class UScriptStruct* FRootMotionSourceGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceGroup, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceGroup"), sizeof(FRootMotionSourceGroup), Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceGroup>()
{
	return FRootMotionSourceGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceGroup(FRootMotionSourceGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSourceGroup>(FName(TEXT("RootMotionSourceGroup")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceGroup;
	struct Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAdditiveSources_MetaData[];
#endif
		static void NewProp_bHasAdditiveSources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAdditiveSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOverrideSources_MetaData[];
#endif
		static void NewProp_bHasOverrideSources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOverrideSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData[];
#endif
		static void NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOverrideSourcesWithIgnoreZAccumulate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdditiveVelocityApplied_MetaData[];
#endif
		static void NewProp_bIsAdditiveVelocityApplied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdditiveVelocityApplied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAccumulatedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastAccumulatedSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPreAdditiveVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPreAdditiveVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Group of Root Motion Sources that are applied\n *\n **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Group of Root Motion Sources that are applied" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has additive root motion sources\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has additive root motion sources" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_SetBit(void* Obj)
	{
		((FRootMotionSourceGroup*)Obj)->bHasAdditiveSources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources = { "bHasAdditiveSources", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has override root motion sources\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has override root motion sources" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_SetBit(void* Obj)
	{
		((FRootMotionSourceGroup*)Obj)->bHasOverrideSources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources = { "bHasOverrideSources", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Whether this group has override root motion sources that have IgnoreZAccumulate flag\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Whether this group has override root motion sources that have IgnoreZAccumulate flag" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit(void* Obj)
	{
		((FRootMotionSourceGroup*)Obj)->bHasOverrideSourcesWithIgnoreZAccumulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate = { "bHasOverrideSourcesWithIgnoreZAccumulate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_MetaData[] = {
		{ "Comment", "/** True when we had additive velocity applied last tick, checked to know if we should restore\n\x09 *  LastPreAdditiveVelocity before a Velocity computation */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "True when we had additive velocity applied last tick, checked to know if we should restore\nLastPreAdditiveVelocity before a Velocity computation" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_SetBit(void* Obj)
	{
		((FRootMotionSourceGroup*)Obj)->bIsAdditiveVelocityApplied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied = { "bIsAdditiveVelocityApplied", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FRootMotionSourceGroup), &Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings_MetaData[] = {
		{ "Comment", "/** Aggregate Settings of the last group of accumulated sources */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Aggregate Settings of the last group of accumulated sources" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings = { "LastAccumulatedSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSourceGroup, LastAccumulatedSettings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity_MetaData[] = {
		{ "Comment", "/** Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive\n\x09 *  velocity from currently computed Velocity (otherwise we would be removing additive velocity\n\x09 *  that no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting\n\x09 *  the velocity that we added heading into the wall last tick would make you go backwards. With\n\x09 *  this method we override that resulting Velocity due to obstructions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Saved off pre-additive-applied Velocity, used for being able to reliably add/remove additive\nvelocity from currently computed Velocity (otherwise we would be removing additive velocity\nthat no longer exists, like if you run into a wall and your Velocity becomes 0 - subtracting\nthe velocity that we added heading into the wall last tick would make you go backwards. With\nthis method we override that resulting Velocity due to obstructions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity = { "LastPreAdditiveVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSourceGroup, LastPreAdditiveVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasAdditiveSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bHasOverrideSourcesWithIgnoreZAccumulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_bIsAdditiveVelocityApplied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastAccumulatedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::NewProp_LastPreAdditiveVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionSourceGroup",
		sizeof(FRootMotionSourceGroup),
		alignof(FRootMotionSourceGroup),
		Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceGroup"), sizeof(FRootMotionSourceGroup), Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSourceGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceGroup_Hash() { return 4017800537U; }

static_assert(std::is_polymorphic<FRootMotionSource_JumpForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_JumpForce cannot be polymorphic unless super FRootMotionSource is polymorphic");

class UScriptStruct* FRootMotionSource_JumpForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_JumpForce"), sizeof(FRootMotionSource_JumpForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_JumpForce>()
{
	return FRootMotionSource_JumpForce::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_JumpForce(FRootMotionSource_JumpForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_JumpForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_JumpForce>(FName(TEXT("RootMotionSource_JumpForce")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_JumpForce;
	struct Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTimeout_MetaData[];
#endif
		static void NewProp_bDisableTimeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** JumpForce moves the target in a jump-like manner (ends when landing, applied force is relative) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "JumpForce moves the target in a jump-like manner (ends when landing, applied force is relative)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_JumpForce>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_SetBit(void* Obj)
	{
		((FRootMotionSource_JumpForce*)Obj)->bDisableTimeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout = { "bDisableTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_JumpForce), &Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_JumpForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_bDisableTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_PathOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::NewProp_TimeMappingCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"RootMotionSource_JumpForce",
		sizeof(FRootMotionSource_JumpForce),
		alignof(FRootMotionSource_JumpForce),
		Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_JumpForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_JumpForce"), sizeof(FRootMotionSource_JumpForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_JumpForce_Hash() { return 391106413U; }

static_assert(std::is_polymorphic<FRootMotionSource_MoveToDynamicForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_MoveToDynamicForce cannot be polymorphic unless super FRootMotionSource is polymorphic");

class UScriptStruct* FRootMotionSource_MoveToDynamicForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToDynamicForce"), sizeof(FRootMotionSource_MoveToDynamicForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_MoveToDynamicForce>()
{
	return FRootMotionSource_MoveToDynamicForce::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_MoveToDynamicForce(FRootMotionSource_MoveToDynamicForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_MoveToDynamicForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_MoveToDynamicForce>(FName(TEXT("RootMotionSource_MoveToDynamicForce")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToDynamicForce;
	struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[];
#endif
		static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location\n * is dynamic and can change during the move (meant to be used for things like moving to a moving target)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "MoveToDynamicForce moves the target to a given location in world space over the duration, where the end location\nis dynamic and can change during the move (meant to be used for things like moving to a moving target)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToDynamicForce>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation = { "InitialTargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, InitialTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
	{
		((FRootMotionSource_MoveToDynamicForce*)Obj)->bRestrictSpeedToExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_MoveToDynamicForce), &Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToDynamicForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_InitialTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_bRestrictSpeedToExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_PathOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::NewProp_TimeMappingCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"RootMotionSource_MoveToDynamicForce",
		sizeof(FRootMotionSource_MoveToDynamicForce),
		alignof(FRootMotionSource_MoveToDynamicForce),
		Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_MoveToDynamicForce"), sizeof(FRootMotionSource_MoveToDynamicForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToDynamicForce_Hash() { return 2790142873U; }

static_assert(std::is_polymorphic<FRootMotionSource_MoveToForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_MoveToForce cannot be polymorphic unless super FRootMotionSource is polymorphic");

class UScriptStruct* FRootMotionSource_MoveToForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_MoveToForce"), sizeof(FRootMotionSource_MoveToForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_MoveToForce>()
{
	return FRootMotionSource_MoveToForce::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_MoveToForce(FRootMotionSource_MoveToForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_MoveToForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_MoveToForce>(FName(TEXT("RootMotionSource_MoveToForce")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_MoveToForce;
	struct Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[];
#endif
		static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** MoveToForce moves the target to a given fixed location in world space over the duration */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "MoveToForce moves the target to a given fixed location in world space over the duration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_MoveToForce>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
	{
		((FRootMotionSource_MoveToForce*)Obj)->bRestrictSpeedToExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_MoveToForce), &Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_MoveToForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_bRestrictSpeedToExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::NewProp_PathOffsetCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"RootMotionSource_MoveToForce",
		sizeof(FRootMotionSource_MoveToForce),
		alignof(FRootMotionSource_MoveToForce),
		Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_MoveToForce"), sizeof(FRootMotionSource_MoveToForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_MoveToForce_Hash() { return 96588097U; }

static_assert(std::is_polymorphic<FRootMotionSource_RadialForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_RadialForce cannot be polymorphic unless super FRootMotionSource is polymorphic");

class UScriptStruct* FRootMotionSource_RadialForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_RadialForce"), sizeof(FRootMotionSource_RadialForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_RadialForce>()
{
	return FRootMotionSource_RadialForce::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_RadialForce(FRootMotionSource_RadialForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_RadialForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_RadialForce>(FName(TEXT("RootMotionSource_RadialForce")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_RadialForce;
	struct Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPush_MetaData[];
#endif
		static void NewProp_bIsPush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoZForce_MetaData[];
#endif
		static void NewProp_bNoZForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoZForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthDistanceFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthDistanceFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedWorldDirection_MetaData[];
#endif
		static void NewProp_bUseFixedWorldDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedWorldDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** RadialForce applies a force pulling or pushing away from a given world location to the target */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "RadialForce applies a force pulling or pushing away from a given world location to the target" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_RadialForce>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_SetBit(void* Obj)
	{
		((FRootMotionSource_RadialForce*)Obj)->bIsPush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush = { "bIsPush", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_SetBit(void* Obj)
	{
		((FRootMotionSource_RadialForce*)Obj)->bNoZForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce = { "bNoZForce", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff = { "StrengthDistanceFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthDistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit(void* Obj)
	{
		((FRootMotionSource_RadialForce*)Obj)->bUseFixedWorldDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection = { "bUseFixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource_RadialForce), &Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection = { "FixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_RadialForce, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_LocationActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bIsPush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bNoZForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthDistanceFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_StrengthOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_bUseFixedWorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewProp_FixedWorldDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"RootMotionSource_RadialForce",
		sizeof(FRootMotionSource_RadialForce),
		alignof(FRootMotionSource_RadialForce),
		Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_RadialForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_RadialForce"), sizeof(FRootMotionSource_RadialForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Hash() { return 2173298795U; }

static_assert(std::is_polymorphic<FRootMotionSource_ConstantForce>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FRootMotionSource_ConstantForce cannot be polymorphic unless super FRootMotionSource is polymorphic");

class UScriptStruct* FRootMotionSource_ConstantForce::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource_ConstantForce"), sizeof(FRootMotionSource_ConstantForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource_ConstantForce>()
{
	return FRootMotionSource_ConstantForce::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource_ConstantForce(FRootMotionSource_ConstantForce::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource_ConstantForce"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource_ConstantForce>(FName(TEXT("RootMotionSource_ConstantForce")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource_ConstantForce;
	struct Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** ConstantForce applies a fixed force to the target */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "ConstantForce applies a fixed force to the target" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource_ConstantForce>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_ConstantForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource_ConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::NewProp_StrengthOverTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"RootMotionSource_ConstantForce",
		sizeof(FRootMotionSource_ConstantForce),
		alignof(FRootMotionSource_ConstantForce),
		Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource_ConstantForce"), sizeof(FRootMotionSource_ConstantForce), Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_ConstantForce_Hash() { return 1083182741U; }
class UScriptStruct* FRootMotionSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSource"), sizeof(FRootMotionSource), Get_Z_Construct_UScriptStruct_FRootMotionSource_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSource>()
{
	return FRootMotionSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSource(FRootMotionSource::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSource"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSource()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSource>(FName(TEXT("RootMotionSource")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSource;
	struct Z_Construct_UScriptStruct_FRootMotionSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalID_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_LocalID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccumulateMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccumulateMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[];
#endif
		static void NewProp_bInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinishVelocityParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n*\x09Generalized source of Root Motion to a CharacterMovementComponent.\n*\x09\n*\x09Has priorities and different accumulation modes (override, additive, set, ignore).\n*\n*\x09RootMotionSources are accumulated from highest priority to lowest, once all values\n*\x09""are \"finalized\" (meaning no more accumulation to those values), root motion accumulation\n*\x09is finished. Having all of translation and rotation in a transform being overridden during\n*\x09root motion accumulation means that CharacterMovementComponent Phys*() functions no longer\n*\x09need to CalcVelocity() since it'll just get overridden anyway.\n*\n*\x09Some example source possibilities:\n*\x09\x09""Full Animation Root Motion (matching only form of root motion we've supported historically):\n*\x09\x09\x09- Overrides all translation axes or rotation or both\n*\x09\x09\x09- Very High priority so it gets applied first and since it is override no other\n*\x09\x09\x09  RootMotionSources have an influence that are lower priority \n*\x09\x09\x09- Scale on translation and/or rotation is set to 1 to match animation 1 for 1\n*\x09\x09\x09- Provides local space transform (character-orientation relative)\n*\n*\x09\x09\x09- End result: Same as before - overrides velocity/rotation to values in AnimMontage\n*\x09\x09\x09- But can now scale individual translation axes if desired, or instead of override\n*\x09\x09\x09  can use \"set\" to allow other additive sources of root motion to be applied on top\n*\x09\x09\x09  of the animation root motion (modify velocity to home root motion melee attacks, etc.)\n*\n*\x09\x09Jump pad volumes that work during animation root montage attacks\n*\x09\x09\x09- Constant velocity modification Z up, additive and high priority\n*\x09\x09\x09- Attack/melee animation root motion uses \"set\" instead of \"override\" to allow other sources\n*\x09\x09\x09- Animation root motion is applied, then the Z up additive of this source is so you are\n*\x09\x09\x09  affected by the jump pad\n*\n*\x09\x09""Attack/melee homing\n*\x09\x09\x09- Additive, lower priority so it gets applied after any animation/significant root motion\n*\x09\x09\x09- World space, sourced by logic modifying velocity to go towards nearby enemies\n*\x09\x09\x09- Could point to a UAbilityTask node from the GameplayAbilities system\n*\n*\x09\x09""Character movement controlled by splines/curves in-editor instead of requiring animation tweaks\n*\x09\x09\x09- Same as animation root motion but source from spline/curve data\n*\x09\n*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Generalized source of Root Motion to a CharacterMovementComponent.\n\nHas priorities and different accumulation modes (override, additive, set, ignore).\n\nRootMotionSources are accumulated from highest priority to lowest, once all values\nare \"finalized\" (meaning no more accumulation to those values), root motion accumulation\nis finished. Having all of translation and rotation in a transform being overridden during\nroot motion accumulation means that CharacterMovementComponent Phys*() functions no longer\nneed to CalcVelocity() since it'll just get overridden anyway.\n\nSome example source possibilities:\n        Full Animation Root Motion (matching only form of root motion we've supported historically):\n                - Overrides all translation axes or rotation or both\n                - Very High priority so it gets applied first and since it is override no other\n                  RootMotionSources have an influence that are lower priority\n                - Scale on translation and/or rotation is set to 1 to match animation 1 for 1\n                - Provides local space transform (character-orientation relative)\n\n                - End result: Same as before - overrides velocity/rotation to values in AnimMontage\n                - But can now scale individual translation axes if desired, or instead of override\n                  can use \"set\" to allow other additive sources of root motion to be applied on top\n                  of the animation root motion (modify velocity to home root motion melee attacks, etc.)\n\n        Jump pad volumes that work during animation root montage attacks\n                - Constant velocity modification Z up, additive and high priority\n                - Attack/melee animation root motion uses \"set\" instead of \"override\" to allow other sources\n                - Animation root motion is applied, then the Z up additive of this source is so you are\n                  affected by the jump pad\n\n        Attack/melee homing\n                - Additive, lower priority so it gets applied after any animation/significant root motion\n                - World space, sourced by logic modifying velocity to go towards nearby enemies\n                - Could point to a UAbilityTask node from the GameplayAbilities system\n\n        Character movement controlled by splines/curves in-editor instead of requiring animation tweaks\n                - Same as animation root motion but source from spline/curve data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "/** Priority of this source relative to other sources - higher number being the highest priority/first applied. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Priority of this source relative to other sources - higher number being the highest priority/first applied." },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID_MetaData[] = {
		{ "Comment", "/** ID local to this client or server instance. Used for matching up FRootMotionSources between SavedMoves\n\x09 *  and allow a mapping between server LocalIDs and client LocalIDs for correction/comparison */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "ID local to this client or server instance. Used for matching up FRootMotionSources between SavedMoves\nand allow a mapping between server LocalIDs and client LocalIDs for correction/comparison" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID = { "LocalID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, LocalID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Accumulation mode for this source (whether or not to additively apply this root motion or override completely)\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Accumulation mode for this source (whether or not to additively apply this root motion or override completely)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode = { "AccumulateMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, AccumulateMode), Z_Construct_UEnum_Engine_ERootMotionAccumulateMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09This name allows us to find the source later so that we can end it. \n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "This name allows us to find the source later so that we can end it." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Time this source should start (in character movement client time) \n\x09 *  This is used to handle cases of inconsistent tick times (ServerMoves ticking for 1 second when root motion should\n\x09 *  have only applied for the last 0.1 seconds, or root motion source ending halfway through a 0.5 second tick)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Time this source should start (in character movement client time)\nThis is used to handle cases of inconsistent tick times (ServerMoves ticking for 1 second when root motion should\nhave only applied for the last 0.1 seconds, or root motion source ending halfway through a 0.5 second tick)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "Comment", "/** Time elapsed so far for this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Time elapsed so far for this source" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, CurrentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime_MetaData[] = {
		{ "Comment", "/** The last Time entry we had before the last SetTime() - used for simulated catchup */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "The last Time entry we had before the last SetTime() - used for simulated catchup" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime = { "PreviousTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, PreviousTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The length of this root motion - < 0 for infinite (to be removed manually) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "The length of this root motion - < 0 for infinite (to be removed manually)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** Status of this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Status of this source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, Status), Z_Construct_UScriptStruct_FRootMotionSourceStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Settings of this source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Settings of this source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, Settings), Z_Construct_UScriptStruct_FRootMotionSourceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_MetaData[] = {
		{ "Comment", "/** True when this RootMotionSource is contributing local space accumulation (false for world space) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "True when this RootMotionSource is contributing local space accumulation (false for world space)" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
	{
		((FRootMotionSource*)Obj)->bInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace = { "bInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRootMotionSource), &Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams_MetaData[] = {
		{ "Comment", "/** Root Motion generated by this Source */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Root Motion generated by this Source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, RootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams_MetaData[] = {
		{ "Comment", "/** Finish Velocity Parameters */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Finish Velocity Parameters" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams = { "FinishVelocityParams", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSource, FinishVelocityParams), Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_LocalID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_AccumulateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_PreviousTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_bInLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_RootMotionParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSource_Statics::NewProp_FinishVelocityParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionSource",
		sizeof(FRootMotionSource),
		alignof(FRootMotionSource),
		Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSource"), sizeof(FRootMotionSource), Get_Z_Construct_UScriptStruct_FRootMotionSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSource_Hash() { return 235151904U; }
class UScriptStruct* FRootMotionFinishVelocitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionFinishVelocitySettings"), sizeof(FRootMotionFinishVelocitySettings), Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionFinishVelocitySettings>()
{
	return FRootMotionFinishVelocitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionFinishVelocitySettings(FRootMotionFinishVelocitySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionFinishVelocitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionFinishVelocitySettings>(FName(TEXT("RootMotionFinishVelocitySettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionFinishVelocitySettings;
	struct Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Struct for RootMotion Finish Velocity options.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Struct for RootMotion Finish Velocity options." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionFinishVelocitySettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Comment", "// Mode, see ERootMotionFinishVelocityMode\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Mode, see ERootMotionFinishVelocityMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, Mode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity_MetaData[] = {
		{ "Comment", "// Set Velocity if Mode == SetVelocity\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Set Velocity if Mode == SetVelocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity = { "SetVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, SetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity_MetaData[] = {
		{ "Comment", "// Clamp Velocity if Move == ClampVelocity\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Clamp Velocity if Move == ClampVelocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity = { "ClampVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionFinishVelocitySettings, ClampVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_SetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::NewProp_ClampVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionFinishVelocitySettings",
		sizeof(FRootMotionFinishVelocitySettings),
		alignof(FRootMotionFinishVelocitySettings),
		Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionFinishVelocitySettings"), sizeof(FRootMotionFinishVelocitySettings), Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionFinishVelocitySettings_Hash() { return 1257571187U; }
class UScriptStruct* FRootMotionSourceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceSettings"), sizeof(FRootMotionSourceSettings), Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceSettings>()
{
	return FRootMotionSourceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceSettings(FRootMotionSourceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSourceSettings>(FName(TEXT("RootMotionSourceSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceSettings;
	struct Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure for RootMotionSource option flags \n * (used for convenience instead of having to manually manipulate flag bitfields)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Structure for RootMotionSource option flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSourceSettings, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionSourceSettings",
		sizeof(FRootMotionSourceSettings),
		alignof(FRootMotionSourceSettings),
		Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceSettings"), sizeof(FRootMotionSourceSettings), Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSourceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceSettings_Hash() { return 181432892U; }
class UScriptStruct* FRootMotionSourceStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSourceStatus, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionSourceStatus"), sizeof(FRootMotionSourceStatus), Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionSourceStatus>()
{
	return FRootMotionSourceStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionSourceStatus(FRootMotionSourceStatus::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionSourceStatus"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus()
	{
		UScriptStruct::DeferCppStructOps<FRootMotionSourceStatus>(FName(TEXT("RootMotionSourceStatus")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionSourceStatus;
	struct Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure for RootMotionSource status flags \n * (used for convenience instead of having to manually manipulate flag bitfields)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
		{ "ToolTip", "Structure for RootMotionSource status flags\n(used for convenience instead of having to manually manipulate flag bitfields)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionSourceStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/RootMotionSource.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootMotionSourceStatus, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionSourceStatus",
		sizeof(FRootMotionSourceStatus),
		alignof(FRootMotionSourceStatus),
		Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionSourceStatus"), sizeof(FRootMotionSourceStatus), Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionSourceStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionSourceStatus_Hash() { return 3383934045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

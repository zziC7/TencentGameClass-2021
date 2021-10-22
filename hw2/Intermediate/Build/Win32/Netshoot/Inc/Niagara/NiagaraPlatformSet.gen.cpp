// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPlatformSet() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry();
// End Cross Module References
	static UEnum* ENiagaraPlatformSetState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPlatformSetState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSetState>()
	{
		return ENiagaraPlatformSetState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraPlatformSetState(ENiagaraPlatformSetState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraPlatformSetState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Hash() { return 3547068478U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraPlatformSetState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraPlatformSetState::Disabled", (int64)ENiagaraPlatformSetState::Disabled },
				{ "ENiagaraPlatformSetState::Enabled", (int64)ENiagaraPlatformSetState::Enabled },
				{ "ENiagaraPlatformSetState::Active", (int64)ENiagaraPlatformSetState::Active },
				{ "ENiagaraPlatformSetState::Unknown", (int64)ENiagaraPlatformSetState::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "//This device profile is enabled but not active.\n" },
				{ "Active.Name", "ENiagaraPlatformSetState::Active" },
				{ "Active.ToolTip", "This device profile is enabled but not active." },
				{ "Disabled.Name", "ENiagaraPlatformSetState::Disabled" },
				{ "Enabled.Comment", "//This platform set is disabled.\n" },
				{ "Enabled.Name", "ENiagaraPlatformSetState::Enabled" },
				{ "Enabled.ToolTip", "This platform set is disabled." },
				{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
				{ "Unknown.Comment", "//This device profile is enabled and active now.\n" },
				{ "Unknown.Hidden", "" },
				{ "Unknown.Name", "ENiagaraPlatformSetState::Unknown" },
				{ "Unknown.ToolTip", "This device profile is enabled and active now." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraPlatformSetState",
				"ENiagaraPlatformSetState",
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
	static UEnum* ENiagaraPlatformSelectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPlatformSelectionState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSelectionState>()
	{
		return ENiagaraPlatformSelectionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraPlatformSelectionState(ENiagaraPlatformSelectionState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraPlatformSelectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Hash() { return 3190639061U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraPlatformSelectionState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraPlatformSelectionState::Default", (int64)ENiagaraPlatformSelectionState::Default },
				{ "ENiagaraPlatformSelectionState::Enabled", (int64)ENiagaraPlatformSelectionState::Enabled },
				{ "ENiagaraPlatformSelectionState::Disabled", (int64)ENiagaraPlatformSelectionState::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "ENiagaraPlatformSelectionState::Default" },
				{ "Disabled.Comment", "/** This platform is explicitly disabled. */" },
				{ "Disabled.Name", "ENiagaraPlatformSelectionState::Disabled" },
				{ "Disabled.ToolTip", "This platform is explicitly disabled." },
				{ "Enabled.Comment", "/** Neither explicitly enabled or disabled, this platform is enabled or not based on other settings in the platform set. */" },
				{ "Enabled.Name", "ENiagaraPlatformSelectionState::Enabled" },
				{ "Enabled.ToolTip", "Neither explicitly enabled or disabled, this platform is enabled or not based on other settings in the platform set." },
				{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraPlatformSelectionState",
				"ENiagaraPlatformSelectionState",
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
class UScriptStruct* FNiagaraPlatformSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSet, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSet"), sizeof(FNiagaraPlatformSet), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSet_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSet>()
{
	return FNiagaraPlatformSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraPlatformSet(FNiagaraPlatformSet::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraPlatformSet"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSet
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSet()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraPlatformSet>(FName(TEXT("NiagaraPlatformSet")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSet;
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualityLevelMask;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceProfileStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceProfileStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceProfileStates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CVarConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVarConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CVarConditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Mask defining which effects qualities this set matches. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Mask defining which effects qualities this set matches." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSet, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_Inner = { "DeviceProfileStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** States of specific device profiles we've set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "States of specific device profiles we've set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates = { "DeviceProfileStates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSet, DeviceProfileStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_Inner = { "CVarConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Set of CVars values we require for this platform set to be enabled. If any of the linked CVars don't have the required values then this platform set will not be enabled. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Set of CVars values we require for this platform set to be enabled. If any of the linked CVars don't have the required values then this platform set will not be enabled." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions = { "CVarConditions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSet, CVarConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSet",
		sizeof(FNiagaraPlatformSet),
		alignof(FNiagaraPlatformSet),
		Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraPlatformSet"), sizeof(FNiagaraPlatformSet), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSet_Hash() { return 1570091719U; }
class UScriptStruct* FNiagaraPlatformSetCVarCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetCVarCondition"), sizeof(FNiagaraPlatformSetCVarCondition), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetCVarCondition>()
{
	return FNiagaraPlatformSetCVarCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraPlatformSetCVarCondition(FNiagaraPlatformSetCVarCondition::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraPlatformSetCVarCondition"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetCVarCondition
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetCVarCondition()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraPlatformSetCVarCondition>(FName(TEXT("NiagaraPlatformSetCVarCondition")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetCVarCondition;
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CVarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMinInt_MetaData[];
#endif
		static void NewProp_bUseMinInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxInt_MetaData[];
#endif
		static void NewProp_bUseMaxInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMinFloat_MetaData[];
#endif
		static void NewProp_bUseMinFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxFloat_MetaData[];
#endif
		static void NewProp_bUseMaxFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Imposes a condition that a CVar must contain a set value or range of values for a platform set to be enabled. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Imposes a condition that a CVar must contain a set value or range of values for a platform set to be enabled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetCVarCondition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** The name of the CVar we're testing the value of. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The name of the CVar we're testing the value of." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, CVarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** The value this CVar must contain for this platform set to be enabled. */" },
		{ "DisplayName", "Required Value" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The value this CVar must contain for this platform set to be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is less than this minimum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Minumum Int For Enabled" },
		{ "EditCondition", "bUseMinInt" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is less than this minimum then the PlatformSet will not be enabled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt = { "MinInt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MinInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Maximum Int For Enabled" },
		{ "EditCondition", "bUseMaxInt" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt = { "MaxInt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MaxInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is less than this minimum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Minumum Float For Enabled" },
		{ "EditCondition", "bUseMinFloat" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is less than this minimum then the PlatformSet will not be enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat = { "MinFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MinFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Maximum Float For Enabled" },
		{ "EditCondition", "bUseMaxFloat" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat = { "MaxFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MaxFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the minimum restriction for int CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the minimum restriction for int CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMinInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt = { "bUseMinInt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the maximum restriction for int CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the maximum restriction for int CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMaxInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt = { "bUseMaxInt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the minimum restriction for float CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the minimum restriction for float CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMinFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat = { "bUseMinFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the maximum restriction for float CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the maximum restriction for float CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMaxFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat = { "bUseMaxFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetCVarCondition",
		sizeof(FNiagaraPlatformSetCVarCondition),
		alignof(FNiagaraPlatformSetCVarCondition),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraPlatformSetCVarCondition"), sizeof(FNiagaraPlatformSetCVarCondition), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Hash() { return 2198443637U; }
class UScriptStruct* FNiagaraPlatformSetConflictInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetConflictInfo"), sizeof(FNiagaraPlatformSetConflictInfo), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetConflictInfo>()
{
	return FNiagaraPlatformSetConflictInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraPlatformSetConflictInfo(FNiagaraPlatformSetConflictInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraPlatformSetConflictInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraPlatformSetConflictInfo>(FName(TEXT("NiagaraPlatformSetConflictInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictInfo;
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetAIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetBIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetBIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conflicts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conflicts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conflicts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetConflictInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData[] = {
		{ "Comment", "/** Index of the first conflicting set in the checked array. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Index of the first conflicting set in the checked array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex = { "SetAIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, SetAIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData[] = {
		{ "Comment", "/** Index of the second conflicting set in the checked array. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Index of the second conflicting set in the checked array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex = { "SetBIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, SetBIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_Inner = { "Conflicts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData[] = {
		{ "Comment", "/** Array of all conflicts between these sets. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Array of all conflicts between these sets." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts = { "Conflicts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, Conflicts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetConflictInfo",
		sizeof(FNiagaraPlatformSetConflictInfo),
		alignof(FNiagaraPlatformSetConflictInfo),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraPlatformSetConflictInfo"), sizeof(FNiagaraPlatformSetConflictInfo), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Hash() { return 1759523684U; }
class UScriptStruct* FNiagaraPlatformSetConflictEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetConflictEntry"), sizeof(FNiagaraPlatformSetConflictEntry), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetConflictEntry>()
{
	return FNiagaraPlatformSetConflictEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraPlatformSetConflictEntry(FNiagaraPlatformSetConflictEntry::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraPlatformSetConflictEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictEntry
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictEntry()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraPlatformSetConflictEntry>(FName(TEXT("NiagaraPlatformSetConflictEntry")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraPlatformSetConflictEntry;
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualityLevelMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetConflictEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetConflictEntry, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Comment", "/** Mask of conflicting effects qualities for this profile. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Mask of conflicting effects qualities for this profile." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPlatformSetConflictEntry, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetConflictEntry",
		sizeof(FNiagaraPlatformSetConflictEntry),
		alignof(FNiagaraPlatformSetConflictEntry),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraPlatformSetConflictEntry"), sizeof(FNiagaraPlatformSetConflictEntry), Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Hash() { return 3929582368U; }
class UScriptStruct* FNiagaraDeviceProfileStateEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDeviceProfileStateEntry"), sizeof(FNiagaraDeviceProfileStateEntry), Get_Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDeviceProfileStateEntry>()
{
	return FNiagaraDeviceProfileStateEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDeviceProfileStateEntry(FNiagaraDeviceProfileStateEntry::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDeviceProfileStateEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDeviceProfileStateEntry
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDeviceProfileStateEntry()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDeviceProfileStateEntry>(FName(TEXT("NiagaraDeviceProfileStateEntry")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDeviceProfileStateEntry;
	struct Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_QualityLevelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetQualityLevelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SetQualityLevelMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDeviceProfileStateEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** The state of each set quality level. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The state of each set quality level." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** Which Effects Qualities are set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Which Effects Qualities are set." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask = { "SetQualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, SetQualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDeviceProfileStateEntry",
		sizeof(FNiagaraDeviceProfileStateEntry),
		alignof(FNiagaraDeviceProfileStateEntry),
		Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDeviceProfileStateEntry"), sizeof(FNiagaraDeviceProfileStateEntry), Get_Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Hash() { return 4116102185U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

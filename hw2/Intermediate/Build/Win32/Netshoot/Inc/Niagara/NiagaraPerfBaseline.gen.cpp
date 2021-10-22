// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraPerfBaseline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPerfBaseline() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FNiagaraPerfBaselineStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPerfBaselineStats"), sizeof(FNiagaraPerfBaselineStats), Get_Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPerfBaselineStats>()
{
	return FNiagaraPerfBaselineStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraPerfBaselineStats(FNiagaraPerfBaselineStats::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraPerfBaselineStats"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPerfBaselineStats
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraPerfBaselineStats()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraPerfBaselineStats>(FName(TEXT("NiagaraPerfBaselineStats")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraPerfBaselineStats;
	struct Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceAvg_GT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstanceAvg_GT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceAvg_RT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstanceAvg_RT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceMax_GT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstanceMax_GT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceMax_RT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstanceMax_RT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPerfBaselineStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance average time spent on the GameThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance average time spent on the GameThread (\xc2\xb5s)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT = { "PerInstanceAvg_GT", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceAvg_GT), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance average time spent on the RenerThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance average time spent on the RenerThread (\xc2\xb5s)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT = { "PerInstanceAvg_RT", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceAvg_RT), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance max time spent on the GameThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance max time spent on the GameThread (\xc2\xb5s)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT = { "PerInstanceMax_GT", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceMax_GT), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance max time spent on the RenderThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance max time spent on the RenderThread (\xc2\xb5s)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT = { "PerInstanceMax_RT", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceMax_RT), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPerfBaselineStats",
		sizeof(FNiagaraPerfBaselineStats),
		alignof(FNiagaraPerfBaselineStats),
		Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraPerfBaselineStats"), sizeof(FNiagaraPerfBaselineStats), Get_Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Hash() { return 2860427807U; }
	DEFINE_FUNCTION(UNiagaraBaselineController::execGetSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraBaselineController::execOnOwnerTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraBaselineController::execOnEndTest)
	{
		P_GET_STRUCT(FNiagaraPerfBaselineStats,Z_Param_Stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndTest_Implementation(Z_Param_Stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraBaselineController::execOnTickTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnTickTest_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraBaselineController::execOnBeginTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginTest_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UNiagaraBaselineController_OnBeginTest = FName(TEXT("OnBeginTest"));
	void UNiagaraBaselineController::OnBeginTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnBeginTest),NULL);
	}
	static FName NAME_UNiagaraBaselineController_OnEndTest = FName(TEXT("OnEndTest"));
	void UNiagaraBaselineController::OnEndTest(FNiagaraPerfBaselineStats Stats)
	{
		NiagaraBaselineController_eventOnEndTest_Parms Parms;
		Parms.Stats=Stats;
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnEndTest),&Parms);
	}
	static FName NAME_UNiagaraBaselineController_OnOwnerTick = FName(TEXT("OnOwnerTick"));
	void UNiagaraBaselineController::OnOwnerTick(float DeltaTime)
	{
		NiagaraBaselineController_eventOnOwnerTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnOwnerTick),&Parms);
	}
	static FName NAME_UNiagaraBaselineController_OnTickTest = FName(TEXT("OnTickTest"));
	bool UNiagaraBaselineController::OnTickTest()
	{
		NiagaraBaselineController_eventOnTickTest_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnTickTest),&Parms);
		return !!Parms.ReturnValue;
	}
	void UNiagaraBaselineController::StaticRegisterNativesUNiagaraBaselineController()
	{
		UClass* Class = UNiagaraBaselineController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSystem", &UNiagaraBaselineController::execGetSystem },
			{ "OnBeginTest", &UNiagaraBaselineController::execOnBeginTest },
			{ "OnEndTest", &UNiagaraBaselineController::execOnEndTest },
			{ "OnOwnerTick", &UNiagaraBaselineController::execOnOwnerTick },
			{ "OnTickTest", &UNiagaraBaselineController::execOnTickTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics
	{
		struct NiagaraBaselineController_eventGetSystem_Parms
		{
			UNiagaraSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraBaselineController_eventGetSystem_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Returns the System for this baseline. Will synchronously load the system if needed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Returns the System for this baseline. Will synchronously load the system if needed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "GetSystem", nullptr, nullptr, sizeof(NiagaraBaselineController_eventGetSystem_Parms), Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraBaselineController_GetSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called from the stats system when we begin gathering stats for the given System asset.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called from the stats system when we begin gathering stats for the given System asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnBeginTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraBaselineController_eventOnEndTest_Parms, Stats), Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::NewProp_Stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called from the stats system on completion of the test with the final stats for the given system asset. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called from the stats system on completion of the test with the final stats for the given system asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnEndTest", nullptr, nullptr, sizeof(NiagaraBaselineController_eventOnEndTest_Parms), Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraBaselineController_eventOnOwnerTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the owning actor is ticked. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called when the owning actor is ticked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnOwnerTick", nullptr, nullptr, sizeof(NiagaraBaselineController_eventOnOwnerTick_Parms), Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraBaselineController_eventOnTickTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraBaselineController_eventOnTickTest_Parms), &Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns whether the baseline test is complete. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Returns whether the baseline test is complete." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnTickTest", nullptr, nullptr, sizeof(NiagaraBaselineController_eventOnTickTest_Parms), Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister()
	{
		return UNiagaraBaselineController::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBaselineController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_System;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBaselineController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraBaselineController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraBaselineController_GetSystem, "GetSystem" }, // 3616269102
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest, "OnBeginTest" }, // 1839128123
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest, "OnEndTest" }, // 2798334706
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick, "OnOwnerTick" }, // 2592560811
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest, "OnTickTest" }, // 2763745684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for baseline controllers. These can are responsible for spawning and manipulating the FX needed for the baseline perf tests.\n*/" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Base class for baseline controllers. These can are responsible for spawning and manipulating the FX needed for the baseline perf tests." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Duration to gather performance stats for the given system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Duration to gather performance stats for the given system." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration = { "TestDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController, TestDuration), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The effect type this controller is in use by. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The effect type this controller is in use by." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The owning actor for this baseline controller. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The owning actor for this baseline controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController, Owner), Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The baseline system to spawn. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The baseline system to spawn." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBaselineController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBaselineController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBaselineController_Statics::ClassParams = {
		&UNiagaraBaselineController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBaselineController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraBaselineController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraBaselineController, 3690130919);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBaselineController>()
	{
		return UNiagaraBaselineController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraBaselineController(Z_Construct_UClass_UNiagaraBaselineController, &UNiagaraBaselineController::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraBaselineController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBaselineController);
	void UNiagaraBaselineController_Basic::StaticRegisterNativesUNiagaraBaselineController_Basic()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister()
	{
		return UNiagaraBaselineController_Basic::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraBaselineController,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nSimple controller that will just spawn the given system N times. If any instance completes, it will spawn a new one to replace it.\nCan handle simple burst or looping systems.\n*/" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Simple controller that will just spawn the given system N times. If any instance completes, it will spawn a new one to replace it.\nCan handle simple burst or looping systems." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances_MetaData[] = {
		{ "Category", "Baseline" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController_Basic, NumInstances), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_Inner = { "SpawnedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents = { "SpawnedComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBaselineController_Basic, SpawnedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBaselineController_Basic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::ClassParams = {
		&UNiagaraBaselineController_Basic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraBaselineController_Basic, 1853342862);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBaselineController_Basic>()
	{
		return UNiagaraBaselineController_Basic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraBaselineController_Basic(Z_Construct_UClass_UNiagaraBaselineController_Basic, &UNiagaraBaselineController_Basic::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraBaselineController_Basic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBaselineController_Basic);
	void ANiagaraPerfBaselineActor::StaticRegisterNativesANiagaraPerfBaselineActor()
	{
	}
	UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister()
	{
		return ANiagaraPerfBaselineActor::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor that controls how the baseline system behaves and also controls stats gathering for. */" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Actor that controls how the baseline system behaves and also controls stats gathering for." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "Baseline" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPerfBaselineActor, Controller), Z_Construct_UClass_UNiagaraBaselineController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Baseline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraPerfBaselineActor, Label), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPerfBaselineActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::ClassParams = {
		&ANiagaraPerfBaselineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANiagaraPerfBaselineActor, 3054875595);
	template<> NIAGARA_API UClass* StaticClass<ANiagaraPerfBaselineActor>()
	{
		return ANiagaraPerfBaselineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANiagaraPerfBaselineActor(Z_Construct_UClass_ANiagaraPerfBaselineActor, &ANiagaraPerfBaselineActor::StaticClass, TEXT("/Script/Niagara"), TEXT("ANiagaraPerfBaselineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPerfBaselineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

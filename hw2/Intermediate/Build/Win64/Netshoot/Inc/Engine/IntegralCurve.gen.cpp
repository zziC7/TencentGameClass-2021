// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/IntegralCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegralCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey();
// End Cross Module References

static_assert(std::is_polymorphic<FIntegralCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FIntegralCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");

class UScriptStruct* FIntegralCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralCurve, Z_Construct_UPackage__Script_Engine(), TEXT("IntegralCurve"), sizeof(FIntegralCurve), Get_Z_Construct_UScriptStruct_FIntegralCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralCurve>()
{
	return FIntegralCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntegralCurve(FIntegralCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("IntegralCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIntegralCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFIntegralCurve()
	{
		UScriptStruct::DeferCppStructOps<FIntegralCurve>(FName(TEXT("IntegralCurve")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFIntegralCurve;
	struct Z_Construct_UScriptStruct_FIntegralCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultValueBeforeFirstKey_MetaData[];
#endif
		static void NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultValueBeforeFirstKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral curve, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral curve, which holds the key time and the key value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralCurve>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntegralKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The keys, ordered by time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keys, ordered by time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntegralCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "Default value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntegralCurve, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj)
	{
		((FIntegralCurve*)Obj)->bUseDefaultValueBeforeFirstKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey = { "bUseDefaultValueBeforeFirstKey", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FIntegralCurve), &Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"IntegralCurve",
		sizeof(FIntegralCurve),
		alignof(FIntegralCurve),
		Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntegralCurve"), sizeof(FIntegralCurve), Get_Z_Construct_UScriptStruct_FIntegralCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIntegralCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntegralCurve_Hash() { return 1344552692U; }
class UScriptStruct* FIntegralKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralKey, Z_Construct_UPackage__Script_Engine(), TEXT("IntegralKey"), sizeof(FIntegralKey), Get_Z_Construct_UScriptStruct_FIntegralKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralKey>()
{
	return FIntegralKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIntegralKey(FIntegralKey::StaticStruct, TEXT("/Script/Engine"), TEXT("IntegralKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIntegralKey
{
	FScriptStruct_Engine_StaticRegisterNativesFIntegralKey()
	{
		UScriptStruct::DeferCppStructOps<FIntegralKey>(FName(TEXT("IntegralKey")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFIntegralKey;
	struct Z_Construct_UScriptStruct_FIntegralKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral key, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral key, which holds the key time and the key value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegralKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntegralKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed integral value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed integral value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIntegralKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"IntegralKey",
		sizeof(FIntegralKey),
		alignof(FIntegralKey),
		Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IntegralKey"), sizeof(FIntegralKey), Get_Z_Construct_UScriptStruct_FIntegralKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIntegralKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIntegralKey_Hash() { return 3671239062U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveLinearColorAtlas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
class UScriptStruct* FCurveAtlasColorAdjustments::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, Z_Construct_UPackage__Script_Engine(), TEXT("CurveAtlasColorAdjustments"), sizeof(FCurveAtlasColorAdjustments), Get_Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveAtlasColorAdjustments>()
{
	return FCurveAtlasColorAdjustments::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveAtlasColorAdjustments(FCurveAtlasColorAdjustments::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveAtlasColorAdjustments"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveAtlasColorAdjustments
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveAtlasColorAdjustments()
	{
		UScriptStruct::DeferCppStructOps<FCurveAtlasColorAdjustments>(FName(TEXT("CurveAtlasColorAdjustments")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveAtlasColorAdjustments;
	struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[];
#endif
		static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveAtlasColorAdjustments>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
	{
		((FCurveAtlasColorAdjustments*)Obj)->bChromaKeyTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCurveAtlasColorAdjustments), &Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustVibrance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustRGBCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustHue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveAtlasColorAdjustments",
		sizeof(FCurveAtlasColorAdjustments),
		alignof(FCurveAtlasColorAdjustments),
		Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveAtlasColorAdjustments"), sizeof(FCurveAtlasColorAdjustments), Get_Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Hash() { return 2540153135U; }
	DEFINE_FUNCTION(UCurveLinearColorAtlas::execGetCurvePosition)
	{
		P_GET_OBJECT(UCurveLinearColor,Z_Param_InCurve);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurvePosition(Z_Param_InCurve,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	void UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas()
	{
		UClass* Class = UCurveLinearColorAtlas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurvePosition", &UCurveLinearColorAtlas::execGetCurvePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics
	{
		struct CurveLinearColorAtlas_eventGetCurvePosition_Parms
		{
			UCurveLinearColor* InCurve;
			float Position;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCurve;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, InCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CurveLinearColorAtlas_eventGetCurvePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColorAtlas, nullptr, "GetCurvePosition", nullptr, nullptr, sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSquareResolution_MetaData[];
#endif
		static void NewProp_bSquareResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSquareResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TextureHeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GradientCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GradientCurves;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAllAdjustments_MetaData[];
#endif
		static void NewProp_bDisableAllAdjustments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAllAdjustments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCachedColorAdjustments_MetaData[];
#endif
		static void NewProp_bHasCachedColorAdjustments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCachedColorAdjustments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedColorAdjustments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedColorAdjustments;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColorAtlas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition, "GetCurvePosition" }, // 2568380729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Curves/CurveLinearColorAtlas.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "DisplayName", "Texture Width" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Set texture height equal to texture width. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Set texture height equal to texture width." },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bSquareResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution = { "bSquareResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "Category", "Curves" },
		{ "EditCondition", "!bSquareResolution" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureHeight), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner = { "GradientCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// Height of the lookup textures\n" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Height of the lookup textures" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves = { "GradientCurves", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled." },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bDisableAllAdjustments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments = { "bDisableAllAdjustments", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bHasCachedColorAdjustments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments = { "bHasCachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments = { "CachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, CachedColorAdjustments), Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams = {
		&UCurveLinearColorAtlas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveLinearColorAtlas, 1886724055);
	template<> ENGINE_API UClass* StaticClass<UCurveLinearColorAtlas>()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColorAtlas(Z_Construct_UClass_UCurveLinearColorAtlas, &UCurveLinearColorAtlas::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveLinearColorAtlas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

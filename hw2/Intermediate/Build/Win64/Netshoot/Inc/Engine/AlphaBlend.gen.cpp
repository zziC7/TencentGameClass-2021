// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/AlphaBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlphaBlend() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EAlphaBlendOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaBlendOption, Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaBlendOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAlphaBlendOption>()
	{
		return EAlphaBlendOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlphaBlendOption(EAlphaBlendOption_StaticEnum, TEXT("/Script/Engine"), TEXT("EAlphaBlendOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAlphaBlendOption_Hash() { return 435467587U; }
	UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlphaBlendOption"), 0, Get_Z_Construct_UEnum_Engine_EAlphaBlendOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAlphaBlendOption::Linear", (int64)EAlphaBlendOption::Linear },
				{ "EAlphaBlendOption::Cubic", (int64)EAlphaBlendOption::Cubic },
				{ "EAlphaBlendOption::HermiteCubic", (int64)EAlphaBlendOption::HermiteCubic },
				{ "EAlphaBlendOption::Sinusoidal", (int64)EAlphaBlendOption::Sinusoidal },
				{ "EAlphaBlendOption::QuadraticInOut", (int64)EAlphaBlendOption::QuadraticInOut },
				{ "EAlphaBlendOption::CubicInOut", (int64)EAlphaBlendOption::CubicInOut },
				{ "EAlphaBlendOption::QuarticInOut", (int64)EAlphaBlendOption::QuarticInOut },
				{ "EAlphaBlendOption::QuinticInOut", (int64)EAlphaBlendOption::QuinticInOut },
				{ "EAlphaBlendOption::CircularIn", (int64)EAlphaBlendOption::CircularIn },
				{ "EAlphaBlendOption::CircularOut", (int64)EAlphaBlendOption::CircularOut },
				{ "EAlphaBlendOption::CircularInOut", (int64)EAlphaBlendOption::CircularInOut },
				{ "EAlphaBlendOption::ExpIn", (int64)EAlphaBlendOption::ExpIn },
				{ "EAlphaBlendOption::ExpOut", (int64)EAlphaBlendOption::ExpOut },
				{ "EAlphaBlendOption::ExpInOut", (int64)EAlphaBlendOption::ExpInOut },
				{ "EAlphaBlendOption::Custom", (int64)EAlphaBlendOption::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CircularIn.Comment", "// Circular-in interpolation\n" },
				{ "CircularIn.Name", "EAlphaBlendOption::CircularIn" },
				{ "CircularIn.ToolTip", "Circular-in interpolation" },
				{ "CircularInOut.Comment", "// Circular in-out interpolation\n" },
				{ "CircularInOut.Name", "EAlphaBlendOption::CircularInOut" },
				{ "CircularInOut.ToolTip", "Circular in-out interpolation" },
				{ "CircularOut.Comment", "// Circular-out interpolation\n" },
				{ "CircularOut.Name", "EAlphaBlendOption::CircularOut" },
				{ "CircularOut.ToolTip", "Circular-out interpolation" },
				{ "Cubic.Comment", "// Cubic-in interpolation\n" },
				{ "Cubic.Name", "EAlphaBlendOption::Cubic" },
				{ "Cubic.ToolTip", "Cubic-in interpolation" },
				{ "CubicInOut.Comment", "// Cubic in-out interpolation\n" },
				{ "CubicInOut.Name", "EAlphaBlendOption::CubicInOut" },
				{ "CubicInOut.ToolTip", "Cubic in-out interpolation" },
				{ "Custom.Comment", "// Custom interpolation, will use custom curve inside an FAlphaBlend or linear if none has been set\n" },
				{ "Custom.Name", "EAlphaBlendOption::Custom" },
				{ "Custom.ToolTip", "Custom interpolation, will use custom curve inside an FAlphaBlend or linear if none has been set" },
				{ "ExpIn.Comment", "// Exponential-in interpolation\n" },
				{ "ExpIn.Name", "EAlphaBlendOption::ExpIn" },
				{ "ExpIn.ToolTip", "Exponential-in interpolation" },
				{ "ExpInOut.Comment", "// Exponential in-out interpolation\n" },
				{ "ExpInOut.Name", "EAlphaBlendOption::ExpInOut" },
				{ "ExpInOut.ToolTip", "Exponential in-out interpolation" },
				{ "ExpOut.Comment", "// Exponential-Out interpolation\n" },
				{ "ExpOut.Name", "EAlphaBlendOption::ExpOut" },
				{ "ExpOut.ToolTip", "Exponential-Out interpolation" },
				{ "HermiteCubic.Comment", "// Hermite-Cubic\n" },
				{ "HermiteCubic.Name", "EAlphaBlendOption::HermiteCubic" },
				{ "HermiteCubic.ToolTip", "Hermite-Cubic" },
				{ "Linear.Comment", "// Linear interpolation\n" },
				{ "Linear.Name", "EAlphaBlendOption::Linear" },
				{ "Linear.ToolTip", "Linear interpolation" },
				{ "ModuleRelativePath", "Public/AlphaBlend.h" },
				{ "QuadraticInOut.Comment", "// Quadratic in-out interpolation\n" },
				{ "QuadraticInOut.Name", "EAlphaBlendOption::QuadraticInOut" },
				{ "QuadraticInOut.ToolTip", "Quadratic in-out interpolation" },
				{ "QuarticInOut.Comment", "// Quartic in-out interpolation\n" },
				{ "QuarticInOut.Name", "EAlphaBlendOption::QuarticInOut" },
				{ "QuarticInOut.ToolTip", "Quartic in-out interpolation" },
				{ "QuinticInOut.Comment", "// Quintic in-out interpolation\n" },
				{ "QuinticInOut.Name", "EAlphaBlendOption::QuinticInOut" },
				{ "QuinticInOut.ToolTip", "Quintic in-out interpolation" },
				{ "Sinusoidal.Comment", "// Sinusoidal interpolation\n" },
				{ "Sinusoidal.Name", "EAlphaBlendOption::Sinusoidal" },
				{ "Sinusoidal.ToolTip", "Sinusoidal interpolation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAlphaBlendOption",
				"EAlphaBlendOption",
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
class UScriptStruct* FAlphaBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlend, Z_Construct_UPackage__Script_Engine(), TEXT("AlphaBlend"), sizeof(FAlphaBlend), Get_Z_Construct_UScriptStruct_FAlphaBlend_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAlphaBlend>()
{
	return FAlphaBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAlphaBlend(FAlphaBlend::StaticStruct, TEXT("/Script/Engine"), TEXT("AlphaBlend"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAlphaBlend
{
	FScriptStruct_Engine_StaticRegisterNativesFAlphaBlend()
	{
		UScriptStruct::DeferCppStructOps<FAlphaBlend>(FName(TEXT("AlphaBlend")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFAlphaBlend;
	struct Z_Construct_UScriptStruct_FAlphaBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Alpha Blend class that supports different blend options as well as custom curves\n */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Alpha Blend class that supports different blend options as well as custom curves" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlphaBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** If you're using Custom BlendOption, you can specify curve */" },
		{ "DisplayAfter", "BlendOption" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlphaBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Blend Time */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Blend Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlphaBlend, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blending used (Linear, Cubic, etc.) */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAlphaBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AlphaBlend",
		sizeof(FAlphaBlend),
		alignof(FAlphaBlend),
		Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AlphaBlend"), sizeof(FAlphaBlend), Get_Z_Construct_UScriptStruct_FAlphaBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAlphaBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAlphaBlend_Hash() { return 2349094369U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

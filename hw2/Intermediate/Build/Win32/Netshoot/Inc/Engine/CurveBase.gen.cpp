// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCurveBase::execGetValueRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetValueRange(Z_Param_Out_MinValue,Z_Param_Out_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCurveBase::execGetTimeRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTimeRange(Z_Param_Out_MinTime,Z_Param_Out_MaxTime);
		P_NATIVE_END;
	}
	void UCurveBase::StaticRegisterNativesUCurveBase()
	{
		UClass* Class = UCurveBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeRange", &UCurveBase::execGetTimeRange },
			{ "GetValueRange", &UCurveBase::execGetValueRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics
	{
		struct CurveBase_eventGetTimeRange_Parms
		{
			float MinTime;
			float MaxTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MinTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveBase_eventGetTimeRange_Parms, MaxTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::NewProp_MaxTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Get the time range across all curves */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Get the time range across all curves" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, nullptr, "GetTimeRange", nullptr, nullptr, sizeof(CurveBase_eventGetTimeRange_Parms), Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveBase_GetTimeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveBase_GetTimeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveBase_GetValueRange_Statics
	{
		struct CurveBase_eventGetValueRange_Parms
		{
			float MinValue;
			float MaxValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveBase_eventGetValueRange_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::NewProp_MaxValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Get the value range across all curves */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Get the value range across all curves" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveBase, nullptr, "GetValueRange", nullptr, nullptr, sizeof(CurveBase_eventGetValueRange_Parms), Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveBase_GetValueRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveBase_GetValueRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveBase_NoRegister()
	{
		return UCurveBase::StaticClass();
	}
	struct Z_Construct_UClass_UCurveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveBase_GetTimeRange, "GetTimeRange" }, // 4026938441
		{ &Z_Construct_UFunction_UCurveBase_GetValueRange, "GetValueRange" }, // 2914487976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a curve of interpolated points to evaluate over a given range\n */" },
		{ "IncludePath", "Curves/CurveBase.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "Defines a curve of interpolated points to evaluate over a given range" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveBase, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveBase.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveBase, ImportPath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveBase_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveBase_Statics::NewProp_ImportPath,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveBase_Statics::ClassParams = {
		&UCurveBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCurveBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::PropPointers), 0),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveBase, 1784230854);
	template<> ENGINE_API UClass* StaticClass<UCurveBase>()
	{
		return UCurveBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveBase(Z_Construct_UClass_UCurveBase, &UCurveBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

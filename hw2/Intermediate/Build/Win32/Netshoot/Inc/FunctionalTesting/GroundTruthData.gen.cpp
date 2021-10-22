// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Public/GroundTruthData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundTruthData() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGroundTruthData::execCanModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroundTruthData::execLoadObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->LoadObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroundTruthData::execSaveObject)
	{
		P_GET_OBJECT(UObject,Z_Param_GroundTruth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveObject(Z_Param_GroundTruth);
		P_NATIVE_END;
	}
	void UGroundTruthData::StaticRegisterNativesUGroundTruthData()
	{
		UClass* Class = UGroundTruthData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanModify", &UGroundTruthData::execCanModify },
			{ "LoadObject", &UGroundTruthData::execLoadObject },
			{ "SaveObject", &UGroundTruthData::execSaveObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroundTruthData_CanModify_Statics
	{
		struct GroundTruthData_eventCanModify_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GroundTruthData_eventCanModify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GroundTruthData_eventCanModify_Parms), &Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "CanModify", nullptr, nullptr, sizeof(GroundTruthData_eventCanModify_Parms), Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_CanModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics
	{
		struct GroundTruthData_eventLoadObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroundTruthData_eventLoadObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "LoadObject", nullptr, nullptr, sizeof(GroundTruthData_eventLoadObject_Parms), Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_LoadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics
	{
		struct GroundTruthData_eventSaveObject_Parms
		{
			UObject* GroundTruth;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroundTruth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth = { "GroundTruth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroundTruthData_eventSaveObject_Parms, GroundTruth), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "SaveObject", nullptr, nullptr, sizeof(GroundTruthData_eventSaveObject_Parms), Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_SaveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGroundTruthData_NoRegister()
	{
		return UGroundTruthData::StaticClass();
	}
	struct Z_Construct_UClass_UGroundTruthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetGroundTruth_MetaData[];
#endif
		static void NewProp_bResetGroundTruth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetGroundTruth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroundTruthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroundTruthData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroundTruthData_CanModify, "CanModify" }, // 815947337
		{ &Z_Construct_UFunction_UGroundTruthData_LoadObject, "LoadObject" }, // 2164560957
		{ &Z_Construct_UFunction_UGroundTruthData_SaveObject, "SaveObject" }, // 329354947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GroundTruthData.h" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	void Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit(void* Obj)
	{
		((UGroundTruthData*)Obj)->bResetGroundTruth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth = { "bResetGroundTruth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGroundTruthData), &Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData[] = {
		{ "Category", "Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x00220800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroundTruthData, ObjectData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroundTruthData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroundTruthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundTruthData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroundTruthData_Statics::ClassParams = {
		&UGroundTruthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroundTruthData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroundTruthData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroundTruthData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroundTruthData, 1100968600);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UGroundTruthData>()
	{
		return UGroundTruthData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroundTruthData(Z_Construct_UClass_UGroundTruthData, &UGroundTruthData::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UGroundTruthData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundTruthData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

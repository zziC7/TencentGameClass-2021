// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunEQSQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void UBTTask_RunEQSQuery::StaticRegisterNativesUBTTask_RunEQSQuery()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister()
	{
		return UBTTask_RunEQSQuery::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunEQSQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBBKey_MetaData[];
#endif
		static void NewProp_bUseBBKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Run Environment Query System Query task node.\n * Runs the specified environment query when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "Run Environment Query System Query task node.\nRuns the specified environment query when executed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** query to run */" },
		{ "DisplayName", "QueryTemplate_DEPRECATED" },
		{ "EditCondition", "!bUseBBKey" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "query to run" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner = { "QueryParams", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** optional parameters for query */" },
		{ "DisplayName", "QueryParams_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "optional parameters for query" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData[] = {
		{ "Category", "Node" },
		{ "DisplayName", "QueryConfig_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** determines which item will be stored (All = only first matching) */" },
		{ "DisplayName", "RunMode_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "determines which item will be stored (All = only first matching)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key storing an EQS query template */" },
		{ "DisplayName", "EQSQueryBlackboardKey_DEPRECATED" },
		{ "EditCondition", "bUseBBKey" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "blackboard key storing an EQS query template" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey = { "EQSQueryBlackboardKey", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData[] = {
		{ "Category", "Node" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit(void* Obj)
	{
		((UBTTask_RunEQSQuery*)Obj)->bUseBBKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey = { "bUseBBKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_RunEQSQuery), &Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunEQSQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams = {
		&UBTTask_RunEQSQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunEQSQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RunEQSQuery, 728829003);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RunEQSQuery>()
	{
		return UBTTask_RunEQSQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RunEQSQuery(Z_Construct_UClass_UBTTask_RunEQSQuery, &UBTTask_RunEQSQuery::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RunEQSQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunEQSQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

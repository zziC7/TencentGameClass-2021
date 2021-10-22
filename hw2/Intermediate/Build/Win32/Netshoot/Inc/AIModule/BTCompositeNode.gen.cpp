// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCompositeNode() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
// End Cross Module References
	static UEnum* EBTDecoratorLogic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTDecoratorLogic, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTDecoratorLogic"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTDecoratorLogic::Type>()
	{
		return EBTDecoratorLogic_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTDecoratorLogic(EBTDecoratorLogic_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTDecoratorLogic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Hash() { return 2897141882U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTDecoratorLogic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTDecoratorLogic"), 0, Get_Z_Construct_UEnum_AIModule_EBTDecoratorLogic_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTDecoratorLogic::Invalid", (int64)EBTDecoratorLogic::Invalid },
				{ "EBTDecoratorLogic::Test", (int64)EBTDecoratorLogic::Test },
				{ "EBTDecoratorLogic::And", (int64)EBTDecoratorLogic::And },
				{ "EBTDecoratorLogic::Or", (int64)EBTDecoratorLogic::Or },
				{ "EBTDecoratorLogic::Not", (int64)EBTDecoratorLogic::Not },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "And.Comment", "/** logic op: AND */" },
				{ "And.Name", "EBTDecoratorLogic::And" },
				{ "And.ToolTip", "logic op: AND" },
				{ "Comment", "// keep in sync with DescribeLogicOp() in BTCompositeNode.cpp\n" },
				{ "Invalid.Name", "EBTDecoratorLogic::Invalid" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "Not.Comment", "/** logic op: NOT */" },
				{ "Not.Name", "EBTDecoratorLogic::Not" },
				{ "Not.ToolTip", "logic op: NOT" },
				{ "Or.Comment", "/** logic op: OR */" },
				{ "Or.Name", "EBTDecoratorLogic::Or" },
				{ "Or.ToolTip", "logic op: OR" },
				{ "Test.Comment", "/** Test decorator conditions. */" },
				{ "Test.Name", "EBTDecoratorLogic::Test" },
				{ "Test.ToolTip", "Test decorator conditions." },
				{ "ToolTip", "keep in sync with DescribeLogicOp() in BTCompositeNode.cpp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTDecoratorLogic",
				"EBTDecoratorLogic::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBTChildIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTChildIndex, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTChildIndex"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTChildIndex>()
	{
		return EBTChildIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTChildIndex(EBTChildIndex_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTChildIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTChildIndex_Hash() { return 2002935538U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTChildIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTChildIndex"), 0, Get_Z_Construct_UEnum_AIModule_EBTChildIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTChildIndex::FirstNode", (int64)EBTChildIndex::FirstNode },
				{ "EBTChildIndex::TaskNode", (int64)EBTChildIndex::TaskNode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FirstNode.Name", "EBTChildIndex::FirstNode" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
				{ "TaskNode.Name", "EBTChildIndex::TaskNode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTChildIndex",
				"EBTChildIndex",
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
class UScriptStruct* FBTCompositeChild::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTCompositeChild, Z_Construct_UPackage__Script_AIModule(), TEXT("BTCompositeChild"), sizeof(FBTCompositeChild), Get_Z_Construct_UScriptStruct_FBTCompositeChild_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTCompositeChild>()
{
	return FBTCompositeChild::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBTCompositeChild(FBTCompositeChild::StaticStruct, TEXT("/Script/AIModule"), TEXT("BTCompositeChild"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild
{
	FScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild()
	{
		UScriptStruct::DeferCppStructOps<FBTCompositeChild>(FName(TEXT("BTCompositeChild")));
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild;
	struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildComposite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildComposite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decorators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decorators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decorators;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecoratorOps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecoratorOps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecoratorOps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTCompositeChild>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData[] = {
		{ "Comment", "/** child node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite = { "ChildComposite", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTCompositeChild, ChildComposite), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTCompositeChild, ChildTask), Z_Construct_UClass_UBTTaskNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner = { "Decorators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData[] = {
		{ "Comment", "/** execution decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "execution decorators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators = { "Decorators", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTCompositeChild, Decorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner = { "DecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData[] = {
		{ "Comment", "/** logic operations for decorators */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "logic operations for decorators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps = { "DecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTCompositeChild, DecoratorOps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildComposite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_ChildTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_Decorators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTCompositeChild_Statics::NewProp_DecoratorOps,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTCompositeChild_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BTCompositeChild",
		sizeof(FBTCompositeChild),
		alignof(FBTCompositeChild),
		Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTCompositeChild_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBTCompositeChild()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BTCompositeChild"), sizeof(FBTCompositeChild), Get_Z_Construct_UScriptStruct_FBTCompositeChild_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBTCompositeChild_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBTCompositeChild_Hash() { return 3879175455U; }
class UScriptStruct* FBTDecoratorLogic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBTDecoratorLogic, Z_Construct_UPackage__Script_AIModule(), TEXT("BTDecoratorLogic"), sizeof(FBTDecoratorLogic), Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBTDecoratorLogic>()
{
	return FBTDecoratorLogic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBTDecoratorLogic(FBTDecoratorLogic::StaticStruct, TEXT("/Script/AIModule"), TEXT("BTDecoratorLogic"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic
{
	FScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic()
	{
		UScriptStruct::DeferCppStructOps<FBTDecoratorLogic>(FName(TEXT("BTDecoratorLogic")));
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic;
	struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBTDecoratorLogic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTDecoratorLogic, Operation), Z_Construct_UEnum_AIModule_EBTDecoratorLogic, METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBTDecoratorLogic, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::NewProp_Number,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BTDecoratorLogic",
		sizeof(FBTDecoratorLogic),
		alignof(FBTDecoratorLogic),
		Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BTDecoratorLogic"), sizeof(FBTDecoratorLogic), Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBTDecoratorLogic_Hash() { return 714517521U; }
	void UBTCompositeNode::StaticRegisterNativesUBTCompositeNode()
	{
	}
	UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister()
	{
		return UBTCompositeNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTCompositeNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Services;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyDecoratorScope_MetaData[];
#endif
		static void NewProp_bApplyDecoratorScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyDecoratorScope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTCompositeNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTCompositeNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBTCompositeChild, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData[] = {
		{ "Comment", "/** child nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "child nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTCompositeNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData[] = {
		{ "Comment", "/** service nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "service nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTCompositeNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTCompositeNode.h" },
		{ "ToolTip", "if set, all decorators in branch below will be removed when execution flow leaves (decorators on this node are not affected)" },
	};
#endif
	void Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit(void* Obj)
	{
		((UBTCompositeNode*)Obj)->bApplyDecoratorScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope = { "bApplyDecoratorScope", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTCompositeNode), &Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_Services,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTCompositeNode_Statics::NewProp_bApplyDecoratorScope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTCompositeNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTCompositeNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams = {
		&UBTCompositeNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTCompositeNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTCompositeNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTCompositeNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTCompositeNode, 2029640338);
	template<> AIMODULE_API UClass* StaticClass<UBTCompositeNode>()
	{
		return UBTCompositeNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTCompositeNode(Z_Construct_UClass_UBTCompositeNode, &UBTCompositeNode::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTCompositeNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCompositeNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

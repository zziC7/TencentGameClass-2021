// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CompareBBEntries() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	static UEnum* EBlackBoardEntryComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, Z_Construct_UPackage__Script_AIModule(), TEXT("EBlackBoardEntryComparison"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBlackBoardEntryComparison::Type>()
	{
		return EBlackBoardEntryComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlackBoardEntryComparison(EBlackBoardEntryComparison_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBlackBoardEntryComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Hash() { return 3812403939U; }
	UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlackBoardEntryComparison"), 0, Get_Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlackBoardEntryComparison::Equal", (int64)EBlackBoardEntryComparison::Equal },
				{ "EBlackBoardEntryComparison::NotEqual", (int64)EBlackBoardEntryComparison::NotEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.DisplayName", "Is Equal To" },
				{ "Equal.Name", "EBlackBoardEntryComparison::Equal" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
				{ "NotEqual.Name", "EBlackBoardEntryComparison::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBlackBoardEntryComparison",
				"EBlackBoardEntryComparison::Type",
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
	void UBTDecorator_CompareBBEntries::StaticRegisterNativesUBTDecorator_CompareBBEntries()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister()
	{
		return UBTDecorator_CompareBBEntries::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blackboard comparison decorator node.\n * A decorator node that bases its condition on a comparison between two Blackboard keys.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "Blackboard comparison decorator node.\nA decorator node that bases its condition on a comparison between two Blackboard keys." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** operation type */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "operation type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, Operator), Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA = { "BlackboardKeyA", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB = { "BlackboardKeyB", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CompareBBEntries>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::ClassParams = {
		&UBTDecorator_CompareBBEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_CompareBBEntries, 2015393194);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_CompareBBEntries>()
	{
		return UBTDecorator_CompareBBEntries::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CompareBBEntries(Z_Construct_UClass_UBTDecorator_CompareBBEntries, &UBTDecorator_CompareBBEntries::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_CompareBBEntries"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CompareBBEntries);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

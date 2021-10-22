// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_DoesPathExist() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	static UEnum* EPathExistanceQueryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathExistanceQueryType, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathExistanceQueryType"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathExistanceQueryType::Type>()
	{
		return EPathExistanceQueryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathExistanceQueryType(EPathExistanceQueryType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathExistanceQueryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Hash() { return 107375857U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathExistanceQueryType"), 0, Get_Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathExistanceQueryType::NavmeshRaycast2D", (int64)EPathExistanceQueryType::NavmeshRaycast2D },
				{ "EPathExistanceQueryType::HierarchicalQuery", (int64)EPathExistanceQueryType::HierarchicalQuery },
				{ "EPathExistanceQueryType::RegularPathFinding", (int64)EPathExistanceQueryType::RegularPathFinding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HierarchicalQuery.Name", "EPathExistanceQueryType::HierarchicalQuery" },
				{ "HierarchicalQuery.ToolTip", "Fast" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
				{ "NavmeshRaycast2D.Name", "EPathExistanceQueryType::NavmeshRaycast2D" },
				{ "NavmeshRaycast2D.ToolTip", "Really Fast" },
				{ "RegularPathFinding.Name", "EPathExistanceQueryType::RegularPathFinding" },
				{ "RegularPathFinding.ToolTip", "Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPathExistanceQueryType",
				"EPathExistanceQueryType::Type",
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
	void UBTDecorator_DoesPathExist::StaticRegisterNativesUBTDecorator_DoesPathExist()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister()
	{
		return UBTDecorator_DoesPathExist::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelf_MetaData[];
#endif
		static void NewProp_bUseSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathQueryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathQueryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooldown decorator node.\n * A decorator node that bases its condition on whether a path exists between two points from the Blackboard.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a path exists between two points from the Blackboard." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA = { "BlackboardKeyA", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB = { "BlackboardKeyB", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData[] = {
		{ "Comment", "// deprecated, set value of blackboard key A on initialization\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "deprecated, set value of blackboard key A on initialization" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_SetBit(void* Obj)
	{
		((UBTDecorator_DoesPathExist*)Obj)->bUseSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf = { "bUseSelf", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator_DoesPathExist), &Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType = { "PathQueryType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_DoesPathExist, PathQueryType), Z_Construct_UEnum_AIModule_EPathExistanceQueryType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_DoesPathExist, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_DoesPathExist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::ClassParams = {
		&UBTDecorator_DoesPathExist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_DoesPathExist, 3784723631);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_DoesPathExist>()
	{
		return UBTDecorator_DoesPathExist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_DoesPathExist(Z_Construct_UClass_UBTDecorator_DoesPathExist, &UBTDecorator_DoesPathExist::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_DoesPathExist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_DoesPathExist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

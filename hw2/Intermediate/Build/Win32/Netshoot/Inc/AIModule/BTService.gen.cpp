// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService::StaticRegisterNativesUBTService()
	{
	}
	UClass* Z_Construct_UClass_UBTService_NoRegister()
	{
		return UBTService::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallTickOnSearchStart_MetaData[];
#endif
		static void NewProp_bCallTickOnSearchStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallTickOnSearchStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestartTimerOnEachActivation_MetaData[];
#endif
		static void NewProp_bRestartTimerOnEachActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestartTimerOnEachActivation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTAuxiliaryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Behavior Tree service nodes is designed to perform \"background\" tasks that update AI's knowledge.\n *\n *  Services are being executed when underlying branch of behavior tree becomes active,\n *  but unlike tasks they don't return any results and can't directly affect execution flow.\n *\n *  Usually they perform periodical checks (see TickNode) and often store results in blackboard.\n *  If any decorator node below requires results of check beforehand, use OnSearchStart function.\n *   Keep in mind that any checks performed there have to be instantaneous!\n *\x09\n *  Other typical use case is creating a marker when specific branch is being executed\n *  (see OnBecomeRelevant, OnCeaseRelevant), by setting a flag in blackboard.\n *\n *  Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *   - OnBecomeRelevant (from UBTAuxiliaryNode)\n *   - OnCeaseRelevant (from UBTAuxiliaryNode)\n *   - TickNode (from UBTAuxiliaryNode)\n *   - OnSearchStart\n *\n *  If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n *  Template nodes are shared across all behavior tree components using the same tree asset and must store\n *  their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n */" },
		{ "IncludePath", "BehaviorTree/BTService.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "Behavior Tree service nodes is designed to perform \"background\" tasks that update AI's knowledge.\n\nServices are being executed when underlying branch of behavior tree becomes active,\nbut unlike tasks they don't return any results and can't directly affect execution flow.\n\nUsually they perform periodical checks (see TickNode) and often store results in blackboard.\nIf any decorator node below requires results of check beforehand, use OnSearchStart function.\nKeep in mind that any checks performed there have to be instantaneous!\n\nOther typical use case is creating a marker when specific branch is being executed\n(see OnBecomeRelevant, OnCeaseRelevant), by setting a flag in blackboard.\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n- OnBecomeRelevant (from UBTAuxiliaryNode)\n- OnCeaseRelevant (from UBTAuxiliaryNode)\n- TickNode (from UBTAuxiliaryNode)\n- OnSearchStart\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Service" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** defines time span between subsequent ticks of the service */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "defines time span between subsequent ticks of the service" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService, Interval), METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Service" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** adds random range to service's Interval */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "adds random range to service's Interval" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService, RandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** call Tick event when task search enters this node (SearchStart will be called as well) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "call Tick event when task search enters this node (SearchStart will be called as well)" },
	};
#endif
	void Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_SetBit(void* Obj)
	{
		((UBTService*)Obj)->bCallTickOnSearchStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart = { "bCallTickOnSearchStart", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTService), &Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** if set, next tick time will be always reset to service's interval when node is activated */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "if set, next tick time will be always reset to service's interval when node is activated" },
	};
#endif
	void Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_SetBit(void* Obj)
	{
		((UBTService*)Obj)->bRestartTimerOnEachActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation = { "bRestartTimerOnEachActivation", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTService), &Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Statics::ClassParams = {
		&UBTService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService, 3035561128);
	template<> AIMODULE_API UClass* StaticClass<UBTService>()
	{
		return UBTService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService(Z_Construct_UClass_UBTService, &UBTService::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

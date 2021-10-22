// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequenceEvaluator() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	static UEnum* ESequenceEvalReinit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESequenceEvalReinit"));
		}
		return Singleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESequenceEvalReinit::Type>()
	{
		return ESequenceEvalReinit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESequenceEvalReinit(ESequenceEvalReinit_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ESequenceEvalReinit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Hash() { return 17263944U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESequenceEvalReinit"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESequenceEvalReinit::NoReset", (int64)ESequenceEvalReinit::NoReset },
				{ "ESequenceEvalReinit::StartPosition", (int64)ESequenceEvalReinit::StartPosition },
				{ "ESequenceEvalReinit::ExplicitTime", (int64)ESequenceEvalReinit::ExplicitTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ExplicitTime.Comment", "/** Reset InternalTimeAccumulator to ExplicitTime */" },
				{ "ExplicitTime.Name", "ESequenceEvalReinit::ExplicitTime" },
				{ "ExplicitTime.ToolTip", "Reset InternalTimeAccumulator to ExplicitTime" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
				{ "NoReset.Comment", "/** Do not reset InternalTimeAccumulator */" },
				{ "NoReset.Name", "ESequenceEvalReinit::NoReset" },
				{ "NoReset.ToolTip", "Do not reset InternalTimeAccumulator" },
				{ "StartPosition.Comment", "/** Reset InternalTimeAccumulator to StartPosition */" },
				{ "StartPosition.Name", "ESequenceEvalReinit::StartPosition" },
				{ "StartPosition.ToolTip", "Reset InternalTimeAccumulator to StartPosition" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				nullptr,
				"ESequenceEvalReinit",
				"ESequenceEvalReinit::Type",
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

static_assert(std::is_polymorphic<FAnimNode_SequenceEvaluator>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_SequenceEvaluator cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

class UScriptStruct* FAnimNode_SequenceEvaluator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SequenceEvaluator"), sizeof(FAnimNode_SequenceEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SequenceEvaluator>()
{
	return FAnimNode_SequenceEvaluator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SequenceEvaluator(FAnimNode_SequenceEvaluator::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SequenceEvaluator"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SequenceEvaluator
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SequenceEvaluator()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_SequenceEvaluator>(FName(TEXT("AnimNode_SequenceEvaluator")));
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SequenceEvaluator;
	struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplicitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[];
#endif
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeleportToExplicitTime_MetaData[];
#endif
		static void NewProp_bTeleportToExplicitTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToExplicitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReinitializationBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReinitializationBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n// This node will not trigger any notifies present in the associated sequence.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequenceEvaluator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to evaluate\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to evaluate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The time at which to evaluate the associated sequence\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The time at which to evaluate the associated sequence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime = { "ExplicitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, ExplicitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This only works if bTeleportToExplicitTime is false OR this node is set to use SyncGroup" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((FAnimNode_SequenceEvaluator*)Obj)->bShouldLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n\x09If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n\x09Note: using a sync group forces advancing time regardless of what this option is set to. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to explicit time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n      If false, will advance time (will trigger notifies, extract root motion if applicable, etc.)\n      Note: using a sync group forces advancing time regardless of what this option is set to." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_SetBit(void* Obj)
	{
		((FAnimNode_SequenceEvaluator*)Obj)->bTeleportToExplicitTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime = { "bTeleportToExplicitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequenceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What to do when SequenceEvaluator is reinitialized */" },
		{ "DisplayAfter", "StartPosition" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "ToolTip", "What to do when SequenceEvaluator is reinitialized" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior = { "ReinitializationBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, ReinitializationBehavior), Z_Construct_UEnum_AnimGraphRuntime_ESequenceEvalReinit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SequenceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position, it only applies when ReinitializationBehavior == StartPosition. Only used when bTeleportToExplicitTime is false." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequenceEvaluator, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ExplicitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bShouldLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_bTeleportToExplicitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_ReinitializationBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::NewProp_StartPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_SequenceEvaluator",
		sizeof(FAnimNode_SequenceEvaluator),
		alignof(FAnimNode_SequenceEvaluator),
		Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SequenceEvaluator"), sizeof(FAnimNode_SequenceEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Hash() { return 226921589U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

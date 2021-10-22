// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/AnimNode_LiveLinkPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LiveLinkPose() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LiveLinkPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LiveLinkPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_LiveLinkPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, Z_Construct_UPackage__Script_LiveLink(), TEXT("AnimNode_LiveLinkPose"), sizeof(FAnimNode_LiveLinkPose), Get_Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Hash());
	}
	return Singleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FAnimNode_LiveLinkPose>()
{
	return FAnimNode_LiveLinkPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LiveLinkPose(FAnimNode_LiveLinkPose::StaticStruct, TEXT("/Script/LiveLink"), TEXT("AnimNode_LiveLinkPose"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLink_StaticRegisterNativesFAnimNode_LiveLinkPose
{
	FScriptStruct_LiveLink_StaticRegisterNativesFAnimNode_LiveLinkPose()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_LiveLinkPose>(FName(TEXT("AnimNode_LiveLinkPose")));
	}
} ScriptStruct_LiveLink_StaticRegisterNativesFAnimNode_LiveLinkPose;
	struct Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubjectName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LiveLinkPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, LiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, SubjectName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, RetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LiveLinkPose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LiveLinkPose",
		sizeof(FAnimNode_LiveLinkPose),
		alignof(FAnimNode_LiveLinkPose),
		Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LiveLinkPose"), sizeof(FAnimNode_LiveLinkPose), Get_Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Hash() { return 1332985568U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

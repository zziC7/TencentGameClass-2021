// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkInstance() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FLiveLinkInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

class UScriptStruct* FLiveLinkInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy, Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkInstanceProxy"), sizeof(FLiveLinkInstanceProxy), Get_Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Hash());
	}
	return Singleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkInstanceProxy>()
{
	return FLiveLinkInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkInstanceProxy(FLiveLinkInstanceProxy::StaticStruct, TEXT("/Script/LiveLink"), TEXT("LiveLinkInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkInstanceProxy
{
	FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkInstanceProxy>(FName(TEXT("LiveLinkInstanceProxy")));
	}
} ScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkInstanceProxy;
	struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInstanceProxy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode = { "PoseNode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkInstanceProxy, PoseNode), Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::NewProp_PoseNode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"LiveLinkInstanceProxy",
		sizeof(FLiveLinkInstanceProxy),
		alignof(FLiveLinkInstanceProxy),
		Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkInstanceProxy"), sizeof(FLiveLinkInstanceProxy), Get_Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Hash() { return 1858761541U; }
	DEFINE_FUNCTION(ULiveLinkInstance::execSetRetargetAsset)
	{
		P_GET_OBJECT(UClass,Z_Param_RetargetAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRetargetAsset(Z_Param_RetargetAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkInstance::execSetSubject)
	{
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubject(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	void ULiveLinkInstance::StaticRegisterNativesULiveLinkInstance()
	{
		UClass* Class = ULiveLinkInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRetargetAsset", &ULiveLinkInstance::execSetRetargetAsset },
			{ "SetSubject", &ULiveLinkInstance::execSetSubject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics
	{
		struct LiveLinkInstance_eventSetRetargetAsset_Parms
		{
			TSubclassOf<ULiveLinkRetargetAsset>  RetargetAsset;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkInstance_eventSetRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::NewProp_RetargetAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetRetargetAsset", nullptr, nullptr, sizeof(LiveLinkInstance_eventSetRetargetAsset_Parms), Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics
	{
		struct LiveLinkInstance_eventSetSubject_Parms
		{
			FLiveLinkSubjectName SubjectName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkInstance_eventSetSubject_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Live Link" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkInstance, nullptr, "SetSubject", nullptr, nullptr, sizeof(LiveLinkInstance_eventSetSubject_Parms), Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkInstance_SetSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkInstance_SetSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkInstance_NoRegister()
	{
		return ULiveLinkInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetRetargetAsset, "SetRetargetAsset" }, // 451173383
		{ &Z_Construct_UFunction_ULiveLinkInstance_SetSubject, "SetSubject" }, // 1963642841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LiveLinkInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "Comment", "// Cache for GC\n" },
		{ "ModuleRelativePath", "Public/LiveLinkInstance.h" },
		{ "ToolTip", "Cache for GC" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkInstance, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkInstance_Statics::NewProp_CurrentRetargetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams = {
		&ULiveLinkInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkInstance, 3143916266);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkInstance>()
	{
		return ULiveLinkInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkInstance(Z_Construct_UClass_ULiveLinkInstance, &ULiveLinkInstance::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

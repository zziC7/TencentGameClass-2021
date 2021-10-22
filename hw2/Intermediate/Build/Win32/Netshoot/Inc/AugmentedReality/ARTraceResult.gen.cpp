// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARTraceResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTraceResult() {}
// Cross Module References
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FARTraceResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUGMENTEDREALITY_API uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARTraceResult, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARTraceResult"), sizeof(FARTraceResult), Get_Z_Construct_UScriptStruct_FARTraceResult_Hash());
	}
	return Singleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARTraceResult>()
{
	return FARTraceResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARTraceResult(FARTraceResult::StaticStruct, TEXT("/Script/AugmentedReality"), TEXT("ARTraceResult"), false, nullptr, nullptr);
static struct FScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult
{
	FScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult()
	{
		UScriptStruct::DeferCppStructOps<FARTraceResult>(FName(TEXT("ARTraceResult")));
	}
} ScriptStruct_AugmentedReality_StaticRegisterNativesFARTraceResult;
	struct Z_Construct_UScriptStruct_FARTraceResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromCamera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/**\n * A result of an intersection found during a hit-test.\n */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "A result of an intersection found during a hit-test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARTraceResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARTraceResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData[] = {
		{ "Comment", "/** Distance (in Unreal Units) between the camera and the point where the line trace contacted tracked geometry. */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "Distance (in Unreal Units) between the camera and the point where the line trace contacted tracked geometry." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera = { "DistanceFromCamera", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARTraceResult, DistanceFromCamera), METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Comment", "/** The trace channel that generated this trace result. (used for filtering) */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "The trace channel that generated this trace result. (used for filtering)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARTraceResult, TraceChannel), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The transformation matrix that defines the intersection's rotation, translation and scale\n\x09 * in AR system's local space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "The transformation matrix that defines the intersection's rotation, translation and scale\nin AR system's local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARTraceResult, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData[] = {
		{ "Comment", "/**\n\x09 * A pointer to the geometry data that was intersected by this trace, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "A pointer to the geometry data that was intersected by this trace, if any." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARTraceResult, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARTraceResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARTraceResult",
		sizeof(FARTraceResult),
		alignof(FARTraceResult),
		Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARTraceResult"), sizeof(FARTraceResult), Get_Z_Construct_UScriptStruct_FARTraceResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARTraceResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARTraceResult_Hash() { return 4017388079U; }
	void UARTraceResultDummy::StaticRegisterNativesUARTraceResultDummy()
	{
	}
	UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister()
	{
		return UARTraceResultDummy::StaticClass();
	}
	struct Z_Construct_UClass_UARTraceResultDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTraceResultDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARTraceResult.h" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTraceResultDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTraceResultDummy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTraceResultDummy_Statics::ClassParams = {
		&UARTraceResultDummy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTraceResultDummy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTraceResultDummy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTraceResultDummy, 3946146640);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTraceResultDummy>()
	{
		return UARTraceResultDummy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTraceResultDummy(Z_Construct_UClass_UARTraceResultDummy, &UARTraceResultDummy::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTraceResultDummy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultDummy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

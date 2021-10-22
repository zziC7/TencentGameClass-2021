// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkTransformTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkTransformBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkTransformBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

class UScriptStruct* FLiveLinkTransformBlueprintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformBlueprintData"), sizeof(FLiveLinkTransformBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformBlueprintData>()
{
	return FLiveLinkTransformBlueprintData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTransformBlueprintData(FLiveLinkTransformBlueprintData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTransformBlueprintData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformBlueprintData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformBlueprintData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkTransformBlueprintData>(FName(TEXT("LiveLinkTransformBlueprintData")));
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformBlueprintData;
	struct Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle transform data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Facility structure to handle transform data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformBlueprintData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkTransformBlueprintData",
		sizeof(FLiveLinkTransformBlueprintData),
		alignof(FLiveLinkTransformBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTransformBlueprintData"), sizeof(FLiveLinkTransformBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Hash() { return 386266099U; }

static_assert(std::is_polymorphic<FLiveLinkTransformFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkTransformFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");

class UScriptStruct* FLiveLinkTransformFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformFrameData"), sizeof(FLiveLinkTransformFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformFrameData>()
{
	return FLiveLinkTransformFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTransformFrameData(FLiveLinkTransformFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTransformFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformFrameData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkTransformFrameData>(FName(TEXT("LiveLinkTransformFrameData")));
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformFrameData;
	struct Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Transform \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data for Transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Transform of the frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Transform of the frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkTransformFrameData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"LiveLinkTransformFrameData",
		sizeof(FLiveLinkTransformFrameData),
		alignof(FLiveLinkTransformFrameData),
		Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTransformFrameData"), sizeof(FLiveLinkTransformFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Hash() { return 1336816851U; }

static_assert(std::is_polymorphic<FLiveLinkTransformStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkTransformStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");

class UScriptStruct* FLiveLinkTransformStaticData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformStaticData"), sizeof(FLiveLinkTransformStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformStaticData>()
{
	return FLiveLinkTransformStaticData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkTransformStaticData(FLiveLinkTransformStaticData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkTransformStaticData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformStaticData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformStaticData()
	{
		UScriptStruct::DeferCppStructOps<FLiveLinkTransformStaticData>(FName(TEXT("LiveLinkTransformStaticData")));
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkTransformStaticData;
	struct Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocationSupported_MetaData[];
#endif
		static void NewProp_bIsLocationSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocationSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRotationSupported_MetaData[];
#endif
		static void NewProp_bIsRotationSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRotationSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScaleSupported_MetaData[];
#endif
		static void NewProp_bIsScaleSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScaleSupported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Transform data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data for Transform data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformStaticData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether location in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether location in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsLocationSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported = { "bIsLocationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether rotation in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether rotation in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsRotationSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported = { "bIsRotationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether scale in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether scale in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsScaleSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported = { "bIsScaleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
		&NewStructOps,
		"LiveLinkTransformStaticData",
		sizeof(FLiveLinkTransformStaticData),
		alignof(FLiveLinkTransformStaticData),
		Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkTransformStaticData"), sizeof(FLiveLinkTransformStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Hash() { return 1648852699U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

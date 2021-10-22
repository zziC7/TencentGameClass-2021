// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/PerPlatformProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerPlatformProperties() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
// End Cross Module References
class UScriptStruct* FPerPlatformBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerPlatformBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformBool, Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformBool"), sizeof(FPerPlatformBool), Get_Z_Construct_UScriptStruct_FPerPlatformBool_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformBool>()
{
	return FPerPlatformBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerPlatformBool(FPerPlatformBool::StaticStruct, TEXT("/Script/Engine"), TEXT("PerPlatformBool"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerPlatformBool
{
	FScriptStruct_Engine_StaticRegisterNativesFPerPlatformBool()
	{
		UScriptStruct::DeferCppStructOps<FPerPlatformBool>(FName(TEXT("PerPlatformBool")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerPlatformBool;
	struct Z_Construct_UScriptStruct_FPerPlatformBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static void NewProp_Default_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PerPlatform_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** FPerPlatformBool - bool property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformBool - bool property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit(void* Obj)
	{
		((FPerPlatformBool*)Obj)->Default = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPerPlatformBool), &Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerPlatformBool, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformBool",
		sizeof(FPerPlatformBool),
		alignof(FPerPlatformBool),
		Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerPlatformBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerPlatformBool"), sizeof(FPerPlatformBool), Get_Z_Construct_UScriptStruct_FPerPlatformBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerPlatformBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerPlatformBool_Hash() { return 1862428974U; }
class UScriptStruct* FPerPlatformFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFloat, Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFloat"), sizeof(FPerPlatformFloat), Get_Z_Construct_UScriptStruct_FPerPlatformFloat_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformFloat>()
{
	return FPerPlatformFloat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerPlatformFloat(FPerPlatformFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("PerPlatformFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat()
	{
		UScriptStruct::DeferCppStructOps<FPerPlatformFloat>(FName(TEXT("PerPlatformFloat")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat;
	struct Z_Construct_UScriptStruct_FPerPlatformFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerPlatform_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams[] = {
		{ "CanFlattenStruct", "" },
		{ "Comment", "/** FPerPlatformFloat - float property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFloat - float property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerPlatformFloat, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerPlatformFloat, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformFloat",
		sizeof(FPerPlatformFloat),
		alignof(FPerPlatformFloat),
		Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerPlatformFloat"), sizeof(FPerPlatformFloat), Get_Z_Construct_UScriptStruct_FPerPlatformFloat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_Hash() { return 765104388U; }
class UScriptStruct* FFreezablePerPlatformInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreezablePerPlatformInt, Z_Construct_UPackage__Script_Engine(), TEXT("FreezablePerPlatformInt"), sizeof(FFreezablePerPlatformInt), Get_Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFreezablePerPlatformInt>()
{
	return FFreezablePerPlatformInt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFreezablePerPlatformInt(FFreezablePerPlatformInt::StaticStruct, TEXT("/Script/Engine"), TEXT("FreezablePerPlatformInt"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFreezablePerPlatformInt
{
	FScriptStruct_Engine_StaticRegisterNativesFFreezablePerPlatformInt()
	{
		UScriptStruct::DeferCppStructOps<FFreezablePerPlatformInt>(FName(TEXT("FreezablePerPlatformInt")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFFreezablePerPlatformInt;
	struct Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreezablePerPlatformInt>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FreezablePerPlatformInt",
		sizeof(FFreezablePerPlatformInt),
		alignof(FFreezablePerPlatformInt),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FreezablePerPlatformInt"), sizeof(FFreezablePerPlatformInt), Get_Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Hash() { return 3298402854U; }
class UScriptStruct* FPerPlatformInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformInt, Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformInt"), sizeof(FPerPlatformInt), Get_Z_Construct_UScriptStruct_FPerPlatformInt_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformInt>()
{
	return FPerPlatformInt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerPlatformInt(FPerPlatformInt::StaticStruct, TEXT("/Script/Engine"), TEXT("PerPlatformInt"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt
{
	FScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt()
	{
		UScriptStruct::DeferCppStructOps<FPerPlatformInt>(FName(TEXT("PerPlatformInt")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt;
	struct Z_Construct_UScriptStruct_FPerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerPlatform_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** FPerPlatformInt - int32 property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformInt - int32 property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformInt>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerPlatformInt, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerPlatformInt, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformInt",
		sizeof(FPerPlatformInt),
		alignof(FPerPlatformInt),
		Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerPlatformInt"), sizeof(FPerPlatformInt), Get_Z_Construct_UScriptStruct_FPerPlatformInt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_Hash() { return 2047070604U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

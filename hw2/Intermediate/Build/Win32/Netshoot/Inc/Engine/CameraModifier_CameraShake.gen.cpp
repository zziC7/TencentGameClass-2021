// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraModifier_CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraShakeInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FActiveCameraShakeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveCameraShakeInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveCameraShakeInfo"), sizeof(FActiveCameraShakeInfo), Get_Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveCameraShakeInfo>()
{
	return FActiveCameraShakeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveCameraShakeInfo(FActiveCameraShakeInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ActiveCameraShakeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActiveCameraShakeInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFActiveCameraShakeInfo()
	{
		UScriptStruct::DeferCppStructOps<FActiveCameraShakeInfo>(FName(TEXT("ActiveCameraShakeInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFActiveCameraShakeInfo;
	struct Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShakeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ShakeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCustomInitialized_MetaData[];
#endif
		static void NewProp_bIsCustomInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCustomInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveCameraShakeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance = { "ShakeInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraShakeInfo, ShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource = { "ShakeSource", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraShakeInfo, ShakeSource), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_SetBit(void* Obj)
	{
		((FActiveCameraShakeInfo*)Obj)->bIsCustomInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized = { "bIsCustomInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActiveCameraShakeInfo), &Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_ShakeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::NewProp_bIsCustomInitialized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveCameraShakeInfo",
		sizeof(FActiveCameraShakeInfo),
		alignof(FActiveCameraShakeInfo),
		Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraShakeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveCameraShakeInfo"), sizeof(FActiveCameraShakeInfo), Get_Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Hash() { return 3133493285U; }
class UScriptStruct* FPooledCameraShakes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledCameraShakes, Z_Construct_UPackage__Script_Engine(), TEXT("PooledCameraShakes"), sizeof(FPooledCameraShakes), Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPooledCameraShakes>()
{
	return FPooledCameraShakes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPooledCameraShakes(FPooledCameraShakes::StaticStruct, TEXT("/Script/Engine"), TEXT("PooledCameraShakes"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes
{
	FScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes()
	{
		UScriptStruct::DeferCppStructOps<FPooledCameraShakes>(FName(TEXT("PooledCameraShakes")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes;
	struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PooledShakes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledShakes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PooledShakes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledCameraShakes>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner = { "PooledShakes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes = { "PooledShakes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPooledCameraShakes, PooledShakes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PooledCameraShakes",
		sizeof(FPooledCameraShakes),
		alignof(FPooledCameraShakes),
		Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PooledCameraShakes"), sizeof(FPooledCameraShakes), Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash() { return 2063285311U; }
	void UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake()
	{
	}
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveShakes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveShakes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveShakes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpiredPooledShakesMap_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExpiredPooledShakesMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiredPooledShakesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExpiredPooledShakesMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitScreenShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitScreenShakeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShakeBase to \n * the owning camera.\n */" },
		{ "IncludePath", "Camera/CameraModifier_CameraShake.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShakeBase to\nthe owning camera." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner = { "ActiveShakes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveCameraShakeInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData[] = {
		{ "Comment", "/** List of active CameraShake instances */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "List of active CameraShake instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes = { "ActiveShakes", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, ActiveShakes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPooledCameraShakes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp = { "ExpiredPooledShakesMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, ExpiredPooledShakesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData[] = {
		{ "Category", "CameraModifier_CameraShake" },
		{ "Comment", "/** Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale = { "SplitScreenShakeScale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModifier_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier_CameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams = {
		&UCameraModifier_CameraShake::StaticClass,
		"Camera",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraModifier_CameraShake, 3770685574);
	template<> ENGINE_API UClass* StaticClass<UCameraModifier_CameraShake>()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraModifier_CameraShake(Z_Construct_UClass_UCameraModifier_CameraShake, &UCameraModifier_CameraShake::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraModifier_CameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier_CameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

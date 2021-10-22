// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ReplaySubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UReplaySubsystem::StaticRegisterNativesUReplaySubsystem()
	{
	}
	UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister()
	{
		return UReplaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UReplaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadDefaultMapOnStop_MetaData[];
#endif
		static void NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadDefaultMapOnStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Replay Subsystem" },
		{ "IncludePath", "ReplaySubsystem.h" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Whether to reload the default map when StopReplay is called.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Whether to reload the default map when StopReplay is called." },
	};
#endif
	void Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj)
	{
		((UReplaySubsystem*)Obj)->bLoadDefaultMapOnStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop = { "bLoadDefaultMapOnStop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplaySubsystem), &Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams = {
		&UReplaySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplaySubsystem, 60861596);
	template<> ENGINE_API UClass* StaticClass<UReplaySubsystem>()
	{
		return UReplaySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplaySubsystem(Z_Construct_UClass_UReplaySubsystem, &UReplaySubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UReplaySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

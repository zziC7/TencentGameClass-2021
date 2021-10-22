// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/DefaultCameraShakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultCameraShakeBase() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultCameraShakeBase_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultCameraShakeBase();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	void UDefaultCameraShakeBase::StaticRegisterNativesUDefaultCameraShakeBase()
	{
	}
	UClass* Z_Construct_UClass_UDefaultCameraShakeBase_NoRegister()
	{
		return UDefaultCameraShakeBase::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultCameraShakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultCameraShakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Like UCameraShakeBase but with a perlin noise shake pattern by default, for convenience.\n */" },
		{ "IncludePath", "DefaultCameraShakeBase.h" },
		{ "ModuleRelativePath", "Public/DefaultCameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Like UCameraShakeBase but with a perlin noise shake pattern by default, for convenience." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultCameraShakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultCameraShakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultCameraShakeBase_Statics::ClassParams = {
		&UDefaultCameraShakeBase::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultCameraShakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultCameraShakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultCameraShakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultCameraShakeBase, 1237797532);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDefaultCameraShakeBase>()
	{
		return UDefaultCameraShakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultCameraShakeBase(Z_Construct_UClass_UDefaultCameraShakeBase, &UDefaultCameraShakeBase::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UDefaultCameraShakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultCameraShakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

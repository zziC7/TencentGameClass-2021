// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/KillZVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillZVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AKillZVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AKillZVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AKillZVolume::StaticRegisterNativesAKillZVolume()
	{
	}
	UClass* Z_Construct_UClass_AKillZVolume_NoRegister()
	{
		return AKillZVolume::StaticClass();
	}
	struct Z_Construct_UClass_AKillZVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillZVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* KillZVolume is a volume used to determine when actors should be killed. Killing logic is overridden in FellOutOfWorld\n* \n* @see FellOutOfWorld\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/KillZVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/KillZVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "KillZVolume is a volume used to determine when actors should be killed. Killing logic is overridden in FellOutOfWorld\n\n@see FellOutOfWorld" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillZVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillZVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillZVolume_Statics::ClassParams = {
		&AKillZVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillZVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillZVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillZVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillZVolume, 3395880571);
	template<> ENGINE_API UClass* StaticClass<AKillZVolume>()
	{
		return AKillZVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillZVolume(Z_Construct_UClass_AKillZVolume, &AKillZVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AKillZVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillZVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

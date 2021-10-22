// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UGameInstanceSubsystem::StaticRegisterNativesUGameInstanceSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister()
	{
		return UGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGameInstanceSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the game instance\n */" },
		{ "IncludePath", "Subsystems/GameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GameInstanceSubsystem.h" },
		{ "ToolTip", "UGameInstanceSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the game instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams = {
		&UGameInstanceSubsystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstanceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameInstanceSubsystem, 4030695572);
	template<> ENGINE_API UClass* StaticClass<UGameInstanceSubsystem>()
	{
		return UGameInstanceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInstanceSubsystem(Z_Construct_UClass_UGameInstanceSubsystem, &UGameInstanceSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UGameInstanceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

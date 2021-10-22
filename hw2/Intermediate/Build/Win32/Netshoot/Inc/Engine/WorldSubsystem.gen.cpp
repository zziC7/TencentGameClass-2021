// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Subsystems/WorldSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
// End Cross Module References
	void UWorldSubsystem::StaticRegisterNativesUWorldSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister()
	{
		return UWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWorldSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of a UWorld\n\n */" },
		{ "IncludePath", "Subsystems/WorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldSubsystem.h" },
		{ "ToolTip", "UWorldSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of a UWorld" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldSubsystem_Statics::ClassParams = {
		&UWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldSubsystem, 996907911);
	template<> ENGINE_API UClass* StaticClass<UWorldSubsystem>()
	{
		return UWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldSubsystem(Z_Construct_UClass_UWorldSubsystem, &UWorldSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldSubsystem);
	void UTickableWorldSubsystem::StaticRegisterNativesUTickableWorldSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UTickableWorldSubsystem_NoRegister()
	{
		return UTickableWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTickableWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UTickableWorldSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of a UWorld and are ticking along with it\n\n */" },
		{ "IncludePath", "Subsystems/WorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldSubsystem.h" },
		{ "ToolTip", "UTickableWorldSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of a UWorld and are ticking along with it" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTickableWorldSubsystem_Statics::ClassParams = {
		&UTickableWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTickableWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTickableWorldSubsystem, 3281794940);
	template<> ENGINE_API UClass* StaticClass<UTickableWorldSubsystem>()
	{
		return UTickableWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTickableWorldSubsystem(Z_Construct_UClass_UTickableWorldSubsystem, &UTickableWorldSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UTickableWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableWorldSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

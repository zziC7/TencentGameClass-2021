// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Rotation/ParticleModuleRotation.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleRotation::StaticRegisterNativesUParticleModuleRotation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotation_NoRegister()
	{
		return UParticleModuleRotation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation of the particle (1 = 360 degrees).\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotation.h" },
		{ "ToolTip", "Initial rotation of the particle (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRotation_Statics::NewProp_StartRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotation_Statics::ClassParams = {
		&UParticleModuleRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleRotation, 2439450649);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRotation>()
	{
		return UParticleModuleRotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotation(Z_Construct_UClass_UParticleModuleRotation, &UParticleModuleRotation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

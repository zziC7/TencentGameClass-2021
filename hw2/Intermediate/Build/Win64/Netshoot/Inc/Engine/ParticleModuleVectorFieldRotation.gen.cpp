// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleVectorFieldRotation::StaticRegisterNativesUParticleModuleVectorFieldRotation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation_NoRegister()
	{
		return UParticleModuleVectorFieldRotation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "VF Init Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Minimum initial rotation applied to the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ToolTip", "Minimum initial rotation applied to the local vector field." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation = { "MinInitialRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MinInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Maximum initial rotation applied to the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h" },
		{ "ToolTip", "Maximum initial rotation applied to the local vector field." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation = { "MaxInitialRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldRotation, MaxInitialRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MinInitialRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::NewProp_MaxInitialRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::ClassParams = {
		&UParticleModuleVectorFieldRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldRotation, 2197023443);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldRotation>()
	{
		return UParticleModuleVectorFieldRotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldRotation(Z_Construct_UClass_UParticleModuleVectorFieldRotation, &UParticleModuleVectorFieldRotation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

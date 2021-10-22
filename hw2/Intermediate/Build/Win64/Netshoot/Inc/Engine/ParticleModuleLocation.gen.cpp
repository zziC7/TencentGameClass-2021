// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocation.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLocation::StaticRegisterNativesUParticleModuleLocation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocation_NoRegister()
	{
		return UParticleModuleLocation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributeOverNPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistributeOverNPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistributeThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The location the particle should be emitted.\n\x09 *\x09Relative in local space to the emitter by default.\n\x09 *\x09Relative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\n\x09 *\x09Retrieved using the EmitterTime at the spawn of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "The location the particle should be emitted.\nRelative in local space to the emitter by default.\nRelative in world space as a WorldOffset module or when the emitter's UseLocalSpace is off.\nRetrieved using the EmitterTime at the spawn of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocation, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When set to a non-zero value this will force the particles to only spawn on evenly distributed\n\x09 *  positions between the two points specified.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When set to a non-zero value this will force the particles to only spawn on evenly distributed\npositions between the two points specified." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints = { "DistributeOverNPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocation, DistributeOverNPoints), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *  When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\n\x09 *  that should use the distribution.  (For example setting this to 1 will cause all the particles to\n\x09 *  be distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocation.h" },
		{ "ToolTip", "When DistributeOverNPoints is set to a non-zero value, this specifies the ratio of particles spawned\nthat should use the distribution.  (For example setting this to 1 will cause all the particles to\nbe distributed evenly whereas .75 would cause 1/4 of the particles to be randomly placed)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold = { "DistributeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocation, DistributeThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeOverNPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocation_Statics::NewProp_DistributeThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams = {
		&UParticleModuleLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocation, 2563245401);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocation>()
	{
		return UParticleModuleLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocation(Z_Construct_UClass_UParticleModuleLocation, &UParticleModuleLocation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

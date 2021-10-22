// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocationEmitter.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationEmitter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
// End Cross Module References
	static UEnum* ELocationEmitterSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationEmitterSelectionMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELocationEmitterSelectionMethod>()
	{
		return ELocationEmitterSelectionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationEmitterSelectionMethod(ELocationEmitterSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationEmitterSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Hash() { return 1481222282U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationEmitterSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELESM_Random", (int64)ELESM_Random },
				{ "ELESM_Sequential", (int64)ELESM_Sequential },
				{ "ELESM_MAX", (int64)ELESM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ELESM_MAX.Name", "ELESM_MAX" },
				{ "ELESM_Random.Name", "ELESM_Random" },
				{ "ELESM_Sequential.Name", "ELESM_Sequential" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ELocationEmitterSelectionMethod",
				"ELocationEmitterSelectionMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleLocationEmitter::StaticRegisterNativesUParticleModuleLocationEmitter()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister()
	{
		return UParticleModuleLocationEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocity_MetaData[];
#endif
		static void NewProp_InheritSourceVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InheritSourceVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritSourceVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceRotation_MetaData[];
#endif
		static void NewProp_bInheritSourceRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceRotationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritSourceRotationScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Emitter Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The name of the emitter to use that the source location for particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The name of the emitter to use that the source location for particle." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000002000009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The method to use when selecting a spawn target particle from the emitter.\n\x09 *\x09""Can be one of the following:\n\x09 *\x09\x09""ELESM_Random\x09\x09Randomly select a particle from the source emitter.\n\x09 *\x09\x09""ELESM_Sequential\x09Step through each particle from the source emitter in order.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The method to use when selecting a spawn target particle from the emitter.\nCan be one of the following:\n        ELESM_Random            Randomly select a particle from the source emitter.\n        ELESM_Sequential        Step through each particle from the source emitter in order." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, SelectionMethod), Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, the spawned particle should inherit the velocity of the source particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the velocity of the source particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationEmitter*)Obj)->InheritSourceVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity = { "InheritSourceVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amount to scale the source velocity by when inheriting it. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source velocity by when inheriting it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale = { "InheritSourceVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, the spawned particle should inherit the rotation of the source particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the rotation of the source particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit(void* Obj)
	{
		((UParticleModuleLocationEmitter*)Obj)->bInheritSourceRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation = { "bInheritSourceRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amount to scale the source rotation by when inheriting it. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source rotation by when inheriting it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale = { "InheritSourceRotationScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceRotationScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams = {
		&UParticleModuleLocationEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationEmitter, 3322937511);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationEmitter>()
	{
		return UParticleModuleLocationEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationEmitter(Z_Construct_UClass_UParticleModuleLocationEmitter, &UParticleModuleLocationEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

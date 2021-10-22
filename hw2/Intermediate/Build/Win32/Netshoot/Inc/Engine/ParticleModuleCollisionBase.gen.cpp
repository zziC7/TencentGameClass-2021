// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Collision/ParticleModuleCollisionBase.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollisionBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
// End Cross Module References
	static UEnum* EParticleCollisionComplete_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCollisionComplete, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCollisionComplete"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCollisionComplete>()
	{
		return EParticleCollisionComplete_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleCollisionComplete(EParticleCollisionComplete_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleCollisionComplete"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleCollisionComplete_Hash() { return 66613020U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleCollisionComplete"), 0, Get_Z_Construct_UEnum_Engine_EParticleCollisionComplete_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPCC_Kill", (int64)EPCC_Kill },
				{ "EPCC_Freeze", (int64)EPCC_Freeze },
				{ "EPCC_HaltCollisions", (int64)EPCC_HaltCollisions },
				{ "EPCC_FreezeTranslation", (int64)EPCC_FreezeTranslation },
				{ "EPCC_FreezeRotation", (int64)EPCC_FreezeRotation },
				{ "EPCC_FreezeMovement", (int64)EPCC_FreezeMovement },
				{ "EPCC_MAX", (int64)EPCC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n *\x09""Flags indicating what to do with the particle when MaxCollisions is reached\n */" },
				{ "EPCC_Freeze.Comment", "/**\x09""Freeze the particle in place\x09\x09\x09\x09\x09\x09*/" },
				{ "EPCC_Freeze.DisplayName", "Freeze" },
				{ "EPCC_Freeze.Name", "EPCC_Freeze" },
				{ "EPCC_Freeze.ToolTip", "Freeze the particle in place" },
				{ "EPCC_FreezeMovement.Comment", "/**\x09Stop all movement of the particle\x09\x09\x09\x09\x09*/" },
				{ "EPCC_FreezeMovement.DisplayName", "Freeze Movement" },
				{ "EPCC_FreezeMovement.Name", "EPCC_FreezeMovement" },
				{ "EPCC_FreezeMovement.ToolTip", "Stop all movement of the particle" },
				{ "EPCC_FreezeRotation.Comment", "/**\x09Stop rotations of the particle\x09\x09\x09\x09\x09\x09*/" },
				{ "EPCC_FreezeRotation.DisplayName", "Freeze Rotation" },
				{ "EPCC_FreezeRotation.Name", "EPCC_FreezeRotation" },
				{ "EPCC_FreezeRotation.ToolTip", "Stop rotations of the particle" },
				{ "EPCC_FreezeTranslation.Comment", "/**\x09Stop translations of the particle\x09\x09\x09\x09\x09*/" },
				{ "EPCC_FreezeTranslation.DisplayName", "Freeze Translation" },
				{ "EPCC_FreezeTranslation.Name", "EPCC_FreezeTranslation" },
				{ "EPCC_FreezeTranslation.ToolTip", "Stop translations of the particle" },
				{ "EPCC_HaltCollisions.Comment", "/**\x09Stop collision checks, but keep updating\x09\x09\x09*/" },
				{ "EPCC_HaltCollisions.DisplayName", "Halt Collisions" },
				{ "EPCC_HaltCollisions.Name", "EPCC_HaltCollisions" },
				{ "EPCC_HaltCollisions.ToolTip", "Stop collision checks, but keep updating" },
				{ "EPCC_Kill.Comment", "/**\x09Kill the particle when MaxCollisions is reached\x09\x09*/" },
				{ "EPCC_Kill.DisplayName", "Kill" },
				{ "EPCC_Kill.Name", "EPCC_Kill" },
				{ "EPCC_Kill.ToolTip", "Kill the particle when MaxCollisions is reached" },
				{ "EPCC_MAX.Name", "EPCC_MAX" },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionBase.h" },
				{ "ToolTip", "Flags indicating what to do with the particle when MaxCollisions is reached" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleCollisionComplete",
				"EParticleCollisionComplete",
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
	void UParticleModuleCollisionBase::StaticRegisterNativesUParticleModuleCollisionBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCollisionBase_NoRegister()
	{
		return UParticleModuleCollisionBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCollisionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCollisionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Collision" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollisionBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCollisionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollisionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollisionBase_Statics::ClassParams = {
		&UParticleModuleCollisionBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCollisionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCollisionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCollisionBase, 3052879420);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCollisionBase>()
	{
		return UParticleModuleCollisionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCollisionBase(Z_Construct_UClass_UParticleModuleCollisionBase, &UParticleModuleCollisionBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCollisionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollisionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

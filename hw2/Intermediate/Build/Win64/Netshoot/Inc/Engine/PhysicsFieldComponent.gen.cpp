// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsFieldComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsFieldComponent::StaticRegisterNativesUPhysicsFieldComponent()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister()
	{
		return UPhysicsFieldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsFieldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsFieldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09PhysicsFieldComponent\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsField/PhysicsFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "PhysicsFieldComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsFieldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsFieldComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams = {
		&UPhysicsFieldComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsFieldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsFieldComponent, 3327128796);
	template<> ENGINE_API UClass* StaticClass<UPhysicsFieldComponent>()
	{
		return UPhysicsFieldComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsFieldComponent(Z_Construct_UClass_UPhysicsFieldComponent, &UPhysicsFieldComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsFieldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsFieldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

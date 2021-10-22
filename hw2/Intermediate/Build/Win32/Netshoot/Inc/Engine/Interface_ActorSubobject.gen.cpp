// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/Interface_ActorSubobject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_ActorSubobject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_ActorSubobject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_ActorSubobject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_ActorSubobject::StaticRegisterNativesUInterface_ActorSubobject()
	{
	}
	UClass* Z_Construct_UClass_UInterface_ActorSubobject_NoRegister()
	{
		return UInterface_ActorSubobject::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_ActorSubobject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_ActorSubobject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_ActorSubobject_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_ActorSubobject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_ActorSubobject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_ActorSubobject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterface_ActorSubobject_Statics::ClassParams = {
		&UInterface_ActorSubobject::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_ActorSubobject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_ActorSubobject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_ActorSubobject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterface_ActorSubobject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterface_ActorSubobject, 1943531798);
	template<> ENGINE_API UClass* StaticClass<UInterface_ActorSubobject>()
	{
		return UInterface_ActorSubobject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_ActorSubobject(Z_Construct_UClass_UInterface_ActorSubobject, &UInterface_ActorSubobject::StaticClass, TEXT("/Script/Engine"), TEXT("UInterface_ActorSubobject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_ActorSubobject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

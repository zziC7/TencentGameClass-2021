// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosNiagara/Classes/NiagaraDataInterfacePhysicsField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfacePhysicsField() {}
// Cross Module References
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_NoRegister();
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
// End Cross Module References
	void UNiagaraDataInterfacePhysicsField::StaticRegisterNativesUNiagaraDataInterfacePhysicsField()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_NoRegister()
	{
		return UNiagaraDataInterfacePhysicsField::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::Class_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Data Interface for the strand base */" },
		{ "DisplayName", "Physics Field" },
		{ "IncludePath", "NiagaraDataInterfacePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfacePhysicsField.h" },
		{ "ToolTip", "Data Interface for the strand base" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfacePhysicsField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::ClassParams = {
		&UNiagaraDataInterfacePhysicsField::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfacePhysicsField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfacePhysicsField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfacePhysicsField, 3712761454);
	template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfacePhysicsField>()
	{
		return UNiagaraDataInterfacePhysicsField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfacePhysicsField(Z_Construct_UClass_UNiagaraDataInterfacePhysicsField, &UNiagaraDataInterfacePhysicsField::StaticClass, TEXT("/Script/ChaosNiagara"), TEXT("UNiagaraDataInterfacePhysicsField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfacePhysicsField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

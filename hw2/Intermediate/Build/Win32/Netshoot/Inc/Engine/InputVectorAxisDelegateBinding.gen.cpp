// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputVectorAxisDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputVectorAxisDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInputVectorAxisDelegateBinding::StaticRegisterNativesUInputVectorAxisDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister()
	{
		return UInputVectorAxisDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputAxisKeyDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputVectorAxisDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputVectorAxisDelegateBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputVectorAxisDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::ClassParams = {
		&UInputVectorAxisDelegateBinding::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputVectorAxisDelegateBinding, 809072143);
	template<> ENGINE_API UClass* StaticClass<UInputVectorAxisDelegateBinding>()
	{
		return UInputVectorAxisDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputVectorAxisDelegateBinding(Z_Construct_UClass_UInputVectorAxisDelegateBinding, &UInputVectorAxisDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputVectorAxisDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputVectorAxisDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupInstDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInstDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupInstDirector::StaticRegisterNativesUInterpGroupInstDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupInstDirector_NoRegister()
	{
		return UInterpGroupInstDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupInstDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupInstDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroupInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInstDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpGroupInstDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInstDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupInstDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupInstDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupInstDirector_Statics::ClassParams = {
		&UInterpGroupInstDirector::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInstDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInstDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupInstDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroupInstDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroupInstDirector, 855310922);
	template<> ENGINE_API UClass* StaticClass<UInterpGroupInstDirector>()
	{
		return UInterpGroupInstDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupInstDirector(Z_Construct_UClass_UInterpGroupInstDirector, &UInterpGroupInstDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupInstDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInstDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

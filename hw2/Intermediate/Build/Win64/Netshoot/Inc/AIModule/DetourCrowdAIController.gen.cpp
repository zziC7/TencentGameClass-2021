// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/DetourCrowdAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetourCrowdAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_ADetourCrowdAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_ADetourCrowdAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void ADetourCrowdAIController::StaticRegisterNativesADetourCrowdAIController()
	{
	}
	UClass* Z_Construct_UClass_ADetourCrowdAIController_NoRegister()
	{
		return ADetourCrowdAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADetourCrowdAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADetourCrowdAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DetourCrowdAIController.h" },
		{ "ModuleRelativePath", "Classes/DetourCrowdAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADetourCrowdAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetourCrowdAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADetourCrowdAIController_Statics::ClassParams = {
		&ADetourCrowdAIController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADetourCrowdAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADetourCrowdAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADetourCrowdAIController, 605436494);
	template<> AIMODULE_API UClass* StaticClass<ADetourCrowdAIController>()
	{
		return ADetourCrowdAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADetourCrowdAIController(Z_Construct_UClass_ADetourCrowdAIController, &ADetourCrowdAIController::StaticClass, TEXT("/Script/AIModule"), TEXT("ADetourCrowdAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADetourCrowdAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

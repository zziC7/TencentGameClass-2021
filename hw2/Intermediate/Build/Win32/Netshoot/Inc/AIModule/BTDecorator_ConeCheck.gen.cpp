// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConeCheck() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_ConeCheck::StaticRegisterNativesUBTDecorator_ConeCheck()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister()
	{
		return UBTDecorator_ConeCheck::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ConeCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Observed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cone check decorator node.\n * A decorator node that bases its condition on a cone check, using Blackboard entries to form the parameters of the check.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "Cone check decorator node.\nA decorator node that bases its condition on a cone check, using Blackboard entries to form the parameters of the check." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Angle between cone direction and code cone edge, or a half of the total cone angle */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "Angle between cone direction and code cone edge, or a half of the total cone angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle = { "ConeHalfAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin = { "ConeOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** \"None\" means \"use ConeOrigin's direction\" */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "\"None\" means \"use ConeOrigin's direction\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeDirection), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed = { "Observed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ConeCheck, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ConeCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::ClassParams = {
		&UBTDecorator_ConeCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ConeCheck, 3152351146);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ConeCheck>()
	{
		return UBTDecorator_ConeCheck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ConeCheck(Z_Construct_UClass_UBTDecorator_ConeCheck, &UBTDecorator_ConeCheck::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ConeCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConeCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/GenlockedFixedRateCustomTimeStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedFixedRateCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	void UGenlockedFixedRateCustomTimeStep::StaticRegisterNativesUGenlockedFixedRateCustomTimeStep()
	{
	}
	UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister()
	{
		return UGenlockedFixedRateCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via a fixed frame rate.\n * \n * Philosophy:\n * \n *   * Quantized increments but keeping up with platform time.\n * \n *   * FApp::GetDeltaTime \n *       - Forced to a multiple of the desired FrameTime.\n * \n *   * FApp::GetCurrentTime\n *       - Incremented in multiples of the desired FrameTime.\n *       - Corresponds to platform time minus any fractional FrameTime.\n * \n */" },
		{ "DisplayName", "Genlocked Fixed Rate" },
		{ "IncludePath", "GenlockedFixedRateCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via a fixed frame rate.\n\nPhilosophy:\n\n  * Quantized increments but keeping up with platform time.\n\n  * FApp::GetDeltaTime\n      - Forced to a multiple of the desired FrameTime.\n\n  * FApp::GetCurrentTime\n      - Incremented in multiples of the desired FrameTime.\n      - Corresponds to platform time minus any fractional FrameTime." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Desired frame rate */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Desired frame rate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenlockedFixedRateCustomTimeStep, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedFixedRateCustomTimeStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams = {
		&UGenlockedFixedRateCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenlockedFixedRateCustomTimeStep, 3950923729);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedFixedRateCustomTimeStep>()
	{
		return UGenlockedFixedRateCustomTimeStep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenlockedFixedRateCustomTimeStep(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep, &UGenlockedFixedRateCustomTimeStep::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UGenlockedFixedRateCustomTimeStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedFixedRateCustomTimeStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

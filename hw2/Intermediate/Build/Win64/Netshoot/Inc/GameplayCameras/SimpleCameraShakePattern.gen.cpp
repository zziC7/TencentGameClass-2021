// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/SimpleCameraShakePattern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	void USimpleCameraShakePattern::StaticRegisterNativesUSimpleCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_USimpleCameraShakePattern_NoRegister()
	{
		return USimpleCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base class for a simple camera shake.\n */" },
		{ "IncludePath", "SimpleCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base class for a simple camera shake." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Duration in seconds of this shake. Zero or less means infinite. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Duration in seconds of this shake. Zero or less means infinite." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCameraShakePattern, Duration), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Blend-in time for this shake. Zero or less means no blend-in. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Blend-in time for this shake. Zero or less means no blend-in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCameraShakePattern, BlendInTime), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Blend-out time for this shake. Zero or less means no blend-out. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Blend-out time for this shake. Zero or less means no blend-out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleCameraShakePattern, BlendOutTime), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::ClassParams = {
		&USimpleCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleCameraShakePattern, 4068908601);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<USimpleCameraShakePattern>()
	{
		return USimpleCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleCameraShakePattern(Z_Construct_UClass_USimpleCameraShakePattern, &USimpleCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("USimpleCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

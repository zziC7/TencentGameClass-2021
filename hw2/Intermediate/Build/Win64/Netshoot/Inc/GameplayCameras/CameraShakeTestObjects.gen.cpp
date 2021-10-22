// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Private/Tests/CameraShakeTestObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeTestObjects() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTestCameraShake_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTestCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UConstantCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UConstantCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UTestCameraShake::StaticRegisterNativesUTestCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UTestCameraShake_NoRegister()
	{
		return UTestCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UTestCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestCameraShake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/CameraShakeTestObjects.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/CameraShakeTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestCameraShake_Statics::ClassParams = {
		&UTestCameraShake::StaticClass,
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
		0x048010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestCameraShake, 2226618755);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UTestCameraShake>()
	{
		return UTestCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestCameraShake(Z_Construct_UClass_UTestCameraShake, &UTestCameraShake::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UTestCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestCameraShake);
	void UConstantCameraShakePattern::StaticRegisterNativesUConstantCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UConstantCameraShakePattern_NoRegister()
	{
		return UConstantCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UConstantCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstantCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/CameraShakeTestObjects.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/CameraShakeTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/CameraShakeTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstantCameraShakePattern, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/CameraShakeTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConstantCameraShakePattern, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_RotationOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantCameraShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantCameraShakePattern_Statics::NewProp_RotationOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstantCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstantCameraShakePattern_Statics::ClassParams = {
		&UConstantCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstantCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstantCameraShakePattern_Statics::PropPointers),
		0,
		0x040010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstantCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstantCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstantCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstantCameraShakePattern, 1717401688);
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UConstantCameraShakePattern>()
	{
		return UConstantCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstantCameraShakePattern(Z_Construct_UClass_UConstantCameraShakePattern, &UConstantCameraShakePattern::StaticClass, TEXT("/Script/GameplayCameras"), TEXT("UConstantCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

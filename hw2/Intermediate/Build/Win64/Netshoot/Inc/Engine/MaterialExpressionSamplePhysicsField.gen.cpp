// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSamplePhysicsField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSamplePhysicsField() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
// End Cross Module References
	void UMaterialExpressionSamplePhysicsVectorField::StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Material expresions to sample the global field\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Material expresions to sample the global field" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldVectorType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsVectorField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSamplePhysicsVectorField, 3562251875);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsVectorField>()
	{
		return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSamplePhysicsVectorField(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField, &UMaterialExpressionSamplePhysicsVectorField::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSamplePhysicsVectorField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsVectorField);
	void UMaterialExpressionSamplePhysicsScalarField::StaticRegisterNativesUMaterialExpressionSamplePhysicsScalarField()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldScalarType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsScalarField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsScalarField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSamplePhysicsScalarField, 4247331460);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsScalarField>()
	{
		return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSamplePhysicsScalarField(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField, &UMaterialExpressionSamplePhysicsScalarField::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSamplePhysicsScalarField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsScalarField);
	void UMaterialExpressionSamplePhysicsIntegerField::StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldIntegerType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsIntegerField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsIntegerField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSamplePhysicsIntegerField, 396354672);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsIntegerField>()
	{
		return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSamplePhysicsIntegerField(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField, &UMaterialExpressionSamplePhysicsIntegerField::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSamplePhysicsIntegerField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsIntegerField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

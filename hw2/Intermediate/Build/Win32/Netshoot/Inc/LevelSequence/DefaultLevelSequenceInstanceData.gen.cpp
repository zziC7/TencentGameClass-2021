// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/DefaultLevelSequenceInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
// End Cross Module References
	void UDefaultLevelSequenceInstanceData::StaticRegisterNativesUDefaultLevelSequenceInstanceData()
	{
	}
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister()
	{
		return UDefaultLevelSequenceInstanceData::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOriginActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformOriginActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin. */" },
		{ "IncludePath", "DefaultLevelSequenceInstanceData.h" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When set, this actor's world position will be used as the transform origin for all absolute transform sections */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "When set, this actor's world position will be used as the transform origin for all absolute transform sections" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor = { "TransformOriginActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies a transform that offsets all absolute transform sections in this sequence. Will compound with attach tracks. Scale is ignored. Not applied to Relative or Additive sections. */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "Specifies a transform that offsets all absolute transform sections in this sequence. Will compound with attach tracks. Scale is ignored. Not applied to Relative or Additive sections." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin = { "TransformOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister, (int32)VTABLE_OFFSET(UDefaultLevelSequenceInstanceData, IMovieSceneTransformOrigin), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultLevelSequenceInstanceData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams = {
		&UDefaultLevelSequenceInstanceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultLevelSequenceInstanceData, 2792531282);
	template<> LEVELSEQUENCE_API UClass* StaticClass<UDefaultLevelSequenceInstanceData>()
	{
		return UDefaultLevelSequenceInstanceData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultLevelSequenceInstanceData(Z_Construct_UClass_UDefaultLevelSequenceInstanceData, &UDefaultLevelSequenceInstanceData::StaticClass, TEXT("/Script/LevelSequence"), TEXT("UDefaultLevelSequenceInstanceData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultLevelSequenceInstanceData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

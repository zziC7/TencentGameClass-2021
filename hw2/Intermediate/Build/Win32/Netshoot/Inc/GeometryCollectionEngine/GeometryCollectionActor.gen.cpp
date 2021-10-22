// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionActor() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGeometryCollectionActor::execRaycastSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RaycastSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit);
		P_NATIVE_END;
	}
	void AGeometryCollectionActor::StaticRegisterNativesAGeometryCollectionActor()
	{
		UClass* Class = AGeometryCollectionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RaycastSingle", &AGeometryCollectionActor::execRaycastSingle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics
	{
		struct GeometryCollectionActor_eventRaycastSingle_Parms
		{
			FVector Start;
			FVector End;
			FHitResult OutHit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCollectionActor_eventRaycastSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeometryCollectionActor_eventRaycastSingle_Parms), &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCollectionActor, nullptr, "RaycastSingle", nullptr, nullptr, sizeof(GeometryCollectionActor_eventRaycastSingle_Parms), Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister()
	{
		return AGeometryCollectionActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionDebugDrawComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionDebugDrawComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryCollectionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle, "RaycastSingle" }, // 2102654811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "Comment", "/* GeometryCollectionComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|GeometryCollection" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent = { "GeometryCollectionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|GeometryCollection" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent = { "GeometryCollectionDebugDrawComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent), Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams = {
		&AGeometryCollectionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryCollectionActor, 249045427);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionActor>()
	{
		return AGeometryCollectionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCollectionActor(Z_Construct_UClass_AGeometryCollectionActor, &AGeometryCollectionActor::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("AGeometryCollectionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

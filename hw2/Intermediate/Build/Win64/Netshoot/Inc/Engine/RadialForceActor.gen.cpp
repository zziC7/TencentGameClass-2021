// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/RadialForceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARadialForceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARadialForceActor();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARadialForceActor::execToggleForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadialForceActor::execDisableForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadialForceActor::execEnableForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARadialForceActor::execFireImpulse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireImpulse();
		P_NATIVE_END;
	}
	void ARadialForceActor::StaticRegisterNativesARadialForceActor()
	{
		UClass* Class = ARadialForceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableForce", &ARadialForceActor::execDisableForce },
			{ "EnableForce", &ARadialForceActor::execEnableForce },
			{ "FireImpulse", &ARadialForceActor::execFireImpulse },
			{ "ToggleForce", &ARadialForceActor::execToggleForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, nullptr, "DisableForce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadialForceActor_DisableForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadialForceActor_DisableForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, nullptr, "EnableForce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadialForceActor_EnableForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadialForceActor_EnableForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, nullptr, "FireImpulse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadialForceActor_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadialForceActor_FireImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, nullptr, "ToggleForce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadialForceActor_ToggleForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadialForceActor_ToggleForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARadialForceActor_NoRegister()
	{
		return ARadialForceActor::StaticClass();
	}
	struct Z_Construct_UClass_ARadialForceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadialForceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARadialForceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARadialForceActor_DisableForce, "DisableForce" }, // 2123030209
		{ &Z_Construct_UFunction_ARadialForceActor_EnableForce, "EnableForce" }, // 2194387262
		{ &Z_Construct_UFunction_ARadialForceActor_FireImpulse, "FireImpulse" }, // 2366421052
		{ &Z_Construct_UFunction_ARadialForceActor_ToggleForce, "ToggleForce" }, // 4096398409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadialForceActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/RadialForceActor.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadialForceActor_Statics::NewProp_ForceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RadialForceActor" },
		{ "Comment", "/** Force component */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Activation,Components|Activation,Physics,Physics|Components|RadialForce" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
		{ "ToolTip", "Force component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadialForceActor_Statics::NewProp_ForceComponent = { "ForceComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadialForceActor, ForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadialForceActor_Statics::NewProp_ForceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadialForceActor_Statics::NewProp_ForceComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadialForceActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARadialForceActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadialForceActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARadialForceActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadialForceActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARadialForceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadialForceActor_Statics::NewProp_ForceComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadialForceActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadialForceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadialForceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadialForceActor_Statics::ClassParams = {
		&ARadialForceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARadialForceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARadialForceActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadialForceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadialForceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadialForceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadialForceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadialForceActor, 1792417487);
	template<> ENGINE_API UClass* StaticClass<ARadialForceActor>()
	{
		return ARadialForceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadialForceActor(Z_Construct_UClass_ARadialForceActor, &ARadialForceActor::StaticClass, TEXT("/Script/Engine"), TEXT("ARadialForceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadialForceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

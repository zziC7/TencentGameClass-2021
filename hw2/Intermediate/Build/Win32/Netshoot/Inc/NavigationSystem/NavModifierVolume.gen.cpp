// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavModifierVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierVolume() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANavModifierVolume::execSetAreaClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaClass(Z_Param_NewAreaClass);
		P_NATIVE_END;
	}
	void ANavModifierVolume::StaticRegisterNativesANavModifierVolume()
	{
		UClass* Class = ANavModifierVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &ANavModifierVolume::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics
	{
		struct NavModifierVolume_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavModifierVolume_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClass", "None" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavModifierVolume, nullptr, "SetAreaClass", nullptr, nullptr, sizeof(NavModifierVolume_eventSetAreaClass_Parms), Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister()
	{
		return ANavModifierVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANavModifierVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[];
#endif
		static void NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaskFillCollisionUnderneathForNavmesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavModifierVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavModifierVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavModifierVolume_SetAreaClass, "SetAreaClass" }, // 3577387728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Allows applying selected AreaClass to navmesh, using Volume's shape\n */" },
		{ "HideCategories", "Navigation Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NavModifierVolume.h" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Allows applying selected AreaClass to navmesh, using Volume's shape" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavModifierVolume, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh" },
	};
#endif
	void Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
	{
		((ANavModifierVolume*)Obj)->bMaskFillCollisionUnderneathForNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh = { "bMaskFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANavModifierVolume), &Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavModifierVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavModifierVolume, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavModifierVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavModifierVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams = {
		&ANavModifierVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavModifierVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavModifierVolume, 488360018);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavModifierVolume>()
	{
		return ANavModifierVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavModifierVolume(Z_Construct_UClass_ANavModifierVolume, &ANavModifierVolume::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavModifierVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavModifierVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

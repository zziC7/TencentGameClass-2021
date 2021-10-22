// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/BlueprintAsyncActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAsyncActionBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintAsyncActionBase::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	void UBlueprintAsyncActionBase::StaticRegisterNativesUBlueprintAsyncActionBase()
	{
		UClass* Class = UBlueprintAsyncActionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UBlueprintAsyncActionBase::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Called to trigger the action once the delegates have been bound */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintAsyncActionBase.h" },
		{ "ToolTip", "Called to trigger the action once the delegates have been bound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintAsyncActionBase, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister()
	{
		return UBlueprintAsyncActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintAsyncActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate, "Activate" }, // 2952613435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* BlueprintCallable factory functions for classes which inherit from UBlueprintAsyncActionBase will have a special blueprint node created for it: UK2Node_AsyncAction\n* You can stop this node spawning and create a more specific one by adding the UCLASS metadata \"HasDedicatedAsyncNode\"\n*/" },
		{ "IncludePath", "Kismet/BlueprintAsyncActionBase.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintAsyncActionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "BlueprintCallable factory functions for classes which inherit from UBlueprintAsyncActionBase will have a special blueprint node created for it: UK2Node_AsyncAction\nYou can stop this node spawning and create a more specific one by adding the UCLASS metadata \"HasDedicatedAsyncNode\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintAsyncActionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::ClassParams = {
		&UBlueprintAsyncActionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintAsyncActionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintAsyncActionBase, 2839679023);
	template<> ENGINE_API UClass* StaticClass<UBlueprintAsyncActionBase>()
	{
		return UBlueprintAsyncActionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintAsyncActionBase(Z_Construct_UClass_UBlueprintAsyncActionBase, &UBlueprintAsyncActionBase::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintAsyncActionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintAsyncActionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

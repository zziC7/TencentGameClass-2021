// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UClothingInteractor::StaticRegisterNativesUClothingInteractor()
	{
	}
	UClass* Z_Construct_UClass_UClothingInteractor_NoRegister()
	{
		return UClothingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UClothingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class to control clothing specific interaction.\n * Must be cast to the end used clothing simulation object before use.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Abstract class to control clothing specific interaction.\nMust be cast to the end used clothing simulation object before use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingInteractor_Statics::ClassParams = {
		&UClothingInteractor::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingInteractor, 3444636194);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingInteractor>()
	{
		return UClothingInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingInteractor(Z_Construct_UClass_UClothingInteractor, &UClothingInteractor::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingInteractor);
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetClothingInteractor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClothingAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClothingInteractor**)Z_Param__Result=P_THIS->GetClothingInteractor(Z_Param_ClothingAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetSimulationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumSubsteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSubsteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumIterations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumIterations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumDynamicParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumDynamicParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumKinematicParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKinematicParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumCloths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCloths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumSubsteps)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSubsteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumSubsteps(Z_Param_NumSubsteps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumIterations(Z_Param_NumIterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execDisableGravityOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableGravityOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execEnableGravityOverride)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableGravityOverride(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetAnimDriveSpringStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execClothConfigUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothConfigUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execPhysicsAssetUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsAssetUpdated();
		P_NATIVE_END;
	}
	void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor()
	{
		UClass* Class = UClothingSimulationInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothConfigUpdated", &UClothingSimulationInteractor::execClothConfigUpdated },
			{ "DisableGravityOverride", &UClothingSimulationInteractor::execDisableGravityOverride },
			{ "EnableGravityOverride", &UClothingSimulationInteractor::execEnableGravityOverride },
			{ "GetClothingInteractor", &UClothingSimulationInteractor::execGetClothingInteractor },
			{ "GetNumCloths", &UClothingSimulationInteractor::execGetNumCloths },
			{ "GetNumDynamicParticles", &UClothingSimulationInteractor::execGetNumDynamicParticles },
			{ "GetNumIterations", &UClothingSimulationInteractor::execGetNumIterations },
			{ "GetNumKinematicParticles", &UClothingSimulationInteractor::execGetNumKinematicParticles },
			{ "GetNumSubsteps", &UClothingSimulationInteractor::execGetNumSubsteps },
			{ "GetSimulationTime", &UClothingSimulationInteractor::execGetSimulationTime },
			{ "PhysicsAssetUpdated", &UClothingSimulationInteractor::execPhysicsAssetUpdated },
			{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractor::execSetAnimDriveSpringStiffness },
			{ "SetNumIterations", &UClothingSimulationInteractor::execSetNumIterations },
			{ "SetNumSubsteps", &UClothingSimulationInteractor::execSetNumSubsteps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update the cloth config without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update the cloth config without restarting the simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "ClothConfigUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Disable any currently set gravity override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Disable any currently set gravity override." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "DisableGravityOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics
	{
		struct ClothingSimulationInteractor_eventEnableGravityOverride_Parms
		{
			FVector InVector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set a new gravity override and enable the override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set a new gravity override and enable the override." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "EnableGravityOverride", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventEnableGravityOverride_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics
	{
		struct ClothingSimulationInteractor_eventGetClothingInteractor_Parms
		{
			FString ClothingAssetName;
			UClothingInteractor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClothingAssetName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName = { "ClothingAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ClothingAssetName), METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ReturnValue), Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**Return a cloth interactor for this simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return a cloth interactor for this simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetClothingInteractor", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetClothingInteractor_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumCloths_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumCloths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of cloths run by the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of cloths run by the simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumCloths", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetNumCloths_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of dynamic (simulated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of dynamic (simulated) particles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumDynamicParticles", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumIterations_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumIterations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of iterations.\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of iterations.\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumIterations", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetNumIterations_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of kinematic (animated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of kinematic (animated) particles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumKinematicParticles", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumSubsteps_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumSubsteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of subdivisions./\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of subdivisions./\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumSubsteps", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetNumSubsteps_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics
	{
		struct ClothingSimulationInteractor_eventGetSimulationTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetSimulationTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the instant average simulation time in ms. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the instant average simulation time in ms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetSimulationTime", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventGetSimulationTime_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update collision status without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update collision status without restarting the simulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "PhysicsAssetUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics
	{
		struct ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms
		{
			float InStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the stiffness of the spring force for the animation drive. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the stiffness of the spring force for the animation drive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetAnimDriveSpringStiffness", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics
	{
		struct ClothingSimulationInteractor_eventSetNumIterations_Parms
		{
			int32 NumIterations;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumIterations_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of solver iterations. */" },
		{ "CPP_Default_NumIterations", "2" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of solver iterations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumIterations", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventSetNumIterations_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics
	{
		struct ClothingSimulationInteractor_eventSetNumSubsteps_Parms
		{
			int32 NumSubsteps;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubsteps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps = { "NumSubsteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumSubsteps_Parms, NumSubsteps), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of substeps or subdivisions. */" },
		{ "CPP_Default_NumSubsteps", "1" },
		{ "Keywords", "Subdivisions" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of substeps or subdivisions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumSubsteps", nullptr, nullptr, sizeof(ClothingSimulationInteractor_eventSetNumSubsteps_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothingInteractors_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClothingInteractors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingInteractors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClothingInteractors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothingSimulationInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated, "ClothConfigUpdated" }, // 55548488
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride, "DisableGravityOverride" }, // 114080400
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride, "EnableGravityOverride" }, // 1219850824
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor, "GetClothingInteractor" }, // 4234975644
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths, "GetNumCloths" }, // 3135432062
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles, "GetNumDynamicParticles" }, // 2121973564
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations, "GetNumIterations" }, // 1050028945
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles, "GetNumKinematicParticles" }, // 135587634
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps, "GetNumSubsteps" }, // 823366319
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime, "GetSimulationTime" }, // 298726960
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated, "PhysicsAssetUpdated" }, // 3612050108
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 912780134
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations, "SetNumIterations" }, // 3964049988
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps, "SetNumSubsteps" }, // 3498621856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * If a clothing simulation is able to be interacted with at runtime then a derived\n * interactor should be created, and at least the basic API implemented for that\n * simulation.\n * Only write to the simulation and context during the call to Sync, as that is\n * guaranteed to be a safe place to access this data.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "If a clothing simulation is able to be interacted with at runtime then a derived\ninteractor should be created, and at least the basic API implemented for that\nsimulation.\nOnly write to the simulation and context during the call to Sync, as that is\nguaranteed to be a safe place to access this data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp = { "ClothingInteractors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData[] = {
		{ "Comment", "/** Cloth interactors currently created. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Cloth interactors currently created." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingSimulationInteractor, ClothingInteractors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams = {
		&UClothingSimulationInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingSimulationInteractor, 1380619190);
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationInteractor>()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingSimulationInteractor(Z_Construct_UClass_UClothingSimulationInteractor, &UClothingSimulationInteractor::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingSimulationInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

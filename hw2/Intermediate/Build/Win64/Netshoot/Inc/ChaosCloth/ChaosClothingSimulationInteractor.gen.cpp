// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/ChaosCloth/ChaosClothingSimulationInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationInteractor() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingInteractor_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
// End Cross Module References
	DEFINE_FUNCTION(UChaosClothingInteractor::execResetAndTeleport)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAndTeleport(Z_Param_bReset,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetVelocityScale)
	{
		P_GET_STRUCT(FVector,Z_Param_LinearVelocityScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularVelocityScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FictitiousAngularScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocityScale(Z_Param_LinearVelocityScale,Z_Param_AngularVelocityScale,Z_Param_FictitiousAngularScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAnimDrive)
	{
		P_GET_STRUCT(FVector2D,Z_Param_AnimDriveStiffness);
		P_GET_STRUCT(FVector2D,Z_Param_AnimDriveDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDrive(Z_Param_AnimDriveStiffness,Z_Param_AnimDriveDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAnimDriveLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimDriveStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveLinear(Z_Param_AnimDriveStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetGravity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityScale);
		P_GET_UBOOL(Z_Param_bIsGravityOverridden);
		P_GET_STRUCT(FVector,Z_Param_GravityOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravity(Z_Param_GravityScale,Z_Param_bIsGravityOverridden,Z_Param_GravityOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAerodynamics)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DragCoefficient);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LiftCoefficient);
		P_GET_STRUCT(FVector,Z_Param_WindVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAerodynamics(Z_Param_DragCoefficient,Z_Param_LiftCoefficient,Z_Param_WindVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetDamping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingCoefficient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamping(Z_Param_DampingCoefficient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetCollision)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionCoefficient);
		P_GET_UBOOL(Z_Param_bUseCCD);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SelfCollisionThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollision(Z_Param_CollisionThickness,Z_Param_FrictionCoefficient,Z_Param_bUseCCD,Z_Param_SelfCollisionThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetLongRangeAttachment)
	{
		P_GET_STRUCT(FVector2D,Z_Param_TetherStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongRangeAttachment(Z_Param_TetherStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetLongRangeAttachmentLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TetherStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongRangeAttachmentLinear(Z_Param_TetherStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetMaterialLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EdgeStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BendingStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AreaStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialLinear(Z_Param_EdgeStiffness,Z_Param_BendingStiffness,Z_Param_AreaStiffness);
		P_NATIVE_END;
	}
	void UChaosClothingInteractor::StaticRegisterNativesUChaosClothingInteractor()
	{
		UClass* Class = UChaosClothingInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAndTeleport", &UChaosClothingInteractor::execResetAndTeleport },
			{ "SetAerodynamics", &UChaosClothingInteractor::execSetAerodynamics },
			{ "SetAnimDrive", &UChaosClothingInteractor::execSetAnimDrive },
			{ "SetAnimDriveLinear", &UChaosClothingInteractor::execSetAnimDriveLinear },
			{ "SetCollision", &UChaosClothingInteractor::execSetCollision },
			{ "SetDamping", &UChaosClothingInteractor::execSetDamping },
			{ "SetGravity", &UChaosClothingInteractor::execSetGravity },
			{ "SetLongRangeAttachment", &UChaosClothingInteractor::execSetLongRangeAttachment },
			{ "SetLongRangeAttachmentLinear", &UChaosClothingInteractor::execSetLongRangeAttachmentLinear },
			{ "SetMaterialLinear", &UChaosClothingInteractor::execSetMaterialLinear },
			{ "SetVelocityScale", &UChaosClothingInteractor::execSetVelocityScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics
	{
		struct ChaosClothingInteractor_eventResetAndTeleport_Parms
		{
			bool bReset;
			bool bTeleport;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventResetAndTeleport_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosClothingInteractor_eventResetAndTeleport_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventResetAndTeleport_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosClothingInteractor_eventResetAndTeleport_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bReset", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "Keywords", "Chaos" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "ResetAndTeleport", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventResetAndTeleport_Parms), Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics
	{
		struct ChaosClothingInteractor_eventSetAerodynamics_Parms
		{
			float DragCoefficient;
			float LiftCoefficient;
			FVector WindVelocity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LiftCoefficient;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, DragCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_LiftCoefficient = { "LiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, LiftCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_WindVelocity = { "WindVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, WindVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_LiftCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_WindVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_DragCoefficient", "0.070000" },
		{ "CPP_Default_LiftCoefficient", "0.035000" },
		{ "CPP_Default_WindVelocity", "0.000000,0.000000,0.000000" },
		{ "Keywords", "Chaos Wind Drag Lift Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAerodynamics", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetAerodynamics_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics
	{
		struct ChaosClothingInteractor_eventSetAnimDrive_Parms
		{
			FVector2D AnimDriveStiffness;
			FVector2D AnimDriveDamping;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimDriveStiffness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimDriveDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveStiffness = { "AnimDriveStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDrive_Parms, AnimDriveStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveDamping = { "AnimDriveDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDrive_Parms, AnimDriveDamping), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AnimDriveDamping", "(X=0.000,Y=1.000)" },
		{ "CPP_Default_AnimDriveStiffness", "(X=0.000,Y=1.000)" },
		{ "Keywords", "Chaos Stiffness Damping" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAnimDrive", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetAnimDrive_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetAnimDriveLinear_Parms
		{
			float AnimDriveStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::NewProp_AnimDriveStiffness = { "AnimDriveStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDriveLinear_Parms, AnimDriveStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::NewProp_AnimDriveStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AnimDriveStiffness", "0.000000" },
		{ "Keywords", "Chaos Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAnimDriveLinear", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetAnimDriveLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics
	{
		struct ChaosClothingInteractor_eventSetCollision_Parms
		{
			float CollisionThickness;
			float FrictionCoefficient;
			bool bUseCCD;
			float SelfCollisionThickness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionCoefficient;
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, CollisionThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_FrictionCoefficient = { "FrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, FrictionCoefficient), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventSetCollision_Parms*)Obj)->bUseCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosClothingInteractor_eventSetCollision_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, SelfCollisionThickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_FrictionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_SelfCollisionThickness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bUseCCD", "false" },
		{ "CPP_Default_CollisionThickness", "1.000000" },
		{ "CPP_Default_FrictionCoefficient", "0.800000" },
		{ "CPP_Default_SelfCollisionThickness", "2.000000" },
		{ "Keywords", "Chaos Self Thickness Friction Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetCollision", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetCollision_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics
	{
		struct ChaosClothingInteractor_eventSetDamping_Parms
		{
			float DampingCoefficient;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampingCoefficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_DampingCoefficient = { "DampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetDamping_Parms, DampingCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_DampingCoefficient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_DampingCoefficient", "0.010000" },
		{ "Keywords", "Chaos Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetDamping", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetDamping_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics
	{
		struct ChaosClothingInteractor_eventSetGravity_Parms
		{
			float GravityScale;
			bool bIsGravityOverridden;
			FVector GravityOverride;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
		static void NewProp_bIsGravityOverridden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGravityOverridden;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetGravity_Parms, GravityScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventSetGravity_Parms*)Obj)->bIsGravityOverridden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden = { "bIsGravityOverridden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChaosClothingInteractor_eventSetGravity_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetGravity_Parms, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bIsGravityOverridden", "false" },
		{ "CPP_Default_GravityOverride", "0.000000,0.000000,-981.000000" },
		{ "CPP_Default_GravityScale", "1.000000" },
		{ "Keywords", "Chaos Scale Override" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetGravity", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetGravity_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics
	{
		struct ChaosClothingInteractor_eventSetLongRangeAttachment_Parms
		{
			FVector2D TetherStiffness;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TetherStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachment_Parms, TetherStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_TetherStiffness", "(X=0.000,Y=1.000)" },
		{ "Keywords", "Chaos Tether Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetLongRangeAttachment", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetLongRangeAttachment_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms
		{
			float TetherStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms, TetherStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_TetherStiffness", "1.000000" },
		{ "Keywords", "Chaos Tether Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetLongRangeAttachmentLinear", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetMaterialLinear_Parms
		{
			float EdgeStiffness;
			float BendingStiffness;
			float AreaStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgeStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BendingStiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AreaStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, EdgeStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_BendingStiffness = { "BendingStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, BendingStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_AreaStiffness = { "AreaStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, AreaStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_EdgeStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_BendingStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_AreaStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AreaStiffness", "1.000000" },
		{ "CPP_Default_BendingStiffness", "1.000000" },
		{ "CPP_Default_EdgeStiffness", "1.000000" },
		{ "Keywords", "Chaos Edge Bending Area Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetMaterialLinear", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetMaterialLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics
	{
		struct ChaosClothingInteractor_eventSetVelocityScale_Parms
		{
			FVector LinearVelocityScale;
			float AngularVelocityScale;
			float FictitiousAngularScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocityScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FictitiousAngularScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, LinearVelocityScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, AngularVelocityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_FictitiousAngularScale = { "FictitiousAngularScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, FictitiousAngularScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_LinearVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_AngularVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_FictitiousAngularScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AngularVelocityScale", "0.750000" },
		{ "CPP_Default_FictitiousAngularScale", "1.000000" },
		{ "CPP_Default_LinearVelocityScale", "0.750000,0.750000,0.750000" },
		{ "Keywords", "Chaos Linear Angular Velocity Scale" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetVelocityScale", nullptr, nullptr, sizeof(ChaosClothingInteractor_eventSetVelocityScale_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChaosClothingInteractor_NoRegister()
	{
		return UChaosClothingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosClothingInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport, "ResetAndTeleport" }, // 2617604965
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics, "SetAerodynamics" }, // 4068551048
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive, "SetAnimDrive" }, // 517625564
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear, "SetAnimDriveLinear" }, // 3508382487
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetCollision, "SetCollision" }, // 1382505190
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetDamping, "SetDamping" }, // 3366010175
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetGravity, "SetGravity" }, // 2025429080
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment, "SetLongRangeAttachment" }, // 3346751698
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear, "SetLongRangeAttachmentLinear" }, // 1472757024
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear, "SetMaterialLinear" }, // 3512042978
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale, "SetVelocityScale" }, // 2624451514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingInteractor_Statics::ClassParams = {
		&UChaosClothingInteractor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothingInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothingInteractor, 3669891312);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingInteractor>()
	{
		return UChaosClothingInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothingInteractor(Z_Construct_UClass_UChaosClothingInteractor, &UChaosClothingInteractor::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothingInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingInteractor);
	void UChaosClothingSimulationInteractor::StaticRegisterNativesUChaosClothingSimulationInteractor()
	{
	}
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams = {
		&UChaosClothingSimulationInteractor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosClothingSimulationInteractor, 712063147);
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationInteractor>()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosClothingSimulationInteractor(Z_Construct_UClass_UChaosClothingSimulationInteractor, &UChaosClothingSimulationInteractor::StaticClass, TEXT("/Script/ChaosCloth"), TEXT("UChaosClothingSimulationInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

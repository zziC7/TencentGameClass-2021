// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/NavLocalGridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLocalGridManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UNavLocalGridManager::execFindLocalNavigationGridPath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavLocalGridManager::FindLocalNavigationGridPath(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_PathPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execRemoveLocalNavigationGrid)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridId);
		P_GET_UBOOL(Z_Param_bRebuildGrids);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNavLocalGridManager::RemoveLocalNavigationGrid(Z_Param_WorldContextObject,Z_Param_GridId,Z_Param_bRebuildGrids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForCapsule)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleHalfHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_UBOOL(Z_Param_bRebuildGrids);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForCapsule(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_CapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_UBOOL(Z_Param_bRebuildGrids);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForBox(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Extent,Z_Param_Rotation,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForPoints)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_UBOOL(Z_Param_bRebuildGrids);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoints(Z_Param_WorldContextObject,Z_Param_Out_Locations,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
		P_GET_UBOOL(Z_Param_bRebuildGrids);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoint(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavLocalGridManager::execSetLocalNavigationGridDensity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavLocalGridManager::SetLocalNavigationGridDensity(Z_Param_WorldContextObject,Z_Param_CellSize);
		P_NATIVE_END;
	}
	void UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager()
	{
		UClass* Class = UNavLocalGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocalNavigationGridForBox", &UNavLocalGridManager::execAddLocalNavigationGridForBox },
			{ "AddLocalNavigationGridForCapsule", &UNavLocalGridManager::execAddLocalNavigationGridForCapsule },
			{ "AddLocalNavigationGridForPoint", &UNavLocalGridManager::execAddLocalNavigationGridForPoint },
			{ "AddLocalNavigationGridForPoints", &UNavLocalGridManager::execAddLocalNavigationGridForPoints },
			{ "FindLocalNavigationGridPath", &UNavLocalGridManager::execFindLocalNavigationGridPath },
			{ "RemoveLocalNavigationGrid", &UNavLocalGridManager::execRemoveLocalNavigationGrid },
			{ "SetLocalNavigationGridDensity", &UNavLocalGridManager::execSetLocalNavigationGridDensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FVector Extent;
			FRotator Rotation;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData)) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Extent", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForBox", nullptr, nullptr, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			float CapsuleRadius;
			float CapsuleHalfHeight;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleHalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData)) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForCapsule", nullptr, nullptr, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData)) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** creates new grid data for single point */" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates new grid data for single point" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForPoint", nullptr, nullptr, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> Locations;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData)) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** creates single grid data for set of points */" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates single grid data for set of points" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForPoints", nullptr, nullptr, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics
	{
		struct NavLocalGridManager_eventFindLocalNavigationGridPath_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			TArray<FVector> PathPoints;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventFindLocalNavigationGridPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "FindLocalNavigationGridPath", nullptr, nullptr, sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics
	{
		struct NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms
		{
			UObject* WorldContextObject;
			int32 GridId;
			bool bRebuildGrids;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridId;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId = { "GridId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, GridId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "RemoveLocalNavigationGrid", nullptr, nullptr, sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics
	{
		struct NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms
		{
			UObject* WorldContextObject;
			float CellSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "SetLocalNavigationGridDensity", nullptr, nullptr, sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister()
	{
		return UNavLocalGridManager::StaticClass();
	}
	struct Z_Construct_UClass_UNavLocalGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLocalGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavLocalGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox, "AddLocalNavigationGridForBox" }, // 1950908424
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule, "AddLocalNavigationGridForCapsule" }, // 4176683893
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint, "AddLocalNavigationGridForPoint" }, // 4165485103
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints, "AddLocalNavigationGridForPoints" }, // 963514629
		{ &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath, "FindLocalNavigationGridPath" }, // 412986414
		{ &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid, "RemoveLocalNavigationGrid" }, // 4204622392
		{ &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity, "SetLocalNavigationGridDensity" }, // 3803613684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Manager for local navigation grids\n * \n *  Builds non overlapping grid from multiple sources, that can be used later for pathfinding.\n *  Check also: UGridPathFollowingComponent, FNavLocalGridData\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Navigation/NavLocalGridManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "Manager for local navigation grids\n\nBuilds non overlapping grid from multiple sources, that can be used later for pathfinding.\nCheck also: UGridPathFollowingComponent, FNavLocalGridData" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLocalGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLocalGridManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams = {
		&UNavLocalGridManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLocalGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLocalGridManager, 1696142869);
	template<> AIMODULE_API UClass* StaticClass<UNavLocalGridManager>()
	{
		return UNavLocalGridManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLocalGridManager(Z_Construct_UClass_UNavLocalGridManager, &UNavLocalGridManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UNavLocalGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLocalGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

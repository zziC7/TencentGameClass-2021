// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceArrayFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayFunctionLibrary() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBoolValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVectorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2DValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBoolValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVectorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2DValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBool)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuat>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColor)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector4>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2D)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBool)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColor)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector4,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2D)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(float,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceArrayFunctionLibrary::StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary()
	{
		UClass* Class = UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraArrayBool", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBool },
			{ "GetNiagaraArrayBoolValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBoolValue },
			{ "GetNiagaraArrayColor", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColor },
			{ "GetNiagaraArrayColorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColorValue },
			{ "GetNiagaraArrayFloat", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloat },
			{ "GetNiagaraArrayFloatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloatValue },
			{ "GetNiagaraArrayInt32", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32 },
			{ "GetNiagaraArrayInt32Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32Value },
			{ "GetNiagaraArrayQuat", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuat },
			{ "GetNiagaraArrayQuatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuatValue },
			{ "GetNiagaraArrayVector", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector },
			{ "GetNiagaraArrayVector2D", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2D },
			{ "GetNiagaraArrayVector2DValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2DValue },
			{ "GetNiagaraArrayVector4", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4 },
			{ "GetNiagaraArrayVector4Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4Value },
			{ "GetNiagaraArrayVectorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVectorValue },
			{ "SetNiagaraArrayBool", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBool },
			{ "SetNiagaraArrayBoolValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBoolValue },
			{ "SetNiagaraArrayColor", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColor },
			{ "SetNiagaraArrayColorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColorValue },
			{ "SetNiagaraArrayFloat", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloat },
			{ "SetNiagaraArrayFloatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloatValue },
			{ "SetNiagaraArrayInt32", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32 },
			{ "SetNiagaraArrayInt32Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32Value },
			{ "SetNiagaraArrayQuat", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuat },
			{ "SetNiagaraArrayQuatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuatValue },
			{ "SetNiagaraArrayVector", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector },
			{ "SetNiagaraArrayVector2D", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2D },
			{ "SetNiagaraArrayVector2DValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2DValue },
			{ "SetNiagaraArrayVector4", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4 },
			{ "SetNiagaraArrayVector4Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4Value },
			{ "SetNiagaraArrayVectorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Bool Data. */" },
		{ "DisplayName", "Niagara Get Bool Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Bool Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayBool", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Bool. */" },
		{ "DisplayName", "Niagara Get Bool Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Bool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayBoolValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FLinearColor> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FLinearColor Data. */" },
		{ "DisplayName", "Niagara Get Color Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FLinearColor Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayColor", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FLinearColor. */" },
		{ "DisplayName", "Niagara Get Color Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FLinearColor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayColorValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Float Data. */" },
		{ "DisplayName", "Niagara Get Float Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Float Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayFloat", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Float. */" },
		{ "DisplayName", "Niagara Get Float Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayFloatValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Int32 Data. */" },
		{ "DisplayName", "Niagara Get Int32 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Int32 Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayInt32", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Int32. */" },
		{ "DisplayName", "Niagara Get Int32 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Int32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayInt32Value", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FQuat> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FQuat Data. */" },
		{ "DisplayName", "Niagara Get Quaternion Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FQuat Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayQuat", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FQuat. */" },
		{ "DisplayName", "Niagara Get Quaternion Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayQuatValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector Data. */" },
		{ "DisplayName", "Niagara Get Vector Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector2D> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector2D Data. */" },
		{ "DisplayName", "Niagara Get Vector 2D Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector2D Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector2D", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector2D. */" },
		{ "DisplayName", "Niagara Get Vector 2D Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector2D." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector2DValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector4> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector4 Data. */" },
		{ "DisplayName", "Niagara Get Vector 4 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector4 Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector4", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector4 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector4. */" },
		{ "DisplayName", "Niagara Get Vector 4 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector4Value", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector. */" },
		{ "DisplayName", "Niagara Get Vector Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVectorValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<bool> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Bool Data. */" },
		{ "DisplayName", "Niagara Set Bool Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Bool Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayBool", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			bool Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Bool. */" },
		{ "DisplayName", "Niagara Set Bool Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Bool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayBoolValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FLinearColor> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FLinearColor Data. */" },
		{ "DisplayName", "Niagara Set Color Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FLinearColor Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayColor", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FLinearColor Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FLinearColor. */" },
		{ "DisplayName", "Niagara Set Color Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FLinearColor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayColorValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<float> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Float Data. */" },
		{ "DisplayName", "Niagara Set Float Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Float Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayFloat", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			float Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Float. */" },
		{ "DisplayName", "Niagara Set Float Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayFloatValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Int32 Data. */" },
		{ "DisplayName", "Niagara Set Int32 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Int32 Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayInt32", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Int32. */" },
		{ "DisplayName", "Niagara Set Int32 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Int32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayInt32Value", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FQuat> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FQuat Data. */" },
		{ "DisplayName", "Niagara Set Quaternion Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FQuat Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayQuat", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FQuat Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FQuat. */" },
		{ "DisplayName", "Niagara Set Quaternion Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FQuat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayQuatValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector Data. */" },
		{ "DisplayName", "Niagara Set Vector Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector2D> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector2D Data. */" },
		{ "DisplayName", "Niagara Set Vector 2D Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector2D Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector2D", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector2D Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector2D. */" },
		{ "DisplayName", "Niagara Set Vector 2D Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector2D." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector2DValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector4> ArrayData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector4 Data. */" },
		{ "DisplayName", "Niagara Set Vector 4 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector4 Data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector4", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector4 Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector4. */" },
		{ "DisplayName", "Niagara Set Vector 4 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector4Value", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_OverrideName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector. */" },
		{ "DisplayName", "Niagara Set Vector Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVectorValue", nullptr, nullptr, sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool, "GetNiagaraArrayBool" }, // 4171762922
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue, "GetNiagaraArrayBoolValue" }, // 3505788790
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor, "GetNiagaraArrayColor" }, // 332005140
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue, "GetNiagaraArrayColorValue" }, // 2367308281
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat, "GetNiagaraArrayFloat" }, // 3345432909
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue, "GetNiagaraArrayFloatValue" }, // 296862117
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32, "GetNiagaraArrayInt32" }, // 847509983
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value, "GetNiagaraArrayInt32Value" }, // 1251693118
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat, "GetNiagaraArrayQuat" }, // 710265721
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue, "GetNiagaraArrayQuatValue" }, // 1807602890
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector, "GetNiagaraArrayVector" }, // 225693854
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D, "GetNiagaraArrayVector2D" }, // 2181747830
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue, "GetNiagaraArrayVector2DValue" }, // 1082960468
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4, "GetNiagaraArrayVector4" }, // 1845500278
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value, "GetNiagaraArrayVector4Value" }, // 3113635625
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue, "GetNiagaraArrayVectorValue" }, // 1639734918
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool, "SetNiagaraArrayBool" }, // 708374146
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue, "SetNiagaraArrayBoolValue" }, // 3781917437
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor, "SetNiagaraArrayColor" }, // 3092065259
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue, "SetNiagaraArrayColorValue" }, // 1157962635
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat, "SetNiagaraArrayFloat" }, // 2342316194
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue, "SetNiagaraArrayFloatValue" }, // 1485941231
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32, "SetNiagaraArrayInt32" }, // 3873178609
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value, "SetNiagaraArrayInt32Value" }, // 1688916276
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat, "SetNiagaraArrayQuat" }, // 2975523068
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue, "SetNiagaraArrayQuatValue" }, // 1638734345
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector, "SetNiagaraArrayVector" }, // 3949618189
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D, "SetNiagaraArrayVector2D" }, // 2751238449
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue, "SetNiagaraArrayVector2DValue" }, // 287651516
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4, "SetNiagaraArrayVector4" }, // 3637955302
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value, "SetNiagaraArrayVector4Value" }, // 2114136357
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue, "SetNiagaraArrayVectorValue" }, // 2960068496
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* C++ and Blueprint library for accessing array types\n*/" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "C++ and Blueprint library for accessing array types" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceArrayFunctionLibrary, 3882637658);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFunctionLibrary>()
	{
		return UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceArrayFunctionLibrary(Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, &UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceArrayFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

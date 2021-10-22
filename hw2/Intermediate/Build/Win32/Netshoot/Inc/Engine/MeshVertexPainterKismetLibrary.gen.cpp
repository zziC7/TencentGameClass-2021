// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainterKismetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
// End Cross Module References
	DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execRemovePaintedVertices)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMeshVertexPainterKismetLibrary::RemovePaintedVertices(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_StartColor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_EndColor);
		P_GET_ENUM(EVertexPaintAxis,Z_Param_Axis);
		P_GET_UBOOL(Z_Param_bConvertToSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(Z_Param_StaticMeshComponent,Z_Param_Out_StartColor,Z_Param_Out_EndColor,EVertexPaintAxis(Z_Param_Axis),Z_Param_bConvertToSRGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FillColor);
		P_GET_UBOOL(Z_Param_bConvertToSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMeshVertexPainterKismetLibrary::PaintVerticesSingleColor(Z_Param_StaticMeshComponent,Z_Param_Out_FillColor,Z_Param_bConvertToSRGB);
		P_NATIVE_END;
	}
	void UMeshVertexPainterKismetLibrary::StaticRegisterNativesUMeshVertexPainterKismetLibrary()
	{
		UClass* Class = UMeshVertexPainterKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PaintVerticesLerpAlongAxis", &UMeshVertexPainterKismetLibrary::execPaintVerticesLerpAlongAxis },
			{ "PaintVerticesSingleColor", &UMeshVertexPainterKismetLibrary::execPaintVerticesSingleColor },
			{ "RemovePaintedVertices", &UMeshVertexPainterKismetLibrary::execRemovePaintedVertices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics
	{
		struct MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			FLinearColor StartColor;
			FLinearColor EndColor;
			EVertexPaintAxis Axis;
			bool bConvertToSRGB;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static void NewProp_bConvertToSRGB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, StartColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor = { "EndColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, EndColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms, Axis), Z_Construct_UEnum_Engine_EVertexPaintAxis, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB_SetBit(void* Obj)
	{
		((MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms*)Obj)->bConvertToSRGB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB = { "bConvertToSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_StartColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_EndColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::NewProp_bConvertToSRGB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis. */" },
		{ "CPP_Default_bConvertToSRGB", "true" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Paints vertex colors on a mesh component lerping from the start to the end color along the specified axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "PaintVerticesLerpAlongAxis", nullptr, nullptr, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesLerpAlongAxis_Parms), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics
	{
		struct MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			FLinearColor FillColor;
			bool bConvertToSRGB;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FillColor;
		static void NewProp_bConvertToSRGB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToSRGB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor_MetaData)) };
	void Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB_SetBit(void* Obj)
	{
		((MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms*)Obj)->bConvertToSRGB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB = { "bConvertToSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_FillColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::NewProp_bConvertToSRGB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Paints vertex colors on a mesh component in a specified color. */" },
		{ "CPP_Default_bConvertToSRGB", "true" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Paints vertex colors on a mesh component in a specified color." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "PaintVerticesSingleColor", nullptr, nullptr, sizeof(MeshVertexPainterKismetLibrary_eventPaintVerticesSingleColor_Parms), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics
	{
		struct MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "VertexPaint" },
		{ "Comment", "/** Removes vertex colors on a mesh component */" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ToolTip", "Removes vertex colors on a mesh component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPainterKismetLibrary, nullptr, "RemovePaintedVertices", nullptr, nullptr, sizeof(MeshVertexPainterKismetLibrary_eventRemovePaintedVertices_Parms), Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary_NoRegister()
	{
		return UMeshVertexPainterKismetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesLerpAlongAxis, "PaintVerticesLerpAlongAxis" }, // 3077560342
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_PaintVerticesSingleColor, "PaintVerticesSingleColor" }, // 4289184486
		{ &Z_Construct_UFunction_UMeshVertexPainterKismetLibrary_RemovePaintedVertices, "RemovePaintedVertices" }, // 10613802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h" },
		{ "ScriptName", "MeshVertexPainterLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPainterKismetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::ClassParams = {
		&UMeshVertexPainterKismetLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexPainterKismetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshVertexPainterKismetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshVertexPainterKismetLibrary, 1940722512);
	template<> ENGINE_API UClass* StaticClass<UMeshVertexPainterKismetLibrary>()
	{
		return UMeshVertexPainterKismetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshVertexPainterKismetLibrary(Z_Construct_UClass_UMeshVertexPainterKismetLibrary, &UMeshVertexPainterKismetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshVertexPainterKismetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPainterKismetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

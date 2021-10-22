// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WrapBoxSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBoxSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UWrapBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetFillSpanWhenLessThan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFillSpanWhenLessThan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillSpanWhenLessThan(Z_Param_InFillSpanWhenLessThan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetFillEmptySpace)
	{
		P_GET_UBOOL(Z_Param_InbFillEmptySpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillEmptySpace(Z_Param_InbFillEmptySpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot()
	{
		UClass* Class = UWrapBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillEmptySpace", &UWrapBoxSlot::execSetFillEmptySpace },
			{ "SetFillSpanWhenLessThan", &UWrapBoxSlot::execSetFillSpanWhenLessThan },
			{ "SetHorizontalAlignment", &UWrapBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UWrapBoxSlot::execSetPadding },
			{ "SetVerticalAlignment", &UWrapBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics
	{
		struct WrapBoxSlot_eventSetFillEmptySpace_Parms
		{
			bool InbFillEmptySpace;
		};
		static void NewProp_InbFillEmptySpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbFillEmptySpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit(void* Obj)
	{
		((WrapBoxSlot_eventSetFillEmptySpace_Parms*)Obj)->InbFillEmptySpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace = { "InbFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WrapBoxSlot_eventSetFillEmptySpace_Parms), &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetFillEmptySpace", nullptr, nullptr, sizeof(WrapBoxSlot_eventSetFillEmptySpace_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics
	{
		struct WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms
		{
			float InFillSpanWhenLessThan;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFillSpanWhenLessThan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan = { "InFillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms, InFillSpanWhenLessThan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetFillSpanWhenLessThan", nullptr, nullptr, sizeof(WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics
	{
		struct WrapBoxSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(WrapBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics
	{
		struct WrapBoxSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(WrapBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics
	{
		struct WrapBoxSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(WrapBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister()
	{
		return UWrapBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UWrapBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySpace_MetaData[];
#endif
		static void NewProp_bFillEmptySpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillSpanWhenLessThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FillSpanWhenLessThan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace, "SetFillEmptySpace" }, // 1184987263
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan, "SetFillSpanWhenLessThan" }, // 3737286132
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2158323119
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetPadding, "SetPadding" }, // 4071151088
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 1380129703
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UWrapBox, contains the widget that is flowed vertically */" },
		{ "IncludePath", "Components/WrapBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The Slot for the UWrapBox, contains the widget that is flowed vertically" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** Should this slot fill the remaining space on the line? */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "Should this slot fill the remaining space on the line?" },
	};
#endif
	void Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit(void* Obj)
	{
		((UWrapBoxSlot*)Obj)->bFillEmptySpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace = { "bFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWrapBoxSlot), &Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/**\n\x09 * If the total available space in the wrap panel drops below this threshold, this slot will attempt to fill an entire line.\n\x09 * NOTE: A value of 0, denotes no filling will occur.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "If the total available space in the wrap panel drops below this threshold, this slot will attempt to fill an entire line.\nNOTE: A value of 0, denotes no filling will occur." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan = { "FillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBoxSlot, FillSpanWhenLessThan), METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapBoxSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWrapBoxSlot_Statics::ClassParams = {
		&UWrapBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrapBoxSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWrapBoxSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWrapBoxSlot, 3513657312);
	template<> UMG_API UClass* StaticClass<UWrapBoxSlot>()
	{
		return UWrapBoxSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWrapBoxSlot(Z_Construct_UClass_UWrapBoxSlot, &UWrapBoxSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UWrapBoxSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBoxSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

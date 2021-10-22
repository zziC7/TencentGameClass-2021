// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TextWidgetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidgetTypes() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
class UScriptStruct* FShapedTextOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapedTextOptions, Z_Construct_UPackage__Script_UMG(), TEXT("ShapedTextOptions"), sizeof(FShapedTextOptions), Get_Z_Construct_UScriptStruct_FShapedTextOptions_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FShapedTextOptions>()
{
	return FShapedTextOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShapedTextOptions(FShapedTextOptions::StaticStruct, TEXT("/Script/UMG"), TEXT("ShapedTextOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions
{
	FScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions()
	{
		UScriptStruct::DeferCppStructOps<FShapedTextOptions>(FName(TEXT("ShapedTextOptions")));
	}
} ScriptStruct_UMG_StaticRegisterNativesFShapedTextOptions;
	struct Z_Construct_UScriptStruct_FShapedTextOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextShapingMethod_MetaData[];
#endif
		static void NewProp_bOverride_TextShapingMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextShapingMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextFlowDirection_MetaData[];
#endif
		static void NewProp_bOverride_TextFlowDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextFlowDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextShapingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextShapingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextShapingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextFlowDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextFlowDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextFlowDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Common data for all widgets that use shaped text.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Common data for all widgets that use shaped text.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapedTextOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit(void* Obj)
	{
		((FShapedTextOptions*)Obj)->bOverride_TextShapingMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod = { "bOverride_TextShapingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit(void* Obj)
	{
		((FShapedTextOptions*)Obj)->bOverride_TextFlowDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection = { "bOverride_TextFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod) */" },
		{ "EditCondition", "bOverride_TextShapingMethod" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod = { "TextShapingMethod", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapedTextOptions, TextShapingMethod), Z_Construct_UEnum_SlateCore_ETextShapingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection) */" },
		{ "EditCondition", "bOverride_TextFlowDirection" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection = { "TextFlowDirection", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShapedTextOptions, TextFlowDirection), Z_Construct_UEnum_Slate_ETextFlowDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"ShapedTextOptions",
		sizeof(FShapedTextOptions),
		alignof(FShapedTextOptions),
		Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShapedTextOptions"), sizeof(FShapedTextOptions), Get_Z_Construct_UScriptStruct_FShapedTextOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShapedTextOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShapedTextOptions_Hash() { return 3896234562U; }
	DEFINE_FUNCTION(UTextLayoutWidget::execSetJustification)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
		P_NATIVE_END;
	}
	void UTextLayoutWidget::StaticRegisterNativesUTextLayoutWidget()
	{
		UClass* Class = UTextLayoutWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetJustification", &UTextLayoutWidget::execSetJustification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics
	{
		struct TextLayoutWidget_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InJustification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextLayoutWidget_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextLayoutWidget, nullptr, "SetJustification", nullptr, nullptr, sizeof(TextLayoutWidget_eventSetJustification_Parms), Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextLayoutWidget_SetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister()
	{
		return UTextLayoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTextLayoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrappingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrappingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrappingPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoWrapText_MetaData[];
#endif
		static void NewProp_AutoWrapText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoWrapText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextLayoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextLayoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextLayoutWidget_SetJustification, "SetJustification" }, // 2162645764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all widgets that use a text layout.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "IncludePath", "Components/TextWidgetTypes.h" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Base class for all widgets that use a text layout.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData[] = {
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** The wrapping policy to use. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The wrapping policy to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy = { "WrappingPolicy", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, WrappingPolicy), Z_Construct_UEnum_Slate_ETextWrappingPolicy, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** True if we're wrapping text automatically based on the computed horizontal space for this widget. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "True if we're wrapping text automatically based on the computed horizontal space for this widget." },
	};
#endif
	void Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit(void* Obj)
	{
		((UTextLayoutWidget*)Obj)->AutoWrapText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText = { "AutoWrapText", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTextLayoutWidget), &Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt = { "WrapTextAt", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, WrapTextAt), METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount of blank space left around the edges of text area. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount of blank space left around the edges of text area." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to scale each lines height by. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount to scale each lines height by." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextLayoutWidget, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextLayoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextLayoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams = {
		&UTextLayoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextLayoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextLayoutWidget, 3969766270);
	template<> UMG_API UClass* StaticClass<UTextLayoutWidget>()
	{
		return UTextLayoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextLayoutWidget(Z_Construct_UClass_UTextLayoutWidget, &UTextLayoutWidget::StaticClass, TEXT("/Script/UMG"), TEXT("UTextLayoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextLayoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlock() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextTransformPolicy();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTextBlock::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execGetDynamicOutlineMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicOutlineMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execGetDynamicFontMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicFontMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetTextTransformPolicy)
	{
		P_GET_ENUM(ETextTransformPolicy,Z_Param_InTransformPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextTransformPolicy(ETextTransformPolicy(Z_Param_InTransformPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetAutoWrapText)
	{
		P_GET_UBOOL(Z_Param_InAutoTextWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetMinDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetStrikeBrush)
	{
		P_GET_STRUCT(FSlateBrush,Z_Param_InStrikeBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrikeBrush(Z_Param_InStrikeBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetFont)
	{
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFont(Z_Param_InFontInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetShadowOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowOffset(Z_Param_InShadowOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetShadowColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpacity(Z_Param_InOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBlock::execSetColorAndOpacity)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	void UTextBlock::StaticRegisterNativesUTextBlock()
	{
		UClass* Class = UTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicFontMaterial", &UTextBlock::execGetDynamicFontMaterial },
			{ "GetDynamicOutlineMaterial", &UTextBlock::execGetDynamicOutlineMaterial },
			{ "GetText", &UTextBlock::execGetText },
			{ "SetAutoWrapText", &UTextBlock::execSetAutoWrapText },
			{ "SetColorAndOpacity", &UTextBlock::execSetColorAndOpacity },
			{ "SetFont", &UTextBlock::execSetFont },
			{ "SetMinDesiredWidth", &UTextBlock::execSetMinDesiredWidth },
			{ "SetOpacity", &UTextBlock::execSetOpacity },
			{ "SetShadowColorAndOpacity", &UTextBlock::execSetShadowColorAndOpacity },
			{ "SetShadowOffset", &UTextBlock::execSetShadowOffset },
			{ "SetStrikeBrush", &UTextBlock::execSetStrikeBrush },
			{ "SetText", &UTextBlock::execSetText },
			{ "SetTextTransformPolicy", &UTextBlock::execSetTextTransformPolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics
	{
		struct TextBlock_eventGetDynamicFontMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicFontMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicFontMaterial", nullptr, nullptr, sizeof(TextBlock_eventGetDynamicFontMaterial_Parms), Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics
	{
		struct TextBlock_eventGetDynamicOutlineMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetDynamicOutlineMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetDynamicOutlineMaterial", nullptr, nullptr, sizeof(TextBlock_eventGetDynamicOutlineMaterial_Parms), Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_GetText_Statics
	{
		struct TextBlock_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** \n\x09 * Gets the widget text\n\x09 * @return The widget text\n\x09 */" },
		{ "DisplayName", "GetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Gets the widget text\n@return The widget text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "GetText", nullptr, nullptr, sizeof(TextBlock_eventGetText_Parms), Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics
	{
		struct TextBlock_eventSetAutoWrapText_Parms
		{
			bool InAutoTextWrap;
		};
		static void NewProp_InAutoTextWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoTextWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit(void* Obj)
	{
		((TextBlock_eventSetAutoWrapText_Parms*)Obj)->InAutoTextWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap = { "InAutoTextWrap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextBlock_eventSetAutoWrapText_Parms), &Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the auto wrap for this text block.\n\x09 *\n\x09 * @param InAutoTextWrap to turn wrap on or off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the auto wrap for this text block.\n\n@param InAutoTextWrap to turn wrap on or off." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetAutoWrapText", nullptr, nullptr, sizeof(TextBlock_eventSetAutoWrapText_Parms), Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetAutoWrapText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetAutoWrapText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics
	{
		struct TextBlock_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the text in this text block\n\x09 *\n\x09 * @param InColorAndOpacity\x09\x09The new text color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity             The new text color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetColorAndOpacity", nullptr, nullptr, sizeof(TextBlock_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetFont_Statics
	{
		struct TextBlock_eventSetFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetFont_Statics::NewProp_InFontInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the font info for this text block\n\x09 * \n\x09 * @param InFontInfo The new font info\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the font info for this text block\n\n@param InFontInfo The new font info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetFont", nullptr, nullptr, sizeof(TextBlock_eventSetFont_Parms), Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics
	{
		struct TextBlock_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 *  Set the minimum desired width for this text block\n\x09 *\n\x09 *  @param InMinDesiredWidth new minimum desired width\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the minimum desired width for this text block\n\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetMinDesiredWidth", nullptr, nullptr, sizeof(TextBlock_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetOpacity_Statics
	{
		struct TextBlock_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the opacity of the text in this text block\n\x09*\n\x09* @param InOpacity\x09\x09The new text opacity\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetOpacity", nullptr, nullptr, sizeof(TextBlock_eventSetOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics
	{
		struct TextBlock_eventSetShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity = { "InShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the text drop shadow\n\x09 * Note: if opacity is zero no shadow will be drawn\n\x09 *\n\x09 * @param InShadowColorAndOpacity\x09\x09The new drop shadow color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the text drop shadow\nNote: if opacity is zero no shadow will be drawn\n\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowColorAndOpacity", nullptr, nullptr, sizeof(TextBlock_eventSetShadowColorAndOpacity_Parms), Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics
	{
		struct TextBlock_eventSetShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset = { "InShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::NewProp_InShadowOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the offset that the text drop shadow should be drawn at\n\x09 *\n\x09 * @param InShadowOffset\x09\x09The new offset\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Sets the offset that the text drop shadow should be drawn at\n\n@param InShadowOffset                The new offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetShadowOffset", nullptr, nullptr, sizeof(TextBlock_eventSetShadowOffset_Parms), Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics
	{
		struct TextBlock_eventSetStrikeBrush_Parms
		{
			FSlateBrush InStrikeBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStrikeBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush = { "InStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetStrikeBrush_Parms, InStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::NewProp_InStrikeBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the strike brush for this text block\n\x09 *\n\x09 * @param InStrikeBrush The new brush to use to strike through text\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Dynamically set the strike brush for this text block\n\n@param InStrikeBrush The new brush to use to strike through text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetStrikeBrush", nullptr, nullptr, sizeof(TextBlock_eventSetStrikeBrush_Parms), Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetText_Statics
	{
		struct TextBlock_eventSetText_Parms
		{
			FText InText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetText_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "DisplayName", "SetText (Text)" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetText", nullptr, nullptr, sizeof(TextBlock_eventSetText_Parms), Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics
	{
		struct TextBlock_eventSetTextTransformPolicy_Parms
		{
			ETextTransformPolicy InTransformPolicy;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTransformPolicy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InTransformPolicy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy = { "InTransformPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBlock_eventSetTextTransformPolicy_Parms, InTransformPolicy), Z_Construct_UEnum_Slate_ETextTransformPolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the text transformation policy for this text block.\n\x09 *\n\x09 * @param InTransformPolicy the new text transformation policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Set the text transformation policy for this text block.\n\n@param InTransformPolicy the new text transformation policy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBlock, nullptr, "SetTextTransformPolicy", nullptr, nullptr, sizeof(TextBlock_eventSetTextTransformPolicy_Parms), Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextBlock_NoRegister()
	{
		return UTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacityDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ShadowColorAndOpacityDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapWithInvalidationPanel_MetaData[];
#endif
		static void NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapWithInvalidationPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoWrapText_MetaData[];
#endif
		static void NewProp_bAutoWrapText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoWrapText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextTransformPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextTransformPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextTransformPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimpleTextMode_MetaData[];
#endif
		static void NewProp_bSimpleTextMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimpleTextMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicFontMaterial, "GetDynamicFontMaterial" }, // 552462346
		{ &Z_Construct_UFunction_UTextBlock_GetDynamicOutlineMaterial, "GetDynamicOutlineMaterial" }, // 1134643042
		{ &Z_Construct_UFunction_UTextBlock_GetText, "GetText" }, // 3210696414
		{ &Z_Construct_UFunction_UTextBlock_SetAutoWrapText, "SetAutoWrapText" }, // 282465446
		{ &Z_Construct_UFunction_UTextBlock_SetColorAndOpacity, "SetColorAndOpacity" }, // 1634593489
		{ &Z_Construct_UFunction_UTextBlock_SetFont, "SetFont" }, // 3698551585
		{ &Z_Construct_UFunction_UTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 3057415592
		{ &Z_Construct_UFunction_UTextBlock_SetOpacity, "SetOpacity" }, // 1173206704
		{ &Z_Construct_UFunction_UTextBlock_SetShadowColorAndOpacity, "SetShadowColorAndOpacity" }, // 3214589643
		{ &Z_Construct_UFunction_UTextBlock_SetShadowOffset, "SetShadowOffset" }, // 3001281729
		{ &Z_Construct_UFunction_UTextBlock_SetStrikeBrush, "SetStrikeBrush" }, // 3849868588
		{ &Z_Construct_UFunction_UTextBlock_SetText, "SetText" }, // 658679876
		{ &Z_Construct_UFunction_UTextBlock_SetTextTransformPolicy, "SetTextTransformPolicy" }, // 3985471027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple static text widget.\n *\n * * No Children\n * * Text\n */" },
		{ "DisplayName", "Text" },
		{ "IncludePath", "Components/TextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A simple static text widget.\n\n* No Children\n* Text" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The text to display */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, Text), METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate = { "TextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of the text */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The font to render the text with */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The font to render the text with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush to strike through text with */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The brush to strike through text with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush = { "StrikeBrush", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The direction the shadow is cast */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The direction the shadow is cast" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color of the shadow */" },
		{ "DisplayName", "Shadow Color" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The color of the shadow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ShadowColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "A bindable delegate for the ShadowColorAndOpacity." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate = { "ShadowColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, ShadowColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired size for the text */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, it will automatically wrap this text widget with an invalidation panel */" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If true, it will automatically wrap this text widget with an invalidation panel" },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bWrapWithInvalidationPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel = { "bWrapWithInvalidationPanel", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData[] = {
		{ "Comment", "/** Whether the text should automatically wrap */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bAutoWrapText is deprecated. Please use AutoWrapText instead." },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "Whether the text should automatically wrap" },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bAutoWrapText_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText = { "bAutoWrapText", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The text transformation policy to apply to this text block */" },
		{ "DisplayName", "Transform Policy" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "The text transformation policy to apply to this text block" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy = { "TextTransformPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlock, TextTransformPolicy), Z_Construct_UEnum_Slate_ETextTransformPolicy, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * If this is enabled, text shaping, wrapping, justification are disabled in favor of much faster text layout and measurement.\n\x09 * This feature is only suitable for \"simple\" text (ie, text containing only numbers or basic ASCII) as it disables the complex text rendering support required for certain languages (such as Arabic and Thai).\n\x09 * It is significantly faster for text that can take advantage of it (particularly if that text changes frequently), but shouldn't be used for localized user-facing text.\n\x09 */" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/TextBlock.h" },
		{ "ToolTip", "If this is enabled, text shaping, wrapping, justification are disabled in favor of much faster text layout and measurement.\nThis feature is only suitable for \"simple\" text (ie, text containing only numbers or basic ASCII) as it disables the complex text rendering support required for certain languages (such as Arabic and Thai).\nIt is significantly faster for text that can take advantage of it (particularly if that text changes frequently), but shouldn't be used for localized user-facing text." },
	};
#endif
	void Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit(void* Obj)
	{
		((UTextBlock*)Obj)->bSimpleTextMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode = { "bSimpleTextMode", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTextBlock), &Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_StrikeBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_ShadowColorAndOpacityDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bWrapWithInvalidationPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bAutoWrapText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_TextTransformPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlock_Statics::NewProp_bSimpleTextMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextBlock_Statics::ClassParams = {
		&UTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBlock, 655753710);
	template<> UMG_API UClass* StaticClass<UTextBlock>()
	{
		return UTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlock(Z_Construct_UClass_UTextBlock, &UTextBlock::StaticClass, TEXT("/Script/UMG"), TEXT("UTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

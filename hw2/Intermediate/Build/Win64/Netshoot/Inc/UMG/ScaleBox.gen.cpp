// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ScaleBox.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretch();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EStretchDirection();
// End Cross Module References
	DEFINE_FUNCTION(UScaleBox::execSetIgnoreInheritedScale)
	{
		P_GET_UBOOL(Z_Param_bInIgnoreInheritedScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreInheritedScale(Z_Param_bInIgnoreInheritedScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleBox::execSetUserSpecifiedScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InUserSpecifiedScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserSpecifiedScale(Z_Param_InUserSpecifiedScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleBox::execSetStretchDirection)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InStretchDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStretchDirection(EStretchDirection::Type(Z_Param_InStretchDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScaleBox::execSetStretch)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InStretch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStretch(EStretch::Type(Z_Param_InStretch));
		P_NATIVE_END;
	}
	void UScaleBox::StaticRegisterNativesUScaleBox()
	{
		UClass* Class = UScaleBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIgnoreInheritedScale", &UScaleBox::execSetIgnoreInheritedScale },
			{ "SetStretch", &UScaleBox::execSetStretch },
			{ "SetStretchDirection", &UScaleBox::execSetStretchDirection },
			{ "SetUserSpecifiedScale", &UScaleBox::execSetUserSpecifiedScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics
	{
		struct ScaleBox_eventSetIgnoreInheritedScale_Parms
		{
			bool bInIgnoreInheritedScale;
		};
		static void NewProp_bInIgnoreInheritedScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreInheritedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale_SetBit(void* Obj)
	{
		((ScaleBox_eventSetIgnoreInheritedScale_Parms*)Obj)->bInIgnoreInheritedScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale = { "bInIgnoreInheritedScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScaleBox_eventSetIgnoreInheritedScale_Parms), &Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::NewProp_bInIgnoreInheritedScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetIgnoreInheritedScale", nullptr, nullptr, sizeof(ScaleBox_eventSetIgnoreInheritedScale_Parms), Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleBox_SetStretch_Statics
	{
		struct ScaleBox_eventSetStretch_Parms
		{
			TEnumAsByte<EStretch::Type> InStretch;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStretch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBox_SetStretch_Statics::NewProp_InStretch = { "InStretch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleBox_eventSetStretch_Parms, InStretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetStretch_Statics::NewProp_InStretch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBox_SetStretch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetStretch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetStretch", nullptr, nullptr, sizeof(ScaleBox_eventSetStretch_Parms), Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBox_SetStretch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleBox_SetStretch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics
	{
		struct ScaleBox_eventSetStretchDirection_Parms
		{
			TEnumAsByte<EStretchDirection::Type> InStretchDirection;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InStretchDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::NewProp_InStretchDirection = { "InStretchDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleBox_eventSetStretchDirection_Parms, InStretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::NewProp_InStretchDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetStretchDirection", nullptr, nullptr, sizeof(ScaleBox_eventSetStretchDirection_Parms), Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBox_SetStretchDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleBox_SetStretchDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics
	{
		struct ScaleBox_eventSetUserSpecifiedScale_Parms
		{
			float InUserSpecifiedScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InUserSpecifiedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::NewProp_InUserSpecifiedScale = { "InUserSpecifiedScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScaleBox_eventSetUserSpecifiedScale_Parms, InUserSpecifiedScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::NewProp_InUserSpecifiedScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScaleBox, nullptr, "SetUserSpecifiedScale", nullptr, nullptr, sizeof(ScaleBox_eventSetUserSpecifiedScale_Parms), Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScaleBox_NoRegister()
	{
		return UScaleBox::StaticClass();
	}
	struct Z_Construct_UClass_UScaleBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StretchDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSpecifiedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UserSpecifiedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreInheritedScale_MetaData[];
#endif
		static void NewProp_IgnoreInheritedScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreInheritedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScaleBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScaleBox_SetIgnoreInheritedScale, "SetIgnoreInheritedScale" }, // 3776670767
		{ &Z_Construct_UFunction_UScaleBox_SetStretch, "SetStretch" }, // 2639319707
		{ &Z_Construct_UFunction_UScaleBox_SetStretchDirection, "SetStretchDirection" }, // 1935531957
		{ &Z_Construct_UFunction_UScaleBox_SetUserSpecifiedScale, "SetUserSpecifiedScale" }, // 945525948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If\n * you needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need\n * to auto fit some text to an area, this is the control for you.\n *\n * * Single Child\n * * Aspect Ratio\n */" },
		{ "IncludePath", "Components/ScaleBox.h" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Allows you to place content with a desired size and have it scale to meet the constraints placed on this box's alloted area.  If\nyou needed to have a background image scale to fill an area but not become distorted with different aspect ratios, or if you need\nto auto fit some text to an area, this is the control for you.\n\n* Single Child\n* Aspect Ratio" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch_MetaData[] = {
		{ "Category", "Stretching" },
		{ "Comment", "/** The stretching rule to apply when content is stretched */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "The stretching rule to apply when content is stretched" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScaleBox, Stretch), Z_Construct_UEnum_Slate_EStretch, METADATA_PARAMS(Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection_MetaData[] = {
		{ "Category", "Stretching" },
		{ "Comment", "/** Controls in what direction content can be scaled */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Controls in what direction content can be scaled" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection = { "StretchDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScaleBox, StretchDirection), Z_Construct_UEnum_Slate_EStretchDirection, METADATA_PARAMS(Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale_MetaData[] = {
		{ "Category", "Stretching" },
		{ "Comment", "/** Optional scale that can be specified by the User. Used only for UserSpecified stretching. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Optional scale that can be specified by the User. Used only for UserSpecified stretching." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale = { "UserSpecifiedScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScaleBox, UserSpecifiedScale), METADATA_PARAMS(Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_MetaData[] = {
		{ "Category", "Stretching" },
		{ "Comment", "/** Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation. */" },
		{ "ModuleRelativePath", "Public/Components/ScaleBox.h" },
		{ "ToolTip", "Optional bool to ignore the inherited scale. Applies inverse scaling to counteract parents before applying the local scale operation." },
	};
#endif
	void Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_SetBit(void* Obj)
	{
		((UScaleBox*)Obj)->IgnoreInheritedScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale = { "IgnoreInheritedScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScaleBox), &Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_Stretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_StretchDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_UserSpecifiedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleBox_Statics::NewProp_IgnoreInheritedScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaleBox_Statics::ClassParams = {
		&UScaleBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScaleBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScaleBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaleBox, 2626050567);
	template<> UMG_API UClass* StaticClass<UScaleBox>()
	{
		return UScaleBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaleBox(Z_Construct_UClass_UScaleBox, &UScaleBox::StaticClass, TEXT("/Script/UMG"), TEXT("UScaleBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleBox);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScaleBox)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

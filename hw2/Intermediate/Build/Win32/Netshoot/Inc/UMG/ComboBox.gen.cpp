// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ComboBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UComboBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBox();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature();
// End Cross Module References
	void UComboBox::StaticRegisterNativesUComboBox()
	{
	}
	UClass* Z_Construct_UClass_UComboBox_NoRegister()
	{
		return UComboBox::StaticClass();
	}
	struct Z_Construct_UClass_UComboBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "ComboBox (Object)" },
		{ "IncludePath", "Components/ComboBox.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The list of items to be displayed on the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The list of items to be displayed on the combobox." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComboBox, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent = { "OnGenerateWidgetEvent", nullptr, (EPropertyFlags)0x0010000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComboBox, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
	};
#endif
	void Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UComboBox*)Obj)->bIsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UComboBox), &Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboBox_Statics::ClassParams = {
		&UComboBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboBox, 3314353718);
	template<> UMG_API UClass* StaticClass<UComboBox>()
	{
		return UComboBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBox(Z_Construct_UClass_UComboBox, &UComboBox::StaticClass, TEXT("/Script/UMG"), TEXT("UComboBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

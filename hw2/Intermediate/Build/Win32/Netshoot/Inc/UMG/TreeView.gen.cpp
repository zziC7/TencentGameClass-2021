// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TreeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeView() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UMG_API UClass* Z_Construct_UClass_UListView();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms
		{
			UObject* Item;
			bool bIsExpanded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnItemExpansionChangedDynamic_Parms*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), &Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::NewProp_bIsExpanded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnItemExpansionChangedDynamic__DelegateSignature", nullptr, nullptr, sizeof(_Script_UMG_eventOnItemExpansionChangedDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms
		{
			UObject* Item;
			TArray<UObject*> Children;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnGetItemChildrenDynamic_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::NewProp_Children,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnGetItemChildrenDynamic__DelegateSignature", nullptr, nullptr, sizeof(_Script_UMG_eventOnGetItemChildrenDynamic_Parms), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTreeView::execCollapseAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollapseAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeView::execExpandAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExpandAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreeView::execSetItemExpansion)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_GET_UBOOL(Z_Param_bExpandItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemExpansion(Z_Param_Item,Z_Param_bExpandItem);
		P_NATIVE_END;
	}
	void UTreeView::StaticRegisterNativesUTreeView()
	{
		UClass* Class = UTreeView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollapseAll", &UTreeView::execCollapseAll },
			{ "ExpandAll", &UTreeView::execExpandAll },
			{ "SetItemExpansion", &UTreeView::execSetItemExpansion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreeView_CollapseAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Collapses all currently expanded items */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Collapses all currently expanded items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "CollapseAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_CollapseAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_CollapseAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_CollapseAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_ExpandAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Expands all items with children */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Expands all items with children" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "ExpandAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_ExpandAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_ExpandAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_ExpandAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics
	{
		struct TreeView_eventSetItemExpansion_Parms
		{
			UObject* Item;
			bool bExpandItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_bExpandItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreeView_eventSetItemExpansion_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit(void* Obj)
	{
		((TreeView_eventSetItemExpansion_Parms*)Obj)->bExpandItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem = { "bExpandItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TreeView_eventSetItemExpansion_Parms), &Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::NewProp_bExpandItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TreeView" },
		{ "Comment", "/** Attempts to expand/collapse the given item (only relevant if the item has children) */" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Attempts to expand/collapse the given item (only relevant if the item has children)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreeView, nullptr, "SetItemExpansion", nullptr, nullptr, sizeof(TreeView_eventSetItemExpansion_Parms), Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreeView_SetItemExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreeView_SetItemExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreeView_NoRegister()
	{
		return UTreeView::StaticClass();
	}
	struct Z_Construct_UClass_UTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnGetItemChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BP_OnGetItemChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnItemExpansionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnItemExpansionChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreeView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreeView_CollapseAll, "CollapseAll" }, // 3614596061
		{ &Z_Construct_UFunction_UTreeView_ExpandAll, "ExpandAll" }, // 3848734135
		{ &Z_Construct_UFunction_UTreeView_SetItemExpansion, "SetItemExpansion" }, // 3061848276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Similar to ListView, but can display a hierarchical tree of elements.\n * The base items source for the tree identifies the root items, each of which can have n associated child items.\n * There is no hard limit to the nesting - child items can have children and so on\n *\n * To make a widget usable as an entry in a TreeView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "IncludePath", "Components/TreeView.h" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Similar to ListView, but can display a hierarchical tree of elements.\nThe base items source for the tree identifies the root items, each of which can have n associated child items.\nThere is no hard limit to the nesting - child items can have children and so on\n\nTo make a widget usable as an entry in a TreeView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "Comment", "/** Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound. */" },
		{ "DisplayName", "On Get Item Children" },
		{ "IsBindableEvent", "" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
		{ "ToolTip", "Called to get the list of children (if any) that correspond to the given item. Only called if the native C++ version of the event is not bound." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren = { "BP_OnGetItemChildren", nullptr, (EPropertyFlags)0x0040000000080001, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeView, BP_OnGetItemChildren), Z_Construct_UDelegateFunction_UMG_OnGetItemChildrenDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Components/TreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged = { "BP_OnItemExpansionChanged", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTreeView, BP_OnItemExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnItemExpansionChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnGetItemChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeView_Statics::NewProp_BP_OnItemExpansionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreeView_Statics::ClassParams = {
		&UTreeView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTreeView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreeView, 111185260);
	template<> UMG_API UClass* StaticClass<UTreeView>()
	{
		return UTreeView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreeView(Z_Construct_UClass_UTreeView, &UTreeView::StaticClass, TEXT("/Script/UMG"), TEXT("UTreeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

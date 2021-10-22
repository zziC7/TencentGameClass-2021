// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/TileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileView() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UTileView::execGetEntryWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntryWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execGetEntryHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntryHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execSetEntryWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntryWidth(Z_Param_NewWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execSetEntryHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntryHeight(Z_Param_NewHeight);
		P_NATIVE_END;
	}
	void UTileView::StaticRegisterNativesUTileView()
	{
		UClass* Class = UTileView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntryHeight", &UTileView::execGetEntryHeight },
			{ "GetEntryWidth", &UTileView::execGetEntryWidth },
			{ "SetEntryHeight", &UTileView::execSetEntryHeight },
			{ "SetEntryWidth", &UTileView::execSetEntryWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileView_GetEntryHeight_Statics
	{
		struct TileView_eventGetEntryHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventGetEntryHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the height of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the height of tile entries" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryHeight", nullptr, nullptr, sizeof(TileView_eventGetEntryHeight_Parms), Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_GetEntryHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_GetEntryWidth_Statics
	{
		struct TileView_eventGetEntryWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventGetEntryWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the width of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the width of tile entries" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryWidth", nullptr, nullptr, sizeof(TileView_eventGetEntryWidth_Parms), Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_GetEntryWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_SetEntryHeight_Statics
	{
		struct TileView_eventSetEntryHeight_Parms
		{
			float NewHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventSetEntryHeight_Parms, NewHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the height of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the height of every tile entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryHeight", nullptr, nullptr, sizeof(TileView_eventSetEntryHeight_Parms), Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_SetEntryWidth_Statics
	{
		struct TileView_eventSetEntryWidth_Parms
		{
			float NewWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileView_eventSetEntryWidth_Parms, NewWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the width of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the width of every tile entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryWidth", nullptr, nullptr, sizeof(TileView_eventSetEntryWidth_Parms), Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileView_NoRegister()
	{
		return UTileView::StaticClass();
	}
	struct Z_Construct_UClass_UTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntryHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntryWidth;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TileAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TileAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapHorizontalNavigation_MetaData[];
#endif
		static void NewProp_bWrapHorizontalNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapHorizontalNavigation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileView_GetEntryHeight, "GetEntryHeight" }, // 1313231307
		{ &Z_Construct_UFunction_UTileView_GetEntryWidth, "GetEntryWidth" }, // 2284566127
		{ &Z_Construct_UFunction_UTileView_SetEntryHeight, "SetEntryHeight" }, // 3480971327
		{ &Z_Construct_UFunction_UTileView_SetEntryWidth, "SetEntryWidth" }, // 4193136750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ListView that presents the contents as a set of tiles all uniformly sized.\n *\n * To make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "IncludePath", "Components/TileView.h" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ListView that presents the contents as a set of tiles all uniformly sized.\n\nTo make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The height of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The height of each tile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight = { "EntryHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, EntryHeight), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The width of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The width of each tile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth = { "EntryWidth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, EntryWidth), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The method by which to align the tile entries in the available space for the tile view */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The method by which to align the tile entries in the available space for the tile view" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment = { "TileAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileView, TileAlignment), Z_Construct_UEnum_Slate_EListItemAlignment, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** True to allow left/right navigation to wrap back to the tile on the opposite edge */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "True to allow left/right navigation to wrap back to the tile on the opposite edge" },
	};
#endif
	void Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit(void* Obj)
	{
		((UTileView*)Obj)->bWrapHorizontalNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation = { "bWrapHorizontalNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTileView), &Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileView_Statics::ClassParams = {
		&UTileView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTileView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileView, 2042001580);
	template<> UMG_API UClass* StaticClass<UTileView>()
	{
		return UTileView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileView(Z_Construct_UClass_UTileView, &UTileView::StaticClass, TEXT("/Script/UMG"), TEXT("UTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

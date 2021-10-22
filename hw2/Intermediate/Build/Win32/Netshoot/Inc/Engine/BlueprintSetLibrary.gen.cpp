// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/BlueprintSetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintSetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintSetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintSetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary()
	{
		UClass* Class = UBlueprintSetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Set_Add", &UBlueprintSetLibrary::execSet_Add },
			{ "Set_AddItems", &UBlueprintSetLibrary::execSet_AddItems },
			{ "Set_Clear", &UBlueprintSetLibrary::execSet_Clear },
			{ "Set_Contains", &UBlueprintSetLibrary::execSet_Contains },
			{ "Set_Difference", &UBlueprintSetLibrary::execSet_Difference },
			{ "Set_Intersection", &UBlueprintSetLibrary::execSet_Intersection },
			{ "Set_Length", &UBlueprintSetLibrary::execSet_Length },
			{ "Set_Remove", &UBlueprintSetLibrary::execSet_Remove },
			{ "Set_RemoveItems", &UBlueprintSetLibrary::execSet_RemoveItems },
			{ "Set_ToArray", &UBlueprintSetLibrary::execSet_ToArray },
			{ "Set_Union", &UBlueprintSetLibrary::execSet_Union },
			{ "SetSetPropertyByName", &UBlueprintSetLibrary::execSetSetPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics
	{
		struct BlueprintSetLibrary_eventSet_Add_Parms
		{
			TSet<int32> TargetSet;
			int32 NewItem;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Add_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_NewItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Add_Parms, NewItem), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_NewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_NewItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewItem" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/** \n\x09 * Adds item to set\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to add item to\n\x09 * @param\x09NewItem\x09\x09\x09The item to add to the set\n\x09 */" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet|NewItem" },
		{ "ToolTip", "Adds item to set\n\n@param       TargetSet               The set to add item to\n@param       NewItem                 The item to add to the set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Add", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Add_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics
	{
		struct BlueprintSetLibrary_eventSet_AddItems_Parms
		{
			TSet<int32> TargetSet;
			TArray<int32> NewItems;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_AddItems_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems_Inner = { "NewItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems = { "NewItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_AddItems_Parms, NewItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::NewProp_NewItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewItems" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Adds all elements from an Array to a Set\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to search for the item\n\x09 * @param\x09NewItems\x09\x09The items to add to the set\n\x09 */" },
		{ "CompactNodeTitle", "ADD ITEMS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add Items" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet|NewItems" },
		{ "ToolTip", "Adds all elements from an Array to a Set\n\n@param       TargetSet               The set to search for the item\n@param       NewItems                The items to add to the set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_AddItems", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_AddItems_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics
	{
		struct BlueprintSetLibrary_eventSet_Clear_Parms
		{
			TSet<int32> TargetSet;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Clear_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::NewProp_TargetSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Clear a set, removes all content.\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to clear\n\x09 */" },
		{ "CompactNodeTitle", "CLEAR" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Clear" },
		{ "Keywords", "empty" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet" },
		{ "ToolTip", "Clear a set, removes all content.\n\n@param       TargetSet               The set to clear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Clear", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Clear_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics
	{
		struct BlueprintSetLibrary_eventSet_Contains_Parms
		{
			TSet<int32> TargetSet;
			int32 ItemToFind;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemToFind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Contains_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ItemToFind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ItemToFind = { "ItemToFind", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Contains_Parms, ItemToFind), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ItemToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ItemToFind_MetaData)) };
	void Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintSetLibrary_eventSet_Contains_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintSetLibrary_eventSet_Contains_Parms), &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ItemToFind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ItemToFind" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Returns true if the set contains the given item.\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to search for the item\n\x09 * @param\x09ItemToFind\x09\x09The item to look for\n\x09 * @return\x09True if the item was found within the set\n\x09 */" },
		{ "CompactNodeTitle", "CONTAINS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Contains Item" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet|ItemToFind" },
		{ "ToolTip", "Returns true if the set contains the given item.\n\n@param       TargetSet               The set to search for the item\n@param       ItemToFind              The item to look for\n@return      True if the item was found within the set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Contains", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Contains_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics
	{
		struct BlueprintSetLibrary_eventSet_Difference_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A_ElementProp = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B_ElementProp = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_Result_ElementProp = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Difference_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_Result_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Assigns Result to the relative difference of two sets, A and B. That is, Result will \n\x09 * contain  all elements that are in Set A but are not found in Set B. Note that the \n\x09 * difference between two sets  is not commutative. The Set whose elements you wish to \n\x09 * preserve should be the first (top) parameter. Also called the relative complement.\n\x09 *\n\x09 * @param\x09\x09""A\x09\x09Starting set\n\x09 * @param\x09\x09""B\x09\x09Set of elements to remove from set A\n\x09 * @param\x09\x09Result\x09Set containing all elements in A that are not found in B\n\x09 */" },
		{ "CompactNodeTitle", "DIFFERENCE" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Difference" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "A|B|Result" },
		{ "ToolTip", "Assigns Result to the relative difference of two sets, A and B. That is, Result will\ncontain  all elements that are in Set A but are not found in Set B. Note that the\ndifference between two sets  is not commutative. The Set whose elements you wish to\npreserve should be the first (top) parameter. Also called the relative complement.\n\n@param               A               Starting set\n@param               B               Set of elements to remove from set A\n@param               Result  Set containing all elements in A that are not found in B" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Difference", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Difference_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics
	{
		struct BlueprintSetLibrary_eventSet_Intersection_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A_ElementProp = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B_ElementProp = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_Result_ElementProp = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Intersection_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_Result_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Assigns Result to the intersection of Set A and Set B. That is, Result will contain\n\x09 * all elements that are in both Set A and Set B. To intersect with the empty set use\n\x09 * Clear.\n\x09 *\n\x09 * @param\x09\x09""A\x09\x09One set to intersect\n\x09 * @param\x09\x09""B\x09\x09""Another set to intersect\n\x09 * @param\x09\x09Result\x09Set to store results in\n\x09 */" },
		{ "CompactNodeTitle", "INTERSECTION" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Intersection" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "A|B|Result" },
		{ "ToolTip", "Assigns Result to the intersection of Set A and Set B. That is, Result will contain\nall elements that are in both Set A and Set B. To intersect with the empty set use\nClear.\n\n@param               A               One set to intersect\n@param               B               Another set to intersect\n@param               Result  Set to store results in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Intersection", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Intersection_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics
	{
		struct BlueprintSetLibrary_eventSet_Length_Parms
		{
			TSet<int32> TargetSet;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Length_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Length_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Get the number of items in a set.\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to get the length of\n\x09 * @return\x09The length of the set\n\x09 */" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Length" },
		{ "Keywords", "num size count" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet" },
		{ "ToolTip", "Get the number of items in a set.\n\n@param       TargetSet               The set to get the length of\n@return      The length of the set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Length", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Length_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics
	{
		struct BlueprintSetLibrary_eventSet_Remove_Parms
		{
			TSet<int32> TargetSet;
			int32 Item;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Remove_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Remove_Parms, Item), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_Item_MetaData)) };
	void Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintSetLibrary_eventSet_Remove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintSetLibrary_eventSet_Remove_Parms), &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Item" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Remove item from set. Output value indicates if something was actually removed. False\n\x09 * indicates no equivalent item was found.\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to remove from\n\x09 * @param\x09Item\x09\x09\x09The item to remove from the set\n\x09 * @return\x09True if an item was removed (False indicates no equivalent item was present)\n\x09 */" },
		{ "CompactNodeTitle", "REMOVE" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Remove" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet|Item" },
		{ "ToolTip", "Remove item from set. Output value indicates if something was actually removed. False\nindicates no equivalent item was found.\n\n@param       TargetSet               The set to remove from\n@param       Item                    The item to remove from the set\n@return      True if an item was removed (False indicates no equivalent item was present)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Remove", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Remove_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics
	{
		struct BlueprintSetLibrary_eventSet_RemoveItems_Parms
		{
			TSet<int32> TargetSet;
			TArray<int32> Items;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet_ElementProp = { "TargetSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet = { "TargetSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_RemoveItems_Parms, TargetSet), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_RemoveItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_TargetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Items" },
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Removes all elements in an Array from a set.\n\x09 *\n\x09 * @param\x09TargetSet\x09\x09The set to remove from\n\x09 * @param\x09Items\x09\x09\x09The items to remove from the set\n\x09 */" },
		{ "CompactNodeTitle", "REMOVE ITEMS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Remove Items" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "TargetSet|Items" },
		{ "ToolTip", "Removes all elements in an Array from a set.\n\n@param       TargetSet               The set to remove from\n@param       Items                   The items to remove from the set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_RemoveItems", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_RemoveItems_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics
	{
		struct BlueprintSetLibrary_eventSet_ToArray_Parms
		{
			TSet<int32> A;
			TArray<int32> Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A_ElementProp = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_ToArray_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_ToArray_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Outputs an Array containing copies of the entries of a Set.\n\x09 *\n\x09 * @param\x09\x09""A\x09\x09Set\n\x09 * @param\x09\x09Result\x09""Array\n\x09 */" },
		{ "CompactNodeTitle", "TO ARRAY" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "To Array" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "A|Result" },
		{ "ToolTip", "Outputs an Array containing copies of the entries of a Set.\n\n@param               A               Set\n@param               Result  Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_ToArray", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_ToArray_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics
	{
		struct BlueprintSetLibrary_eventSet_Union_Parms
		{
			TSet<int32> A;
			TSet<int32> B;
			TSet<int32> Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_A_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A_ElementProp = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B_ElementProp = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_Result_ElementProp = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSet_Union_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_Result_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Set" },
		{ "Comment", "/**\n\x09 * Assigns Result to the union of two sets, A and B. That is, Result will contain\n\x09 * all elements that are in Set A and in addition all elements in Set B. Note that \n\x09 * a Set is a collection of unique elements, so duplicates will be eliminated.\n\x09 *\n\x09 * @param\x09\x09""A\x09\x09One set to union\n\x09 * @param\x09\x09""B\x09\x09""Another set to union\n\x09 * @param\x09\x09Result\x09Set to store results in\n\x09 */" },
		{ "CompactNodeTitle", "UNION" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Union" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "A|B|Result" },
		{ "ToolTip", "Assigns Result to the union of two sets, A and B. That is, Result will contain\nall elements that are in Set A and in addition all elements in Set B. Note that\na Set is a collection of unique elements, so duplicates will be eliminated.\n\n@param               A               One set to union\n@param               B               Another set to union\n@param               Result  Set to store results in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "Set_Union", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSet_Union_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics
	{
		struct BlueprintSetLibrary_eventSetSetPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			TSet<int32> Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value_ElementProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintSetLibrary_eventSetSetPropertyByName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** \n\x09 * Not exposed to users. Supports setting a set property on an object by name.\n\x09 */" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
		{ "SetParam", "Value" },
		{ "ToolTip", "Not exposed to users. Supports setting a set property on an object by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintSetLibrary, nullptr, "SetSetPropertyByName", nullptr, nullptr, sizeof(BlueprintSetLibrary_eventSetSetPropertyByName_Parms), Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintSetLibrary_NoRegister()
	{
		return UBlueprintSetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintSetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintSetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintSetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Add, "Set_Add" }, // 3686920012
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_AddItems, "Set_AddItems" }, // 1155067995
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Clear, "Set_Clear" }, // 4012232359
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Contains, "Set_Contains" }, // 162523693
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Difference, "Set_Difference" }, // 894506997
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Intersection, "Set_Intersection" }, // 3314280757
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Length, "Set_Length" }, // 2887076976
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Remove, "Set_Remove" }, // 4075170408
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_RemoveItems, "Set_RemoveItems" }, // 130352705
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_ToArray, "Set_ToArray" }, // 1521066085
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_Set_Union, "Set_Union" }, // 412995875
		{ &Z_Construct_UFunction_UBlueprintSetLibrary_SetSetPropertyByName, "SetSetPropertyByName" }, // 1437900012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintSetLibrary_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Kismet/BlueprintSetLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintSetLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintSetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintSetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintSetLibrary_Statics::ClassParams = {
		&UBlueprintSetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintSetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintSetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintSetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintSetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintSetLibrary, 4036592035);
	template<> ENGINE_API UClass* StaticClass<UBlueprintSetLibrary>()
	{
		return UBlueprintSetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintSetLibrary(Z_Construct_UClass_UBlueprintSetLibrary, &UBlueprintSetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintSetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintSetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

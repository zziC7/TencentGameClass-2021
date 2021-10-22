// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetGuidLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetGuidLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetGuidLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UKismetGuidLibrary::execParse_StringToGuid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GuidString);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutGuid);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetGuidLibrary::Parse_StringToGuid(Z_Param_GuidString,Z_Param_Out_OutGuid,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execConv_GuidToString)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetGuidLibrary::Conv_GuidToString(Z_Param_Out_InGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execNewGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UKismetGuidLibrary::NewGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execInvalidate_Guid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetGuidLibrary::Invalidate_Guid(Z_Param_Out_InGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execIsValid_Guid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_InGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetGuidLibrary::IsValid_Guid(Z_Param_Out_InGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execNotEqual_GuidGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetGuidLibrary::NotEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetGuidLibrary::execEqualEqual_GuidGuid)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_A);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetGuidLibrary::EqualEqual_GuidGuid(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary()
	{
		UClass* Class = UKismetGuidLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_GuidToString", &UKismetGuidLibrary::execConv_GuidToString },
			{ "EqualEqual_GuidGuid", &UKismetGuidLibrary::execEqualEqual_GuidGuid },
			{ "Invalidate_Guid", &UKismetGuidLibrary::execInvalidate_Guid },
			{ "IsValid_Guid", &UKismetGuidLibrary::execIsValid_Guid },
			{ "NewGuid", &UKismetGuidLibrary::execNewGuid },
			{ "NotEqual_GuidGuid", &UKismetGuidLibrary::execNotEqual_GuidGuid },
			{ "Parse_StringToGuid", &UKismetGuidLibrary::execParse_StringToGuid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics
	{
		struct KismetGuidLibrary_eventConv_GuidToString_Parms
		{
			FGuid InGuid;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventConv_GuidToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_InGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Converts a GUID value to a string, in the form 'A-B-C-D' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ScriptMethod", "ToString" },
		{ "ToolTip", "Converts a GUID value to a string, in the form 'A-B-C-D'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Conv_GuidToString", nullptr, nullptr, sizeof(KismetGuidLibrary_eventConv_GuidToString_Parms), Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics
	{
		struct KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms
		{
			FGuid A;
			FGuid B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "EqualEqual_GuidGuid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventEqualEqual_GuidGuid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics
	{
		struct KismetGuidLibrary_eventInvalidate_Guid_Parms
		{
			FGuid InGuid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventInvalidate_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::NewProp_InGuid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Invalidates the given GUID */" },
		{ "DisplayName", "Invalidate_Guid (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Invalidates the given GUID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Invalidate_Guid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventInvalidate_Guid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics
	{
		struct KismetGuidLibrary_eventIsValid_Guid_Parms
		{
			FGuid InGuid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGuid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid = { "InGuid", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventIsValid_Guid_Parms, InGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid_MetaData)) };
	void Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetGuidLibrary_eventIsValid_Guid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventIsValid_Guid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_InGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Checks whether the given GUID is valid */" },
		{ "CompactNodeTitle", "isValid?" },
		{ "DisplayName", "IsValid (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Checks whether the given GUID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "IsValid_Guid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventIsValid_Guid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics
	{
		struct KismetGuidLibrary_eventNewGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNewGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Guid" },
		{ "Comment", "/** Returns a new unique GUID */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns a new unique GUID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "NewGuid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventNewGuid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NewGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_NewGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics
	{
		struct KismetGuidLibrary_eventNotEqual_GuidGuid_Parms
		{
			FGuid A;
			FGuid B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, A), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms, B), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetGuidLibrary_eventNotEqual_GuidGuid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (Guid)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "NotEqual_GuidGuid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventNotEqual_GuidGuid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics
	{
		struct KismetGuidLibrary_eventParse_StringToGuid_Parms
		{
			FString GuidString;
			FGuid OutGuid;
			bool Success;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GuidString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGuid;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString = { "GuidString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, GuidString), METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_OutGuid = { "OutGuid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetGuidLibrary_eventParse_StringToGuid_Parms, OutGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((KismetGuidLibrary_eventParse_StringToGuid_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetGuidLibrary_eventParse_StringToGuid_Parms), &Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_GuidString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_OutGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Guid" },
		{ "Comment", "/** Converts a String of format EGuidFormats to a Guid. Returns Guid OutGuid, Returns bool Success */" },
		{ "DisplayName", "Parse String to Guid" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ToolTip", "Converts a String of format EGuidFormats to a Guid. Returns Guid OutGuid, Returns bool Success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetGuidLibrary, nullptr, "Parse_StringToGuid", nullptr, nullptr, sizeof(KismetGuidLibrary_eventParse_StringToGuid_Parms), Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetGuidLibrary_NoRegister()
	{
		return UKismetGuidLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetGuidLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetGuidLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetGuidLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Conv_GuidToString, "Conv_GuidToString" }, // 3480409928
		{ &Z_Construct_UFunction_UKismetGuidLibrary_EqualEqual_GuidGuid, "EqualEqual_GuidGuid" }, // 1929883945
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Invalidate_Guid, "Invalidate_Guid" }, // 422668547
		{ &Z_Construct_UFunction_UKismetGuidLibrary_IsValid_Guid, "IsValid_Guid" }, // 3495336325
		{ &Z_Construct_UFunction_UKismetGuidLibrary_NewGuid, "NewGuid" }, // 217102157
		{ &Z_Construct_UFunction_UKismetGuidLibrary_NotEqual_GuidGuid, "NotEqual_GuidGuid" }, // 2800852177
		{ &Z_Construct_UFunction_UKismetGuidLibrary_Parse_StringToGuid, "Parse_StringToGuid" }, // 2814181326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetGuidLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetGuidLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetGuidLibrary.h" },
		{ "ScriptName", "GuidLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetGuidLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetGuidLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetGuidLibrary_Statics::ClassParams = {
		&UKismetGuidLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetGuidLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetGuidLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetGuidLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetGuidLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetGuidLibrary, 664679425);
	template<> ENGINE_API UClass* StaticClass<UKismetGuidLibrary>()
	{
		return UKismetGuidLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetGuidLibrary(Z_Construct_UClass_UKismetGuidLibrary, &UKismetGuidLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetGuidLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetGuidLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

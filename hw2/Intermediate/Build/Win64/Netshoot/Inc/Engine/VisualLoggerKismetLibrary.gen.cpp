// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerKismetLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogSegment)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_SegmentStart);
		P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogSegment(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBox,Z_Param_BoxShape);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
		P_GET_UBOOL(Z_Param_bAddToMessageLog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execRedirectVislog)
	{
		P_GET_OBJECT(UObject,Z_Param_SourceOwner);
		P_GET_OBJECT(UObject,Z_Param_DestinationOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::RedirectVislog(Z_Param_SourceOwner,Z_Param_DestinationOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execEnableRecording)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVisualLoggerKismetLibrary::EnableRecording(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary()
	{
		UClass* Class = UVisualLoggerKismetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableRecording", &UVisualLoggerKismetLibrary::execEnableRecording },
			{ "LogBox", &UVisualLoggerKismetLibrary::execLogBox },
			{ "LogLocation", &UVisualLoggerKismetLibrary::execLogLocation },
			{ "LogSegment", &UVisualLoggerKismetLibrary::execLogSegment },
			{ "LogText", &UVisualLoggerKismetLibrary::execLogText },
			{ "RedirectVislog", &UVisualLoggerKismetLibrary::execRedirectVislog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics
	{
		struct VisualLoggerKismetLibrary_eventEnableRecording_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventEnableRecording_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Enable VisLog Recording" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "EnableRecording", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogBox_Parms
		{
			UObject* WorldContextObject;
			FBox BoxShape;
			FString Text;
			FLinearColor ObjectColor;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxShape;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape = { "BoxShape", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogBox_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs box shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Box Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs box shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogBox", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FString Text;
			FLinearColor ObjectColor;
			float Radius;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogLocation_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Location" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogLocation", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogSegment_Parms
		{
			UObject* WorldContextObject;
			FVector SegmentStart;
			FVector SegmentEnd;
			FString Text;
			FLinearColor ObjectColor;
			float Thickness;
			FName CategoryName;
			bool bAddToMessageLog;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogSegment_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Segment" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogSegment", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics
	{
		struct VisualLoggerKismetLibrary_eventLogText_Parms
		{
			UObject* WorldContextObject;
			FString Text;
			FName LogCategory;
			bool bAddToMessageLog;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LogCategory;
		static void NewProp_bAddToMessageLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, LogCategory), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
	{
		((VisualLoggerKismetLibrary_eventLogText_Parms*)Obj)->bAddToMessageLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Text" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogText", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics
	{
		struct VisualLoggerKismetLibrary_eventRedirectVislog_Parms
		{
			UObject* SourceOwner;
			UObject* DestinationOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner = { "SourceOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, SourceOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner = { "DestinationOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, DestinationOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Makes SourceOwner log to DestinationOwner's vislog*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Makes SourceOwner log to DestinationOwner's vislog" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "RedirectVislog", nullptr, nullptr, sizeof(VisualLoggerKismetLibrary_eventRedirectVislog_Parms), Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording, "EnableRecording" }, // 2687493122
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox, "LogBox" }, // 570385138
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation, "LogLocation" }, // 1908926090
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment, "LogSegment" }, // 4081581284
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText, "LogText" }, // 717155029
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog, "RedirectVislog" }, // 1506750255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ScriptName", "VisualLoggerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerKismetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams = {
		&UVisualLoggerKismetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualLoggerKismetLibrary, 3605336394);
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerKismetLibrary>()
	{
		return UVisualLoggerKismetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerKismetLibrary(Z_Construct_UClass_UVisualLoggerKismetLibrary, &UVisualLoggerKismetLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerKismetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerKismetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

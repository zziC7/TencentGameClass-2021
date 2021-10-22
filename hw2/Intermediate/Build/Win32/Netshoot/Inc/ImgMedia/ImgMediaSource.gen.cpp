// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMedia/Public/ImgMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaSource() {}
// Cross Module References
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource_NoRegister();
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_ImgMedia();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	DEFINE_FUNCTION(UImgMediaSource::execSetMipLevelDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMipLevelDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execRemoveTargetObject)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTargetObject(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execAddTargetObject)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTargetObject(Z_Param_InActor,Z_Param_Width);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execRemoveGlobalCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGlobalCamera(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execAddGlobalCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlobalCamera(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execSetSequencePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequencePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetSequencePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSequencePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetProxies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutProxies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProxies(Z_Param_Out_OutProxies);
		P_NATIVE_END;
	}
	void UImgMediaSource::StaticRegisterNativesUImgMediaSource()
	{
		UClass* Class = UImgMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGlobalCamera", &UImgMediaSource::execAddGlobalCamera },
			{ "AddTargetObject", &UImgMediaSource::execAddTargetObject },
			{ "GetProxies", &UImgMediaSource::execGetProxies },
			{ "GetSequencePath", &UImgMediaSource::execGetSequencePath },
			{ "RemoveGlobalCamera", &UImgMediaSource::execRemoveGlobalCamera },
			{ "RemoveTargetObject", &UImgMediaSource::execRemoveTargetObject },
			{ "SetMipLevelDistance", &UImgMediaSource::execSetMipLevelDistance },
			{ "SetSequencePath", &UImgMediaSource::execSetSequencePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics
	{
		struct ImgMediaSource_eventAddGlobalCamera_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventAddGlobalCamera_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This camera could be looking at any img sequence.\n\x09 *\n\x09 * @param InActor Camera object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This camera could be looking at any img sequence.\n\n@param InActor Camera object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "AddGlobalCamera", nullptr, nullptr, sizeof(ImgMediaSource_eventAddGlobalCamera_Parms), Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics
	{
		struct ImgMediaSource_eventAddTargetObject_Parms
		{
			AActor* InActor;
			float Width;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventAddTargetObject_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventAddTargetObject_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This object is using our img sequence.\n\x09 *\n\x09 * @param InActor Object using our img sequence.\n\x09 * @param Width Width of the object. If < 0, then get the width automatically.\n\x09 */" },
		{ "CPP_Default_Width", "-1.000000" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This object is using our img sequence.\n\n@param InActor Object using our img sequence.\n@param Width Width of the object. If < 0, then get the width automatically." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "AddTargetObject", nullptr, nullptr, sizeof(ImgMediaSource_eventAddTargetObject_Parms), Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_AddTargetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics
	{
		struct ImgMediaSource_eventGetProxies_Parms
		{
			TArray<FString> OutProxies;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutProxies_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutProxies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner = { "OutProxies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies = { "OutProxies", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventGetProxies_Parms, OutProxies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the names of available proxy directories.\n\x09 *\n\x09 * @param OutProxies Will contain the names of available proxy directories, if any.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the names of available proxy directories.\n\n@param OutProxies Will contain the names of available proxy directories, if any.\n@see GetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetProxies", nullptr, nullptr, sizeof(ImgMediaSource_eventGetProxies_Parms), Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetProxies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics
	{
		struct ImgMediaSource_eventGetSequencePath_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventGetSequencePath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the path to the image sequence directory to be played.\n\x09 *\n\x09 * @return The file path.\n\x09 * @see SetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the path to the image sequence directory to be played.\n\n@return The file path.\n@see SetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetSequencePath", nullptr, nullptr, sizeof(ImgMediaSource_eventGetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics
	{
		struct ImgMediaSource_eventRemoveGlobalCamera_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventRemoveGlobalCamera_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This camera is no longer looking at any img seqeunces.\n\x09 *\n\x09 * @param InActor Camera Object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This camera is no longer looking at any img seqeunces.\n\n@param InActor Camera Object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "RemoveGlobalCamera", nullptr, nullptr, sizeof(ImgMediaSource_eventRemoveGlobalCamera_Parms), Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics
	{
		struct ImgMediaSource_eventRemoveTargetObject_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventRemoveTargetObject_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This object is no longer using our img sequence.\n\x09 *\n\x09 * @param InActor Object no longer using our img sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This object is no longer using our img sequence.\n\n@param InActor Object no longer using our img sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "RemoveTargetObject", nullptr, nullptr, sizeof(ImgMediaSource_eventRemoveTargetObject_Parms), Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics
	{
		struct ImgMediaSource_eventSetMipLevelDistance_Parms
		{
			float Distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventSetMipLevelDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Manually set when mip level 0 should appear.\n\x09 *\n\x09 * @param Distance Furthest distance from the camera when mip level 0 should be at 100%.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Manually set when mip level 0 should appear.\n\n@param Distance Furthest distance from the camera when mip level 0 should be at 100%." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetMipLevelDistance", nullptr, nullptr, sizeof(ImgMediaSource_eventSetMipLevelDistance_Parms), Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics
	{
		struct ImgMediaSource_eventSetSequencePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImgMediaSource_eventSetSequencePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Set the path to the image sequence directory this source represents.\n\x09 *\n\x09 * @param Path The path to an image file in the desired directory.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Set the path to the image sequence directory this source represents.\n\n@param Path The path to an image file in the desired directory.\n@see GetSequencePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetSequencePath", nullptr, nullptr, sizeof(ImgMediaSource_eventSetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImgMediaSource_NoRegister()
	{
		return UImgMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPathRelativeToProjectRoot_MetaData[];
#endif
		static void NewProp_IsPathRelativeToProjectRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPathRelativeToProjectRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRateOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRateOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProxyOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequencePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImgMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera, "AddGlobalCamera" }, // 690054152
		{ &Z_Construct_UFunction_UImgMediaSource_AddTargetObject, "AddTargetObject" }, // 1150305722
		{ &Z_Construct_UFunction_UImgMediaSource_GetProxies, "GetProxies" }, // 2063591150
		{ &Z_Construct_UFunction_UImgMediaSource_GetSequencePath, "GetSequencePath" }, // 2481390948
		{ &Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera, "RemoveGlobalCamera" }, // 3461640197
		{ &Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject, "RemoveTargetObject" }, // 1026313965
		{ &Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance, "SetMipLevelDistance" }, // 2811227508
		{ &Z_Construct_UFunction_UImgMediaSource_SetSequencePath, "SetSequencePath" }, // 3150577543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for EXR image sequences.\n *\n * Image sequence media sources point to a directory that contains a series of\n * image files in which each image represents a single frame of the sequence.\n * BMP, EXR, PNG and JPG images are currently supported. EXR image sequences\n * are optimized for performance. The first frame of an image sequence is used\n * to determine the image dimensions (all formats) and frame rate (EXR only).\n *\n * The image sequence directory may contain sub-directories, which are called\n * 'proxies'. Proxies can be used to provide alternative media for playback\n * during development and testing of a game. One common scenario is the use\n * of low resolution versions of image sequence media on computers that are\n * too slow or don't have enough storage to play the original high-res media.\n */" },
		{ "HideCategories", "Overrides Playback Object Object" },
		{ "IncludePath", "ImgMediaSource.h" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Media source for EXR image sequences.\n\nImage sequence media sources point to a directory that contains a series of\nimage files in which each image represents a single frame of the sequence.\nBMP, EXR, PNG and JPG images are currently supported. EXR image sequences\nare optimized for performance. The first frame of an image sequence is used\nto determine the image dimensions (all formats) and frame rate (EXR only).\n\nThe image sequence directory may contain sub-directories, which are called\n'proxies'. Proxies can be used to provide alternative media for playback\nduring development and testing of a game. One common scenario is the use\nof low resolution versions of image sequence media on computers that are\ntoo slow or don't have enough storage to play the original high-res media." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** If true, then relative Sequence Paths are relative to the project root directory. If false, then relative to the Content directory. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "If true, then relative Sequence Paths are relative to the project root directory. If false, then relative to the Content directory." },
	};
#endif
	void Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_SetBit(void* Obj)
	{
		((UImgMediaSource*)Obj)->IsPathRelativeToProjectRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot = { "IsPathRelativeToProjectRoot", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UImgMediaSource), &Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Overrides the default frame rate stored in the image files (0/0 = do not override). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Overrides the default frame rate stored in the image files (0/0 = do not override)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride = { "FrameRateOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, FrameRateOverride), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Name of the proxy directory to use. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Name of the proxy directory to use." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride = { "ProxyOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, ProxyOverride), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** The directory that contains the image sequence files. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "The directory that contains the image sequence files." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaSource, SequencePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaSource_Statics::ClassParams = {
		&UImgMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImgMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImgMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImgMediaSource, 784001360);
	template<> IMGMEDIA_API UClass* StaticClass<UImgMediaSource>()
	{
		return UImgMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImgMediaSource(Z_Construct_UClass_UImgMediaSource, &UImgMediaSource::StaticClass, TEXT("/Script/ImgMedia"), TEXT("UImgMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/Misc/MediaBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EMediaWebcamCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaWebcamCaptureDeviceFilter"));
		}
		return Singleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaWebcamCaptureDeviceFilter>()
	{
		return EMediaWebcamCaptureDeviceFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaWebcamCaptureDeviceFilter(EMediaWebcamCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaWebcamCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Hash() { return 3666986098U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaWebcamCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaWebcamCaptureDeviceFilter::None", (int64)EMediaWebcamCaptureDeviceFilter::None },
				{ "EMediaWebcamCaptureDeviceFilter::DepthSensor", (int64)EMediaWebcamCaptureDeviceFilter::DepthSensor },
				{ "EMediaWebcamCaptureDeviceFilter::Front", (int64)EMediaWebcamCaptureDeviceFilter::Front },
				{ "EMediaWebcamCaptureDeviceFilter::Rear", (int64)EMediaWebcamCaptureDeviceFilter::Rear },
				{ "EMediaWebcamCaptureDeviceFilter::Unknown", (int64)EMediaWebcamCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Filter flags for the EnumerateWebcamCaptureDevices BP function.\n */" },
				{ "DepthSensor.Comment", "/** Depth sensor. */" },
				{ "DepthSensor.Name", "EMediaWebcamCaptureDeviceFilter::DepthSensor" },
				{ "DepthSensor.ToolTip", "Depth sensor." },
				{ "Front.Comment", "/** Front facing web cam. */" },
				{ "Front.Name", "EMediaWebcamCaptureDeviceFilter::Front" },
				{ "Front.ToolTip", "Front facing web cam." },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EMediaWebcamCaptureDeviceFilter::None" },
				{ "Rear.Comment", "/** Rear facing web cam. */" },
				{ "Rear.Name", "EMediaWebcamCaptureDeviceFilter::Rear" },
				{ "Rear.ToolTip", "Rear facing web cam." },
				{ "ToolTip", "Filter flags for the EnumerateWebcamCaptureDevices BP function." },
				{ "Unknown.Comment", "/** Unknown web cam types. */" },
				{ "Unknown.Name", "EMediaWebcamCaptureDeviceFilter::Unknown" },
				{ "Unknown.ToolTip", "Unknown web cam types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				"EMediaWebcamCaptureDeviceFilter",
				"EMediaWebcamCaptureDeviceFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaVideoCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaVideoCaptureDeviceFilter"));
		}
		return Singleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaVideoCaptureDeviceFilter>()
	{
		return EMediaVideoCaptureDeviceFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaVideoCaptureDeviceFilter(EMediaVideoCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaVideoCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Hash() { return 302053958U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaVideoCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaVideoCaptureDeviceFilter::None", (int64)EMediaVideoCaptureDeviceFilter::None },
				{ "EMediaVideoCaptureDeviceFilter::Card", (int64)EMediaVideoCaptureDeviceFilter::Card },
				{ "EMediaVideoCaptureDeviceFilter::Software", (int64)EMediaVideoCaptureDeviceFilter::Software },
				{ "EMediaVideoCaptureDeviceFilter::Unknown", (int64)EMediaVideoCaptureDeviceFilter::Unknown },
				{ "EMediaVideoCaptureDeviceFilter::Webcam", (int64)EMediaVideoCaptureDeviceFilter::Webcam },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.Comment", "/** Video capture card. */" },
				{ "Card.Name", "EMediaVideoCaptureDeviceFilter::Card" },
				{ "Card.ToolTip", "Video capture card." },
				{ "Comment", "/**\n * Filter flags for the EnumerateVideoCaptureDevices BP function.\n */" },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EMediaVideoCaptureDeviceFilter::None" },
				{ "Software.Comment", "/** Software video capture device. */" },
				{ "Software.Name", "EMediaVideoCaptureDeviceFilter::Software" },
				{ "Software.ToolTip", "Software video capture device." },
				{ "ToolTip", "Filter flags for the EnumerateVideoCaptureDevices BP function." },
				{ "Unknown.Comment", "/** Unknown video capture device types. */" },
				{ "Unknown.Name", "EMediaVideoCaptureDeviceFilter::Unknown" },
				{ "Unknown.ToolTip", "Unknown video capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
				{ "Webcam.Comment", "/** Web cam. */" },
				{ "Webcam.Name", "EMediaVideoCaptureDeviceFilter::Webcam" },
				{ "Webcam.ToolTip", "Web cam." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				"EMediaVideoCaptureDeviceFilter",
				"EMediaVideoCaptureDeviceFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaAudioCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaAudioCaptureDeviceFilter"));
		}
		return Singleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaAudioCaptureDeviceFilter>()
	{
		return EMediaAudioCaptureDeviceFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaAudioCaptureDeviceFilter(EMediaAudioCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaAudioCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Hash() { return 1365958260U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaAudioCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaAudioCaptureDeviceFilter::None", (int64)EMediaAudioCaptureDeviceFilter::None },
				{ "EMediaAudioCaptureDeviceFilter::Card", (int64)EMediaAudioCaptureDeviceFilter::Card },
				{ "EMediaAudioCaptureDeviceFilter::Microphone", (int64)EMediaAudioCaptureDeviceFilter::Microphone },
				{ "EMediaAudioCaptureDeviceFilter::Software", (int64)EMediaAudioCaptureDeviceFilter::Software },
				{ "EMediaAudioCaptureDeviceFilter::Unknown", (int64)EMediaAudioCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.Comment", "/** Audio capture cards. */" },
				{ "Card.Name", "EMediaAudioCaptureDeviceFilter::Card" },
				{ "Card.ToolTip", "Audio capture cards." },
				{ "Comment", "/**\n * Filter flags for the EnumerateAudioCaptureDevices BP function.\n */" },
				{ "Microphone.Comment", "/** Microphone. */" },
				{ "Microphone.Name", "EMediaAudioCaptureDeviceFilter::Microphone" },
				{ "Microphone.ToolTip", "Microphone." },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EMediaAudioCaptureDeviceFilter::None" },
				{ "Software.Comment", "/** Software device. */" },
				{ "Software.Name", "EMediaAudioCaptureDeviceFilter::Software" },
				{ "Software.ToolTip", "Software device." },
				{ "ToolTip", "Filter flags for the EnumerateAudioCaptureDevices BP function." },
				{ "Unknown.Comment", "/** Unknown audio capture device types. */" },
				{ "Unknown.Name", "EMediaAudioCaptureDeviceFilter::Unknown" },
				{ "Unknown.ToolTip", "Unknown audio capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				nullptr,
				"EMediaAudioCaptureDeviceFilter",
				"EMediaAudioCaptureDeviceFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMediaCaptureDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAASSETS_API uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureDevice, Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_Hash());
	}
	return Singleton;
}
template<> MEDIAASSETS_API UScriptStruct* StaticStruct<FMediaCaptureDevice>()
{
	return FMediaCaptureDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaCaptureDevice(FMediaCaptureDevice::StaticStruct, TEXT("/Script/MediaAssets"), TEXT("MediaCaptureDevice"), false, nullptr, nullptr);
static struct FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice
{
	FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice()
	{
		UScriptStruct::DeferCppStructOps<FMediaCaptureDevice>(FName(TEXT("MediaCaptureDevice")));
	}
} ScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice;
	struct Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a capture device.\n */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Information about a capture device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaCaptureDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "Comment", "/** Human readable display name. */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Human readable display name." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaCaptureDevice, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "Comment", "/** Media URL string for use with media players. */" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Media URL string for use with media players." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaCaptureDevice, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		&NewStructOps,
		"MediaCaptureDevice",
		sizeof(FMediaCaptureDevice),
		alignof(FMediaCaptureDevice),
		Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_Hash() { return 602967873U; }
	DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices)
	{
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
		P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices)
	{
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
		P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices)
	{
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices);
		P_GET_PROPERTY(FIntProperty,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter);
		P_NATIVE_END;
	}
	void UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary()
	{
		UClass* Class = UMediaBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateAudioCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices },
			{ "EnumerateVideoCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices },
			{ "EnumerateWebcamCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateAudioCaptureDevices", nullptr, nullptr, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateVideoCaptureDevices", nullptr, nullptr, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner = { "OutDevices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices = { "OutDevices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, OutDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "Comment", "/**\n\x09 * Enumerate available audio capture devices.\n\x09 *\n\x09 * To filter for a specific subset of devices, use the MakeBitmask node\n\x09 * with EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\x09 *\n\x09 * @param OutDevices Will contain the available capture devices.\n\x09 * @param Filter The types of capture devices to return (-1 = all).\n\x09 */" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, nullptr, "EnumerateWebcamCaptureDevices", nullptr, nullptr, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister()
	{
		return UMediaBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices, "EnumerateAudioCaptureDevices" }, // 3532499924
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices, "EnumerateVideoCaptureDevices" }, // 1989892268
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices, "EnumerateWebcamCaptureDevices" }, // 977248111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint library for Media related functions.\n */" },
		{ "IncludePath", "Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ScriptName", "MediaLibrary" },
		{ "ToolTip", "Blueprint library for Media related functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMediaBlueprintFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaBlueprintFunctionLibrary, 4214244443);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaBlueprintFunctionLibrary>()
	{
		return UMediaBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaBlueprintFunctionLibrary(Z_Construct_UClass_UMediaBlueprintFunctionLibrary, &UMediaBlueprintFunctionLibrary::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

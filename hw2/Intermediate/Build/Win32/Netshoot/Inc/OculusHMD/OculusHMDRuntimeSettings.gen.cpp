// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Public/OculusHMDRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHMDRuntimeSettings() {}
// Cross Module References
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EColorSpace();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport();
// End Cross Module References
	void UOculusHMDRuntimeSettings::StaticRegisterNativesUOculusHMDRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings_NoRegister()
	{
		return UOculusHMDRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoEnabled_MetaData[];
#endif
		static void NewProp_bAutoEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoEnabled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpecificColorGamut_MetaData[];
#endif
		static void NewProp_bEnableSpecificColorGamut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpecificColorGamut;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDash_MetaData[];
#endif
		static void NewProp_bSupportsDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompositesDepth_MetaData[];
#endif
		static void NewProp_bCompositesDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompositesDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHQDistortion_MetaData[];
#endif
		static void NewProp_bHQDistortion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHQDistortion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPULevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPULevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FFRLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FFRLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FFRLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FFRDynamic_MetaData[];
#endif
		static void NewProp_FFRDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FFRDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChromaCorrection_MetaData[];
#endif
		static void NewProp_bChromaCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChromaCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecenterHMDWithController_MetaData[];
#endif
		static void NewProp_bRecenterHMDWithController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecenterHMDWithController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFocusAware_MetaData[];
#endif
		static void NewProp_bFocusAware_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusAware;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLateLatching_MetaData[];
#endif
		static void NewProp_bLateLatching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLateLatching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresSystemKeyboard_MetaData[];
#endif
		static void NewProp_bRequiresSystemKeyboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresSystemKeyboard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPhaseSync_MetaData[];
#endif
		static void NewProp_bPhaseSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPhaseSync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OculusVR plugin.\n*/" },
		{ "IncludePath", "OculusHMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the OculusVR plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData[] = {
		{ "Category", "SplashScreen" },
		{ "Comment", "/** Whether the Splash screen is enabled. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether the Splash screen is enabled." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bAutoEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled = { "bAutoEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusSplashDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "SplashScreen" },
		{ "Comment", "/** An array of splash screen descriptors listing textures to show and their positions. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "An array of splash screen descriptors listing textures to show and their positions." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, the target HMD will perform a color space transformation */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "If enabled, the target HMD will perform a color space transformation" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bEnableSpecificColorGamut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut = { "bEnableSpecificColorGamut", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The target color space */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "The target color space" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, ColorSpace), Z_Construct_UEnum_OculusHMD_EColorSpace, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bSupportsDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash = { "bSupportsDash", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bCompositesDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth = { "bCompositesDepth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Computes mipmaps for the eye buffers every frame, for a higher quality distortion */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Computes mipmaps for the eye buffers every frame, for a higher quality distortion" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bHQDistortion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion = { "bHQDistortion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Minimum allowed pixel density. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Minimum allowed pixel density." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, PixelDensityMin), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/** Maximum allowed pixel density. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Maximum allowed pixel density." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, PixelDensityMax), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Default CPU level controlling CPU frequency on the mobile device */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Default CPU level controlling CPU frequency on the mobile device" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, CPULevel), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Default GPU level controlling GPU frequency on the mobile device */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Default GPU level controlling GPU frequency on the mobile device" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, GPULevel), METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Default Fixed Foveated Rendering level for Oculus Quest */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Default Fixed Foveated Rendering level for Oculus Quest" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel = { "FFRLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, FFRLevel), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether FFR adjusts its level dynamically or not */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether FFR adjusts its level dynamically or not" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->FFRDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic = { "FFRDynamic", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Compensates in the compositor for chromatic aberration, at a higher GPU cost but without the color fringes on the sides of the lenses */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Compensates in the compositor for chromatic aberration, at a higher GPU cost but without the color fringes on the sides of the lenses" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bChromaCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection = { "bChromaCorrection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Recenters the HMD too when the controller recenter button is pressed on Go */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Recenters the HMD too when the controller recenter button is pressed on Go" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bRecenterHMDWithController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController = { "bRecenterHMDWithController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bFocusAware = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware = { "bFocusAware", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** [Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "[Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bLateLatching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching = { "bLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware. */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware." },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bRequiresSystemKeyboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard = { "bRequiresSystemKeyboard", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusHMDRuntimeSettings, HandTrackingSupport), Z_Construct_UEnum_OculusHMD_EHandTrackingSupport, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Enable phase sync on mobile, reducing HMD and controller latency, improve tracking prediction quality */" },
		{ "ModuleRelativePath", "Public/OculusHMDRuntimeSettings.h" },
		{ "ToolTip", "Enable phase sync on mobile, reducing HMD and controller latency, improve tracking prediction quality" },
	};
#endif
	void Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_SetBit(void* Obj)
	{
		((UOculusHMDRuntimeSettings*)Obj)->bPhaseSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync = { "bPhaseSync", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOculusHMDRuntimeSettings), &Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bAutoEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_SplashDescs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bEnableSpecificColorGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_ColorSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bSupportsDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bCompositesDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bHQDistortion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_PixelDensityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_CPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_GPULevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_FFRDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bChromaCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRecenterHMDWithController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bFocusAware,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bLateLatching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::NewProp_bPhaseSync,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusHMDRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::ClassParams = {
		&UOculusHMDRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusHMDRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusHMDRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusHMDRuntimeSettings, 2979819305);
	template<> OCULUSHMD_API UClass* StaticClass<UOculusHMDRuntimeSettings>()
	{
		return UOculusHMDRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusHMDRuntimeSettings(Z_Construct_UClass_UOculusHMDRuntimeSettings, &UOculusHMDRuntimeSettings::StaticClass, TEXT("/Script/OculusHMD"), TEXT("UOculusHMDRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusHMDRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

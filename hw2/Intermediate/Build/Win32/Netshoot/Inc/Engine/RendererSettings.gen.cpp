// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/RendererSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRendererSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEarlyZPass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileMSAASampleCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucentSortPolicy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGBufferFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings();
// End Cross Module References
	static UEnum* EFixedFoveationLevels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFixedFoveationLevels, Z_Construct_UPackage__Script_Engine(), TEXT("EFixedFoveationLevels"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFixedFoveationLevels::Type>()
	{
		return EFixedFoveationLevels_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFixedFoveationLevels(EFixedFoveationLevels_StaticEnum, TEXT("/Script/Engine"), TEXT("EFixedFoveationLevels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFixedFoveationLevels_Hash() { return 2716963585U; }
	UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFixedFoveationLevels"), 0, Get_Z_Construct_UEnum_Engine_EFixedFoveationLevels_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFixedFoveationLevels::Disabled", (int64)EFixedFoveationLevels::Disabled },
				{ "EFixedFoveationLevels::Low", (int64)EFixedFoveationLevels::Low },
				{ "EFixedFoveationLevels::Medium", (int64)EFixedFoveationLevels::Medium },
				{ "EFixedFoveationLevels::High", (int64)EFixedFoveationLevels::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Enumerates VRS Fixed-foveation levels\n*/" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.Name", "EFixedFoveationLevels::Disabled" },
				{ "High.DisplayName", "High" },
				{ "High.Name", "EFixedFoveationLevels::High" },
				{ "Low.DisplayName", "Low" },
				{ "Low.Name", "EFixedFoveationLevels::Low" },
				{ "Medium.DisplayName", "Medium" },
				{ "Medium.Name", "EFixedFoveationLevels::Medium" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enumerates VRS Fixed-foveation levels" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EFixedFoveationLevels",
				"EFixedFoveationLevels::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDefaultBackBufferPixelFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, Z_Construct_UPackage__Script_Engine(), TEXT("EDefaultBackBufferPixelFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDefaultBackBufferPixelFormat::Type>()
	{
		return EDefaultBackBufferPixelFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDefaultBackBufferPixelFormat(EDefaultBackBufferPixelFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("EDefaultBackBufferPixelFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Hash() { return 1511464924U; }
	UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDefaultBackBufferPixelFormat"), 0, Get_Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8", (int64)EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8 },
				{ "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED },
				{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED },
				{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA },
				{ "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10", (int64)EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10 },
				{ "EDefaultBackBufferPixelFormat::DBBPF_MAX", (int64)EDefaultBackBufferPixelFormat::DBBPF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** used by GetDefaultBackBufferPixelFormat*/" },
				{ "DBBPF_A16B16G16R16_DEPRECATED.DisplayName", "DEPRECATED - 16bit RGBA" },
				{ "DBBPF_A16B16G16R16_DEPRECATED.Hidden", "" },
				{ "DBBPF_A16B16G16R16_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED" },
				{ "DBBPF_A2B10G10R10.DisplayName", "10bit RGB, 2bit Alpha" },
				{ "DBBPF_A2B10G10R10.Name", "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10" },
				{ "DBBPF_B8G8R8A8.DisplayName", "8bit RGBA" },
				{ "DBBPF_B8G8R8A8.Name", "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8" },
				{ "DBBPF_FloatRGB_DEPRECATED.DisplayName", "DEPRECATED - Float RGB" },
				{ "DBBPF_FloatRGB_DEPRECATED.Hidden", "" },
				{ "DBBPF_FloatRGB_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED" },
				{ "DBBPF_FloatRGBA.DisplayName", "Float RGBA" },
				{ "DBBPF_FloatRGBA.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA" },
				{ "DBBPF_MAX.Name", "EDefaultBackBufferPixelFormat::DBBPF_MAX" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "used by GetDefaultBackBufferPixelFormat" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDefaultBackBufferPixelFormat",
				"EDefaultBackBufferPixelFormat::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAutoExposureMethodUI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethodUI, Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethodUI"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethodUI::Type>()
	{
		return EAutoExposureMethodUI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoExposureMethodUI(EAutoExposureMethodUI_StaticEnum, TEXT("/Script/Engine"), TEXT("EAutoExposureMethodUI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Hash() { return 276566309U; }
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoExposureMethodUI"), 0, Get_Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoExposureMethodUI::AEM_Histogram", (int64)EAutoExposureMethodUI::AEM_Histogram },
				{ "EAutoExposureMethodUI::AEM_Basic", (int64)EAutoExposureMethodUI::AEM_Basic },
				{ "EAutoExposureMethodUI::AEM_Manual", (int64)EAutoExposureMethodUI::AEM_Manual },
				{ "EAutoExposureMethodUI::AEM_MAX", (int64)EAutoExposureMethodUI::AEM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEM_Basic.Comment", "/** faster method that computes single value by downsampling */" },
				{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
				{ "AEM_Basic.Name", "EAutoExposureMethodUI::AEM_Basic" },
				{ "AEM_Basic.ToolTip", "faster method that computes single value by downsampling" },
				{ "AEM_Histogram.Comment", "/** requires compute shader to construct 64 bin histogram */" },
				{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
				{ "AEM_Histogram.Name", "EAutoExposureMethodUI::AEM_Histogram" },
				{ "AEM_Histogram.ToolTip", "requires compute shader to construct 64 bin histogram" },
				{ "AEM_Manual.Comment", "/** Uses camera settings. */" },
				{ "AEM_Manual.DisplayName", "Manual" },
				{ "AEM_Manual.Name", "EAutoExposureMethodUI::AEM_Manual" },
				{ "AEM_Manual.ToolTip", "Uses camera settings." },
				{ "AEM_MAX.Name", "EAutoExposureMethodUI::AEM_MAX" },
				{ "Comment", "/** used by FPostProcessSettings AutoExposure*/" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "used by FPostProcessSettings AutoExposure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAutoExposureMethodUI",
				"EAutoExposureMethodUI::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAlphaChannelMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaChannelMode, Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaChannelMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAlphaChannelMode::Type>()
	{
		return EAlphaChannelMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAlphaChannelMode(EAlphaChannelMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EAlphaChannelMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAlphaChannelMode_Hash() { return 1586850265U; }
	UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAlphaChannelMode"), 0, Get_Z_Construct_UEnum_Engine_EAlphaChannelMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAlphaChannelMode::Disabled", (int64)EAlphaChannelMode::Disabled },
				{ "EAlphaChannelMode::LinearColorSpaceOnly", (int64)EAlphaChannelMode::LinearColorSpaceOnly },
				{ "EAlphaChannelMode::AllowThroughTonemapper", (int64)EAlphaChannelMode::AllowThroughTonemapper },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllowThroughTonemapper.Comment", "/** Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\x09\x09 *\n\x09\x09 * CAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\n\x09\x09 * opposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\n\x09\x09 * exclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\n\x09\x09 * tonemapping.\n\x09\x09 */" },
				{ "AllowThroughTonemapper.DisplayName", "Allow through tonemapper" },
				{ "AllowThroughTonemapper.Name", "EAlphaChannelMode::AllowThroughTonemapper" },
				{ "AllowThroughTonemapper.ToolTip", "Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\nCAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\nopposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\nexclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\ntonemapping." },
				{ "Comment", "/**\n * Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\n * with alpha as translucency (0 = fully opaque; 1 = fully translucent).\n */" },
				{ "Disabled.Comment", "/** Disabled, reducing GPU cost to the minimum. (default). */" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Disabled.Name", "EAlphaChannelMode::Disabled" },
				{ "Disabled.ToolTip", "Disabled, reducing GPU cost to the minimum. (default)." },
				{ "LinearColorSpaceOnly.Comment", "/** Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel. */" },
				{ "LinearColorSpaceOnly.DisplayName", "Linear color space only" },
				{ "LinearColorSpaceOnly.Name", "EAlphaChannelMode::LinearColorSpaceOnly" },
				{ "LinearColorSpaceOnly.ToolTip", "Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\nwith alpha as translucency (0 = fully opaque; 1 = fully translucent)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAlphaChannelMode",
				"EAlphaChannelMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEarlyZPass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEarlyZPass, Z_Construct_UPackage__Script_Engine(), TEXT("EEarlyZPass"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEarlyZPass::Type>()
	{
		return EEarlyZPass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEarlyZPass(EEarlyZPass_StaticEnum, TEXT("/Script/Engine"), TEXT("EEarlyZPass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEarlyZPass_Hash() { return 2668076927U; }
	UEnum* Z_Construct_UEnum_Engine_EEarlyZPass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEarlyZPass"), 0, Get_Z_Construct_UEnum_Engine_EEarlyZPass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEarlyZPass::None", (int64)EEarlyZPass::None },
				{ "EEarlyZPass::OpaqueOnly", (int64)EEarlyZPass::OpaqueOnly },
				{ "EEarlyZPass::OpaqueAndMasked", (int64)EEarlyZPass::OpaqueAndMasked },
				{ "EEarlyZPass::Auto", (int64)EEarlyZPass::Auto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.DisplayName", "Decide automatically" },
				{ "Auto.Name", "EEarlyZPass::Auto" },
				{ "Auto.ToolTip", "Let the engine decide what to render in the early Z pass based on the features being used." },
				{ "Comment", "/**\n * Enumerates available options for early Z-passes.\n */" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EEarlyZPass::None" },
				{ "OpaqueAndMasked.DisplayName", "Opaque and masked meshes" },
				{ "OpaqueAndMasked.Name", "EEarlyZPass::OpaqueAndMasked" },
				{ "OpaqueOnly.DisplayName", "Opaque meshes only" },
				{ "OpaqueOnly.Name", "EEarlyZPass::OpaqueOnly" },
				{ "ToolTip", "Enumerates available options for early Z-passes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEarlyZPass",
				"EEarlyZPass::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECustomDepthStencil_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomDepthStencil, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomDepthStencil"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomDepthStencil::Type>()
	{
		return ECustomDepthStencil_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomDepthStencil(ECustomDepthStencil_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomDepthStencil"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomDepthStencil_Hash() { return 4255220287U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomDepthStencil"), 0, Get_Z_Construct_UEnum_Engine_ECustomDepthStencil_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomDepthStencil::Disabled", (int64)ECustomDepthStencil::Disabled },
				{ "ECustomDepthStencil::Enabled", (int64)ECustomDepthStencil::Enabled },
				{ "ECustomDepthStencil::EnabledOnDemand", (int64)ECustomDepthStencil::EnabledOnDemand },
				{ "ECustomDepthStencil::EnabledWithStencil", (int64)ECustomDepthStencil::EnabledWithStencil },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enumerates available options for custom depth.\n */" },
				{ "Disabled.Name", "ECustomDepthStencil::Disabled" },
				{ "Enabled.Name", "ECustomDepthStencil::Enabled" },
				{ "Enabled.ToolTip", "Depth buffer created immediately. Stencil disabled." },
				{ "EnabledOnDemand.Name", "ECustomDepthStencil::EnabledOnDemand" },
				{ "EnabledOnDemand.ToolTip", "Depth buffer created on first use, can save memory but cause stalls. Stencil disabled." },
				{ "EnabledWithStencil.Name", "ECustomDepthStencil::EnabledWithStencil" },
				{ "EnabledWithStencil.ToolTip", "Depth buffer created immediately. Stencil available for read/write." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enumerates available options for custom depth." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECustomDepthStencil",
				"ECustomDepthStencil::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMobileMSAASampleCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileMSAASampleCount, Z_Construct_UPackage__Script_Engine(), TEXT("EMobileMSAASampleCount"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileMSAASampleCount::Type>()
	{
		return EMobileMSAASampleCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMobileMSAASampleCount(EMobileMSAASampleCount_StaticEnum, TEXT("/Script/Engine"), TEXT("EMobileMSAASampleCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMobileMSAASampleCount_Hash() { return 4152690627U; }
	UEnum* Z_Construct_UEnum_Engine_EMobileMSAASampleCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMobileMSAASampleCount"), 0, Get_Z_Construct_UEnum_Engine_EMobileMSAASampleCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMobileMSAASampleCount::One", (int64)EMobileMSAASampleCount::One },
				{ "EMobileMSAASampleCount::Two", (int64)EMobileMSAASampleCount::Two },
				{ "EMobileMSAASampleCount::Four", (int64)EMobileMSAASampleCount::Four },
				{ "EMobileMSAASampleCount::Eight", (int64)EMobileMSAASampleCount::Eight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Enumerates available mobile MSAA sample counts.\n*/" },
				{ "Eight.DisplayName", "8x MSAA" },
				{ "Eight.Name", "EMobileMSAASampleCount::Eight" },
				{ "Four.DisplayName", "4x MSAA" },
				{ "Four.Name", "EMobileMSAASampleCount::Four" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "One.DisplayName", "No MSAA" },
				{ "One.Name", "EMobileMSAASampleCount::One" },
				{ "ToolTip", "Enumerates available mobile MSAA sample counts." },
				{ "Two.DisplayName", "2x MSAA" },
				{ "Two.Name", "EMobileMSAASampleCount::Two" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMobileMSAASampleCount",
				"EMobileMSAASampleCount::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECompositingSampleCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositingSampleCount, Z_Construct_UPackage__Script_Engine(), TEXT("ECompositingSampleCount"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECompositingSampleCount::Type>()
	{
		return ECompositingSampleCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompositingSampleCount(ECompositingSampleCount_StaticEnum, TEXT("/Script/Engine"), TEXT("ECompositingSampleCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECompositingSampleCount_Hash() { return 2395384177U; }
	UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompositingSampleCount"), 0, Get_Z_Construct_UEnum_Engine_ECompositingSampleCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompositingSampleCount::One", (int64)ECompositingSampleCount::One },
				{ "ECompositingSampleCount::Two", (int64)ECompositingSampleCount::Two },
				{ "ECompositingSampleCount::Four", (int64)ECompositingSampleCount::Four },
				{ "ECompositingSampleCount::Eight", (int64)ECompositingSampleCount::Eight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enumerates available compositing sample counts.\n */" },
				{ "Eight.DisplayName", "8x MSAA" },
				{ "Eight.Name", "ECompositingSampleCount::Eight" },
				{ "Four.DisplayName", "4x MSAA" },
				{ "Four.Name", "ECompositingSampleCount::Four" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "One.DisplayName", "No MSAA" },
				{ "One.Name", "ECompositingSampleCount::One" },
				{ "ToolTip", "Enumerates available compositing sample counts." },
				{ "Two.DisplayName", "2x MSAA" },
				{ "Two.Name", "ECompositingSampleCount::Two" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECompositingSampleCount",
				"ECompositingSampleCount::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EClearSceneOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClearSceneOptions, Z_Construct_UPackage__Script_Engine(), TEXT("EClearSceneOptions"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EClearSceneOptions::Type>()
	{
		return EClearSceneOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClearSceneOptions(EClearSceneOptions_StaticEnum, TEXT("/Script/Engine"), TEXT("EClearSceneOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EClearSceneOptions_Hash() { return 3101014802U; }
	UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClearSceneOptions"), 0, Get_Z_Construct_UEnum_Engine_EClearSceneOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClearSceneOptions::NoClear", (int64)EClearSceneOptions::NoClear },
				{ "EClearSceneOptions::HardwareClear", (int64)EClearSceneOptions::HardwareClear },
				{ "EClearSceneOptions::QuadAtMaxZ", (int64)EClearSceneOptions::QuadAtMaxZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enumerates ways to clear a scene.\n */" },
				{ "HardwareClear.DisplayName", "Hardware clear" },
				{ "HardwareClear.Name", "EClearSceneOptions::HardwareClear" },
				{ "HardwareClear.ToolTip", "Perform a full hardware clear before rendering. Most projects should use this option." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "NoClear.DisplayName", "Do not clear" },
				{ "NoClear.Name", "EClearSceneOptions::NoClear" },
				{ "NoClear.ToolTip", "This option is fastest but can cause artifacts unless you render to every pixel. Make sure to use a skybox with this option!" },
				{ "QuadAtMaxZ.DisplayName", "Clear at far plane" },
				{ "QuadAtMaxZ.Name", "EClearSceneOptions::QuadAtMaxZ" },
				{ "QuadAtMaxZ.ToolTip", "Draws a quad to perform the clear at the far plane, this is faster than a hardware clear on some GPUs." },
				{ "ToolTip", "Enumerates ways to clear a scene." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EClearSceneOptions",
				"EClearSceneOptions::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void URendererSettings::StaticRegisterNativesURendererSettings()
	{
	}
	UClass* Z_Construct_UClass_URendererSettings_NoRegister()
	{
		return URendererSettings::StaticClass();
	}
	struct Z_Construct_UClass_URendererSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileDisableVertexFog_MetaData[];
#endif
		static void NewProp_bMobileDisableVertexFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileDisableVertexFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMobileCascades_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMobileCascades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileMSAASampleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileMSAASampleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDitheredLODTransition_MetaData[];
#endif
		static void NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDitheredLODTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowSoftwareOcclusionCulling_MetaData[];
#endif
		static void NewProp_bMobileAllowSoftwareOcclusionCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowSoftwareOcclusionCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileVirtualTextures_MetaData[];
#endif
		static void NewProp_bMobileVirtualTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileVirtualTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardUnusedQualityLevels_MetaData[];
#endif
		static void NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiscardUnusedQualityLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOcclusionCulling_MetaData[];
#endif
		static void NewProp_bOcclusionCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOcclusionCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForEarlyZPass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForEarlyZPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForCSMdepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForCSMdepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecomputedVisibilityWarning_MetaData[];
#endif
		static void NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecomputedVisibilityWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreaming_MetaData[];
#endif
		static void NewProp_bTextureStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDXT5NormalMaps_MetaData[];
#endif
		static void NewProp_bUseDXT5NormalMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDXT5NormalMaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextures_MetaData[];
#endif
		static void NewProp_bVirtualTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureEnableAutoImport_MetaData[];
#endif
		static void NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureEnableAutoImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualTexturedLightmaps_MetaData[];
#endif
		static void NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualTexturedLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileBorderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileBorderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureFeedbackFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureFeedbackFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureEnableCompressZlib_MetaData[];
#endif
		static void NewProp_bVirtualTextureEnableCompressZlib_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureEnableCompressZlib;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureEnableCompressCrunch_MetaData[];
#endif
		static void NewProp_bVirtualTextureEnableCompressCrunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureEnableCompressCrunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearCoatEnableSecondNormal_MetaData[];
#endif
		static void NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCoatEnableSecondNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionCaptureResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReflectionCaptureResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReflectionCaptureCompression_MetaData[];
#endif
		static void NewProp_bReflectionCaptureCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReflectionCaptureCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[];
#endif
		static void NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForwardShading_MetaData[];
#endif
		static void NewProp_bForwardShading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForwardShading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVertexFoggingForOpaque_MetaData[];
#endif
		static void NewProp_bVertexFoggingForOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVertexFoggingForOpaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticLighting_MetaData[];
#endif
		static void NewProp_bAllowStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNormalMapsForStaticLighting_MetaData[];
#endif
		static void NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNormalMapsForStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceFields_MetaData[];
#endif
		static void NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEightBitMeshDistanceFields_MetaData[];
#endif
		static void NewProp_bEightBitMeshDistanceFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEightBitMeshDistanceFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeGIData_MetaData[];
#endif
		static void NewProp_bGenerateLandscapeGIData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeGIData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressMeshDistanceFields_MetaData[];
#endif
		static void NewProp_bCompressMeshDistanceFields_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressMeshDistanceFields;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationAdaptivePixelsPerTriangle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TessellationAdaptivePixelsPerTriangle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeparateTranslucency_MetaData[];
#endif
		static void NewProp_bSeparateTranslucency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeparateTranslucency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslucentSortPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslucentSortAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDFixedFoveationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HMDFixedFoveationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencil_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomDepthTaaJitter_MetaData[];
#endif
		static void NewProp_bCustomDepthTaaJitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomDepthTaaJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAlphaChannelInPostProcessing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bEnableAlphaChannelInPostProcessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureBloom_MetaData[];
#endif
		static void NewProp_bDefaultFeatureBloom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureBloom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAutoExposure_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAutoExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposure_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAutoExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposureBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFeatureAutoExposureBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData[];
#endif
		static void NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreExposure_MetaData[];
#endif
		static void NewProp_bUsePreExposure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePreExposureOnlyInTheEditor_MetaData[];
#endif
		static void NewProp_bEnablePreExposureOnlyInTheEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePreExposureOnlyInTheEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureMotionBlur_MetaData[];
#endif
		static void NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureLensFlare_MetaData[];
#endif
		static void NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureLensFlare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemporalUpsampling_MetaData[];
#endif
		static void NewProp_bTemporalUpsampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemporalUpsampling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSSGI_MetaData[];
#endif
		static void NewProp_bSSGI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSSGI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAntiAliasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAntiAliasing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultLightUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLightUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultLightUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBackBufferPixelFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultBackBufferPixelFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[];
#endif
		static void NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderUnbuiltPreviewShadowsInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStencilForLODDither_MetaData[];
#endif
		static void NewProp_bStencilForLODDither_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStencilForLODDither;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyZPass_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EarlyZPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[];
#endif
		static void NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEarlyZPassOnlyMaterialMasking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDBuffer_MetaData[];
#endif
		static void NewProp_bDBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearSceneMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClearSceneMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBasePassOutputsVelocity_MetaData[];
#endif
		static void NewProp_bBasePassOutputsVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBasePassOutputsVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVertexDeformationOutputsVelocity_MetaData[];
#endif
		static void NewProp_bVertexDeformationOutputsVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVertexDeformationOutputsVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectiveBasePassOutputs_MetaData[];
#endif
		static void NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectiveBasePassOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultParticleCutouts_MetaData[];
#endif
		static void NewProp_bDefaultParticleCutouts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultParticleCutouts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalClipPlane_MetaData[];
#endif
		static void NewProp_bGlobalClipPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GBufferFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GBufferFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGPUMorphTargets_MetaData[];
#endif
		static void NewProp_bUseGPUMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGPUMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNvidiaAftermathEnabled_MetaData[];
#endif
		static void NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNvidiaAftermathEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiView_MetaData[];
#endif
		static void NewProp_bMultiView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobilePostProcessing_MetaData[];
#endif
		static void NewProp_bMobilePostProcessing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobilePostProcessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileMultiView_MetaData[];
#endif
		static void NewProp_bMobileMultiView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileMultiView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileUseHWsRGBEncoding_MetaData[];
#endif
		static void NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileUseHWsRGBEncoding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundRobinOcclusion_MetaData[];
#endif
		static void NewProp_bRoundRobinOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundRobinOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bODSCapture_MetaData[];
#endif
		static void NewProp_bODSCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bODSCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshStreaming_MetaData[];
#endif
		static void NewProp_bMeshStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeCullThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WireframeCullThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracing_MetaData[];
#endif
		static void NewProp_bEnableRayTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingTextureLOD_MetaData[];
#endif
		static void NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingTextureLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportStationarySkylight_MetaData[];
#endif
		static void NewProp_bSupportStationarySkylight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportStationarySkylight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportLowQualityLightmaps_MetaData[];
#endif
		static void NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportLowQualityLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportPointLightWholeSceneShadows_MetaData[];
#endif
		static void NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportPointLightWholeSceneShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportAtmosphericFog_MetaData[];
#endif
		static void NewProp_bSupportAtmosphericFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportAtmosphericFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphere_MetaData[];
#endif
		static void NewProp_bSupportSkyAtmosphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData[];
#endif
		static void NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphereAffectsHeightFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportSkinCacheShaders_MetaData[];
#endif
		static void NewProp_bSupportSkinCacheShaders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportSkinCacheShaders;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultSkinCacheBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkinCacheBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultSkinCacheBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkinCacheSceneMemoryLimitInMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[];
#endif
		static void NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableStaticAndCSMShadowReceivers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData[];
#endif
		static void NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableMovableLightCSMShaderCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDistanceFieldShadows_MetaData[];
#endif
		static void NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDistanceFieldShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableDirectionalLights_MetaData[];
#endif
		static void NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableDirectionalLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileNumDynamicPointLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MobileNumDynamicPointLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData[];
#endif
		static void NewProp_bMobileDynamicPointLightsUseStaticBranch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileDynamicPointLightsUseStaticBranch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableSpotlights_MetaData[];
#endif
		static void NewProp_bMobileAllowMovableSpotlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableSpotlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableSpotlightShadows_MetaData[];
#endif
		static void NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableSpotlightShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupport16BitBoneIndex_MetaData[];
#endif
		static void NewProp_bSupport16BitBoneIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupport16BitBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGPUSkinLimit2BoneInfluences_MetaData[];
#endif
		static void NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGPUSkinLimit2BoneInfluences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportDepthOnlyIndexBuffers_MetaData[];
#endif
		static void NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportDepthOnlyIndexBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportReversedIndexBuffers_MetaData[];
#endif
		static void NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportReversedIndexBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLPV_MetaData[];
#endif
		static void NewProp_bLPV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLPV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bMobileAmbientOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnlimitedBoneInfluences_MetaData[];
#endif
		static void NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnlimitedBoneInfluences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlimitedBonInfluencesThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlimitedBonInfluencesThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSkinBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxSkinBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobilePlanarReflectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobilePlanarReflectionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportsGen4TAA_MetaData[];
#endif
		static void NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportsGen4TAA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreamSkeletalMeshLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bStreamSkeletalMeshLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bDiscardSkeletalMeshOptionalLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationColorMaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationColorMaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationCustomMaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationCustomMaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationGrayscaleMaterialPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URendererSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rendering settings.\n */" },
		{ "DisplayName", "Rendering" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Rendering settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.DisableVertexFog" },
		{ "DisplayName", "Disable vertex fogging in mobile shaders" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true, vertex fog will be omitted from all mobile shaders. If your game does not use fog, you should choose this setting to increase shading performance." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileDisableVertexFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog = { "bMobileDisableVertexFog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxMobileCascades_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Shadow.CSM.MaxMobileCascades" },
		{ "DisplayName", "Maximum number of CSM cascades to render" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The maximum number of cascades with which to render dynamic directional light shadows when using the mobile renderer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxMobileCascades = { "MaxMobileCascades", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MaxMobileCascades), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxMobileCascades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxMobileCascades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileMSAASampleCount_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConsoleVariable", "r.MobileMSAA" },
		{ "DisplayName", "Mobile MSAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Multi-sample anti-aliasing setting to use on mobile. MSAA is currently supported using Metal on iOS, and on Android devices with the required support using ES 2 or ES 3.1.\nIf MSAA is not available, the current default AA method will be used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileMSAASampleCount = { "MobileMSAASampleCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MobileMSAASampleCount), Z_Construct_UEnum_Engine_EMobileMSAASampleCount, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileMSAASampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileMSAASampleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDitheredLODTransition" },
		{ "DisplayName", "Allow Dithered LOD Transition" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support 'Dithered LOD Transition' material option on mobile platforms. Enabling this may degrade performance as rendering will not benefit from Early-Z optimization." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowDitheredLODTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition = { "bMobileAllowDitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.Mobile.AllowSoftwareOcclusion" },
		{ "DisplayName", "Support Software Occlusion Culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support 'Software Occlusion Culling' on mobile platforms. This will package occluder information and enable Software Occlusion Culling." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowSoftwareOcclusionCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling = { "bMobileAllowSoftwareOcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support on Mobile" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support Virtual Textures on mobile. Requires general Virtual Texturing option enabled as well. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileVirtualTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures = { "bMobileVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConsoleVariable", "r.DiscardUnusedQuality" },
		{ "DisplayName", "Game Discards Unused Material Quality Levels" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When running in game mode, whether to keep shaders for all quality levels in memory or only those needed for the current quality level.\nUnchecked: Keep all quality levels in memory allowing a runtime quality level change. (default)\nChecked: Discard unused quality levels when loading content for the game, saving some memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDiscardUnusedQualityLevels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels = { "bDiscardUnusedQualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.AllowOcclusionQueries" },
		{ "DisplayName", "Occlusion Culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allows occluded meshes to be culled and not rendered." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bOcclusionCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling = { "bOcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForLights" },
		{ "DisplayName", "Min Screen Radius for Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which lights are culled. Larger values can improve performance but causes lights to pop off when they affect a small area of the screen." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights = { "MinScreenRadiusForLights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForLights), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForDepthPrepass" },
		{ "DisplayName", "Min Screen Radius for Early Z Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for the early Z pass. Larger values can improve performance but very large values can degrade performance if large occluders are not rendered." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass = { "MinScreenRadiusForEarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForEarlyZPass), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForCSMDepth" },
		{ "DisplayName", "Min Screen Radius for Cascaded Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for cascaded shadow map depth passes. Larger values can improve performance but can cause artifacts as objects stop casting shadows." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth = { "MinScreenRadiusForCSMdepth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForCSMdepth), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.PrecomputedVisibilityWarning" },
		{ "DisplayName", "Warn about no precomputed visibility" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Displays a warning when no precomputed visibility data is available for the current camera location. This can be helpful if you are making a game that relies on precomputed visibility, e.g. a first person mobile game." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bPrecomputedVisibilityWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning = { "bPrecomputedVisibilityWarning", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConsoleVariable", "r.TextureStreaming" },
		{ "DisplayName", "Texture Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled textures will stream in based on what is visible on screen." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bTextureStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming = { "bTextureStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "Compat.UseDXT5NormalMaps" },
		{ "DisplayName", "Use DXT5 Normal Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseDXT5NormalMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps = { "bUseDXT5NormalMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, Textures can be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures = { "bVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.VT.EnableAutoImport" },
		{ "DisplayName", "Enable virtual texture on texture import" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the 'Virtual Texture Streaming' setting for imported textures based on 'Auto Virtual Texturing Size' in the texture import settings." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextureEnableAutoImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport = { "bVirtualTextureEnableAutoImport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTexturedLightmaps" },
		{ "DisplayName", "Enable virtual texture lightmaps" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, lightmaps will be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTexturedLightmaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps = { "bVirtualTexturedLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileSize" },
		{ "DisplayName", "Tile size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tiles, will be rounded to next power-of-2. Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize = { "VirtualTextureTileSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureTileSize), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileBorderSize" },
		{ "DisplayName", "Tile border size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tile borders, will be rounded to next power-of-2. Larger borders allow higher degree of anisotropic filtering, but uses more disk/cache memory. Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize = { "VirtualTextureTileBorderSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureTileBorderSize), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.vt.FeedbackFactor" },
		{ "DisplayName", "Feedback resolution factor" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Lower factor will increase virtual texture feedback resolution which increases CPU/GPU overhead, but may decrease streaming latency, especially if materials use many virtual textures. Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor = { "VirtualTextureFeedbackFactor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureFeedbackFactor), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.EnableCompressZlib" },
		{ "DisplayName", "Enable Zlib compression" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Use zlib to compress virtual textures. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextureEnableCompressZlib = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib = { "bVirtualTextureEnableCompressZlib", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.EnableCompressCrunch" },
		{ "DisplayName", "Enable Crunch compression" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Use Crunch library to compress virtual textures for supported formats, this is a lossy compression format that gives much better ratio than zlib. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextureEnableCompressCrunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch = { "bVirtualTextureEnableCompressCrunch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ClearCoatNormal" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Use a separate normal map for the bottom layer of a clear coat material. This is a higher quality feature that is expensive." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bClearCoatEnableSecondNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal = { "bClearCoatEnableSecondNormal", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionCaptureResolution" },
		{ "DisplayName", "Reflection Capture Resolution" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The cubemap resolution for all reflection capture probes. Must be power of 2. Note that for very high values the memory and performance impact may be severe." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution = { "ReflectionCaptureResolution", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, ReflectionCaptureResolution), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.Mobile.ReflectionCaptureCompression" },
		{ "DisplayName", "Mobile Reflection Capture Compression" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use the Reflection Capture Compression or not for mobile. It will use ETC2 format to do the compression." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bReflectionCaptureCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression = { "bReflectionCaptureCompression", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionEnvironmentLightmapMixBasedOnRoughness" },
		{ "DisplayName", "Reduce lightmap mixing on smooth surfaces" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->ReflectionEnvironmentLightmapMixBasedOnRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness = { "ReflectionEnvironmentLightmapMixBasedOnRoughness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ForwardShading" },
		{ "DisplayName", "Forward Shading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use forward shading on desktop platforms, requires Shader Model 5 hardware.  Forward shading supports MSAA and has lower default cost, but fewer features supported overall.  Materials have to opt-in to more expensive features like high quality reflections.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bForwardShading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading = { "bForwardShading", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VertexFoggingForOpaque" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Causes opaque materials to use per-vertex fogging, which costs slightly less.  Only supported with forward shading. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVertexFoggingForOpaque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque = { "bVertexFoggingForOpaque", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps. Games that only use dynamic lighting should set this to 0 to save some static lighting overhead. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bAllowStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting = { "bAllowStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConsoleVariable", "r.NormalMapsForStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to use normal maps for lighting computations." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseNormalMapsForStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting = { "bUseNormalMapsForStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to build distance fields of static meshes, needed for distance field AO, which is used to implement Movable SkyLight shadows, and ray traced distance field shadows on directional lights.  Enabling will increase mesh build times and memory usage.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGenerateMeshDistanceFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields = { "bGenerateMeshDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DistanceFieldBuild.EightBit" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to store mesh distance fields in an 8 bit fixed point format instead of 16 bit floating point.  8 bit uses half the memory, but introduces artifacts for large meshes or thin meshes.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEightBitMeshDistanceFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields = { "bEightBitMeshDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConsoleVariable", "r.GenerateLandscapeGIData" },
		{ "DisplayName", "Generate Landscape Real-time GI Data" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to generate a low-resolution base color texture for landscapes for rendering real-time global illumination.  This feature requires GenerateMeshDistanceFields is also enabled, and will increase mesh build times and memory usage." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGenerateLandscapeGIData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData = { "bGenerateLandscapeGIData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DistanceFieldBuild.Compress" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to store mesh distance fields compressed in memory, which reduces how much memory they take, but also causes serious hitches when making new levels visible.  Only enable if your project does not stream levels in-game.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bCompressMeshDistanceFields = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields = { "bCompressMeshDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_TessellationAdaptivePixelsPerTriangle_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ConsoleVariable", "r.TessellationAdaptivePixelsPerTriangle" },
		{ "DisplayName", "Adaptive pixels per triangle" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When adaptive tessellation is enabled it will try to tessellate a mesh so that each triangle contains the specified number of pixels. The tessellation multiplier specified in the material can increase or decrease the amount of tessellation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TessellationAdaptivePixelsPerTriangle = { "TessellationAdaptivePixelsPerTriangle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, TessellationAdaptivePixelsPerTriangle), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_TessellationAdaptivePixelsPerTriangle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_TessellationAdaptivePixelsPerTriangle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.SeparateTranslucency" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow translucency to be rendered to a separate render targeted and composited after depth of field. Prevents translucency from appearing out of focus." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSeparateTranslucency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency = { "bSeparateTranslucency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.TranslucentSortPolicy" },
		{ "DisplayName", "Translucent Sort Policy" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sort mode for translucent primitives, affecting how they are ordered and how they change order as the camera moves. Requires that Separate Translucency (under Postprocessing) is true." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy = { "TranslucentSortPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, TranslucentSortPolicy), Z_Construct_UEnum_Engine_ETranslucentSortPolicy, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Translucent Sort Axis" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The axis that sorting will occur along when Translucent Sort Policy is set to SortAlongAxis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis = { "TranslucentSortAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, TranslucentSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData[] = {
		{ "Category", "VR" },
		{ "ConsoleVariable", "vr.VRS.HMDFixedFoveationLevel" },
		{ "DisplayName", "HMD Fixed Foveation Level (experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the level of fixed-foveation to apply when generating the Variable Rate Shading attachment. This feature is currently experimental.\nThis can yield some fairly significant performance benefits on GPUs that support Tier 2 VRS.\nLower settings will result in almost no discernible artifacting on most HMDs; higher settings will show some artifacts towards the edges of the view." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel = { "HMDFixedFoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, HMDFixedFoveationLevel), Z_Construct_UEnum_Engine_EFixedFoveationLevels, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepth" },
		{ "DisplayName", "Custom Depth-Stencil Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass for tagging primitives for postprocessing passes is enabled. Enabling it on demand can save memory but may cause a hitch the first time the feature is used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil = { "CustomDepthStencil", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, CustomDepthStencil), Z_Construct_UEnum_Engine_ECustomDepthStencil, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepthTemporalAAJitter" },
		{ "DisplayName", "Custom Depth with TemporalAA Jitter" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass has the TemporalAA jitter enabled. Disabling this can be useful when the result of the CustomDepth Pass is used after TAA (e.g. after Tonemapping)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bCustomDepthTaaJitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter = { "bCustomDepthTaaJitter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.PostProcessing.PropagateAlpha" },
		{ "DisplayName", "Enable alpha channel support in post processing (experimental)." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Configures alpha channel support in renderer's post processing chain. Still experimental: works only with Temporal AA, Motion Blur, Circle Depth Of Field. This option also force disable the separate translucency." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing = { "bEnableAlphaChannelInPostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, bEnableAlphaChannelInPostProcessing), Z_Construct_UEnum_Engine_EAlphaChannelMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.Bloom" },
		{ "DisplayName", "Bloom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for Bloom is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureBloom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom = { "bDefaultFeatureBloom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusion" },
		{ "DisplayName", "Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusion is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion = { "bDefaultFeatureAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusionStaticFraction" },
		{ "DisplayName", "Ambient Occlusion Static Fraction (AO for baked lighting)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusionStaticFraction is enabled or not (only useful for baked lighting and if AO is on, allows to have SSAO affect baked lighting as well, costs performance, postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusionStaticFraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction = { "bDefaultFeatureAmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AutoExposure is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAutoExposure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure = { "bDefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Method" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The default method for AutoExposure(postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure = { "DefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposure), Z_Construct_UEnum_Engine_EAutoExposureMethodUI, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Bias" },
		{ "DisplayName", "Auto Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default Value for auto exposure bias." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias = { "DefaultFeatureAutoExposureBias", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposureBias), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange" },
		{ "DisplayName", "Extend default luminance range in Auto Exposure settings" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default values for AutoExposure should support an extended range of scene luminance. Also changes the exposure settings to be expressed in EV100." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bExtendDefaultLuminanceRangeInAutoExposureSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings = { "bExtendDefaultLuminanceRangeInAutoExposureSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.UsePreExposure" },
		{ "DisplayName", "Apply Pre-exposure before writing to the scene color" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use pre-exposure to remap the range of the scene color around the camera exposure. This limits the render target range required to support HDR lighting value." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUsePreExposure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure = { "bUsePreExposure", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.EyeAdaptation.EditorOnly" },
		{ "DisplayName", "Enable pre-exposure only in the editor" },
		{ "EditCondition", "bUsePreExposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether pre-exposure should be an editor only feature. This is to because it currently has an impact on the renderthread performance." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnablePreExposureOnlyInTheEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor = { "bEnablePreExposureOnlyInTheEditor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.MotionBlur" },
		{ "DisplayName", "Motion Blur" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for MotionBlur is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur = { "bDefaultFeatureMotionBlur", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LensFlare" },
		{ "DisplayName", "Lens Flares (Image based)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for LensFlare is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureLensFlare = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare = { "bDefaultFeatureLensFlare", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.TemporalAA.Upsampling" },
		{ "DisplayName", "Temporal Upsampling" },
		{ "EditCondition", "DefaultFeatureAntiAliasing == EAntiAliasingMethod::AAM_TemporalAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to do primary screen percentage with temporal AA or not." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bTemporalUpsampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling = { "bTemporalUpsampling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConsoleVariable", "r.SSGI.Enable" },
		{ "DisplayName", "Screen Space Global Illumination (Beta)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether enable screen space global illumination." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSSGI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI = { "bSSGI", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AntiAliasing" },
		{ "DisplayName", "Anti-Aliasing Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Which anti-aliasing mode is used by default" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing = { "DefaultFeatureAntiAliasing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAntiAliasing), Z_Construct_UEnum_Engine_EAntiAliasingMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LightUnits" },
		{ "DisplayName", "Light Units" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Which units to use for newly placed point, spot and rect lights" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits = { "DefaultLightUnits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultLightUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultBackBufferPixelFormat" },
		{ "DisplayName", "Frame Buffer Pixel Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Pixel format used for back buffer, when not specified" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat = { "DefaultBackBufferPixelFormat", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultBackBufferPixelFormat), Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Shadow.UnbuiltPreviewInGame" },
		{ "DisplayName", "Render Unbuilt Preview Shadows in game" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won't match which can appear to be a bug." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bRenderUnbuiltPreviewShadowsInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame = { "bRenderUnbuiltPreviewShadowsInGame", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.StencilForLODDither" },
		{ "DisplayName", "Use Stencil for LOD Dither Fading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use stencil for LOD dither fading.  This saves GPU time in the base pass for materials with dither fading enabled, but forces a full prepass. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bStencilForLODDither = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither = { "bStencilForLODDither", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.EarlyZPass" },
		{ "DisplayName", "Early Z-pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use a depth only pass to initialize Z culling for the base pass." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass = { "EarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, EarlyZPass), Z_Construct_UEnum_Engine_EEarlyZPass, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.EarlyZPassOnlyMaterialMasking" },
		{ "DisplayName", "Mask material only in early Z-pass" },
		{ "EditCondition", "EarlyZPass == EEarlyZPass::OpaqueAndMasked" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to compute materials' mask opacity only in early Z pass. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEarlyZPassOnlyMaterialMasking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking = { "bEarlyZPassOnlyMaterialMasking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DBuffer" },
		{ "DisplayName", "DBuffer Decals" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to accumulate decal properties to a buffer before the base pass.  DBuffer decals correctly affect lightmap and sky lighting, unlike regular deferred decals.  DBuffer enabled forces a full prepass.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer = { "bDBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.ClearSceneMethod" },
		{ "DisplayName", "Clear Scene" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select how the g-buffer is cleared in game mode (only affects deferred shading)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod = { "ClearSceneMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, ClearSceneMethod), Z_Construct_UEnum_Engine_EClearSceneOptions, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.BasePassOutputsVelocity" },
		{ "DisplayName", "Output velocities during base pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables emitting velocity during Base Pass rendering. Changing this setting requires restarting the editor.\nNote: enabling this behaves as if 'Output velocities due to vertex deformation' (r.VertexDeformationOutputsVelocity) is also enabled." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bBasePassOutputsVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity = { "bBasePassOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.VertexDeformationOutputsVelocity" },
		{ "DisplayName", "Output velocities due to vertex deformation" },
		{ "EditCondition", "!bBasePassOutputsVelocity" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables materials with World Position Offset and/or World Displacement to output velocities during velocity pass even when the actor has not moved. This incurs a performance cost and can be quite significant if many objects are using WPO, such as a forest of trees - in that case consider 'Output velocities during base pass' (r.BasePassOutputsVelocity) and disabling this option." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVertexDeformationOutputsVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity = { "bVertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SelectiveBasePassOutputs" },
		{ "DisplayName", "Selectively output to the GBuffer rendertargets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables not exporting to the GBuffer rendertargets that are not relevant. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSelectiveBasePassOutputs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs = { "bSelectiveBasePassOutputs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "DisplayName", "Enable Particle Cutouts by default" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, after changing the material on a Required particle module a Particle Cutout texture will be chosen automatically from the Opacity Mask texture if it exists, if not the Opacity Texture will be used if it exists." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultParticleCutouts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts = { "bDefaultParticleCutouts", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeX" },
		{ "DisplayName", "GPU Particle simulation texture size - X" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The X size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX = { "GPUSimulationTextureSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeY" },
		{ "DisplayName", "GPU Particle simulation texture size - Y" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The Y size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY = { "GPUSimulationTextureSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowGlobalClipPlane" },
		{ "DisplayName", "Support global clip plane for Planar Reflections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support the global clip plane needed for planar reflections.  Enabling this increases BasePass triangle cost by ~15% regardless of whether planar reflections are active. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGlobalClipPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane = { "bGlobalClipPlane", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.GBufferFormat" },
		{ "DisplayName", "GBuffer Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Selects which GBuffer format should be used. Affects performance primarily via how much GPU memory bandwidth used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat = { "GBufferFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, GBufferFormat), Z_Construct_UEnum_Engine_EGBufferFormat, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.MorphTarget.Mode" },
		{ "DisplayName", "Use GPU for computing morph targets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use original CPU method (loop per morph then by vertex) or use a GPU-based method on Shader Model 5 hardware." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseGPUMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets = { "bUseGPUMorphTargets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUCrashDebugging" },
		{ "DisplayName", "Enable vendor specific GPU crash analysis tools" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables vendor specific GPU crash analysis tools." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bNvidiaAftermathEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled = { "bNvidiaAftermathEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.InstancedStereo" },
		{ "DisplayName", "Instanced Stereo" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering through view instancing or draw call instancing." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMultiView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView = { "bMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MobileHDR" },
		{ "DisplayName", "Mobile HDR" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true, mobile pipelines include a full post-processing pass with tonemapping. Disable this setting for a performance boost and to enable stereoscopic rendering optimizations. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobilePostProcessing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing = { "bMobilePostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.MobileMultiView" },
		{ "DisplayName", "Mobile Multi-View" },
		{ "EditCondition", "!bMobilePostProcessing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering on mobile platforms." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileMultiView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView = { "bMobileMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData[] = {
		{ "ConsoleVariable", "r.Mobile.UseHWsRGBEncoding" },
		{ "DisplayName", "Single-pass linear rendering" },
		{ "EditCondition", "!bMobilePostProcessing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true then mobile single-pass (without post-processing) rendering will use HW accelerated sRGB encoding/decoding. Available only on Oculus for now." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileUseHWsRGBEncoding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding = { "bMobileUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "vr.RoundRobinOcclusion" },
		{ "DisplayName", "Round Robin Occlusion Queries" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable round-robin scheduling of occlusion queries for VR." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bRoundRobinOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion = { "bRoundRobinOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.ODSCapture" },
		{ "DisplayName", "Omni-directional Stereo Capture" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Omni-directional Stereo Capture." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bODSCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture = { "bODSCapture", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshStreaming" },
		{ "DisplayName", "Mesh Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled mesh will stream in based on what is visible on screen." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMeshStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming = { "bMeshStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConsoleVariable", "r.WireframeCullThreshold" },
		{ "DisplayName", "Wireframe Cull Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which wireframe objects are culled. Larger values can improve performance when viewing a scene in wireframe." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold = { "WireframeCullThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, WireframeCullThreshold), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing" },
		{ "DisplayName", "Ray Tracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Ray Tracing capabilities.  Requires 'Support Compute Skincache' before project is allowed to set this." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing = { "bEnableRayTracing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing.UseTextureLod" },
		{ "DisplayName", "Texture LOD" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable automatic texture mip level selection in ray tracing material shaders. Unchecked: highest resolution mip level is used for all texture (default). Checked: texture LOD is approximated based on total ray length, output resolution and texel density at hit point (ray cone method)." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracingTextureLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD = { "bEnableRayTracingTextureLOD", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportStationarySkylight" },
		{ "DisplayName", "Support Stationary Skylight" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportStationarySkylight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight = { "bSupportStationarySkylight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportLowQualityLightmaps" },
		{ "DisplayName", "Support low quality lightmap shader permutations" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportLowQualityLightmaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps = { "bSupportLowQualityLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportPointLightWholeSceneShadows" },
		{ "DisplayName", "Support PointLight WholeSceneShadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportPointLightWholeSceneShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows = { "bSupportPointLightWholeSceneShadows", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Atmospheric fog requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportAtmosphericFog" },
		{ "DisplayName", "Support Atmospheric Fog" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Atmospheric fog requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportAtmosphericFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog = { "bSupportAtmosphericFog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphere" },
		{ "DisplayName", "Support Sky Atmosphere" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation)." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkyAtmosphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere = { "bSupportSkyAtmosphere", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphereAffectsHeightFog" },
		{ "DisplayName", "Support Sky Atmosphere Affecting Height Fog" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component can light up the height fog but it requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation). It requires r.SupportSkyAtmosphere to be true." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkyAtmosphereAffectsHeightFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog = { "bSupportSkyAtmosphereAffectsHeightFog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.CompileShaders" },
		{ "DisplayName", "Support Compute Skin Cache" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Cannot be disabled while Ray Tracing is enabled as it is then required." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkinCacheShaders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders = { "bSupportSkinCacheShaders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.DefaultBehavior" },
		{ "DisplayName", "Default Skin Cache Behavior" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default behavior if all skeletal meshes are included/excluded from the skin cache. If Ray Tracing is enabled, will force inclusive behavior." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior = { "DefaultSkinCacheBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, DefaultSkinCacheBehavior), Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.SceneMemoryLimitInMB" },
		{ "DisplayName", "Maximum memory for Compute Skin Cache per world (MB)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Maximum amount of memory (in MB) per world/scene allowed for the Compute Skin Cache to generate output vertex data and recompute tangents." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB = { "SkinCacheSceneMemoryLimitInMB", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, SkinCacheSceneMemoryLimitInMB), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableStaticAndCSMShadowReceivers" },
		{ "DisplayName", "Support Combined Static and CSM Shadowing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow primitives to receive both static and CSM shadows from a stationary light. Disabling will free a mobile texture sampler and reduce shader permutations. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileEnableStaticAndCSMShadowReceivers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers = { "bMobileEnableStaticAndCSMShadowReceivers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableLightCSMShaderCulling" },
		{ "DisplayName", "Support movable light CSM shader culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Primitives lit by a movable directional light will render with the CSM shader only when determined to be within CSM range. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileEnableMovableLightCSMShaderCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling = { "bMobileEnableMovableLightCSMShaderCulling", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDistanceFieldShadows" },
		{ "DisplayName", "Support Pre-baked Distance Field Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for static primitives render Lightmass-baked distance field shadow maps from stationary directional lights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowDistanceFieldShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows = { "bMobileAllowDistanceFieldShadows", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowMovableDirectionalLights" },
		{ "DisplayName", "Support Movable Directional Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive movable directional lights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowMovableDirectionalLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights = { "bMobileAllowMovableDirectionalLights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileNumDynamicPointLights_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ClampMax", "4" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MobileNumDynamicPointLights" },
		{ "DisplayName", "Max Movable Spotlights / Point Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The number of dynamic spotlights or point lights to support on mobile devices. Setting this to 0 for games which do not require dynamic spotlights or point lights will reduce the number of shaders generated. Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileNumDynamicPointLights = { "MobileNumDynamicPointLights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MobileNumDynamicPointLights), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileNumDynamicPointLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileNumDynamicPointLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MobileDynamicPointLightsUseStaticBranch" },
		{ "DisplayName", "Use Shared Movable Spotlight / Point Light Shaders" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If this setting is enabled, the same shader will be used for any number of dynamic spotlights or point lights (up to the maximum specified above) hitting a surface. This is slightly slower but reduces the number of shaders generated. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileDynamicPointLightsUseStaticBranch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch = { "bMobileDynamicPointLightsUseStaticBranch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableSpotlights" },
		{ "DisplayName", "Support Movable Spotlights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive lighting from movable spotlights. This incurs an additional cost when processing movable lights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowMovableSpotlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights = { "bMobileAllowMovableSpotlights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableSpotlightsShadow" },
		{ "DisplayName", "Support Movable SpotlightShadows" },
		{ "EditCondition", "bMobileAllowMovableSpotlights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive shadow from movable spotlights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowMovableSpotlightShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows = { "bMobileAllowMovableSpotlightShadows", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Support16BitBoneIndex" },
		{ "DisplayName", "Support 16-bit Bone Index" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use 8 bit (if <=256 bones) or 16 bit (if > 256 bones) bone indices for rendering." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupport16BitBoneIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex = { "bSupport16BitBoneIndex", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Limit2BoneInfluences" },
		{ "DisplayName", "Limit GPU skinning to 2 bones influence" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use 2 bone influences instead of the default of 4 for GPU skinning. This does not change skeletal mesh assets but reduces the number of instructions required by the GPU skin vertex shaders. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGPUSkinLimit2BoneInfluences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences = { "bGPUSkinLimit2BoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportDepthOnlyIndexBuffers" },
		{ "DisplayName", "Support depth-only index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support depth-only index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportDepthOnlyIndexBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers = { "bSupportDepthOnlyIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportReversedIndexBuffers" },
		{ "DisplayName", "Support reversed index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support reversed index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportReversedIndexBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers = { "bSupportReversedIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.LightPropagationVolume" },
		{ "DisplayName", "Light Propagation Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow the usage and compilation of Light Propagation Volumes." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bLPV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV = { "bLPV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AmbientOcclusion" },
		{ "DisplayName", "Mobile Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Mobile Ambient Occlusion. Causion: An extra sampler will be occupied in mobile base pass pixel shader after enable the mobile ambient occlusion. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAmbientOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion = { "bMobileAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluences" },
		{ "DisplayName", "Use Unlimited Bone Influences" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use unlimited bone buffer instead of fixed MaxBoneInfluences for rendering." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseUnlimitedBoneInfluences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences = { "bUseUnlimitedBoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluencesThreshold" },
		{ "DisplayName", "Unlimited Bone Influences Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When Unlimited Bone Influence is enabled, it still uses a fixed bone inflence buffer until the max bone influence of a mesh exceeds this value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold = { "UnlimitedBonInfluencesThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, UnlimitedBonInfluencesThreshold), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ClampMin", "12" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Maximum bones per Sections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Max number of bones that can be skinned on the GPU in a single draw call. The default value is set by the Compat.MAX_GPUSKIN_BONES consolevariable. Changing this setting requires restarting the editor." },
		{ "UIMin", "12" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones = { "MaxSkinBones", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MaxSkinBones), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.PlanarReflectionMode" },
		{ "DisplayName", "Planar Reflection Mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The PlanarReflection will work differently on different mode on mobile platform, choose the proper mode as expect. Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode = { "MobilePlanarReflectionMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, MobilePlanarReflectionMode), Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.SupportsGen4TAA" },
		{ "DisplayName", "Supports desktop Gen4 TAA on mobile" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support desktop Gen4 TAA with mobile rendering. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileSupportsGen4TAA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA = { "bMobileSupportsGen4TAA", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData[] = {
		{ "Category", "Experimental|LOD Streaming|Skeletal Mesh" },
		{ "DisplayName", "Stream LODs by default" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to stream skeletal mesh LODs by default." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs = { "bStreamSkeletalMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, bStreamSkeletalMeshLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData[] = {
		{ "Category", "Experimental|LOD Streaming|Skeletal Mesh" },
		{ "DisplayName", "Discard optional LODs" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to discard skeletal mesh LODs below minimum LOD levels at cook time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs = { "bDiscardSkeletalMeshOptionalLODs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, bDiscardSkeletalMeshOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Color Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationColor show flag is enabled, this path will be used as the post-process material to render." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath = { "VisualizeCalibrationColorMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationColorMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Custom Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationCustom show flag is enabled, this path will be used as the post-process material to render." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath = { "VisualizeCalibrationCustomMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationCustomMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Grayscale Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationGrayscale show flag is enabled, this path will be used as the post-process material to render." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath = { "VisualizeCalibrationGrayscaleMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationGrayscaleMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDisableVertexFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxMobileCascades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileMSAASampleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowSoftwareOcclusionCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressZlib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableCompressCrunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bReflectionCaptureCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEightBitMeshDistanceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateLandscapeGIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompressMeshDistanceFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TessellationAdaptivePixelsPerTriangle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUsePreExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePreExposureOnlyInTheEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSSGI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bBasePassOutputsVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexDeformationOutputsVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bODSCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportAtmosphericFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileNumDynamicPointLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDynamicPointLightsUseStaticBranch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bLPV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URendererSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URendererSettings_Statics::ClassParams = {
		&URendererSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URendererSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URendererSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URendererSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URendererSettings, 921603049);
	template<> ENGINE_API UClass* StaticClass<URendererSettings>()
	{
		return URendererSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URendererSettings(Z_Construct_UClass_URendererSettings, &URendererSettings::StaticClass, TEXT("/Script/Engine"), TEXT("URendererSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererSettings);
	void URendererOverrideSettings::StaticRegisterNativesURendererOverrideSettings()
	{
	}
	UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister()
	{
		return URendererOverrideSettings::StaticClass();
	}
	struct Z_Construct_UClass_URendererOverrideSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportAllShaderPermutations_MetaData[];
#endif
		static void NewProp_bSupportAllShaderPermutations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportAllShaderPermutations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRecomputeTangents_MetaData[];
#endif
		static void NewProp_bForceRecomputeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRecomputeTangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URendererOverrideSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rendering Overrides (Local)" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\x09\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportAllShaderPermutations" },
		{ "DisplayName", "Force all shader permutation support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"" },
	};
#endif
	void Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit(void* Obj)
	{
		((URendererOverrideSettings*)Obj)->bSupportAllShaderPermutations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations = { "bSupportAllShaderPermutations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererOverrideSettings), &Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.ForceRecomputeTangents" },
		{ "DisplayName", "Force all skinned meshes to recompute tangents (also forces Compute SkinCache)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif
	void Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents_SetBit(void* Obj)
	{
		((URendererOverrideSettings*)Obj)->bForceRecomputeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents = { "bForceRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(URendererOverrideSettings), &Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bForceRecomputeTangents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URendererOverrideSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererOverrideSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams = {
		&URendererOverrideSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers),
		0,
		0x001000E4u,
		METADATA_PARAMS(Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URendererOverrideSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URendererOverrideSettings, 31925498);
	template<> ENGINE_API UClass* StaticClass<URendererOverrideSettings>()
	{
		return URendererOverrideSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URendererOverrideSettings(Z_Construct_UClass_URendererOverrideSettings, &URendererOverrideSettings::StaticClass, TEXT("/Script/Engine"), TEXT("URendererOverrideSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererOverrideSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/UserInterfaceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserInterfaceSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUIScalingRule();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
// End Cross Module References
	static UEnum* EUIScalingRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUIScalingRule, Z_Construct_UPackage__Script_Engine(), TEXT("EUIScalingRule"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUIScalingRule>()
	{
		return EUIScalingRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIScalingRule(EUIScalingRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EUIScalingRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EUIScalingRule_Hash() { return 3724516648U; }
	UEnum* Z_Construct_UEnum_Engine_EUIScalingRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIScalingRule"), 0, Get_Z_Construct_UEnum_Engine_EUIScalingRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIScalingRule::ShortestSide", (int64)EUIScalingRule::ShortestSide },
				{ "EUIScalingRule::LongestSide", (int64)EUIScalingRule::LongestSide },
				{ "EUIScalingRule::Horizontal", (int64)EUIScalingRule::Horizontal },
				{ "EUIScalingRule::Vertical", (int64)EUIScalingRule::Vertical },
				{ "EUIScalingRule::ScaleToFit", (int64)EUIScalingRule::ScaleToFit },
				{ "EUIScalingRule::Custom", (int64)EUIScalingRule::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** The Side to use when scaling the UI. */" },
				{ "Custom.Comment", "/** Custom - Allows custom rule interpretation. */" },
				{ "Custom.Name", "EUIScalingRule::Custom" },
				{ "Custom.ToolTip", "Custom - Allows custom rule interpretation." },
				{ "Horizontal.Comment", "/** Evaluates the scale curve based on the X axis of the viewport. */" },
				{ "Horizontal.Name", "EUIScalingRule::Horizontal" },
				{ "Horizontal.ToolTip", "Evaluates the scale curve based on the X axis of the viewport." },
				{ "LongestSide.Comment", "/** Evaluates the scale curve based on the longest side of the viewport. */" },
				{ "LongestSide.Name", "EUIScalingRule::LongestSide" },
				{ "LongestSide.ToolTip", "Evaluates the scale curve based on the longest side of the viewport." },
				{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
				{ "ScaleToFit.Comment", "/** ScaleToFit - Does not use scale curve. Emulates behavior of scale box by using DesignScreenSize and scaling the content relatively to it. */" },
				{ "ScaleToFit.Name", "EUIScalingRule::ScaleToFit" },
				{ "ScaleToFit.ToolTip", "ScaleToFit - Does not use scale curve. Emulates behavior of scale box by using DesignScreenSize and scaling the content relatively to it." },
				{ "ShortestSide.Comment", "/** Evaluates the scale curve based on the shortest side of the viewport. */" },
				{ "ShortestSide.Name", "EUIScalingRule::ShortestSide" },
				{ "ShortestSide.ToolTip", "Evaluates the scale curve based on the shortest side of the viewport." },
				{ "ToolTip", "The Side to use when scaling the UI." },
				{ "Vertical.Comment", "/** Evaluates the scale curve based on the Y axis of the viewport. */" },
				{ "Vertical.Name", "EUIScalingRule::Vertical" },
				{ "Vertical.ToolTip", "Evaluates the scale curve based on the Y axis of the viewport." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EUIScalingRule",
				"EUIScalingRule",
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
	static UEnum* ERenderFocusRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERenderFocusRule, Z_Construct_UPackage__Script_Engine(), TEXT("ERenderFocusRule"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERenderFocusRule>()
	{
		return ERenderFocusRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERenderFocusRule(ERenderFocusRule_StaticEnum, TEXT("/Script/Engine"), TEXT("ERenderFocusRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERenderFocusRule_Hash() { return 987621220U; }
	UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderFocusRule"), 0, Get_Z_Construct_UEnum_Engine_ERenderFocusRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderFocusRule::Always", (int64)ERenderFocusRule::Always },
				{ "ERenderFocusRule::NonPointer", (int64)ERenderFocusRule::NonPointer },
				{ "ERenderFocusRule::NavigationOnly", (int64)ERenderFocusRule::NavigationOnly },
				{ "ERenderFocusRule::Never", (int64)ERenderFocusRule::Never },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Comment", "/** Focus Brush will always be rendered for widgets that have user focus. */" },
				{ "Always.Name", "ERenderFocusRule::Always" },
				{ "Always.ToolTip", "Focus Brush will always be rendered for widgets that have user focus." },
				{ "Comment", "/** When to render the Focus Brush for widgets that have user focus. Based on the EFocusCause. */" },
				{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
				{ "NavigationOnly.Comment", "/** Focus Brush will be rendered for widgets that have user focus only if the focus was set by navigation. */" },
				{ "NavigationOnly.Name", "ERenderFocusRule::NavigationOnly" },
				{ "NavigationOnly.ToolTip", "Focus Brush will be rendered for widgets that have user focus only if the focus was set by navigation." },
				{ "Never.Comment", "/** Focus Brush will not be rendered. */" },
				{ "Never.Name", "ERenderFocusRule::Never" },
				{ "Never.ToolTip", "Focus Brush will not be rendered." },
				{ "NonPointer.Comment", "/** Focus Brush will be rendered for widgets that have user focus not set based on pointer causes. */" },
				{ "NonPointer.Name", "ERenderFocusRule::NonPointer" },
				{ "NonPointer.ToolTip", "Focus Brush will be rendered for widgets that have user focus not set based on pointer causes." },
				{ "ToolTip", "When to render the Focus Brush for widgets that have user focus. Based on the EFocusCause." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERenderFocusRule",
				"ERenderFocusRule",
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
class UScriptStruct* FHardwareCursorReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareCursorReference, Z_Construct_UPackage__Script_Engine(), TEXT("HardwareCursorReference"), sizeof(FHardwareCursorReference), Get_Z_Construct_UScriptStruct_FHardwareCursorReference_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHardwareCursorReference>()
{
	return FHardwareCursorReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHardwareCursorReference(FHardwareCursorReference::StaticStruct, TEXT("/Script/Engine"), TEXT("HardwareCursorReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference
{
	FScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference()
	{
		UScriptStruct::DeferCppStructOps<FHardwareCursorReference>(FName(TEXT("HardwareCursorReference")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference;
	struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CursorPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotSpot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareCursorReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "Comment", "/**\n\x09 * Specify the partial game content path to the hardware cursor.  For example,\n\x09 *   DO:   Slate/DefaultPointer\n\x09 *   DONT: Slate/DefaultPointer.cur\n\x09 *\n\x09 * NOTE: Having a 'Slate' directory in your game content folder will always be cooked, if\n\x09 *       you're trying to decide where to locate these cursor files.\n\x09 * \n\x09 * The hardware cursor system will search for platform specific formats first if you want to \n\x09 * take advantage of those capabilities.\n\x09 *\n\x09 * Windows:\n\x09 *   .ani -> .cur -> .png\n\x09 *\n\x09 * Mac:\n\x09 *   .tiff -> .png\n\x09 *\n\x09 * Linux:\n\x09 *   .png\n\x09 *\n\x09 * Multi-Resolution Png Fallback\n\x09 *  Because there's not a universal multi-resolution format for cursors there's a pattern we look for\n\x09 *  on all platforms where pngs are all that is found instead of cur/ani/tiff.\n\x09 *\n\x09 *    Pointer.png\n\x09 *    Pointer@1.25x.png\n\x09 *    Pointer@1.5x.png\n\x09 *    Pointer@1.75x.png\n\x09 *    Pointer@2x.png\n\x09 *    ...etc\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Specify the partial game content path to the hardware cursor.  For example,\n  DO:   Slate/DefaultPointer\n  DONT: Slate/DefaultPointer.cur\n\nNOTE: Having a 'Slate' directory in your game content folder will always be cooked, if\n      you're trying to decide where to locate these cursor files.\n\nThe hardware cursor system will search for platform specific formats first if you want to\ntake advantage of those capabilities.\n\nWindows:\n  .ani -> .cur -> .png\n\nMac:\n  .tiff -> .png\n\nLinux:\n  .png\n\nMulti-Resolution Png Fallback\n Because there's not a universal multi-resolution format for cursors there's a pattern we look for\n on all platforms where pngs are all that is found instead of cur/ani/tiff.\n\n   Pointer.png\n   Pointer@1.25x.png\n   Pointer@1.5x.png\n   Pointer@1.75x.png\n   Pointer@2x.png\n   ...etc" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath = { "CursorPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareCursorReference, CursorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * HotSpot needs to be in normalized (0..1) coordinates since it may apply to different resolution images.\n\x09 * NOTE: This HotSpot is only used on formats that do not provide their own hotspot, e.g. Tiff, PNG.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "HotSpot needs to be in normalized (0..1) coordinates since it may apply to different resolution images.\nNOTE: This HotSpot is only used on formats that do not provide their own hotspot, e.g. Tiff, PNG." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot = { "HotSpot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareCursorReference, HotSpot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HardwareCursorReference",
		sizeof(FHardwareCursorReference),
		alignof(FHardwareCursorReference),
		Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HardwareCursorReference"), sizeof(FHardwareCursorReference), Get_Z_Construct_UScriptStruct_FHardwareCursorReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_Hash() { return 2674444191U; }
	void UUserInterfaceSettings::StaticRegisterNativesUUserInterfaceSettings()
	{
	}
	UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister()
	{
		return UUserInterfaceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUserInterfaceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderFocusRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderFocusRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderFocusRule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HardwareCursors_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HardwareCursors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardwareCursors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HardwareCursors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftwareCursors_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoftwareCursors_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftwareCursors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SoftwareCursors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextEditBeamCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextEditBeamCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairsCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabHandCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabHandCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabHandClosedCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabHandClosedCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlashedCircleCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlashedCircleCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApplicationScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UIScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UIScaleRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomScalingRuleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowHighDPIInGameMode_MetaData[];
#endif
		static void NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowHighDPIInGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesignScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesignScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadWidgetsOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadWidgetsOnDedicatedServer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CursorClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClassInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomScalingRuleClassInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomScalingRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserInterfaceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * User Interface settings that control Slate and UMG.\n */" },
		{ "DisplayName", "User Interface" },
		{ "IncludePath", "Engine/UserInterfaceSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "User Interface settings that control Slate and UMG." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData[] = {
		{ "Category", "Focus" },
		{ "Comment", "/**\n\x09 * Rule to determine if we should render the Focus Brush for widgets that have user focus.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Rule to determine if we should render the Focus Brush for widgets that have user focus." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule = { "RenderFocusRule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, RenderFocusRule), Z_Construct_UEnum_Engine_ERenderFocusRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp = { "HardwareCursors", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FHardwareCursorReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp = { "HardwareCursors_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData[] = {
		{ "Category", "Hardware Cursors" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors = { "HardwareCursors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, HardwareCursors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp = { "SoftwareCursors", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp = { "SoftwareCursors_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData[] = {
		{ "Category", "Software Cursors" },
		{ "MetaClass", "UserWidget" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors = { "SoftwareCursors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, SoftwareCursors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor = { "DefaultCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, DefaultCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor = { "TextEditBeamCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, TextEditBeamCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor = { "CrosshairsCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, CrosshairsCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor = { "HandCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, HandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor = { "GrabHandCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor = { "GrabHandClosedCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandClosedCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor = { "SlashedCircleCursor", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, SlashedCircleCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a \n\x09 * property in your game title, you can modify this underlying value to scale the entire UI.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a\nproperty in your game title, you can modify this underlying value to scale the entire UI." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale = { "ApplicationScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, ApplicationScale), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * The rule used when trying to decide what scale to apply.\n\x09 */" },
		{ "DisplayName", "DPI Scale Rule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "The rule used when trying to decide what scale to apply." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule = { "UIScaleRule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleRule), Z_Construct_UEnum_Engine_EUIScalingRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules.\n\x09 */" },
		{ "MetaClass", "DPICustomScalingRule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass = { "CustomScalingRuleClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * Controls how the UI is scaled at different resolutions based on the DPI Scale Rule\n\x09 */" },
		{ "DisplayName", "DPI Curve" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Controls how the UI is scaled at different resolutions based on the DPI Scale Rule" },
		{ "XAxisName", "Resolution" },
		{ "YAxisName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve = { "UIScaleCurve", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * If true, game window on desktop platforms will be created with high-DPI awareness enabled.\n\x09 * Recommended to be enabled only if the game's UI allows users to modify 3D resolution scaling.\n\x09 */" },
		{ "DisplayName", "Allow High DPI in Game Mode" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If true, game window on desktop platforms will be created with high-DPI awareness enabled.\nRecommended to be enabled only if the game's UI allows users to modify 3D resolution scaling." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bAllowHighDPIInGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode = { "bAllowHighDPIInGameMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData[] = {
		{ "Category", "DPI Scaling|Scale To Fit Rule" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Used only with ScaleToFit scaling rule. Defines native resolution for which were source UI textures created. DPI scaling will be 1.0 at this screen resolution. */" },
		{ "DisplayName", "Design Screen Size" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Used only with ScaleToFit scaling rule. Defines native resolution for which were source UI textures created. DPI scaling will be 1.0 at this screen resolution." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize = { "DesignScreenSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, DesignScreenSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/**\n\x09 * If false, widget references will be stripped during cook for server builds and not loaded at runtime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If false, widget references will be stripped during cook for server builds and not loaded at runtime." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bLoadWidgetsOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer = { "bLoadWidgetsOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner = { "CursorClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses = { "CursorClasses", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, CursorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance = { "CustomScalingRuleClassInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClassInstance), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule = { "CustomScalingRule", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRule), Z_Construct_UClass_UDPICustomScalingRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserInterfaceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInterfaceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams = {
		&UUserInterfaceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserInterfaceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserInterfaceSettings, 1231613042);
	template<> ENGINE_API UClass* StaticClass<UUserInterfaceSettings>()
	{
		return UUserInterfaceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserInterfaceSettings(Z_Construct_UClass_UUserInterfaceSettings, &UUserInterfaceSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UUserInterfaceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInterfaceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

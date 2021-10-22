// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger();
// End Cross Module References
	static UEnum* EVirtualKeyboardDismissAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardDismissAction"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EVirtualKeyboardDismissAction>()
	{
		return EVirtualKeyboardDismissAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardDismissAction(EVirtualKeyboardDismissAction_StaticEnum, TEXT("/Script/Slate"), TEXT("EVirtualKeyboardDismissAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Hash() { return 1789729165U; }
	UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardDismissAction"), 0, Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardDismissAction::TextChangeOnDismiss", (int64)EVirtualKeyboardDismissAction::TextChangeOnDismiss },
				{ "EVirtualKeyboardDismissAction::TextCommitOnAccept", (int64)EVirtualKeyboardDismissAction::TextCommitOnAccept },
				{ "EVirtualKeyboardDismissAction::TextCommitOnDismiss", (int64)EVirtualKeyboardDismissAction::TextCommitOnDismiss },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
				{ "TextChangeOnDismiss.Comment", "/** Sends a text changed message when the virtual keyboard is dismissed by the user. */" },
				{ "TextChangeOnDismiss.Name", "EVirtualKeyboardDismissAction::TextChangeOnDismiss" },
				{ "TextChangeOnDismiss.ToolTip", "Sends a text changed message when the virtual keyboard is dismissed by the user." },
				{ "TextCommitOnAccept.Comment", "/** Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard. */" },
				{ "TextCommitOnAccept.Name", "EVirtualKeyboardDismissAction::TextCommitOnAccept" },
				{ "TextCommitOnAccept.ToolTip", "Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard." },
				{ "TextCommitOnDismiss.Comment", "/** Send a text commit message when the virtual keyboard is dismissed by the user. */" },
				{ "TextCommitOnDismiss.Name", "EVirtualKeyboardDismissAction::TextCommitOnDismiss" },
				{ "TextCommitOnDismiss.ToolTip", "Send a text commit message when the virtual keyboard is dismissed by the user." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EVirtualKeyboardDismissAction",
				"EVirtualKeyboardDismissAction",
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
	static UEnum* EVirtualKeyboardTrigger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger, Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardTrigger"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EVirtualKeyboardTrigger>()
	{
		return EVirtualKeyboardTrigger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardTrigger(EVirtualKeyboardTrigger_StaticEnum, TEXT("/Script/Slate"), TEXT("EVirtualKeyboardTrigger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Hash() { return 2811304022U; }
	UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardTrigger"), 0, Get_Z_Construct_UEnum_Slate_EVirtualKeyboardTrigger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardTrigger::OnFocusByPointer", (int64)EVirtualKeyboardTrigger::OnFocusByPointer },
				{ "EVirtualKeyboardTrigger::OnAllFocusEvents", (int64)EVirtualKeyboardTrigger::OnAllFocusEvents },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
				{ "OnAllFocusEvents.Comment", "/** Display the virtual keyboard when the widget gains keyboard focus by any means. */" },
				{ "OnAllFocusEvents.Name", "EVirtualKeyboardTrigger::OnAllFocusEvents" },
				{ "OnAllFocusEvents.ToolTip", "Display the virtual keyboard when the widget gains keyboard focus by any means." },
				{ "OnFocusByPointer.Comment", "/** Display the virtual keyboard when the widget gains keyboard focus by a pointer action. */" },
				{ "OnFocusByPointer.Name", "EVirtualKeyboardTrigger::OnFocusByPointer" },
				{ "OnFocusByPointer.ToolTip", "Display the virtual keyboard when the widget gains keyboard focus by a pointer action." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EVirtualKeyboardTrigger",
				"EVirtualKeyboardTrigger",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

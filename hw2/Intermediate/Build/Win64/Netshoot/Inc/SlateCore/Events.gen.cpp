// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Input/Events.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvents() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFocusCause();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureLostEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent();
// End Cross Module References
	static UEnum* EFocusCause_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFocusCause, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFocusCause"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFocusCause>()
	{
		return EFocusCause_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFocusCause(EFocusCause_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFocusCause"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFocusCause_Hash() { return 279695696U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFocusCause()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFocusCause"), 0, Get_Z_Construct_UEnum_SlateCore_EFocusCause_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFocusCause::Mouse", (int64)EFocusCause::Mouse },
				{ "EFocusCause::Navigation", (int64)EFocusCause::Navigation },
				{ "EFocusCause::SetDirectly", (int64)EFocusCause::SetDirectly },
				{ "EFocusCause::Cleared", (int64)EFocusCause::Cleared },
				{ "EFocusCause::OtherWidgetLostFocus", (int64)EFocusCause::OtherWidgetLostFocus },
				{ "EFocusCause::WindowActivate", (int64)EFocusCause::WindowActivate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cleared.Comment", "/** Focus was explicitly cleared via the escape key or other similar action. */" },
				{ "Cleared.Name", "EFocusCause::Cleared" },
				{ "Cleared.ToolTip", "Focus was explicitly cleared via the escape key or other similar action." },
				{ "Comment", "/**\n* Context for focus change\n*/" },
				{ "ModuleRelativePath", "Public/Input/Events.h" },
				{ "Mouse.Comment", "/** Focus was changed because of a mouse action. */" },
				{ "Mouse.Name", "EFocusCause::Mouse" },
				{ "Mouse.ToolTip", "Focus was changed because of a mouse action." },
				{ "Navigation.Comment", "/** Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ... */" },
				{ "Navigation.Name", "EFocusCause::Navigation" },
				{ "Navigation.ToolTip", "Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ..." },
				{ "OtherWidgetLostFocus.Comment", "/** Focus was changed because another widget lost focus, and focus moved to a new widget. */" },
				{ "OtherWidgetLostFocus.Name", "EFocusCause::OtherWidgetLostFocus" },
				{ "OtherWidgetLostFocus.ToolTip", "Focus was changed because another widget lost focus, and focus moved to a new widget." },
				{ "SetDirectly.Comment", "/** Focus was changed because someone asked the application to change it. */" },
				{ "SetDirectly.Name", "EFocusCause::SetDirectly" },
				{ "SetDirectly.ToolTip", "Focus was changed because someone asked the application to change it." },
				{ "ToolTip", "Context for focus change" },
				{ "WindowActivate.Comment", "/** Focus was set in response to the owning window being activated. */" },
				{ "WindowActivate.Name", "EFocusCause::WindowActivate" },
				{ "WindowActivate.ToolTip", "Focus was set in response to the owning window being activated." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFocusCause",
				"EFocusCause",
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

static_assert(std::is_polymorphic<FNavigationEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FNavigationEvent cannot be polymorphic unless super FInputEvent is polymorphic");

class UScriptStruct* FNavigationEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("NavigationEvent"), sizeof(FNavigationEvent), Get_Z_Construct_UScriptStruct_FNavigationEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FNavigationEvent>()
{
	return FNavigationEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavigationEvent(FNavigationEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("NavigationEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent()
	{
		UScriptStruct::DeferCppStructOps<FNavigationEvent>(FName(TEXT("NavigationEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent;
	struct Z_Construct_UScriptStruct_FNavigationEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* FNavigationEvent describes a navigation action (Left, Right, Up, Down)\n* It is passed to event handlers dealing with navigation.\n*/" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FNavigationEvent describes a navigation action (Left, Right, Up, Down)\nIt is passed to event handlers dealing with navigation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"NavigationEvent",
		sizeof(FNavigationEvent),
		alignof(FNavigationEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavigationEvent"), sizeof(FNavigationEvent), Get_Z_Construct_UScriptStruct_FNavigationEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavigationEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavigationEvent_Hash() { return 3910585722U; }

static_assert(std::is_polymorphic<FMotionEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FMotionEvent cannot be polymorphic unless super FInputEvent is polymorphic");

class UScriptStruct* FMotionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("MotionEvent"), sizeof(FMotionEvent), Get_Z_Construct_UScriptStruct_FMotionEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FMotionEvent>()
{
	return FMotionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMotionEvent(FMotionEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("MotionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent()
	{
		UScriptStruct::DeferCppStructOps<FMotionEvent>(FName(TEXT("MotionEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent;
	struct Z_Construct_UScriptStruct_FMotionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMotionEvent describes a touch pad action (press, move, lift)\n * It is passed to event handlers dealing with touch input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FMotionEvent describes a touch pad action (press, move, lift)\nIt is passed to event handlers dealing with touch input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"MotionEvent",
		sizeof(FMotionEvent),
		alignof(FMotionEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MotionEvent"), sizeof(FMotionEvent), Get_Z_Construct_UScriptStruct_FMotionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMotionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMotionEvent_Hash() { return 3608616780U; }

static_assert(std::is_polymorphic<FPointerEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FPointerEvent cannot be polymorphic unless super FInputEvent is polymorphic");

class UScriptStruct* FPointerEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("PointerEvent"), sizeof(FPointerEvent), Get_Z_Construct_UScriptStruct_FPointerEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FPointerEvent>()
{
	return FPointerEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerEvent(FPointerEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("PointerEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent()
	{
		UScriptStruct::DeferCppStructOps<FPointerEvent>(FName(TEXT("PointerEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent;
	struct Z_Construct_UScriptStruct_FPointerEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FPointerEvent describes a mouse or touch action (e.g. Press, Release, Move, etc).\n * It is passed to event handlers dealing with pointer-based input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FPointerEvent describes a mouse or touch action (e.g. Press, Release, Move, etc).\nIt is passed to event handlers dealing with pointer-based input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"PointerEvent",
		sizeof(FPointerEvent),
		alignof(FPointerEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerEvent"), sizeof(FPointerEvent), Get_Z_Construct_UScriptStruct_FPointerEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointerEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerEvent_Hash() { return 2927994012U; }

static_assert(std::is_polymorphic<FCharacterEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FCharacterEvent cannot be polymorphic unless super FInputEvent is polymorphic");

class UScriptStruct* FCharacterEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("CharacterEvent"), sizeof(FCharacterEvent), Get_Z_Construct_UScriptStruct_FCharacterEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCharacterEvent>()
{
	return FCharacterEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterEvent(FCharacterEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CharacterEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent()
	{
		UScriptStruct::DeferCppStructOps<FCharacterEvent>(FName(TEXT("CharacterEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent;
	struct Z_Construct_UScriptStruct_FCharacterEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCharacterEvent describes a keyboard action where the utf-16 code is given.  Used for OnKeyChar messages\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FCharacterEvent describes a keyboard action where the utf-16 code is given.  Used for OnKeyChar messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"CharacterEvent",
		sizeof(FCharacterEvent),
		alignof(FCharacterEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterEvent"), sizeof(FCharacterEvent), Get_Z_Construct_UScriptStruct_FCharacterEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterEvent_Hash() { return 2752069306U; }

static_assert(std::is_polymorphic<FAnalogInputEvent>() == std::is_polymorphic<FKeyEvent>(), "USTRUCT FAnalogInputEvent cannot be polymorphic unless super FKeyEvent is polymorphic");

class UScriptStruct* FAnalogInputEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalogInputEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("AnalogInputEvent"), sizeof(FAnalogInputEvent), Get_Z_Construct_UScriptStruct_FAnalogInputEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FAnalogInputEvent>()
{
	return FAnalogInputEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnalogInputEvent(FAnalogInputEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("AnalogInputEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent()
	{
		UScriptStruct::DeferCppStructOps<FAnalogInputEvent>(FName(TEXT("AnalogInputEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent;
	struct Z_Construct_UScriptStruct_FAnalogInputEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FAnalogEvent describes a analog key value.\n * It is passed to event handlers dealing with analog keys.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FAnalogEvent describes a analog key value.\nIt is passed to event handlers dealing with analog keys." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalogInputEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FKeyEvent,
		&NewStructOps,
		"AnalogInputEvent",
		sizeof(FAnalogInputEvent),
		alignof(FAnalogInputEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnalogInputEvent"), sizeof(FAnalogInputEvent), Get_Z_Construct_UScriptStruct_FAnalogInputEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnalogInputEvent_Hash() { return 3446156069U; }

static_assert(std::is_polymorphic<FKeyEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FKeyEvent cannot be polymorphic unless super FInputEvent is polymorphic");

class UScriptStruct* FKeyEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("KeyEvent"), sizeof(FKeyEvent), Get_Z_Construct_UScriptStruct_FKeyEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FKeyEvent>()
{
	return FKeyEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyEvent(FKeyEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("KeyEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent()
	{
		UScriptStruct::DeferCppStructOps<FKeyEvent>(FName(TEXT("KeyEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent;
	struct Z_Construct_UScriptStruct_FKeyEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FKeyEvent describes a key action (keyboard/controller key/button pressed or released.)\n * It is passed to event handlers dealing with key input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FKeyEvent describes a key action (keyboard/controller key/button pressed or released.)\nIt is passed to event handlers dealing with key input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"KeyEvent",
		sizeof(FKeyEvent),
		alignof(FKeyEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyEvent"), sizeof(FKeyEvent), Get_Z_Construct_UScriptStruct_FKeyEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyEvent_Hash() { return 2592291392U; }
class UScriptStruct* FInputEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FInputEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("InputEvent"), sizeof(FInputEvent), Get_Z_Construct_UScriptStruct_FInputEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInputEvent>()
{
	return FInputEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputEvent(FInputEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("InputEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFInputEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFInputEvent()
	{
		UScriptStruct::DeferCppStructOps<FInputEvent>(FName(TEXT("InputEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFInputEvent;
	struct Z_Construct_UScriptStruct_FInputEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all mouse and keyevents.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "Base class for all mouse and keyevents." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"InputEvent",
		sizeof(FInputEvent),
		alignof(FInputEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputEvent"), sizeof(FInputEvent), Get_Z_Construct_UScriptStruct_FInputEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputEvent_Hash() { return 2779117829U; }
class UScriptStruct* FCaptureLostEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FCaptureLostEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureLostEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("CaptureLostEvent"), sizeof(FCaptureLostEvent), Get_Z_Construct_UScriptStruct_FCaptureLostEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCaptureLostEvent>()
{
	return FCaptureLostEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCaptureLostEvent(FCaptureLostEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("CaptureLostEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent()
	{
		UScriptStruct::DeferCppStructOps<FCaptureLostEvent>(FName(TEXT("CaptureLostEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent;
	struct Z_Construct_UScriptStruct_FCaptureLostEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureLostEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CaptureLostEvent",
		sizeof(FCaptureLostEvent),
		alignof(FCaptureLostEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureLostEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCaptureLostEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CaptureLostEvent"), sizeof(FCaptureLostEvent), Get_Z_Construct_UScriptStruct_FCaptureLostEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCaptureLostEvent_Hash() { return 963007283U; }
class UScriptStruct* FFocusEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocusEvent, Z_Construct_UPackage__Script_SlateCore(), TEXT("FocusEvent"), sizeof(FFocusEvent), Get_Z_Construct_UScriptStruct_FFocusEvent_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFocusEvent>()
{
	return FFocusEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFocusEvent(FFocusEvent::StaticStruct, TEXT("/Script/SlateCore"), TEXT("FocusEvent"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent
{
	FScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent()
	{
		UScriptStruct::DeferCppStructOps<FFocusEvent>(FName(TEXT("FocusEvent")));
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent;
	struct Z_Construct_UScriptStruct_FFocusEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FFocusEvent is used when notifying widgets about keyboard focus changes\n * It is passed to event handlers dealing with keyboard focus\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FFocusEvent is used when notifying widgets about keyboard focus changes\nIt is passed to event handlers dealing with keyboard focus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocusEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocusEvent>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocusEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FocusEvent",
		sizeof(FFocusEvent),
		alignof(FFocusEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FocusEvent"), sizeof(FFocusEvent), Get_Z_Construct_UScriptStruct_FFocusEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFocusEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFocusEvent_Hash() { return 2160504518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

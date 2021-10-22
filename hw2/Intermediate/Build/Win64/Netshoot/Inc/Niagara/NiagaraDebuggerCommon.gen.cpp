// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDebuggerCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDebuggerCommon() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ENiagaraDebugHudVerbosity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudVerbosity"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudVerbosity>()
	{
		return ENiagaraDebugHudVerbosity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDebugHudVerbosity(ENiagaraDebugHudVerbosity_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDebugHudVerbosity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Hash() { return 1439403505U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDebugHudVerbosity"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDebugHudVerbosity::None", (int64)ENiagaraDebugHudVerbosity::None },
				{ "ENiagaraDebugHudVerbosity::Basic", (int64)ENiagaraDebugHudVerbosity::Basic },
				{ "ENiagaraDebugHudVerbosity::Verbose", (int64)ENiagaraDebugHudVerbosity::Verbose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ENiagaraDebugHudVerbosity::Basic" },
				{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
				{ "None.Name", "ENiagaraDebugHudVerbosity::None" },
				{ "Verbose.Name", "ENiagaraDebugHudVerbosity::Verbose" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDebugHudVerbosity",
				"ENiagaraDebugHudVerbosity",
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
	static UEnum* ENiagaraDebugHudFont_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudFont"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudFont>()
	{
		return ENiagaraDebugHudFont_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDebugHudFont(ENiagaraDebugHudFont_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDebugHudFont"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Hash() { return 3760098871U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDebugHudFont"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDebugHudFont::Small", (int64)ENiagaraDebugHudFont::Small },
				{ "ENiagaraDebugHudFont::Normal", (int64)ENiagaraDebugHudFont::Normal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
				{ "Normal.Name", "ENiagaraDebugHudFont::Normal" },
				{ "Small.Name", "ENiagaraDebugHudFont::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDebugHudFont",
				"ENiagaraDebugHudFont",
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
	static UEnum* ENiagaraDebugHudVAlign_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudVAlign"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudVAlign>()
	{
		return ENiagaraDebugHudVAlign_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDebugHudVAlign(ENiagaraDebugHudVAlign_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDebugHudVAlign"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Hash() { return 2136358177U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDebugHudVAlign"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDebugHudVAlign::Top", (int64)ENiagaraDebugHudVAlign::Top },
				{ "ENiagaraDebugHudVAlign::Center", (int64)ENiagaraDebugHudVAlign::Center },
				{ "ENiagaraDebugHudVAlign::Bottom", (int64)ENiagaraDebugHudVAlign::Bottom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bottom.Name", "ENiagaraDebugHudVAlign::Bottom" },
				{ "Center.Name", "ENiagaraDebugHudVAlign::Center" },
				{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
				{ "Top.Name", "ENiagaraDebugHudVAlign::Top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDebugHudVAlign",
				"ENiagaraDebugHudVAlign",
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
	static UEnum* ENiagaraDebugHudHAlign_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudHAlign"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudHAlign>()
	{
		return ENiagaraDebugHudHAlign_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDebugHudHAlign(ENiagaraDebugHudHAlign_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDebugHudHAlign"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Hash() { return 2802539412U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDebugHudHAlign"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDebugHudHAlign::Left", (int64)ENiagaraDebugHudHAlign::Left },
				{ "ENiagaraDebugHudHAlign::Center", (int64)ENiagaraDebugHudHAlign::Center },
				{ "ENiagaraDebugHudHAlign::Right", (int64)ENiagaraDebugHudHAlign::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "ENiagaraDebugHudHAlign::Center" },
				{ "Left.Name", "ENiagaraDebugHudHAlign::Left" },
				{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
				{ "Right.Name", "ENiagaraDebugHudHAlign::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDebugHudHAlign",
				"ENiagaraDebugHudHAlign",
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
	static UEnum* ENiagaraDebugPlaybackMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugPlaybackMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugPlaybackMode>()
	{
		return ENiagaraDebugPlaybackMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDebugPlaybackMode(ENiagaraDebugPlaybackMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDebugPlaybackMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Hash() { return 420454841U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDebugPlaybackMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDebugPlaybackMode::Play", (int64)ENiagaraDebugPlaybackMode::Play },
				{ "ENiagaraDebugPlaybackMode::Loop", (int64)ENiagaraDebugPlaybackMode::Loop },
				{ "ENiagaraDebugPlaybackMode::Paused", (int64)ENiagaraDebugPlaybackMode::Paused },
				{ "ENiagaraDebugPlaybackMode::Step", (int64)ENiagaraDebugPlaybackMode::Step },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// End of messages.\n//////////////////////////////////////////////////////////////////////////\n" },
				{ "Loop.Name", "ENiagaraDebugPlaybackMode::Loop" },
				{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
				{ "Paused.Name", "ENiagaraDebugPlaybackMode::Paused" },
				{ "Play.Name", "ENiagaraDebugPlaybackMode::Play" },
				{ "Step.Name", "ENiagaraDebugPlaybackMode::Step" },
				{ "ToolTip", "End of messages." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDebugPlaybackMode",
				"ENiagaraDebugPlaybackMode",
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
class UScriptStruct* FNiagaraSimpleClientInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimpleClientInfo"), sizeof(FNiagaraSimpleClientInfo), Get_Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimpleClientInfo>()
{
	return FNiagaraSimpleClientInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSimpleClientInfo(FNiagaraSimpleClientInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSimpleClientInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSimpleClientInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSimpleClientInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraSimpleClientInfo>(FName(TEXT("NiagaraSimpleClientInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSimpleClientInfo;
	struct Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Systems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Systems;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple information on the connected client for use in continuous or immediate response UI elements. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Simple information on the connected client for use in continuous or immediate response UI elements." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimpleClientInfo>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_Inner = { "Systems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all system names in the scene. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all system names in the scene." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Systems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all actors with Niagara components. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all actors with Niagara components." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all Niagara components. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all Niagara components." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all Niagara emitters. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all Niagara emitters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimpleClientInfo",
		sizeof(FNiagaraSimpleClientInfo),
		alignof(FNiagaraSimpleClientInfo),
		Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSimpleClientInfo"), sizeof(FNiagaraSimpleClientInfo), Get_Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Hash() { return 1572070922U; }
class UScriptStruct* FNiagaraOutlinerCaptureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerCaptureSettings"), sizeof(FNiagaraOutlinerCaptureSettings), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerCaptureSettings>()
{
	return FNiagaraOutlinerCaptureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerCaptureSettings(FNiagaraOutlinerCaptureSettings::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerCaptureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerCaptureSettings
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerCaptureSettings()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerCaptureSettings>(FName(TEXT("NiagaraOutlinerCaptureSettings")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerCaptureSettings;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerCapture_MetaData[];
#endif
		static void NewProp_bTriggerCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDelayFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CaptureDelayFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGatherPerfData_MetaData[];
#endif
		static void NewProp_bGatherPerfData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGatherPerfData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerCaptureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Press to trigger a single capture of Niagara data from the connected debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Press to trigger a single capture of Niagara data from the connected debugger client." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_SetBit(void* Obj)
	{
		((FNiagaraOutlinerCaptureSettings*)Obj)->bTriggerCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture = { "bTriggerCapture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraOutlinerCaptureSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many frames to delay capture. If gathering performance data, this is how many frames will be collected. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames to delay capture. If gathering performance data, this is how many frames will be collected." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames = { "CaptureDelayFrames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerCaptureSettings, CaptureDelayFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_SetBit(void* Obj)
	{
		((FNiagaraOutlinerCaptureSettings*)Obj)->bGatherPerfData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData = { "bGatherPerfData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraOutlinerCaptureSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerCaptureSettings",
		sizeof(FNiagaraOutlinerCaptureSettings),
		alignof(FNiagaraOutlinerCaptureSettings),
		Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerCaptureSettings"), sizeof(FNiagaraOutlinerCaptureSettings), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Hash() { return 1472535063U; }
class UScriptStruct* FNiagaraRequestSimpleClientInfoMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRequestSimpleClientInfoMessage"), sizeof(FNiagaraRequestSimpleClientInfoMessage), Get_Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRequestSimpleClientInfoMessage>()
{
	return FNiagaraRequestSimpleClientInfoMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage(FNiagaraRequestSimpleClientInfoMessage::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraRequestSimpleClientInfoMessage"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRequestSimpleClientInfoMessage
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRequestSimpleClientInfoMessage()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraRequestSimpleClientInfoMessage>(FName(TEXT("NiagaraRequestSimpleClientInfoMessage")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraRequestSimpleClientInfoMessage;
	struct Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message passed from debugger to client when it needs updated simple client info. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message passed from debugger to client when it needs updated simple client info." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRequestSimpleClientInfoMessage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRequestSimpleClientInfoMessage",
		sizeof(FNiagaraRequestSimpleClientInfoMessage),
		alignof(FNiagaraRequestSimpleClientInfoMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraRequestSimpleClientInfoMessage"), sizeof(FNiagaraRequestSimpleClientInfoMessage), Get_Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Hash() { return 2137349303U; }
class UScriptStruct* FNiagaraDebugHUDSettingsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHUDSettingsData"), sizeof(FNiagaraDebugHUDSettingsData), Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHUDSettingsData>()
{
	return FNiagaraDebugHUDSettingsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebugHUDSettingsData(FNiagaraDebugHUDSettingsData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebugHUDSettingsData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDSettingsData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDSettingsData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebugHUDSettingsData>(FName(TEXT("NiagaraDebugHUDSettingsData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDSettingsData;
	struct Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidateSystemSimulationDataBuffers_MetaData[];
#endif
		static void NewProp_bValidateSystemSimulationDataBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidateSystemSimulationDataBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidateParticleDataBuffers_MetaData[];
#endif
		static void NewProp_bValidateParticleDataBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidateParticleDataBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverviewEnabled_MetaData[];
#endif
		static void NewProp_bOverviewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverviewEnabled;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OverviewFont_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverviewFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverviewFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverviewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverviewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentFilterEnabled_MetaData[];
#endif
		static void NewProp_bComponentFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentFilterEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSystemFilterEnabled_MetaData[];
#endif
		static void NewProp_bSystemFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSystemFilterEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SystemFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterFilterEnabled_MetaData[];
#endif
		static void NewProp_bEmitterFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterFilterEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmitterFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorFilterEnabled_MetaData[];
#endif
		static void NewProp_bActorFilterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorFilterEnabled;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SystemDebugVerbosity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemDebugVerbosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SystemDebugVerbosity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SystemEmitterVerbosity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemEmitterVerbosity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SystemEmitterVerbosity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSystemShowBounds_MetaData[];
#endif
		static void NewProp_bSystemShowBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSystemShowBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSystemShowActiveOnlyInWorld_MetaData[];
#endif
		static void NewProp_bSystemShowActiveOnlyInWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSystemShowActiveOnlyInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSystemVariables_MetaData[];
#endif
		static void NewProp_bShowSystemVariables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSystemVariables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemVariables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SystemVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemTextOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemTextOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowParticleVariables_MetaData[];
#endif
		static void NewProp_bShowParticleVariables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowParticleVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGpuParticleReadback_MetaData[];
#endif
		static void NewProp_bEnableGpuParticleReadback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGpuParticleReadback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticlesVariables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticlesVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticlesVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleTextOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleTextOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowParticlesVariablesWithSystem_MetaData[];
#endif
		static void NewProp_bShowParticlesVariablesWithSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowParticlesVariablesWithSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxParticlesToDisplay_MetaData[];
#endif
		static void NewProp_bUseMaxParticlesToDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxParticlesToDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticlesToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticlesToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaybackMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaybackMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRateEnabled_MetaData[];
#endif
		static void NewProp_bPlaybackRateEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRateEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopTimeEnabled_MetaData[];
#endif
		static void NewProp_bLoopTimeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopTimeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGlobalBudgetInfo_MetaData[];
#endif
		static void NewProp_bShowGlobalBudgetInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGlobalBudgetInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for Niagara debug HUD. Contained in it's own struct so that we can pass it whole in a message to the debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Settings for Niagara debug HUD. Contained in it's own struct so that we can pass it whole in a message to the debugger client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHUDSettingsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/** Master control for all HUD features. */" },
		{ "DisplayName", "Debug HUD Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Master control for all HUD features." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/**\n\x09When enabled all Niagara systems that pass the filter will have the simulation data buffers validation.\n\x09i.e. we will look for NaN or other invalidate data  inside it\n\x09Note: This will have an impact on performance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled all Niagara systems that pass the filter will have the simulation data buffers validation.\ni.e. we will look for NaN or other invalidate data  inside it\nNote: This will have an impact on performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bValidateSystemSimulationDataBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers = { "bValidateSystemSimulationDataBuffers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/**\n\x09When enabled all Niagara systems that pass the filter will have the particle data buffers validation.\n\x09i.e. we will look for NaN or other invalidate data  inside it\n\x09Note: This will have an impact on performance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled all Niagara systems that pass the filter will have the particle data buffers validation.\ni.e. we will look for NaN or other invalidate data  inside it\nNote: This will have an impact on performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bValidateParticleDataBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers = { "bValidateParticleDataBuffers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** When enabled the overview display will be enabled. */" },
		{ "DisplayName", "Debug Overview Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled the overview display will be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bOverviewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled = { "bOverviewEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** Overview display font to use. */" },
		{ "DisplayName", "Debug Overview Font" },
		{ "EditCondition", "bOverviewEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview display font to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont = { "OverviewFont", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewFont), Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** Overview display location. */" },
		{ "DisplayName", "Debug Overview Text Location" },
		{ "EditCondition", "bOverviewEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview display location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation = { "OverviewLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter which is compared against the Components Actor name to narrow down the detailed information.\n\x09""For example, \"*Water*\" would match all actors that contain the string \"water\".\n\x09*/" },
		{ "EditCondition", "bActorFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter which is compared against the Components Actor name to narrow down the detailed information.\nFor example, \"*Water*\" would match all actors that contain the string \"water\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ActorFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bComponentFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled = { "bComponentFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter for the components to show more detailed information about.\n\x09""For example, \"*MyComp*\" would match all components that contain MyComp.\n\x09*/" },
		{ "EditCondition", "bComponentFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter for the components to show more detailed information about.\nFor example, \"*MyComp*\" would match all components that contain MyComp." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ComponentFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled = { "bSystemFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter for the systems to show more detailed information about.\n\x09""For example,. \"NS_*\" would match all systems starting with NS_.\n\x09*/" },
		{ "EditCondition", "bSystemFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter for the systems to show more detailed information about.\nFor example,. \"NS_*\" would match all systems starting with NS_." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter = { "SystemFilter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEmitterFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled = { "bEmitterFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter used to match emitters when generating particle attribute view.\n\x09""For example,. \"Fluid*\" would match all emtiters starting with Fluid and only particle attributes for those would be visible.\n\x09*/" },
		{ "EditCondition", "bEmitterFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter used to match emitters when generating particle attribute view.\nFor example,. \"Fluid*\" would match all emtiters starting with Fluid and only particle attributes for those would be visible." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter = { "EmitterFilter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, EmitterFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bActorFilterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled = { "bActorFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled system debug information will be displayed in world. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled system debug information will be displayed in world." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity = { "SystemDebugVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled we show information about emitter / particle counts. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled we show information about emitter / particle counts." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity = { "SystemEmitterVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled will show the system bounds for all filtered systems. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled will show the system bounds for all filtered systems." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemShowBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds = { "bSystemShowBounds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When disabled in world rendering will show systems deactivated by scalability. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When disabled in world rendering will show systems deactivated by scalability." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemShowActiveOnlyInWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld = { "bSystemShowActiveOnlyInWorld", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** Should we display the system attributes. */" },
		{ "DisplayName", "Show System Attributes" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Should we display the system attributes." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowSystemVariables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables = { "bShowSystemVariables", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_Inner = { "SystemVariables", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/**\n\x09List of attributes to show about the system, each entry uses wildcard matching.\n\x09""For example, \"System.*\" would match all system attributes.\n\x09*/" },
		{ "DisplayName", "System Attributes" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None && bShowSystemVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of attributes to show about the system, each entry uses wildcard matching.\nFor example, \"System.*\" would match all system attributes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables = { "SystemVariables", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** Sets display text options for system information. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Sets display text options for system information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions = { "SystemTextOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemTextOptions), Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** When enabled will show particle attributes from the list. */" },
		{ "DisplayName", "Show Particle Attributes" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled will show particle attributes from the list." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticleVariables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables = { "bShowParticleVariables", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09When enabled GPU particle data will be copied from the GPU to the CPU.\n\x09Warning: This has an impact on performance & memory since we copy the whole buffer.\n\x09The displayed data is latent since we are seeing what happened a few frames ago.\n\x09*/" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled GPU particle data will be copied from the GPU to the CPU.\nWarning: This has an impact on performance & memory since we copy the whole buffer.\nThe displayed data is latent since we are seeing what happened a few frames ago." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEnableGpuParticleReadback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback = { "bEnableGpuParticleReadback", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_Inner = { "ParticlesVariables", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09List of attributes to show per particle, each entry uses wildcard matching.\n\x09""For example, \"*Position\" would match all attributes that end in Position.\n\x09*/" },
		{ "DisplayName", "Particle Attributes" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of attributes to show per particle, each entry uses wildcard matching.\nFor example, \"*Position\" would match all attributes that end in Position." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables = { "ParticlesVariables", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticlesVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** Sets display text options for particle information. */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Sets display text options for particle information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions = { "ParticleTextOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticleTextOptions), Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09When enabled particle attributes will display with the system information\n\x09rather than in world at the particle location.\n\x09*/" },
		{ "DisplayName", "Show Particles Attributes With System" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled particle attributes will display with the system information\nrather than in world at the particle location." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticlesVariablesWithSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem = { "bShowParticlesVariablesWithSystem", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bUseMaxParticlesToDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay = { "bUseMaxParticlesToDisplay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09When enabled, the maximum number of particles to show information about.\n\x09When disabled all particles will show attributes, this can result in poor performance & potential OOM on some platforms.\n\x09*/" },
		{ "EditCondition", "bUseMaxParticlesToDisplay && bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled, the maximum number of particles to show information about.\nWhen disabled all particles will show attributes, this can result in poor performance & potential OOM on some platforms." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay = { "MaxParticlesToDisplay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, MaxParticlesToDisplay), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode = { "PlaybackMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PlaybackMode), Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bPlaybackRateEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled = { "bPlaybackRateEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PlaybackRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bLoopTimeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled = { "bLoopTimeEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, LoopTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowGlobalBudgetInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo = { "bShowGlobalBudgetInfo", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHUDSettingsData",
		sizeof(FNiagaraDebugHUDSettingsData),
		alignof(FNiagaraDebugHUDSettingsData),
		Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebugHUDSettingsData"), sizeof(FNiagaraDebugHUDSettingsData), Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Hash() { return 77612889U; }
class UScriptStruct* FNiagaraDebugHUDVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHUDVariable"), sizeof(FNiagaraDebugHUDVariable), Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHUDVariable>()
{
	return FNiagaraDebugHUDVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebugHUDVariable(FNiagaraDebugHUDVariable::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebugHUDVariable"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDVariable
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDVariable()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebugHUDVariable>(FName(TEXT("NiagaraDebugHUDVariable")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHUDVariable;
	struct Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHUDVariable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDVariable*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebugHUDVariable), &Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Name of attributes to match, uses wildcard matching. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of attributes to match, uses wildcard matching." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHUDVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHUDVariable",
		sizeof(FNiagaraDebugHUDVariable),
		alignof(FNiagaraDebugHUDVariable),
		Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebugHUDVariable"), sizeof(FNiagaraDebugHUDVariable), Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Hash() { return 215322934U; }
class UScriptStruct* FNiagaraDebugHudTextOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHudTextOptions"), sizeof(FNiagaraDebugHudTextOptions), Get_Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHudTextOptions>()
{
	return FNiagaraDebugHudTextOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebugHudTextOptions(FNiagaraDebugHudTextOptions::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebugHudTextOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHudTextOptions
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHudTextOptions()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebugHudTextOptions>(FName(TEXT("NiagaraDebugHudTextOptions")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebugHudTextOptions;
	struct Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Font_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHudTextOptions>();
	}
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, Font), Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, HorizontalAlignment), Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, VerticalAlignment), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHudTextOptions",
		sizeof(FNiagaraDebugHudTextOptions),
		alignof(FNiagaraDebugHudTextOptions),
		Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebugHudTextOptions"), sizeof(FNiagaraDebugHudTextOptions), Get_Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Hash() { return 4073704167U; }
class UScriptStruct* FNiagaraDebuggerOutlinerUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerOutlinerUpdate"), sizeof(FNiagaraDebuggerOutlinerUpdate), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerOutlinerUpdate>()
{
	return FNiagaraDebuggerOutlinerUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate(FNiagaraDebuggerOutlinerUpdate::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebuggerOutlinerUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerOutlinerUpdate
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerOutlinerUpdate()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebuggerOutlinerUpdate>(FName(TEXT("NiagaraDebuggerOutlinerUpdate")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerOutlinerUpdate;
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlinerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlinerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message containing updated outliner information sent from the client to the debugger. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message containing updated outliner information sent from the client to the debugger." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerOutlinerUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData = { "OutlinerData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerOutlinerUpdate, OutlinerData), Z_Construct_UScriptStruct_FNiagaraOutlinerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerOutlinerUpdate",
		sizeof(FNiagaraDebuggerOutlinerUpdate),
		alignof(FNiagaraDebuggerOutlinerUpdate),
		Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebuggerOutlinerUpdate"), sizeof(FNiagaraDebuggerOutlinerUpdate), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Hash() { return 2272957016U; }
class UScriptStruct* FNiagaraDebuggerExecuteConsoleCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerExecuteConsoleCommand"), sizeof(FNiagaraDebuggerExecuteConsoleCommand), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerExecuteConsoleCommand>()
{
	return FNiagaraDebuggerExecuteConsoleCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand(FNiagaraDebuggerExecuteConsoleCommand::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebuggerExecuteConsoleCommand"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerExecuteConsoleCommand
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerExecuteConsoleCommand()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebuggerExecuteConsoleCommand>(FName(TEXT("NiagaraDebuggerExecuteConsoleCommand")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerExecuteConsoleCommand;
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresWorld_MetaData[];
#endif
		static void NewProp_bRequiresWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Command that will execute a console command on the debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Command that will execute a console command on the debugger client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerExecuteConsoleCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerExecuteConsoleCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_SetBit(void* Obj)
	{
		((FNiagaraDebuggerExecuteConsoleCommand*)Obj)->bRequiresWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld = { "bRequiresWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraDebuggerExecuteConsoleCommand), &Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerExecuteConsoleCommand",
		sizeof(FNiagaraDebuggerExecuteConsoleCommand),
		alignof(FNiagaraDebuggerExecuteConsoleCommand),
		Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebuggerExecuteConsoleCommand"), sizeof(FNiagaraDebuggerExecuteConsoleCommand), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Hash() { return 3821596522U; }
class UScriptStruct* FNiagaraDebuggerConnectionClosed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerConnectionClosed"), sizeof(FNiagaraDebuggerConnectionClosed), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerConnectionClosed>()
{
	return FNiagaraDebuggerConnectionClosed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebuggerConnectionClosed(FNiagaraDebuggerConnectionClosed::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebuggerConnectionClosed"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerConnectionClosed
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerConnectionClosed()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebuggerConnectionClosed>(FName(TEXT("NiagaraDebuggerConnectionClosed")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerConnectionClosed;
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Empty message informing a debugger client that the debugger is closing the connection. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Empty message informing a debugger client that the debugger is closing the connection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerConnectionClosed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerConnectionClosed, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerConnectionClosed, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerConnectionClosed",
		sizeof(FNiagaraDebuggerConnectionClosed),
		alignof(FNiagaraDebuggerConnectionClosed),
		Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebuggerConnectionClosed"), sizeof(FNiagaraDebuggerConnectionClosed), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Hash() { return 1063278230U; }
class UScriptStruct* FNiagaraDebuggerAcceptConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerAcceptConnection"), sizeof(FNiagaraDebuggerAcceptConnection), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerAcceptConnection>()
{
	return FNiagaraDebuggerAcceptConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebuggerAcceptConnection(FNiagaraDebuggerAcceptConnection::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebuggerAcceptConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerAcceptConnection
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerAcceptConnection()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebuggerAcceptConnection>(FName(TEXT("NiagaraDebuggerAcceptConnection")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerAcceptConnection;
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Response message from the a debugger client accepting a connection requested by a FNiagaraDebuggerRequestConnection message. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Response message from the a debugger client accepting a connection requested by a FNiagaraDebuggerRequestConnection message." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerAcceptConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerAcceptConnection, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerAcceptConnection, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerAcceptConnection",
		sizeof(FNiagaraDebuggerAcceptConnection),
		alignof(FNiagaraDebuggerAcceptConnection),
		Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebuggerAcceptConnection"), sizeof(FNiagaraDebuggerAcceptConnection), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Hash() { return 2365766810U; }
class UScriptStruct* FNiagaraDebuggerRequestConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerRequestConnection"), sizeof(FNiagaraDebuggerRequestConnection), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerRequestConnection>()
{
	return FNiagaraDebuggerRequestConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDebuggerRequestConnection(FNiagaraDebuggerRequestConnection::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDebuggerRequestConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerRequestConnection
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerRequestConnection()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDebuggerRequestConnection>(FName(TEXT("NiagaraDebuggerRequestConnection")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDebuggerRequestConnection;
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \nMessaged broadcast from debugger to request a connection to a particular session. \nIf any matching client is found and it accepts, it will return a FNiagaraDebuggerAcceptConnection message to the sender. \n*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Messaged broadcast from debugger to request a connection to a particular session.\nIf any matching client is found and it accepts, it will return a FNiagaraDebuggerAcceptConnection message to the sender." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerRequestConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerRequestConnection, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDebuggerRequestConnection, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerRequestConnection",
		sizeof(FNiagaraDebuggerRequestConnection),
		alignof(FNiagaraDebuggerRequestConnection),
		Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDebuggerRequestConnection"), sizeof(FNiagaraDebuggerRequestConnection), Get_Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Hash() { return 3387138550U; }
class UScriptStruct* FNiagaraOutlinerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerData"), sizeof(FNiagaraOutlinerData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerData>()
{
	return FNiagaraOutlinerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerData(FNiagaraOutlinerData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerData>(FName(TEXT("NiagaraOutlinerData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorldData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WorldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_ValueProp = { "WorldData", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_Key_KeyProp = { "WorldData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData[] = {
		{ "Category", "Outliner" },
		{ "Comment", "/** Map all world data indexed by the world name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map all world data indexed by the world name." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData = { "WorldData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerData, WorldData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerData",
		sizeof(FNiagaraOutlinerData),
		alignof(FNiagaraOutlinerData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerData"), sizeof(FNiagaraOutlinerData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerData_Hash() { return 2301640915U; }
class UScriptStruct* FNiagaraOutlinerWorldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerWorldData"), sizeof(FNiagaraOutlinerWorldData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerWorldData>()
{
	return FNiagaraOutlinerWorldData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerWorldData(FNiagaraOutlinerWorldData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerWorldData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerWorldData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerWorldData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerWorldData>(FName(TEXT("NiagaraOutlinerWorldData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerWorldData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Systems_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Systems_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Systems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBegunPlay_MetaData[];
#endif
		static void NewProp_bHasBegunPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBegunPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AveragePerFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AveragePerFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPerFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxPerFrameTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** All information about a specific world for the Niagara Outliner. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "All information about a specific world for the Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerWorldData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_ValueProp = { "Systems", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_Key_KeyProp = { "Systems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Map of System Instance data indexed by the UNiagaraSystem name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map of System Instance data indexed by the UNiagaraSystem name." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldData, Systems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_SetBit(void* Obj)
	{
		((FNiagaraOutlinerWorldData*)Obj)->bHasBegunPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay = { "bHasBegunPlay", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraOutlinerWorldData), &Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldData, WorldType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode = { "NetMode", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldData, NetMode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime = { "AveragePerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldData, AveragePerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime = { "MaxPerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldData, MaxPerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerWorldData",
		sizeof(FNiagaraOutlinerWorldData),
		alignof(FNiagaraOutlinerWorldData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerWorldData"), sizeof(FNiagaraOutlinerWorldData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Hash() { return 704079843U; }
class UScriptStruct* FNiagaraOutlinerSystemData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerSystemData"), sizeof(FNiagaraOutlinerSystemData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemData>()
{
	return FNiagaraOutlinerSystemData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerSystemData(FNiagaraOutlinerSystemData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerSystemData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerSystemData>(FName(TEXT("NiagaraOutlinerSystemData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SystemInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SystemInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AveragePerFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AveragePerFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPerFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxPerFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AveragePerInstanceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AveragePerInstanceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPerInstanceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxPerInstanceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper for array of system instance outliner data so that it can be placed in a map. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wrapper for array of system instance outliner data so that it can be placed in a map." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_Inner = { "SystemInstances", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Map of System Instance data indexed by the UNiagaraSystem name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map of System Instance data indexed by the UNiagaraSystem name." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances = { "SystemInstances", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemData, SystemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime = { "AveragePerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemData, AveragePerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime = { "MaxPerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemData, MaxPerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime = { "AveragePerInstanceTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemData, AveragePerInstanceTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime = { "MaxPerInstanceTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemData, MaxPerInstanceTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemData",
		sizeof(FNiagaraOutlinerSystemData),
		alignof(FNiagaraOutlinerSystemData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerSystemData"), sizeof(FNiagaraOutlinerSystemData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Hash() { return 3208306348U; }
class UScriptStruct* FNiagaraOutlinerSystemInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerSystemInstanceData"), sizeof(FNiagaraOutlinerSystemInstanceData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemInstanceData>()
{
	return FNiagaraOutlinerSystemInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerSystemInstanceData(FNiagaraOutlinerSystemInstanceData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerSystemInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemInstanceData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerSystemInstanceData>(FName(TEXT("NiagaraOutlinerSystemInstanceData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerSystemInstanceData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActualExecutionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualExecutionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActualExecutionState;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RequestedExecutionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedExecutionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestedExecutionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilityState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalabilityState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingKill_MetaData[];
#endif
		static void NewProp_bPendingKill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingKill;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PoolMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PoolMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AverageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Outliner information on a specific system instance. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Outliner information on a specific system instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Name of the component object for this instance, if there is one. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of the component object for this instance, if there is one." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState = { "ActualExecutionState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ActualExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState = { "RequestedExecutionState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState = { "ScalabilityState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ScalabilityState), Z_Construct_UScriptStruct_FNiagaraScalabilityState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bPendingKill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill = { "bPendingKill", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod = { "PoolMethod", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, PoolMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime = { "AverageTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, AverageTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, MaxTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemInstanceData",
		sizeof(FNiagaraOutlinerSystemInstanceData),
		alignof(FNiagaraOutlinerSystemInstanceData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerSystemInstanceData"), sizeof(FNiagaraOutlinerSystemInstanceData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Hash() { return 439247023U; }
class UScriptStruct* FNiagaraOutlinerEmitterInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerEmitterInstanceData"), sizeof(FNiagaraOutlinerEmitterInstanceData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerEmitterInstanceData>()
{
	return FNiagaraOutlinerEmitterInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData(FNiagaraOutlinerEmitterInstanceData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerEmitterInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerEmitterInstanceData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerEmitterInstanceData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerEmitterInstanceData>(FName(TEXT("NiagaraOutlinerEmitterInstanceData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerEmitterInstanceData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmitterName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExecState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerEmitterInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//Name of this emitter.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of this emitter." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, EmitterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//TODO: Move to shared asset representation.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "TODO: Move to shared asset representation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//TODO: Move to shared asset representation.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "TODO: Move to shared asset representation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState = { "ExecState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, ExecState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles = { "NumParticles", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, NumParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerEmitterInstanceData",
		sizeof(FNiagaraOutlinerEmitterInstanceData),
		alignof(FNiagaraOutlinerEmitterInstanceData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerEmitterInstanceData"), sizeof(FNiagaraOutlinerEmitterInstanceData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Hash() { return 4277018934U; }
class UScriptStruct* FNiagaraOutlinerTimingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerTimingData"), sizeof(FNiagaraOutlinerTimingData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerTimingData>()
{
	return FNiagaraOutlinerTimingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraOutlinerTimingData(FNiagaraOutlinerTimingData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraOutlinerTimingData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerTimingData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerTimingData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraOutlinerTimingData>(FName(TEXT("NiagaraOutlinerTimingData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraOutlinerTimingData;
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameThread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderThread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderThread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Niagara Outliner.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerTimingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Game thread time, including concurrent tasks*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Game thread time, including concurrent tasks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread = { "GameThread", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerTimingData, GameThread), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Render thread time. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Render thread time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread = { "RenderThread", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraOutlinerTimingData, RenderThread), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerTimingData",
		sizeof(FNiagaraOutlinerTimingData),
		alignof(FNiagaraOutlinerTimingData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraOutlinerTimingData"), sizeof(FNiagaraOutlinerTimingData), Get_Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Hash() { return 1085409094U; }
	void UNiagaraDebugHUDSettings::StaticRegisterNativesUNiagaraDebugHUDSettings()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister()
	{
		return UNiagaraDebugHUDSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDebuggerCommon.h" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDebugHUDSettings, Data), Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDebugHUDSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::ClassParams = {
		&UNiagaraDebugHUDSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDebugHUDSettings, 2151764101);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDebugHUDSettings>()
	{
		return UNiagaraDebugHUDSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDebugHUDSettings(Z_Construct_UClass_UNiagaraDebugHUDSettings, &UNiagaraDebugHUDSettings::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDebugHUDSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDebugHUDSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

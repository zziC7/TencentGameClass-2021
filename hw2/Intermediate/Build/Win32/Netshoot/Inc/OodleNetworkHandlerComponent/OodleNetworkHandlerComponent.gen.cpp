// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/OodleNetworkHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent() {}
// Cross Module References
	OODLENETWORKHANDLERCOMPONENT_API UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleEnableMode();
	UPackage* Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
// End Cross Module References
	static UEnum* EOodleEnableMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleEnableMode, Z_Construct_UPackage__Script_OodleNetworkHandlerComponent(), TEXT("EOodleEnableMode"));
		}
		return Singleton;
	}
	template<> OODLENETWORKHANDLERCOMPONENT_API UEnum* StaticEnum<EOodleEnableMode>()
	{
		return EOodleEnableMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOodleEnableMode(EOodleEnableMode_StaticEnum, TEXT("/Script/OodleNetworkHandlerComponent"), TEXT("EOodleEnableMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleEnableMode_Hash() { return 3273832040U; }
	UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleEnableMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOodleEnableMode"), 0, Get_Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleEnableMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOodleEnableMode::AlwaysEnabled", (int64)EOodleEnableMode::AlwaysEnabled },
				{ "EOodleEnableMode::WhenCompressedPacketReceived", (int64)EOodleEnableMode::WhenCompressedPacketReceived },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysEnabled.Name", "EOodleEnableMode::AlwaysEnabled" },
				{ "Comment", "/**\n * Specifies when compression is enabled. Used to make compression optional, for some platforms/clients\n */" },
				{ "ModuleRelativePath", "Public/OodleNetworkHandlerComponent.h" },
				{ "ToolTip", "Specifies when compression is enabled. Used to make compression optional, for some platforms/clients" },
				{ "WhenCompressedPacketReceived.Comment", "// Oodle compression is always enabled - forces compression to be enabled remotely\n" },
				{ "WhenCompressedPacketReceived.Name", "EOodleEnableMode::WhenCompressedPacketReceived" },
				{ "WhenCompressedPacketReceived.ToolTip", "Oodle compression is always enabled - forces compression to be enabled remotely" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OodleNetworkHandlerComponent,
				nullptr,
				"EOodleEnableMode",
				"EOodleEnableMode",
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

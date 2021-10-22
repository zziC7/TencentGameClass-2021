// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraShakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStopParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeScrubParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStartParams();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
// End Cross Module References
	static UEnum* ECameraShakeDurationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeDurationType, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeDurationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>()
	{
		return ECameraShakeDurationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraShakeDurationType(ECameraShakeDurationType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraShakeDurationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraShakeDurationType_Hash() { return 3711827292U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraShakeDurationType"), 0, Get_Z_Construct_UEnum_Engine_ECameraShakeDurationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraShakeDurationType::Fixed", (int64)ECameraShakeDurationType::Fixed },
				{ "ECameraShakeDurationType::Infinite", (int64)ECameraShakeDurationType::Infinite },
				{ "ECameraShakeDurationType::Custom", (int64)ECameraShakeDurationType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Camera shake duration type.\n */" },
				{ "Custom.Comment", "/** Camera shake has custom/dynamic duration */" },
				{ "Custom.Name", "ECameraShakeDurationType::Custom" },
				{ "Custom.ToolTip", "Camera shake has custom/dynamic duration" },
				{ "Fixed.Comment", "/** Camera shake has a fixed duration */" },
				{ "Fixed.Name", "ECameraShakeDurationType::Fixed" },
				{ "Fixed.ToolTip", "Camera shake has a fixed duration" },
				{ "Infinite.Comment", "/** Camera shake is playing indefinitely, until explicitly stopped */" },
				{ "Infinite.Name", "ECameraShakeDurationType::Infinite" },
				{ "Infinite.ToolTip", "Camera shake is playing indefinitely, until explicitly stopped" },
				{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
				{ "ToolTip", "Camera shake duration type." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraShakeDurationType",
				"ECameraShakeDurationType",
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
	static UEnum* ECameraShakeUpdateResultFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags, Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeUpdateResultFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeUpdateResultFlags>()
	{
		return ECameraShakeUpdateResultFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECameraShakeUpdateResultFlags(ECameraShakeUpdateResultFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("ECameraShakeUpdateResultFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Hash() { return 1265642490U; }
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECameraShakeUpdateResultFlags"), 0, Get_Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECameraShakeUpdateResultFlags::ApplyAsAbsolute", (int64)ECameraShakeUpdateResultFlags::ApplyAsAbsolute },
				{ "ECameraShakeUpdateResultFlags::SkipAutoScale", (int64)ECameraShakeUpdateResultFlags::SkipAutoScale },
				{ "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace", (int64)ECameraShakeUpdateResultFlags::SkipAutoPlaySpace },
				{ "ECameraShakeUpdateResultFlags::Default", (int64)ECameraShakeUpdateResultFlags::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ApplyAsAbsolute.Comment", "/** Apply the result location, rotation, and field of view as absolute values, instead of additive values. */" },
				{ "ApplyAsAbsolute.Name", "ECameraShakeUpdateResultFlags::ApplyAsAbsolute" },
				{ "ApplyAsAbsolute.ToolTip", "Apply the result location, rotation, and field of view as absolute values, instead of additive values." },
				{ "Comment", "/**\n * Flags that camera shakes can return to change base-class behaviour.\n */" },
				{ "Default.Comment", "/** Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest. */" },
				{ "Default.Name", "ECameraShakeUpdateResultFlags::Default" },
				{ "Default.ToolTip", "Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest." },
				{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
				{ "SkipAutoPlaySpace.Comment", "/** Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set. */" },
				{ "SkipAutoPlaySpace.Name", "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace" },
				{ "SkipAutoPlaySpace.ToolTip", "Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set." },
				{ "SkipAutoScale.Comment", "/** Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set. */" },
				{ "SkipAutoScale.Name", "ECameraShakeUpdateResultFlags::SkipAutoScale" },
				{ "SkipAutoScale.ToolTip", "Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set." },
				{ "ToolTip", "Flags that camera shakes can return to change base-class behaviour." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECameraShakeUpdateResultFlags",
				"ECameraShakeUpdateResultFlags",
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
class UScriptStruct* FCameraShakeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeInfo"), sizeof(FCameraShakeInfo), Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeInfo>()
{
	return FCameraShakeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeInfo(FCameraShakeInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeInfo>(FName(TEXT("CameraShakeInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeInfo;
	struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a camera shake class.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Information about a camera shake class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The duration of the camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The duration of the camera shake" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, Duration), Z_Construct_UScriptStruct_FCameraShakeDuration, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Comment", "/** How much blending-in the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-in the camera shake should have" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Comment", "/** How much blending-out the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-out the camera shake should have" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeInfo",
		sizeof(FCameraShakeInfo),
		alignof(FCameraShakeInfo),
		Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeInfo"), sizeof(FCameraShakeInfo), Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeInfo_Hash() { return 3559116282U; }
class UScriptStruct* FCameraShakeDuration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDuration, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeDuration"), sizeof(FCameraShakeDuration), Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeDuration>()
{
	return FCameraShakeDuration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeDuration(FCameraShakeDuration::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeDuration"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeDuration>(FName(TEXT("CameraShakeDuration")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeDuration;
	struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera shake duration.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeDuration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeDuration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeDuration, Type), Z_Construct_UEnum_Engine_ECameraShakeDurationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeDuration",
		sizeof(FCameraShakeDuration),
		alignof(FCameraShakeDuration),
		Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeDuration"), sizeof(FCameraShakeDuration), Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeDuration_Hash() { return 1949992626U; }
class UScriptStruct* FCameraShakeStopParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStopParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeStopParams, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeStopParams"), sizeof(FCameraShakeStopParams), Get_Z_Construct_UScriptStruct_FCameraShakeStopParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeStopParams>()
{
	return FCameraShakeStopParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeStopParams(FCameraShakeStopParams::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeStopParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeStopParams
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeStopParams()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeStopParams>(FName(TEXT("CameraShakeStopParams")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeStopParams;
	struct Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImmediately_MetaData[];
#endif
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for stopping a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for stopping a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeStopParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((FCameraShakeStopParams*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraShakeStopParams), &Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeStopParams",
		sizeof(FCameraShakeStopParams),
		alignof(FCameraShakeStopParams),
		Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStopParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStopParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeStopParams"), sizeof(FCameraShakeStopParams), Get_Z_Construct_UScriptStruct_FCameraShakeStopParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStopParams_Hash() { return 1837990711U; }
class UScriptStruct* FCameraShakeUpdateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateResult, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateResult"), sizeof(FCameraShakeUpdateResult), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateResult>()
{
	return FCameraShakeUpdateResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeUpdateResult(FCameraShakeUpdateResult::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeUpdateResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeUpdateResult>(FName(TEXT("CameraShakeUpdateResult")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateResult;
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The result of a camera shake update.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The result of a camera shake update." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateResult",
		sizeof(FCameraShakeUpdateResult),
		alignof(FCameraShakeUpdateResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeUpdateResult"), sizeof(FCameraShakeUpdateResult), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Hash() { return 896158686U; }
class UScriptStruct* FCameraShakeScrubParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeScrubParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeScrubParams, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeScrubParams"), sizeof(FCameraShakeScrubParams), Get_Z_Construct_UScriptStruct_FCameraShakeScrubParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeScrubParams>()
{
	return FCameraShakeScrubParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeScrubParams(FCameraShakeScrubParams::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeScrubParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeScrubParams
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeScrubParams()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeScrubParams>(FName(TEXT("CameraShakeScrubParams")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeScrubParams;
	struct Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsoluteTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for scrubbing a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for scrubbing a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeScrubParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time to scrub to */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time to scrub to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime = { "AbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeScrubParams, AbsoluteTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeScrubParams, ShakeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeScrubParams, DynamicScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight = { "BlendingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeScrubParams, BlendingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeScrubParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeScrubParams",
		sizeof(FCameraShakeScrubParams),
		alignof(FCameraShakeScrubParams),
		Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeScrubParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeScrubParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeScrubParams"), sizeof(FCameraShakeScrubParams), Get_Z_Construct_UScriptStruct_FCameraShakeScrubParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeScrubParams_Hash() { return 2276517056U; }
class UScriptStruct* FCameraShakeUpdateParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateParams, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateParams"), sizeof(FCameraShakeUpdateParams), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateParams>()
{
	return FCameraShakeUpdateParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeUpdateParams(FCameraShakeUpdateParams::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeUpdateParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeUpdateParams>(FName(TEXT("CameraShakeUpdateParams")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeUpdateParams;
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendingWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendingWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for updating a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for updating a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time elapsed since last update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time elapsed since last update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeUpdateParams, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeUpdateParams, ShakeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeUpdateParams, DynamicScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight = { "BlendingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeUpdateParams, BlendingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraShakeUpdateParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateParams",
		sizeof(FCameraShakeUpdateParams),
		alignof(FCameraShakeUpdateParams),
		Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeUpdateParams"), sizeof(FCameraShakeUpdateParams), Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Hash() { return 2116513474U; }
class UScriptStruct* FCameraShakeStartParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStartParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeStartParams, Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeStartParams"), sizeof(FCameraShakeStartParams), Get_Z_Construct_UScriptStruct_FCameraShakeStartParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeStartParams>()
{
	return FCameraShakeStartParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraShakeStartParams(FCameraShakeStartParams::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraShakeStartParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraShakeStartParams
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraShakeStartParams()
	{
		UScriptStruct::DeferCppStructOps<FCameraShakeStartParams>(FName(TEXT("CameraShakeStartParams")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraShakeStartParams;
	struct Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRestarting_MetaData[];
#endif
		static void NewProp_bIsRestarting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRestarting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for starting a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for starting a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeStartParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_SetBit(void* Obj)
	{
		((FCameraShakeStartParams*)Obj)->bIsRestarting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting = { "bIsRestarting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraShakeStartParams), &Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeStartParams",
		sizeof(FCameraShakeStartParams),
		alignof(FCameraShakeStartParams),
		Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStartParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStartParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraShakeStartParams"), sizeof(FCameraShakeStartParams), Get_Z_Construct_UScriptStruct_FCameraShakeStartParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraShakeStartParams_Hash() { return 3457097934U; }
	DEFINE_FUNCTION(UCameraShakeBase::execSetRootShakePattern)
	{
		P_GET_OBJECT(UCameraShakePattern,Z_Param_InPattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootShakePattern(Z_Param_InPattern);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeBase::execGetRootShakePattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakePattern**)Z_Param__Result=P_THIS->GetRootShakePattern();
		P_NATIVE_END;
	}
	void UCameraShakeBase::StaticRegisterNativesUCameraShakeBase()
	{
		UClass* Class = UCameraShakeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRootShakePattern", &UCameraShakeBase::execGetRootShakePattern },
			{ "SetRootShakePattern", &UCameraShakeBase::execSetRootShakePattern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics
	{
		struct CameraShakeBase_eventGetRootShakePattern_Parms
		{
			UCameraShakePattern* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeBase_eventGetRootShakePattern_Parms, ReturnValue), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Gets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Gets the root pattern of this camera shake" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "GetRootShakePattern", nullptr, nullptr, sizeof(CameraShakeBase_eventGetRootShakePattern_Parms), Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics
	{
		struct CameraShakeBase_eventSetRootShakePattern_Parms
		{
			UCameraShakePattern* InPattern;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern = { "InPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraShakeBase_eventSetRootShakePattern_Parms, InPattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Sets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Sets the root pattern of this camera shake" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "SetRootShakePattern", nullptr, nullptr, sizeof(CameraShakeBase_eventSetRootShakePattern_Parms), Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister()
	{
		return UCameraShakeBase::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[];
#endif
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootShakePattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootShakePattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraShakeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern, "GetRootShakePattern" }, // 881158946
		{ &Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern, "SetRootShakePattern" }, // 2121117685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\n * the object that contains the actual logic driving how the camera is shaken. Keeping the two\n * separate makes it possible to completely change how a shake works without having to create\n * a completely different asset.\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\nthe object that contains the actual logic driving how the camera is shaken. Keeping the two\nseparate makes it possible to completely change how a shake works without having to create\na completely different asset." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** \n\x09 *  If true to only allow a single instance of this shake class to play at any given time.\n\x09 *  Subsequent attempts to play this shake will simply restart the timer.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
	};
#endif
	void Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((UCameraShakeBase*)Obj)->bSingleInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCameraShakeBase), &Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The overall scale to apply to the shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The overall scale to apply to the shake. Only valid when the shake is active." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeBase, ShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData[] = {
		{ "Category", "CameraShakePattern" },
		{ "Comment", "/** The root pattern for this camera shake */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The root pattern for this camera shake" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern = { "RootShakePattern", nullptr, (EPropertyFlags)0x0042000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeBase, RootShakePattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData[] = {
		{ "Comment", "/** The camera manager owning this camera shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The camera manager owning this camera shake. Only valid when the shake is active." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraShakeBase, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams = {
		&UCameraShakeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShakeBase, 516618398);
	template<> ENGINE_API UClass* StaticClass<UCameraShakeBase>()
	{
		return UCameraShakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShakeBase(Z_Construct_UClass_UCameraShakeBase, &UCameraShakeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeBase);
	void UCameraShakePattern::StaticRegisterNativesUCameraShakePattern()
	{
	}
	UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister()
	{
		return UCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\n * are sinewave oscillation, perlin noise, or FBX animation.\n *\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\nare sinewave oscillation, perlin noise, or FBX animation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakePattern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams = {
		&UCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakePattern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraShakePattern, 2032726866);
	template<> ENGINE_API UClass* StaticClass<UCameraShakePattern>()
	{
		return UCameraShakePattern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraShakePattern(Z_Construct_UClass_UCameraShakePattern, &UCameraShakePattern::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraShakePattern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakePattern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LocalLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPointLightSettings();
// End Cross Module References
	DEFINE_FUNCTION(ULocalLightComponent::execGetUnitsConversionFactor)
	{
		P_GET_ENUM(ELightUnits,Z_Param_SrcUnits);
		P_GET_ENUM(ELightUnits,Z_Param_TargetUnits);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CosHalfConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULocalLightComponent::GetUnitsConversionFactor(ELightUnits(Z_Param_SrcUnits),ELightUnits(Z_Param_TargetUnits),Z_Param_CosHalfConeAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocalLightComponent::execSetIntensityUnits)
	{
		P_GET_ENUM(ELightUnits,Z_Param_NewIntensityUnits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensityUnits(ELightUnits(Z_Param_NewIntensityUnits));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULocalLightComponent::execSetAttenuationRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationRadius(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	void ULocalLightComponent::StaticRegisterNativesULocalLightComponent()
	{
		UClass* Class = ULocalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnitsConversionFactor", &ULocalLightComponent::execGetUnitsConversionFactor },
			{ "SetAttenuationRadius", &ULocalLightComponent::execSetAttenuationRadius },
			{ "SetIntensityUnits", &ULocalLightComponent::execSetIntensityUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics
	{
		struct LocalLightComponent_eventGetUnitsConversionFactor_Parms
		{
			ELightUnits SrcUnits;
			ELightUnits TargetUnits;
			float CosHalfConeAngle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SrcUnits_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SrcUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetUnits_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetUnits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosHalfConeAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits = { "SrcUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, SrcUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits = { "TargetUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, TargetUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle = { "CosHalfConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, CosHalfConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "CPP_Default_CosHalfConeAngle", "-1.000000" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "GetUnitsConversionFactor", nullptr, nullptr, sizeof(LocalLightComponent_eventGetUnitsConversionFactor_Parms), Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics
	{
		struct LocalLightComponent_eventSetAttenuationRadius_Parms
		{
			float NewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventSetAttenuationRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetAttenuationRadius", nullptr, nullptr, sizeof(LocalLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics
	{
		struct LocalLightComponent_eventSetIntensityUnits_Parms
		{
			ELightUnits NewIntensityUnits;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewIntensityUnits_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewIntensityUnits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits = { "NewIntensityUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventSetIntensityUnits_Parms, NewIntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set the units used for the intensity of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Set the units used for the intensity of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetIntensityUnits", nullptr, nullptr, sizeof(LocalLightComponent_eventSetIntensityUnits_Parms), Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister()
	{
		return ULocalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor, "GetUnitsConversionFactor" }, // 3127592504
		{ &Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 3584323851
		{ &Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits, "SetIntensityUnits" }, // 3504925880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Lights Common" },
		{ "Comment", "/**\n * A light component which emits light from a single point equally in all directions.\n */" },
		{ "HideCategories", "Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LocalLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Units used for the intensity. \n\x09 * The peak luminous intensity is measured in candelas,\n\x09 * while the luminous power is measured in lumens.\n\x09 */" },
		{ "DisplayName", "Intensity Units" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Units used for the intensity.\nThe peak luminous intensity is measured in candelas,\nwhile the luminous power is measured in lumens." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, Radius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Bounds the light's visible influence.  \n\x09 * This clamping of the light's influence is not physically correct but very important for performance, larger lights cost more.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Bounds the light's visible influence.\nThis clamping of the light's influence is not physically correct but very important for performance, larger lights cost more." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPointLightSettings, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams = {
		&ULocalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalLightComponent, 782991770);
	template<> ENGINE_API UClass* StaticClass<ULocalLightComponent>()
	{
		return ULocalLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalLightComponent(Z_Construct_UClass_ULocalLightComponent, &ULocalLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

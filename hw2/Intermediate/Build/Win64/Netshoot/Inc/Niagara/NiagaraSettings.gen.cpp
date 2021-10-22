// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSettings() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
// End Cross Module References
	static UEnum* ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>()
	{
		return ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat(ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Hash() { return 2235214568U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"), 0, Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Full },
				{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Half },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
				{ "Full.Comment", "/** 32 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
				{ "Full.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full" },
				{ "Full.ToolTip", "32 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
				{ "Half.Comment", "/** 16 bits per entry. Allow for half (int16) range of triangles (64k). */" },
				{ "Half.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half" },
				{ "Half.ToolTip", "16 bits per entry. Allow for half (int16) range of triangles (64k)." },
				{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
				{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDISkelMesh_AdjacencyTriangleIndexFormat",
				"ENDISkelMesh_AdjacencyTriangleIndexFormat::Type",
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
	static UEnum* ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuUniformSamplingFormat"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuUniformSamplingFormat::Type>()
	{
		return ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISkelMesh_GpuUniformSamplingFormat(ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDISkelMesh_GpuUniformSamplingFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Hash() { return 1364550542U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISkelMesh_GpuUniformSamplingFormat"), 0, Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISkelMesh_GpuUniformSamplingFormat::Full", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Full },
				{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8 },
				{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
				{ "Full.Comment", "/** 64 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
				{ "Full.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Full" },
				{ "Full.ToolTip", "64 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
				{ "Limited_23_9.Comment", "/** 32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision. */" },
				{ "Limited_23_9.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9" },
				{ "Limited_23_9.ToolTip", "32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision." },
				{ "Limited_24_8.Comment", "/** 32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision. */" },
				{ "Limited_24_8.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8" },
				{ "Limited_24_8.ToolTip", "32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision." },
				{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
				{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDISkelMesh_GpuUniformSamplingFormat",
				"ENDISkelMesh_GpuUniformSamplingFormat::Type",
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
	static UEnum* ENDISkelMesh_GpuMaxInfluences_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuMaxInfluences"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuMaxInfluences::Type>()
	{
		return ENDISkelMesh_GpuMaxInfluences_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDISkelMesh_GpuMaxInfluences(ENDISkelMesh_GpuMaxInfluences_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDISkelMesh_GpuMaxInfluences"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Hash() { return 133572835U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDISkelMesh_GpuMaxInfluences"), 0, Get_Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDISkelMesh_GpuMaxInfluences::AllowMax4", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax4 },
				{ "ENDISkelMesh_GpuMaxInfluences::AllowMax8", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax8 },
				{ "ENDISkelMesh_GpuMaxInfluences::Unlimited", (int64)ENDISkelMesh_GpuMaxInfluences::Unlimited },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllowMax4.Comment", "/** Allow up to 4 bones to be sampled. */" },
				{ "AllowMax4.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax4" },
				{ "AllowMax4.ToolTip", "Allow up to 4 bones to be sampled." },
				{ "AllowMax8.Comment", "/** Allow up to 8 bones to be sampled. */" },
				{ "AllowMax8.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax8" },
				{ "AllowMax8.ToolTip", "Allow up to 8 bones to be sampled." },
				{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
				{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
				{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
				{ "Unlimited.Comment", "/** Allow an unlimited amount of bones to be sampled. */" },
				{ "Unlimited.Name", "ENDISkelMesh_GpuMaxInfluences::Unlimited" },
				{ "Unlimited.ToolTip", "Allow an unlimited amount of bones to be sampled." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDISkelMesh_GpuMaxInfluences",
				"ENDISkelMesh_GpuMaxInfluences::Type",
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
	void UNiagaraSettings::StaticRegisterNativesUNiagaraSettings()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister()
	{
		return UNiagaraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalPayloadTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPayloadTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalPayloadTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterEnums_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterEnums_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterEnums;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSystemViewportInOrbitMode_MetaData[];
#endif
		static void NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSystemViewportInOrbitMode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEffectType;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ComponentRendererWarningsPerClass_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentRendererWarningsPerClass_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentRendererWarningsPerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ComponentRendererWarningsPerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRenderTargetFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultRenderTargetFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultGridFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGridFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultGridFormat;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultRendererMotionVectorSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRendererMotionVectorSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultRendererMotionVectorSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuMaxInfluences_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuMaxInfluences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuUniformSamplingFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectTypePtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultEffectTypePtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Niagara" },
		{ "IncludePath", "NiagaraSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData[] = {
		{ "AllowedClasses", "ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData[] = {
		{ "AllowedClasses", "ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalPayloadTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData[] = {
		{ "AllowedClasses", "Enum" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterEnums), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Sets the default navigation behavior for the system preview viewport. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Sets the default navigation behavior for the system preview viewport." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bSystemViewportInOrbitMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode = { "bSystemViewportInOrbitMode", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData[] = {
		{ "AllowedClasses", "NiagaraEffectType" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Default effect type to use for effects that don't define their own. Can be null. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Default effect type to use for effects that don't define their own. Can be null." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType = { "DefaultEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The quality levels Niagara uses. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The quality levels Niagara uses." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp = { "ComponentRendererWarningsPerClass_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** Info texts that the component renderer shows the user depending on the selected component class. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Info texts that the component renderer shows the user depending on the selected component class." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, ComponentRendererWarningsPerClass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default render target format used by all Niagara Render Target Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default render target format used by all Niagara Render Target Data Interfaces unless overridden." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat = { "DefaultRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default buffer format used by all Niagara Grid Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default buffer format used by all Niagara Grid Data Interfaces unless overridden." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat = { "DefaultGridFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultGridFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for motion vectors in Niagara renderers */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for motion vectors in Niagara renderers" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting = { "DefaultRendererMotionVectorSetting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultRendererMotionVectorSetting), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Max Bone Influences" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the maximum number of influences we allow the Skeletal Mesh Data Interface to use on the GPU.  Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences = { "NDISkelMesh_GpuMaxInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Uniform Sampling Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for uniform sampling on the GPU.  Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat = { "NDISkelMesh_GpuUniformSamplingFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Adjacency Triangle Index Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for specifying triangle indexes in adjacency buffers.  Changing this setting requires restarting the editor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat = { "NDISkelMesh_AdjacencyTriangleIndexFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr = { "DefaultEffectTypePtr", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectTypePtr), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams = {
		&UNiagaraSettings::StaticClass,
		"Niagara",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSettings, 219007707);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSettings>()
	{
		return UNiagaraSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSettings(Z_Construct_UClass_UNiagaraSettings, &UNiagaraSettings::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

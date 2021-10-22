// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerSettings() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ENiagaraBakerViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBakerViewMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBakerViewMode>()
	{
		return ENiagaraBakerViewMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraBakerViewMode(ENiagaraBakerViewMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraBakerViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Hash() { return 1192103904U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraBakerViewMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraBakerViewMode::Perspective", (int64)ENiagaraBakerViewMode::Perspective },
				{ "ENiagaraBakerViewMode::OrthoFront", (int64)ENiagaraBakerViewMode::OrthoFront },
				{ "ENiagaraBakerViewMode::OrthoBack", (int64)ENiagaraBakerViewMode::OrthoBack },
				{ "ENiagaraBakerViewMode::OrthoLeft", (int64)ENiagaraBakerViewMode::OrthoLeft },
				{ "ENiagaraBakerViewMode::OrthoRight", (int64)ENiagaraBakerViewMode::OrthoRight },
				{ "ENiagaraBakerViewMode::OrthoTop", (int64)ENiagaraBakerViewMode::OrthoTop },
				{ "ENiagaraBakerViewMode::OrthoBottom", (int64)ENiagaraBakerViewMode::OrthoBottom },
				{ "ENiagaraBakerViewMode::Num", (int64)ENiagaraBakerViewMode::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
				{ "Num.Name", "ENiagaraBakerViewMode::Num" },
				{ "OrthoBack.Name", "ENiagaraBakerViewMode::OrthoBack" },
				{ "OrthoBottom.Name", "ENiagaraBakerViewMode::OrthoBottom" },
				{ "OrthoFront.Name", "ENiagaraBakerViewMode::OrthoFront" },
				{ "OrthoLeft.Name", "ENiagaraBakerViewMode::OrthoLeft" },
				{ "OrthoRight.Name", "ENiagaraBakerViewMode::OrthoRight" },
				{ "OrthoTop.Name", "ENiagaraBakerViewMode::OrthoTop" },
				{ "Perspective.Name", "ENiagaraBakerViewMode::Perspective" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraBakerViewMode",
				"ENiagaraBakerViewMode",
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
class UScriptStruct* FNiagaraBakerTextureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSettings"), sizeof(FNiagaraBakerTextureSettings), Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSettings>()
{
	return FNiagaraBakerTextureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraBakerTextureSettings(FNiagaraBakerTextureSettings::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraBakerTextureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSettings
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSettings()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraBakerTextureSettings>(FName(TEXT("NiagaraBakerTextureSettings")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSettings;
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFrameSize_MetaData[];
#endif
		static void NewProp_bUseFrameSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Optional output name, if left empty a name will be auto generated using the index of the texture/ */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Optional output name, if left empty a name will be auto generated using the index of the texture/" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Source visualization we should capture, i.e. Scene Color, World Normal, etc */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Source visualization we should capture, i.e. Scene Color, World Normal, etc" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit(void* Obj)
	{
		((FNiagaraBakerTextureSettings*)Obj)->bUseFrameSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize = { "bUseFrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraBakerTextureSettings), &Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Size of each frame generated. */" },
		{ "EditCondition", "bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Size of each frame generated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Overall texture size that will be generated. */" },
		{ "EditCondition", "!bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Overall texture size that will be generated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Final texture generated, an existing entry will be updated with new capture data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Final texture generated, an existing entry will be updated with new capture data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture = { "GeneratedTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, GeneratedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSettings",
		sizeof(FNiagaraBakerTextureSettings),
		alignof(FNiagaraBakerTextureSettings),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraBakerTextureSettings"), sizeof(FNiagaraBakerTextureSettings), Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Hash() { return 2350716804U; }
class UScriptStruct* FNiagaraBakerTextureSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSource"), sizeof(FNiagaraBakerTextureSource), Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSource>()
{
	return FNiagaraBakerTextureSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraBakerTextureSource(FNiagaraBakerTextureSource::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraBakerTextureSource"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSource
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSource()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraBakerTextureSource>(FName(TEXT("NiagaraBakerTextureSource")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraBakerTextureSource;
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSource, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSource",
		sizeof(FNiagaraBakerTextureSource),
		alignof(FNiagaraBakerTextureSource),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraBakerTextureSource"), sizeof(FNiagaraBakerTextureSource), Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Hash() { return 1572463139U; }
	void UNiagaraBakerSettings::StaticRegisterNativesUNiagaraBakerSettings()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewLooping_MetaData[];
#endif
		static void NewProp_bPreviewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesPerDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FramesPerDimension;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputTextures;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraViewportMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraViewportMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraViewportMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraViewportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraViewportLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraViewportRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraViewportRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOrbitDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOrbitDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOrthoWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraOrthoWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCameraAspectRatio_MetaData[];
#endif
		static void NewProp_bUseCameraAspectRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCameraAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderComponentOnly_MetaData[];
#endif
		static void NewProp_bRenderComponentOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderComponentOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraBakerSettings.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/**\n\x09This is the start time of the simultion where we being the capture.\n\x09I.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "This is the start time of the simultion where we being the capture.\nI.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds = { "StartSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, StartSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Duration in seconds to take the capture over. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Duration in seconds to take the capture over." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ClampMax", "480" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09The frame rate to run the simulation at during capturing.\n\x09This is only used for the preview view and calculating the number of ticks to execute\n\x09""as we capture the generated texture.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "The frame rate to run the simulation at during capturing.\nThis is only used for the preview view and calculating the number of ticks to execute\nas we capture the generated texture." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Should the preview playback as looping or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should the preview playback as looping or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bPreviewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping = { "bPreviewLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Number of frames in each dimension. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Number of frames in each dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension = { "FramesPerDimension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerDimension), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner = { "OutputTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** List of output textures we will generated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "List of output textures we will generated." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures = { "OutputTextures", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, OutputTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Current active viewport we will render from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Current active viewport we will render from." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode = { "CameraViewportMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportMode), Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "Category", "Camera" },
		{ "Comment", "/** Per viewport camera position.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Per viewport camera position.." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation = { "CameraViewportLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportLocation, UNiagaraBakerSettings), STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "Category", "Camera" },
		{ "Comment", "/** Per viewport camera rotation.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Per viewport camera rotation.." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation = { "CameraViewportRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportRotation, UNiagaraBakerSettings), STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Perspective camera orbit distance. */" },
		{ "EditCondition", "CameraViewportMode == ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Perspective camera orbit distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance = { "CameraOrbitDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrbitDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Camera FOV to use when in perspective mode. */" },
		{ "EditCondition", "CameraViewportMode == ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Camera FOV to use when in perspective mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraFOV), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Camera Orthographic width to use with in orthographic mode. */" },
		{ "EditCondition", "CameraViewportMode != ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Camera Orthographic width to use with in orthographic mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth = { "CameraOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bUseCameraAspectRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio = { "bUseCameraAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Custom aspect ratio to use rather than using the width & height to automatically calculate. */" },
		{ "EditCondition", "bUseCameraAspectRatio" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Custom aspect ratio to use rather than using the width & height to automatically calculate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio = { "CameraAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** Should we render just the component or the whole scene. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should we render just the component or the whole scene." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bRenderComponentOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly = { "bRenderComponentOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams = {
		&UNiagaraBakerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraBakerSettings, 3338572776);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerSettings>()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraBakerSettings(Z_Construct_UClass_UNiagaraBakerSettings, &UNiagaraBakerSettings::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraBakerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

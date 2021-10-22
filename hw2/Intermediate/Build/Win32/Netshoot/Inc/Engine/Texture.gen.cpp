// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Texture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* ETextureCompressionQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureCompressionQuality, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureCompressionQuality"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureCompressionQuality>()
	{
		return ETextureCompressionQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureCompressionQuality(ETextureCompressionQuality_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureCompressionQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureCompressionQuality_Hash() { return 553869560U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureCompressionQuality"), 0, Get_Z_Construct_UEnum_Engine_ETextureCompressionQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TCQ_Default", (int64)TCQ_Default },
				{ "TCQ_Lowest", (int64)TCQ_Lowest },
				{ "TCQ_Low", (int64)TCQ_Low },
				{ "TCQ_Medium", (int64)TCQ_Medium },
				{ "TCQ_High", (int64)TCQ_High },
				{ "TCQ_Highest", (int64)TCQ_Highest },
				{ "TCQ_MAX", (int64)TCQ_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TCQ_Default.DisplayName", "Default" },
				{ "TCQ_Default.Name", "TCQ_Default" },
				{ "TCQ_High.DisplayName", "High" },
				{ "TCQ_High.Name", "TCQ_High" },
				{ "TCQ_Highest.DisplayName", "Highest" },
				{ "TCQ_Highest.Name", "TCQ_Highest" },
				{ "TCQ_Low.DisplayName", "Low" },
				{ "TCQ_Low.Name", "TCQ_Low" },
				{ "TCQ_Lowest.DisplayName", "Lowest" },
				{ "TCQ_Lowest.Name", "TCQ_Lowest" },
				{ "TCQ_MAX.Name", "TCQ_MAX" },
				{ "TCQ_Medium.DisplayName", "Medium" },
				{ "TCQ_Medium.Name", "TCQ_Medium" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureCompressionQuality",
				"ETextureCompressionQuality",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSourceFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceFormat>()
	{
		return ETextureSourceFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSourceFormat(ETextureSourceFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSourceFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSourceFormat_Hash() { return 704803103U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSourceFormat"), 0, Get_Z_Construct_UEnum_Engine_ETextureSourceFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TSF_Invalid", (int64)TSF_Invalid },
				{ "TSF_G8", (int64)TSF_G8 },
				{ "TSF_BGRA8", (int64)TSF_BGRA8 },
				{ "TSF_BGRE8", (int64)TSF_BGRE8 },
				{ "TSF_RGBA16", (int64)TSF_RGBA16 },
				{ "TSF_RGBA16F", (int64)TSF_RGBA16F },
				{ "TSF_RGBA8", (int64)TSF_RGBA8 },
				{ "TSF_RGBE8", (int64)TSF_RGBE8 },
				{ "TSF_G16", (int64)TSF_G16 },
				{ "TSF_MAX", (int64)TSF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TSF_BGRA8.Name", "TSF_BGRA8" },
				{ "TSF_BGRE8.Name", "TSF_BGRE8" },
				{ "TSF_G16.Name", "TSF_G16" },
				{ "TSF_G8.Name", "TSF_G8" },
				{ "TSF_Invalid.Name", "TSF_Invalid" },
				{ "TSF_MAX.Name", "TSF_MAX" },
				{ "TSF_RGBA16.Name", "TSF_RGBA16" },
				{ "TSF_RGBA16F.Name", "TSF_RGBA16F" },
				{ "TSF_RGBA8.Comment", "//@todo: Deprecated!\n" },
				{ "TSF_RGBA8.Name", "TSF_RGBA8" },
				{ "TSF_RGBA8.ToolTip", "@todo: Deprecated!" },
				{ "TSF_RGBE8.Comment", "//@todo: Deprecated!\n" },
				{ "TSF_RGBE8.Name", "TSF_RGBE8" },
				{ "TSF_RGBE8.ToolTip", "@todo: Deprecated!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureSourceFormat",
				"ETextureSourceFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSourceArtType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceArtType, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceArtType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceArtType>()
	{
		return ETextureSourceArtType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSourceArtType(ETextureSourceArtType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSourceArtType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSourceArtType_Hash() { return 760404965U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSourceArtType"), 0, Get_Z_Construct_UEnum_Engine_ETextureSourceArtType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TSAT_Uncompressed", (int64)TSAT_Uncompressed },
				{ "TSAT_PNGCompressed", (int64)TSAT_PNGCompressed },
				{ "TSAT_DDSFile", (int64)TSAT_DDSFile },
				{ "TSAT_MAX", (int64)TSAT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TSAT_DDSFile.Comment", "/** DDS file with header. */" },
				{ "TSAT_DDSFile.Name", "TSAT_DDSFile" },
				{ "TSAT_DDSFile.ToolTip", "DDS file with header." },
				{ "TSAT_MAX.Name", "TSAT_MAX" },
				{ "TSAT_PNGCompressed.Comment", "/** PNG compresed version of FColor Data[SrcWidth * SrcHeight]. */" },
				{ "TSAT_PNGCompressed.Name", "TSAT_PNGCompressed" },
				{ "TSAT_PNGCompressed.ToolTip", "PNG compresed version of FColor Data[SrcWidth * SrcHeight]." },
				{ "TSAT_Uncompressed.Comment", "/** FColor Data[SrcWidth * SrcHeight]. */" },
				{ "TSAT_Uncompressed.Name", "TSAT_Uncompressed" },
				{ "TSAT_Uncompressed.ToolTip", "FColor Data[SrcWidth * SrcHeight]." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureSourceArtType",
				"ETextureSourceArtType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureMipCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipCount, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipCount"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureMipCount>()
	{
		return ETextureMipCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureMipCount(ETextureMipCount_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureMipCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureMipCount_Hash() { return 3306062991U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureMipCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureMipCount"), 0, Get_Z_Construct_UEnum_Engine_ETextureMipCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMC_ResidentMips", (int64)TMC_ResidentMips },
				{ "TMC_AllMips", (int64)TMC_AllMips },
				{ "TMC_AllMipsBiased", (int64)TMC_AllMipsBiased },
				{ "TMC_MAX", (int64)TMC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TMC_AllMips.Name", "TMC_AllMips" },
				{ "TMC_AllMipsBiased.Name", "TMC_AllMipsBiased" },
				{ "TMC_MAX.Name", "TMC_MAX" },
				{ "TMC_ResidentMips.Name", "TMC_ResidentMips" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureMipCount",
				"ETextureMipCount",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECompositeTextureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositeTextureMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECompositeTextureMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECompositeTextureMode>()
	{
		return ECompositeTextureMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompositeTextureMode(ECompositeTextureMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECompositeTextureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECompositeTextureMode_Hash() { return 1079257202U; }
	UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompositeTextureMode"), 0, Get_Z_Construct_UEnum_Engine_ECompositeTextureMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CTM_Disabled", (int64)CTM_Disabled },
				{ "CTM_NormalRoughnessToRed", (int64)CTM_NormalRoughnessToRed },
				{ "CTM_NormalRoughnessToGreen", (int64)CTM_NormalRoughnessToGreen },
				{ "CTM_NormalRoughnessToBlue", (int64)CTM_NormalRoughnessToBlue },
				{ "CTM_NormalRoughnessToAlpha", (int64)CTM_NormalRoughnessToAlpha },
				{ "CTM_MAX", (int64)CTM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CTM_Disabled.DisplayName", "Disabled" },
				{ "CTM_Disabled.Name", "CTM_Disabled" },
				{ "CTM_MAX.Name", "CTM_MAX" },
				{ "CTM_NormalRoughnessToAlpha.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
				{ "CTM_NormalRoughnessToAlpha.DisplayName", "Add Normal Roughness To Alpha" },
				{ "CTM_NormalRoughnessToAlpha.Name", "CTM_NormalRoughnessToAlpha" },
				{ "CTM_NormalRoughnessToAlpha.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToBlue.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
				{ "CTM_NormalRoughnessToBlue.DisplayName", "Add Normal Roughness To Blue" },
				{ "CTM_NormalRoughnessToBlue.Name", "CTM_NormalRoughnessToBlue" },
				{ "CTM_NormalRoughnessToBlue.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToGreen.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
				{ "CTM_NormalRoughnessToGreen.DisplayName", "Add Normal Roughness To Green" },
				{ "CTM_NormalRoughnessToGreen.Name", "CTM_NormalRoughnessToGreen" },
				{ "CTM_NormalRoughnessToGreen.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "CTM_NormalRoughnessToRed.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
				{ "CTM_NormalRoughnessToRed.DisplayName", "Add Normal Roughness To Red" },
				{ "CTM_NormalRoughnessToRed.Name", "CTM_NormalRoughnessToRed" },
				{ "CTM_NormalRoughnessToRed.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECompositeTextureMode",
				"ECompositeTextureMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureAddress_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureAddress, Z_Construct_UPackage__Script_Engine(), TEXT("TextureAddress"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureAddress>()
	{
		return TextureAddress_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureAddress(TextureAddress_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureAddress"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureAddress_Hash() { return 906505722U; }
	UEnum* Z_Construct_UEnum_Engine_TextureAddress()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureAddress"), 0, Get_Z_Construct_UEnum_Engine_TextureAddress_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TA_Wrap", (int64)TA_Wrap },
				{ "TA_Clamp", (int64)TA_Clamp },
				{ "TA_Mirror", (int64)TA_Mirror },
				{ "TA_MAX", (int64)TA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TA_Clamp.DisplayName", "Clamp" },
				{ "TA_Clamp.Name", "TA_Clamp" },
				{ "TA_MAX.Name", "TA_MAX" },
				{ "TA_Mirror.DisplayName", "Mirror" },
				{ "TA_Mirror.Name", "TA_Mirror" },
				{ "TA_Wrap.DisplayName", "Wrap" },
				{ "TA_Wrap.Name", "TA_Wrap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"TextureAddress",
				"TextureAddress",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureFilter, Z_Construct_UPackage__Script_Engine(), TEXT("TextureFilter"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureFilter>()
	{
		return TextureFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureFilter(TextureFilter_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureFilter_Hash() { return 3274691245U; }
	UEnum* Z_Construct_UEnum_Engine_TextureFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureFilter"), 0, Get_Z_Construct_UEnum_Engine_TextureFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TF_Nearest", (int64)TF_Nearest },
				{ "TF_Bilinear", (int64)TF_Bilinear },
				{ "TF_Trilinear", (int64)TF_Trilinear },
				{ "TF_Default", (int64)TF_Default },
				{ "TF_MAX", (int64)TF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TF_Bilinear.DisplayName", "Bi-linear" },
				{ "TF_Bilinear.Name", "TF_Bilinear" },
				{ "TF_Default.Comment", "/** Use setting from the Texture Group. */" },
				{ "TF_Default.DisplayName", "Default (from Texture Group)" },
				{ "TF_Default.Name", "TF_Default" },
				{ "TF_Default.ToolTip", "Use setting from the Texture Group." },
				{ "TF_MAX.Name", "TF_MAX" },
				{ "TF_Nearest.DisplayName", "Nearest" },
				{ "TF_Nearest.Name", "TF_Nearest" },
				{ "TF_Trilinear.DisplayName", "Tri-linear" },
				{ "TF_Trilinear.Name", "TF_Trilinear" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"TextureFilter",
				"TextureFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureCompressionSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureCompressionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureCompressionSettings"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureCompressionSettings>()
	{
		return TextureCompressionSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureCompressionSettings(TextureCompressionSettings_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureCompressionSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureCompressionSettings_Hash() { return 1795938865U; }
	UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureCompressionSettings"), 0, Get_Z_Construct_UEnum_Engine_TextureCompressionSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TC_Default", (int64)TC_Default },
				{ "TC_Normalmap", (int64)TC_Normalmap },
				{ "TC_Masks", (int64)TC_Masks },
				{ "TC_Grayscale", (int64)TC_Grayscale },
				{ "TC_Displacementmap", (int64)TC_Displacementmap },
				{ "TC_VectorDisplacementmap", (int64)TC_VectorDisplacementmap },
				{ "TC_HDR", (int64)TC_HDR },
				{ "TC_EditorIcon", (int64)TC_EditorIcon },
				{ "TC_Alpha", (int64)TC_Alpha },
				{ "TC_DistanceFieldFont", (int64)TC_DistanceFieldFont },
				{ "TC_HDR_Compressed", (int64)TC_HDR_Compressed },
				{ "TC_BC7", (int64)TC_BC7 },
				{ "TC_HalfFloat", (int64)TC_HalfFloat },
				{ "TC_EncodedReflectionCapture", (int64)TC_EncodedReflectionCapture },
				{ "TC_MAX", (int64)TC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This needs to be mirrored in EditorFactories.cpp.\n" },
				{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
				{ "TC_Alpha.DisplayName", "Alpha (no sRGB, BC4 on DX11)" },
				{ "TC_Alpha.Name", "TC_Alpha" },
				{ "TC_BC7.DisplayName", "BC7 (DX11, optional A)" },
				{ "TC_BC7.Name", "TC_BC7" },
				{ "TC_Default.DisplayName", "Default (DXT1/5, BC1/3 on DX11)" },
				{ "TC_Default.Name", "TC_Default" },
				{ "TC_Displacementmap.DisplayName", "Displacementmap (8/16bit)" },
				{ "TC_Displacementmap.Name", "TC_Displacementmap" },
				{ "TC_DistanceFieldFont.DisplayName", "DistanceFieldFont (R8)" },
				{ "TC_DistanceFieldFont.Name", "TC_DistanceFieldFont" },
				{ "TC_EditorIcon.DisplayName", "UserInterface2D (RGBA)" },
				{ "TC_EditorIcon.Name", "TC_EditorIcon" },
				{ "TC_EncodedReflectionCapture.Hidden", "" },
				{ "TC_EncodedReflectionCapture.Name", "TC_EncodedReflectionCapture" },
				{ "TC_Grayscale.DisplayName", "Grayscale (R8, RGB8 sRGB)" },
				{ "TC_Grayscale.Name", "TC_Grayscale" },
				{ "TC_HalfFloat.DisplayName", "Half Float (R16F)" },
				{ "TC_HalfFloat.Name", "TC_HalfFloat" },
				{ "TC_HDR.DisplayName", "HDR (RGB, no sRGB)" },
				{ "TC_HDR.Name", "TC_HDR" },
				{ "TC_HDR_Compressed.DisplayName", "HDRCompressed (RGB, BC6H, DX11)" },
				{ "TC_HDR_Compressed.Name", "TC_HDR_Compressed" },
				{ "TC_Masks.DisplayName", "Masks (no sRGB)" },
				{ "TC_Masks.Name", "TC_Masks" },
				{ "TC_MAX.Name", "TC_MAX" },
				{ "TC_Normalmap.DisplayName", "Normalmap (DXT5, BC5 on DX11)" },
				{ "TC_Normalmap.Name", "TC_Normalmap" },
				{ "TC_VectorDisplacementmap.DisplayName", "VectorDisplacementmap (RGBA8)" },
				{ "TC_VectorDisplacementmap.Name", "TC_VectorDisplacementmap" },
				{ "ToolTip", "This needs to be mirrored in EditorFactories.cpp." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"TextureCompressionSettings",
				"TextureCompressionSettings",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTextureFormatSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureFormatSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureFormatSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureFormatSettings"), sizeof(FTextureFormatSettings), Get_Z_Construct_UScriptStruct_FTextureFormatSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureFormatSettings>()
{
	return FTextureFormatSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureFormatSettings(FTextureFormatSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureFormatSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureFormatSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureFormatSettings()
	{
		UScriptStruct::DeferCppStructOps<FTextureFormatSettings>(FName(TEXT("TextureFormatSettings")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureFormatSettings;
	struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[];
#endif
		static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[];
#endif
		static void NewProp_CompressionNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[];
#endif
		static void NewProp_CompressionYCoCg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[];
#endif
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of values that contribute to pixel format chosen for texture\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Collection of values that contribute to pixel format chosen for texture" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureFormatSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureFormatSettings, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionNoAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionYCoCg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->SRGB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureFormatSettings",
		sizeof(FTextureFormatSettings),
		alignof(FTextureFormatSettings),
		Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureFormatSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureFormatSettings"), sizeof(FTextureFormatSettings), Get_Z_Construct_UScriptStruct_FTextureFormatSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureFormatSettings_Hash() { return 1715444639U; }
class UScriptStruct* FTexturePlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("TexturePlatformData"), sizeof(FTexturePlatformData), Get_Z_Construct_UScriptStruct_FTexturePlatformData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTexturePlatformData>()
{
	return FTexturePlatformData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTexturePlatformData(FTexturePlatformData::StaticStruct, TEXT("/Script/Engine"), TEXT("TexturePlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData
{
	FScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData()
	{
		UScriptStruct::DeferCppStructOps<FTexturePlatformData>(FName(TEXT("TexturePlatformData")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTexturePlatformData;
	struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform-specific data used by the texture resource at runtime.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Platform-specific data used by the texture resource at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturePlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePlatformData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TexturePlatformData",
		sizeof(FTexturePlatformData),
		alignof(FTexturePlatformData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TexturePlatformData"), sizeof(FTexturePlatformData), Get_Z_Construct_UScriptStruct_FTexturePlatformData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTexturePlatformData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTexturePlatformData_Hash() { return 1675789176U; }
class UScriptStruct* FTextureSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSource, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSource"), sizeof(FTextureSource), Get_Z_Construct_UScriptStruct_FTextureSource_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSource>()
{
	return FTextureSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureSource(FTextureSource::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureSource"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureSource
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureSource()
	{
		UScriptStruct::DeferCppStructOps<FTextureSource>(FName(TEXT("TextureSource")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureSource;
	struct Z_Construct_UScriptStruct_FTextureSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBlockX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseBlockX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBlockY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseBlockY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPNGCompressed_MetaData[];
#endif
		static void NewProp_bPNGCompressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPNGCompressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGuidIsHash_MetaData[];
#endif
		static void NewProp_bGuidIsHash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGuidIsHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerFormat_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerFormat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Texture source data management.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture source data management." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSource>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** GUID used to track changes to the source data. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "GUID used to track changes to the source data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Position of texture block0, only relevant if source has multiple blocks */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Position of texture block0, only relevant if source has multiple blocks" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX = { "BaseBlockX", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, BaseBlockX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY = { "BaseBlockY", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, BaseBlockY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Width of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Width of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Height of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Height of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Depth (volume textures) or faces (cube maps). */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Depth (volume textures) or faces (cube maps)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumSlices), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of mips provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of mips provided as source data for the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of layers (for multi-layered virtual textures) provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of layers (for multi-layered virtual textures) provided as source data for the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumLayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** RGBA8 source data is optionally compressed as PNG. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "RGBA8 source data is optionally compressed as PNG." },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit(void* Obj)
	{
		((FTextureSource*)Obj)->bPNGCompressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed = { "bPNGCompressed", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Uses hash instead of guid to identify content to improve DDC cache hit. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Uses hash instead of guid to identify content to improve DDC cache hit." },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit(void* Obj)
	{
		((FTextureSource*)Obj)->bGuidIsHash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash = { "bGuidIsHash", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Format in which the source data is stored. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Format in which the source data is stored." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner = { "LayerFormat", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) . */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) ." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat = { "LayerFormat", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, LayerFormat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureSourceBlock, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/**\n\x09 * All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\n\x09 * These are stored sequentially in the source's bulk data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\nThese are stored sequentially in the source's bulk data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureSource",
		sizeof(FTextureSource),
		alignof(FTextureSource),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureSource"), sizeof(FTextureSource), Get_Z_Construct_UScriptStruct_FTextureSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureSource_Hash() { return 481014186U; }
class UScriptStruct* FTextureSourceBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureSourceBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceBlock, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceBlock"), sizeof(FTextureSourceBlock), Get_Z_Construct_UScriptStruct_FTextureSourceBlock_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceBlock>()
{
	return FTextureSourceBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureSourceBlock(FTextureSourceBlock::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureSourceBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureSourceBlock
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureSourceBlock()
	{
		UScriptStruct::DeferCppStructOps<FTextureSourceBlock>(FName(TEXT("TextureSourceBlock")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureSourceBlock;
	struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumMips;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceBlock>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX = { "BlockX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY = { "BlockY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, NumSlices), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureSourceBlock",
		sizeof(FTextureSourceBlock),
		alignof(FTextureSourceBlock),
		Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureSourceBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureSourceBlock"), sizeof(FTextureSourceBlock), Get_Z_Construct_UScriptStruct_FTextureSourceBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureSourceBlock_Hash() { return 1404270985U; }
	void UTexture::StaticRegisterNativesUTexture()
	{
	}
	UClass* Z_Construct_UClass_UTexture_NoRegister()
	{
		return UTexture::StaticClass();
	}
	struct Z_Construct_UClass_UTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[];
#endif
		static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[];
#endif
		static void NewProp_CompressionNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeferCompression_MetaData[];
#endif
		static void NewProp_DeferCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeferCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDitherMipMapAlpha_MetaData[];
#endif
		static void NewProp_bDitherMipMapAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDitherMipMapAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[];
#endif
		static void NewProp_bPreserveBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipGreenChannel_MetaData[];
#endif
		static void NewProp_bFlipGreenChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipGreenChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForcePVRTC4_MetaData[];
#endif
		static void NewProp_bForcePVRTC4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForcePVRTC4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerOfTwoMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PowerOfTwoMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[];
#endif
		static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaKeyThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompositeTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeTextureMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompositeTextureMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompositePower;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerFormatSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerFormatSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerFormatSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipLoadOptions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipLoadOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MipLoadOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Downscale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Downscale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DownscaleOptions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownscaleOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DownscaleOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[];
#endif
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SRGB;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyGamma_MetaData[];
#endif
		static void NewProp_bUseLegacyGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyGamma;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTiling_MetaData[];
#endif
		static void NewProp_bNoTiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureStreaming_MetaData[];
#endif
		static void NewProp_VirtualTextureStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VirtualTextureStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[];
#endif
		static void NewProp_CompressionYCoCg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotOfflineProcessed_MetaData[];
#endif
		static void NewProp_bNotOfflineProcessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotOfflineProcessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[];
#endif
		static void NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncResourceReleaseHasBeenStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/Texture.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Source), Z_Construct_UScriptStruct_FTextureSource, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this material, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustBrightness), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Brightness Curve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Vibrance" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustVibrance), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustSaturation), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "RGBCurve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustRGBCurve), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Hue" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustHue), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Min Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Max Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, the texture's alpha channel will be discarded during compression */" },
		{ "DisplayName", "Compress Without Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If enabled, the texture's alpha channel will be discarded during compression" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionNoAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, defer compression of the texture until save. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "If enabled, defer compression of the texture until save." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit(void* Obj)
	{
		((UTexture*)Obj)->DeferCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression = { "DeferCompression", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** How aggressively should any relevant lossy compression be applied. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How aggressively should any relevant lossy compression be applied." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform. */" },
		{ "DisplayName", "Maximum Texture Size" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize = { "MaxTextureSize", nullptr, (EPropertyFlags)0x0010040800000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MaxTextureSize), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The compression quality for generated textures. */" },
		{ "DisplayName", "Compression Quality" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The compression quality for generated textures." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompressionQuality), Z_Construct_UEnum_Engine_ETextureCompressionQuality, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** When true, the alpha channel of mip-maps and the base image are dithered for smooth LOD transitions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true, the alpha channel of mip-maps and the base image are dithered for smooth LOD transitions." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bDitherMipMapAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha = { "bDitherMipMapAlpha", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Alpha values per channel to compare to when preserving alpha coverage. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Alpha values per channel to compare to when preserving alpha coverage." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** When true the texture's border will be preserved during mipmap generation. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's border will be preserved during mipmap generation." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bPreserveBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** When true the texture's green channel will be inverted. This is useful for some normal maps. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's green channel will be inverted. This is useful for some normal maps." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bFlipGreenChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel = { "bFlipGreenChannel", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** For DXT1 textures, setting this will cause the texture to be twice the size, but better looking, on iPhone */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "For DXT1 textures, setting this will cause the texture to be twice the size, but better looking, on iPhone" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bForcePVRTC4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4 = { "bForcePVRTC4", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** How to pad the texture to a power of 2 size (if necessary) */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How to pad the texture to a power of 2 size (if necessary)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode = { "PowerOfTwoMode", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, PowerOfTwoMode), Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The color used to pad the texture out if it is resized due to PowerOfTwoMode */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color used to pad the texture out if it is resized due to PowerOfTwoMode" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor = { "PaddingColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, PaddingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bChromaKeyTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match) */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold = { "ChromaKeyThreshold", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, ChromaKeyThreshold), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** The color that will be replaced with transparent black if chroma keying is enabled */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color that will be replaced with transparent black if chroma keying is enabled" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Per asset specific setting to define the mip-map generation properties like sharpening and kernel size. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per asset specific setting to define the mip-map generation properties like sharpening and kernel size." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/**\n\x09 * Can be defined to modify the roughness based on the normal map variation (mostly from mip maps).\n\x09 * MaxAlpha comes in handy to define a base roughness if no source alpha was there.\n\x09 * Make sure the normal map has at least as many mips as this texture.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Can be defined to modify the roughness based on the normal map variation (mostly from mip maps).\nMaxAlpha comes in handy to define a base roughness if no source alpha was there.\nMake sure the normal map has at least as many mips as this texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture = { "CompositeTexture", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositeTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/* defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode = { "CompositeTextureMode", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositeTextureMode), Z_Construct_UEnum_Engine_ECompositeTextureMode, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/**\n\x09 * default 1, high values result in a stronger effect e.g 1, 2, 4, 8\n\x09 * this is no slider because the texture update would not be fast enough\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "default 1, high values result in a stronger effect e.g 1, 2, 4, 8\nthis is no slider because the texture update would not be fast enough" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower = { "CompositePower", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositePower), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureFormatSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of settings used to control the format of given layer\n\x09 * If this array doesn't include an entry for a given layer, values from UTexture will be used\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of settings used to control the format of given layer\nIf this array doesn't include an entry for a given layer, values from UTexture will be used" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LayerFormatSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** A bias to the index of the top mip level to use. */" },
		{ "DisplayName", "LOD Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A bias to the index of the top mip level to use." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LODBias), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Compression settings to use when building the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Compression settings to use when building the texture." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture filtering mode to use when sampling this texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture filtering mode to use when sampling this texture." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture mip load options. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture mip load options." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions = { "MipLoadOptions", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MipLoadOptions), Z_Construct_UEnum_Engine_ETextureMipLoadOptions, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture group this texture belongs to */" },
		{ "DisplayName", "Texture Group" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture group this texture belongs to" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Downscale source texture, applied only to textures without mips \n\x09 * 0.0 - use scale value from texture group\n\x09 * 1.0 - do not scale texture\n\x09 * > 1.0 - scale texure\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Downscale source texture, applied only to textures without mips\n0.0 - use scale value from texture group\n1.0 - do not scale texture\n> 1.0 - scale texure" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Downscale = { "Downscale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Downscale), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture downscaling options */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture downscaling options" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions = { "DownscaleOptions", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, DownscaleOptions), Z_Construct_UEnum_Engine_ETextureDownscaleOptions, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** This should be unchecked if using alpha channels individually as masks. */" },
		{ "DisplayName", "sRGB" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "This should be unchecked if using alpha channels individually as masks." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((UTexture*)Obj)->SRGB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bUseLegacyGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma = { "bUseLegacyGamma", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created using TexCreate_NoTiling */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created using TexCreate_NoTiling" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bNoTiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling = { "bNoTiling", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Is this texture streamed in using VT\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Is this texture streamed in using VT" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit(void* Obj)
	{
		((UTexture*)Obj)->VirtualTextureStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming = { "VirtualTextureStreaming", nullptr, (EPropertyFlags)0x0010050000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData[] = {
		{ "Comment", "/** If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionYCoCg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created without TexCreate_OfflineProcessed. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created without TexCreate_OfflineProcessed." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bNotOfflineProcessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed = { "bNotOfflineProcessed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[] = {
		{ "Comment", "/** Whether the async resource release process has already been kicked off or not */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether the async resource release process has already been kicked off or not" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bAsyncResourceReleaseHasBeenStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted = { "bAsyncResourceReleaseHasBeenStarted", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bForcePVRTC4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Downscale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SRGB,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTexture_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture_Statics::ClassParams = {
		&UTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture, 247131868);
	template<> ENGINE_API UClass* StaticClass<UTexture>()
	{
		return UTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture(Z_Construct_UClass_UTexture, &UTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

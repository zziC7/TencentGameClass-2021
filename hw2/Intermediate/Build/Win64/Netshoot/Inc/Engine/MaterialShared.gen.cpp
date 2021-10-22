// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/MaterialShared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShared() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EMaterialDomain_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDomain, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialDomain"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialDomain>()
	{
		return EMaterialDomain_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialDomain(EMaterialDomain_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialDomain"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialDomain_Hash() { return 225393489U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialDomain()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialDomain"), 0, Get_Z_Construct_UEnum_Engine_EMaterialDomain_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MD_Surface", (int64)MD_Surface },
				{ "MD_DeferredDecal", (int64)MD_DeferredDecal },
				{ "MD_LightFunction", (int64)MD_LightFunction },
				{ "MD_Volume", (int64)MD_Volume },
				{ "MD_PostProcess", (int64)MD_PostProcess },
				{ "MD_UI", (int64)MD_UI },
				{ "MD_RuntimeVirtualTexture", (int64)MD_RuntimeVirtualTexture },
				{ "MD_MAX", (int64)MD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines the domain of a material. */" },
				{ "MD_DeferredDecal.Comment", "/** The material's attributes describe a deferred decal, and will be mapped onto the decal's frustum. */" },
				{ "MD_DeferredDecal.DisplayName", "Deferred Decal" },
				{ "MD_DeferredDecal.Name", "MD_DeferredDecal" },
				{ "MD_DeferredDecal.ToolTip", "The material's attributes describe a deferred decal, and will be mapped onto the decal's frustum." },
				{ "MD_LightFunction.Comment", "/** The material's attributes describe a light's distribution. */" },
				{ "MD_LightFunction.DisplayName", "Light Function" },
				{ "MD_LightFunction.Name", "MD_LightFunction" },
				{ "MD_LightFunction.ToolTip", "The material's attributes describe a light's distribution." },
				{ "MD_MAX.Name", "MD_MAX" },
				{ "MD_PostProcess.Comment", "/** The material will be used in a custom post process pass. */" },
				{ "MD_PostProcess.DisplayName", "Post Process" },
				{ "MD_PostProcess.Name", "MD_PostProcess" },
				{ "MD_PostProcess.ToolTip", "The material will be used in a custom post process pass." },
				{ "MD_RuntimeVirtualTexture.Comment", "/** The material will be used for runtime virtual texture (Deprecated). */" },
				{ "MD_RuntimeVirtualTexture.Hidden", "" },
				{ "MD_RuntimeVirtualTexture.Name", "MD_RuntimeVirtualTexture" },
				{ "MD_RuntimeVirtualTexture.ToolTip", "The material will be used for runtime virtual texture (Deprecated)." },
				{ "MD_Surface.Comment", "/** The material's attributes describe a 3d surface. */" },
				{ "MD_Surface.DisplayName", "Surface" },
				{ "MD_Surface.Name", "MD_Surface" },
				{ "MD_Surface.ToolTip", "The material's attributes describe a 3d surface." },
				{ "MD_UI.Comment", "/** The material will be used for UMG or Slate UI */" },
				{ "MD_UI.DisplayName", "User Interface" },
				{ "MD_UI.Name", "MD_UI" },
				{ "MD_UI.ToolTip", "The material will be used for UMG or Slate UI" },
				{ "MD_Volume.Comment", "/** The material's attributes describe a 3d volume. */" },
				{ "MD_Volume.DisplayName", "Volume" },
				{ "MD_Volume.Name", "MD_Volume" },
				{ "MD_Volume.ToolTip", "The material's attributes describe a 3d volume." },
				{ "ModuleRelativePath", "Public/MaterialShared.h" },
				{ "ToolTip", "Defines the domain of a material." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialDomain",
				"EMaterialDomain",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

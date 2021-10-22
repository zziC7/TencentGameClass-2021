// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureProperty() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EMaterialExposedTextureProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedTextureProperty"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialExposedTextureProperty>()
	{
		return EMaterialExposedTextureProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialExposedTextureProperty(EMaterialExposedTextureProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialExposedTextureProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Hash() { return 2444703315U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialExposedTextureProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMTM_TextureSize", (int64)TMTM_TextureSize },
				{ "TMTM_TexelSize", (int64)TMTM_TexelSize },
				{ "TMTM_MAX", (int64)TMTM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Selects the texture property to output */" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
				{ "TMTM_MAX.Name", "TMTM_MAX" },
				{ "TMTM_TexelSize.Comment", "/* The texture's texel size in the UV space (1 / Texture Size) */" },
				{ "TMTM_TexelSize.DisplayName", "Texel Size" },
				{ "TMTM_TexelSize.Name", "TMTM_TexelSize" },
				{ "TMTM_TexelSize.ToolTip", "The texture's texel size in the UV space (1 / Texture Size)" },
				{ "TMTM_TextureSize.Comment", "/* The texture's size. */" },
				{ "TMTM_TextureSize.DisplayName", "Texture Size" },
				{ "TMTM_TextureSize.Name", "TMTM_TextureSize" },
				{ "TMTM_TextureSize.ToolTip", "The texture's size." },
				{ "ToolTip", "Selects the texture property to output" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialExposedTextureProperty",
				"EMaterialExposedTextureProperty",
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
	void UMaterialExpressionTextureProperty::StaticRegisterNativesUMaterialExpressionTextureProperty()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister()
	{
		return UMaterialExpressionTextureProperty::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureProperty.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Texture Object to access the property from." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureProperty, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "UMaterialExpressionTextureProperty" },
		{ "Comment", "/** Texture property to be accessed */" },
		{ "DisplayName", "Texture Property" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
		{ "ToolTip", "Texture property to be accessed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureProperty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::ClassParams = {
		&UMaterialExpressionTextureProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureProperty, 905942726);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureProperty>()
	{
		return UMaterialExpressionTextureProperty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureProperty(Z_Construct_UClass_UMaterialExpressionTextureProperty, &UMaterialExpressionTextureProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

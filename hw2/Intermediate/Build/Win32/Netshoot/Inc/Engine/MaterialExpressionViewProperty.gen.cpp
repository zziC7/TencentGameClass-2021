// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionViewProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionViewProperty() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewProperty();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* EMaterialExposedViewProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedViewProperty"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialExposedViewProperty>()
	{
		return EMaterialExposedViewProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialExposedViewProperty(EMaterialExposedViewProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialExposedViewProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Hash() { return 832243057U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialExposedViewProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialExposedViewProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialExposedViewProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MEVP_BufferSize", (int64)MEVP_BufferSize },
				{ "MEVP_FieldOfView", (int64)MEVP_FieldOfView },
				{ "MEVP_TanHalfFieldOfView", (int64)MEVP_TanHalfFieldOfView },
				{ "MEVP_ViewSize", (int64)MEVP_ViewSize },
				{ "MEVP_WorldSpaceViewPosition", (int64)MEVP_WorldSpaceViewPosition },
				{ "MEVP_WorldSpaceCameraPosition", (int64)MEVP_WorldSpaceCameraPosition },
				{ "MEVP_ViewportOffset", (int64)MEVP_ViewportOffset },
				{ "MEVP_TemporalSampleCount", (int64)MEVP_TemporalSampleCount },
				{ "MEVP_TemporalSampleIndex", (int64)MEVP_TemporalSampleIndex },
				{ "MEVP_TemporalSampleOffset", (int64)MEVP_TemporalSampleOffset },
				{ "MEVP_RuntimeVirtualTextureOutputLevel", (int64)MEVP_RuntimeVirtualTextureOutputLevel },
				{ "MEVP_RuntimeVirtualTextureOutputDerivative", (int64)MEVP_RuntimeVirtualTextureOutputDerivative },
				{ "MEVP_PreExposure", (int64)MEVP_PreExposure },
				{ "MEVP_RuntimeVirtualTextureMaxLevel", (int64)MEVP_RuntimeVirtualTextureMaxLevel },
				{ "MEVP_MAX", (int64)MEVP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MEVP_BufferSize.Comment", "/** Horizontal and vertical size of the view's buffer in pixels */" },
				{ "MEVP_BufferSize.DisplayName", "Render Target Size" },
				{ "MEVP_BufferSize.Name", "MEVP_BufferSize" },
				{ "MEVP_BufferSize.ToolTip", "Horizontal and vertical size of the view's buffer in pixels" },
				{ "MEVP_FieldOfView.Comment", "/** Horizontal and vertical field of view angles in radian */" },
				{ "MEVP_FieldOfView.DisplayName", "Field Of View" },
				{ "MEVP_FieldOfView.Name", "MEVP_FieldOfView" },
				{ "MEVP_FieldOfView.ToolTip", "Horizontal and vertical field of view angles in radian" },
				{ "MEVP_MAX.Name", "MEVP_MAX" },
				{ "MEVP_PreExposure.Comment", "/** Pre Exposure */" },
				{ "MEVP_PreExposure.DisplayName", "Pre-Exposure" },
				{ "MEVP_PreExposure.Name", "MEVP_PreExposure" },
				{ "MEVP_PreExposure.ToolTip", "Pre Exposure" },
				{ "MEVP_RuntimeVirtualTextureMaxLevel.Comment", "/** Maximum mip level of Runtime Virtual Texture that Runtime Virtual Texture Output is rendering to. */" },
				{ "MEVP_RuntimeVirtualTextureMaxLevel.DisplayName", "Virtual Texture Max Level" },
				{ "MEVP_RuntimeVirtualTextureMaxLevel.Name", "MEVP_RuntimeVirtualTextureMaxLevel" },
				{ "MEVP_RuntimeVirtualTextureMaxLevel.ToolTip", "Maximum mip level of Runtime Virtual Texture that Runtime Virtual Texture Output is rendering to." },
				{ "MEVP_RuntimeVirtualTextureOutputDerivative.Comment", "/** World space derivatives for Runtime Virtual Texture Output. */" },
				{ "MEVP_RuntimeVirtualTextureOutputDerivative.DisplayName", "Virtual Texture Output Derivative" },
				{ "MEVP_RuntimeVirtualTextureOutputDerivative.Name", "MEVP_RuntimeVirtualTextureOutputDerivative" },
				{ "MEVP_RuntimeVirtualTextureOutputDerivative.ToolTip", "World space derivatives for Runtime Virtual Texture Output." },
				{ "MEVP_RuntimeVirtualTextureOutputLevel.Comment", "/** Mip Level that Runtime Virtual Texture Output is rendering to. */" },
				{ "MEVP_RuntimeVirtualTextureOutputLevel.DisplayName", "Virtual Texture Output Level" },
				{ "MEVP_RuntimeVirtualTextureOutputLevel.Name", "MEVP_RuntimeVirtualTextureOutputLevel" },
				{ "MEVP_RuntimeVirtualTextureOutputLevel.ToolTip", "Mip Level that Runtime Virtual Texture Output is rendering to." },
				{ "MEVP_TanHalfFieldOfView.Comment", "/** Tan(FieldOfView * 0.5) */" },
				{ "MEVP_TanHalfFieldOfView.DisplayName", "Tan(0.5 * Field Of View)" },
				{ "MEVP_TanHalfFieldOfView.Name", "MEVP_TanHalfFieldOfView" },
				{ "MEVP_TanHalfFieldOfView.ToolTip", "Tan(FieldOfView * 0.5)" },
				{ "MEVP_TemporalSampleCount.Comment", "/** Number of temporal AA sample used across multiple to converge to anti aliased output. */" },
				{ "MEVP_TemporalSampleCount.DisplayName", "Temporal Sample Count" },
				{ "MEVP_TemporalSampleCount.Name", "MEVP_TemporalSampleCount" },
				{ "MEVP_TemporalSampleCount.ToolTip", "Number of temporal AA sample used across multiple to converge to anti aliased output." },
				{ "MEVP_TemporalSampleIndex.Comment", "/** Index of the Temporal AA jitter for this frame. */" },
				{ "MEVP_TemporalSampleIndex.DisplayName", "Temporal Sample Index" },
				{ "MEVP_TemporalSampleIndex.Name", "MEVP_TemporalSampleIndex" },
				{ "MEVP_TemporalSampleIndex.ToolTip", "Index of the Temporal AA jitter for this frame." },
				{ "MEVP_TemporalSampleOffset.Comment", "/** Offset of the temporal sample for this frame in pixel size. */" },
				{ "MEVP_TemporalSampleOffset.DisplayName", "Temporal Sample Offset" },
				{ "MEVP_TemporalSampleOffset.Name", "MEVP_TemporalSampleOffset" },
				{ "MEVP_TemporalSampleOffset.ToolTip", "Offset of the temporal sample for this frame in pixel size." },
				{ "MEVP_ViewportOffset.Comment", "/** Horizontal and vertical position of the viewport in pixels within the buffer. */" },
				{ "MEVP_ViewportOffset.DisplayName", "Viewport Offset" },
				{ "MEVP_ViewportOffset.Name", "MEVP_ViewportOffset" },
				{ "MEVP_ViewportOffset.ToolTip", "Horizontal and vertical position of the viewport in pixels within the buffer." },
				{ "MEVP_ViewSize.Comment", "/** Horizontal and vertical size of the view in pixels */" },
				{ "MEVP_ViewSize.DisplayName", "View Size" },
				{ "MEVP_ViewSize.Name", "MEVP_ViewSize" },
				{ "MEVP_ViewSize.ToolTip", "Horizontal and vertical size of the view in pixels" },
				{ "MEVP_WorldSpaceCameraPosition.Comment", "/** Absolute world space camera position */" },
				{ "MEVP_WorldSpaceCameraPosition.DisplayName", "Camera Position (Absolute World Space)" },
				{ "MEVP_WorldSpaceCameraPosition.Name", "MEVP_WorldSpaceCameraPosition" },
				{ "MEVP_WorldSpaceCameraPosition.ToolTip", "Absolute world space camera position" },
				{ "MEVP_WorldSpaceViewPosition.Comment", "/** Absolute world space view position (differs from the camera position in the shadow passes) */" },
				{ "MEVP_WorldSpaceViewPosition.DisplayName", "View Position (Absolute World Space)" },
				{ "MEVP_WorldSpaceViewPosition.Name", "MEVP_WorldSpaceViewPosition" },
				{ "MEVP_WorldSpaceViewPosition.ToolTip", "Absolute world space view position (differs from the camera position in the shadow passes)" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialExposedViewProperty",
				"EMaterialExposedViewProperty",
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
	void UMaterialExpressionViewProperty::StaticRegisterNativesUMaterialExpressionViewProperty()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty_NoRegister()
	{
		return UMaterialExpressionViewProperty::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionViewProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionViewProperty.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "UMaterialExpressionViewProperty" },
		{ "Comment", "/** View input property to be accessed */" },
		{ "DisplayName", "View Property" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionViewProperty.h" },
		{ "ToolTip", "View input property to be accessed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionViewProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedViewProperty, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::NewProp_Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionViewProperty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::ClassParams = {
		&UMaterialExpressionViewProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionViewProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionViewProperty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionViewProperty, 1798911528);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionViewProperty>()
	{
		return UMaterialExpressionViewProperty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionViewProperty(Z_Construct_UClass_UMaterialExpressionViewProperty, &UMaterialExpressionViewProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionViewProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionViewProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

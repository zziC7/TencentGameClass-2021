// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMediaEngine/Public/Unreal/ImgMediaPlaybackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent() {}
// Cross Module References
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UImgMediaPlaybackComponent_NoRegister();
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UImgMediaPlaybackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ImgMediaEngine();
// End Cross Module References
	void UImgMediaPlaybackComponent::StaticRegisterNativesUImgMediaPlaybackComponent()
	{
	}
	UClass* Z_Construct_UClass_UImgMediaPlaybackComponent_NoRegister()
	{
		return UImgMediaPlaybackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaPlaybackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "Comment", "/**\n * Component to help with ImgMedia playback.\n * If desired, add this to an object that displays an ImgMedia sequence.\n * Not necessary to do this, but if you do then you can get additional functionality\n * such as selective mipmap loading.\n */" },
		{ "IncludePath", "Unreal/ImgMediaPlaybackComponent.h" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component to help with ImgMedia playback.\nIf desired, add this to an object that displays an ImgMedia sequence.\nNot necessary to do this, but if you do then you can get additional functionality\nsuch as selective mipmap loading." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "MipMaps" },
		{ "Comment", "/** Width of the object. If < 0, then get the width automatically. */" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ToolTip", "Width of the object. If < 0, then get the width automatically." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaPlaybackComponent, Width), METADATA_PARAMS(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "MipMaps" },
		{ "Comment", "/** This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3. */" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ToolTip", "This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImgMediaPlaybackComponent, LODBias), METADATA_PARAMS(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaPlaybackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::ClassParams = {
		&UImgMediaPlaybackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaPlaybackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImgMediaPlaybackComponent, 1047685062);
	template<> IMGMEDIAENGINE_API UClass* StaticClass<UImgMediaPlaybackComponent>()
	{
		return UImgMediaPlaybackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImgMediaPlaybackComponent(Z_Construct_UClass_UImgMediaPlaybackComponent, &UImgMediaPlaybackComponent::StaticClass, TEXT("/Script/ImgMediaEngine"), TEXT("UImgMediaPlaybackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaPlaybackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

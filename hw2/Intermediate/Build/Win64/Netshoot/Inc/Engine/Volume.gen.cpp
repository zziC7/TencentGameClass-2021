// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Volume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AVolume::StaticRegisterNativesAVolume()
	{
	}
	UClass* Z_Construct_UClass_AVolume_NoRegister()
	{
		return AVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrush,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""An editable 3D volume placed in a level. Different types of volumes perform different functions\n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/Volume.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Volume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An editable 3D volume placed in a level. Different types of volumes perform different functions\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVolume_Statics::ClassParams = {
		&AVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVolume, 4249975521);
	template<> ENGINE_API UClass* StaticClass<AVolume>()
	{
		return AVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVolume(Z_Construct_UClass_AVolume, &AVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

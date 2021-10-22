// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Info.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AInfo::StaticRegisterNativesAInfo()
	{
	}
	UClass* Z_Construct_UClass_AInfo_NoRegister()
	{
		return AInfo::StaticClass();
	}
	struct Z_Construct_UClass_AInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Info is the base class of an Actor that isn't meant to have a physical representation in the world, used primarily\n * for \"manager\" type classes that hold settings data about the world, but might need to be an Actor for replication purposes.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/Info.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Info.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Info is the base class of an Actor that isn't meant to have a physical representation in the world, used primarily\nfor \"manager\" type classes that hold settings data about the world, but might need to be an Actor for replication purposes." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard Component displayed in editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Info.h" },
		{ "ToolTip", "Billboard Component displayed in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInfo, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfo_Statics::ClassParams = {
		&AInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AInfo_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::PropPointers), 0),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfo, 1099784241);
	template<> ENGINE_API UClass* StaticClass<AInfo>()
	{
		return AInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfo(Z_Construct_UClass_AInfo, &AInfo::StaticClass, TEXT("/Script/Engine"), TEXT("AInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

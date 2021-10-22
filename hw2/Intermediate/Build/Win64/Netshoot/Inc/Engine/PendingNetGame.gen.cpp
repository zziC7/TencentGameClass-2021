// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PendingNetGame.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingNetGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
// End Cross Module References
	void UPendingNetGame::StaticRegisterNativesUPendingNetGame()
	{
	}
	UClass* Z_Construct_UClass_UPendingNetGame_NoRegister()
	{
		return UPendingNetGame::StaticClass();
	}
	struct Z_Construct_UClass_UPendingNetGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DemoNetDriver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPendingNetGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net driver created for contacting the new server\n\x09 * Transferred to world on successful connection\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ToolTip", "Net driver created for contacting the new server\nTransferred to world on successful connection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPendingNetGame, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver = { "DemoNetDriver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPendingNetGame, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPendingNetGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPendingNetGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPendingNetGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPendingNetGame_Statics::ClassParams = {
		&UPendingNetGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPendingNetGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPendingNetGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPendingNetGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPendingNetGame, 706332065);
	template<> ENGINE_API UClass* StaticClass<UPendingNetGame>()
	{
		return UPendingNetGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPendingNetGame(Z_Construct_UClass_UPendingNetGame, &UPendingNetGame::StaticClass, TEXT("/Script/Engine"), TEXT("UPendingNetGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPendingNetGame);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPendingNetGame)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

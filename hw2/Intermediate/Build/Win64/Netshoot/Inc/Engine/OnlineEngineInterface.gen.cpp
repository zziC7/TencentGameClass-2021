// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/OnlineEngineInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UOnlineEngineInterface::StaticRegisterNativesUOnlineEngineInterface()
	{
	}
	UClass* Z_Construct_UClass_UOnlineEngineInterface_NoRegister()
	{
		return UOnlineEngineInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEngineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEngineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface class between engine and OnlineSubsystem to remove dependencies between the two\n * The real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils\n * The expectation is that this basic group of functions will not expand/change and that \n * OnlineSubsystem can remain independent of the engine\n *\n * Games should not use this interface, use the OnlineSubsystem plugins directly\n *\n * Better functionality descriptions can be found in the OnlineSubsystem interfaces \n *\n * Adding code here is discouraged, there is probably a better way, talk to the OGS team\n */" },
		{ "IncludePath", "Net/OnlineEngineInterface.h" },
		{ "ModuleRelativePath", "Public/Net/OnlineEngineInterface.h" },
		{ "ToolTip", "Interface class between engine and OnlineSubsystem to remove dependencies between the two\nThe real work is implemented in UOnlineEngineInterfaceImpl in OnlineSubsystemUtils\nThe expectation is that this basic group of functions will not expand/change and that\nOnlineSubsystem can remain independent of the engine\n\nGames should not use this interface, use the OnlineSubsystem plugins directly\n\nBetter functionality descriptions can be found in the OnlineSubsystem interfaces\n\nAdding code here is discouraged, there is probably a better way, talk to the OGS team" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEngineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEngineInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEngineInterface_Statics::ClassParams = {
		&UOnlineEngineInterface::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEngineInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineEngineInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineEngineInterface, 2400262059);
	template<> ENGINE_API UClass* StaticClass<UOnlineEngineInterface>()
	{
		return UOnlineEngineInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineEngineInterface(Z_Construct_UClass_UOnlineEngineInterface, &UOnlineEngineInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UOnlineEngineInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

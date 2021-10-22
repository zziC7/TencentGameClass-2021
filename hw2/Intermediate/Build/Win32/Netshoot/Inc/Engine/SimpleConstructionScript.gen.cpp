// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConstructionScript() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
// End Cross Module References
	void USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript()
	{
	}
	UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister()
	{
		return USimpleConstructionScript::StaticClass();
	}
	struct Z_Construct_UClass_USimpleConstructionScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRootNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponentNodes;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleConstructionScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SimpleConstructionScript.h" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Comment", "/** Root nodes of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Root nodes of the construction script" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleConstructionScript, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Comment", "/** All nodes that exist in the hierarchy of this SimpleConstructionScript */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "All nodes that exist in the hierarchy of this SimpleConstructionScript" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleConstructionScript, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData[] = {
		{ "Comment", "/** Default scene root node; used when no other nodes are available to use as the root */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Default scene root node; used when no other nodes are available to use as the root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode = { "DefaultSceneRootNode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Root node of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Root node of the construction script" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleConstructionScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleConstructionScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams = {
		&USimpleConstructionScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleConstructionScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleConstructionScript, 1094121646);
	template<> ENGINE_API UClass* StaticClass<USimpleConstructionScript>()
	{
		return USimpleConstructionScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleConstructionScript(Z_Construct_UClass_USimpleConstructionScript, &USimpleConstructionScript::StaticClass, TEXT("/Script/Engine"), TEXT("USimpleConstructionScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConstructionScript);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USimpleConstructionScript)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

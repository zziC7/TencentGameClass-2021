// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionNamedReroute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNamedReroute() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage();
// End Cross Module References
	void UMaterialExpressionNamedRerouteBase::StaticRegisterNativesUMaterialExpressionNamedRerouteBase()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister()
	{
		return UMaterialExpressionNamedRerouteBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionNamedRerouteBase, 1361336465);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteBase>()
	{
		return UMaterialExpressionNamedRerouteBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNamedRerouteBase(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase, &UMaterialExpressionNamedRerouteBase::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNamedRerouteBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteBase);
	void UMaterialExpressionNamedRerouteDeclaration::StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister()
	{
		return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Declaration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "// The input pin\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The input pin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Name), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "Comment", "/** The color of the graph node. The same color will apply to all linked usages of this Declaration node */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The color of the graph node. The same color will apply to all linked usages of this Declaration node" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteDeclaration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteDeclaration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionNamedRerouteDeclaration, 2740867839);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteDeclaration>()
	{
		return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNamedRerouteDeclaration(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration, &UMaterialExpressionNamedRerouteDeclaration::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNamedRerouteDeclaration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteDeclaration);
	void UMaterialExpressionNamedRerouteUsage::StaticRegisterNativesUMaterialExpressionNamedRerouteUsage()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister()
	{
		return UMaterialExpressionNamedRerouteUsage::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Declaration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Usage" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData[] = {
		{ "Comment", "// The declaration this node is linked to\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The declaration this node is linked to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, Declaration), Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteUsage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams = {
		&UMaterialExpressionNamedRerouteUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionNamedRerouteUsage, 2083851393);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteUsage>()
	{
		return UMaterialExpressionNamedRerouteUsage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNamedRerouteUsage(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage, &UMaterialExpressionNamedRerouteUsage::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNamedRerouteUsage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteUsage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

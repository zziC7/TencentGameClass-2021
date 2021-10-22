// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UNiagaraParameterDefinitionsBase::StaticRegisterNativesUNiagaraParameterDefinitionsBase()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister()
	{
		return UNiagaraParameterDefinitionsBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts. */" },
		{ "IncludePath", "NiagaraParameterDefinitionsBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
		{ "ToolTip", "Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraParameterDefinitionsBase, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterDefinitionsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams = {
		&UNiagaraParameterDefinitionsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers), 0),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraParameterDefinitionsBase, 2139518373);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterDefinitionsBase>()
	{
		return UNiagaraParameterDefinitionsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraParameterDefinitionsBase(Z_Construct_UClass_UNiagaraParameterDefinitionsBase, &UNiagaraParameterDefinitionsBase::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraParameterDefinitionsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterDefinitionsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceMeshRendererInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshRendererInfo() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceMeshRendererInfo::StaticRegisterNativesUNiagaraDataInterfaceMeshRendererInfo()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_NoRegister()
	{
		return UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRenderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshRenderer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams[] = {
		{ "Category", "Mesh Particles" },
		{ "Comment", "/** This Data Interface can be used to query information about the mesh renderers of an emitter */" },
		{ "DisplayName", "Mesh Renderer Info" },
		{ "IncludePath", "NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ToolTip", "This Data Interface can be used to query information about the mesh renderers of an emitter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the mesh renderer */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshRendererInfo.h" },
		{ "ToolTip", "The name of the mesh renderer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer = { "MeshRenderer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer), Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::NewProp_MeshRenderer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceMeshRendererInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::ClassParams = {
		&UNiagaraDataInterfaceMeshRendererInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceMeshRendererInfo, 521801682);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceMeshRendererInfo>()
	{
		return UNiagaraDataInterfaceMeshRendererInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceMeshRendererInfo(Z_Construct_UClass_UNiagaraDataInterfaceMeshRendererInfo, &UNiagaraDataInterfaceMeshRendererInfo::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceMeshRendererInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceMeshRendererInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

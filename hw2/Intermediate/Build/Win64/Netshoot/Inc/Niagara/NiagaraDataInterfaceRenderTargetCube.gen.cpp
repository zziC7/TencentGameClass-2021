// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRenderTargetCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRenderTargetCube() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceRenderTargetCube::StaticRegisterNativesUNiagaraDataInterfaceRenderTargetCube()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_NoRegister()
	{
		return UNiagaraDataInterfaceRenderTargetCube::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderTargetFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideRenderTargetFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritUserParameterSettings_MetaData[];
#endif
		static void NewProp_bInheritUserParameterSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritUserParameterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[];
#endif
		static void NewProp_bOverrideFormat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewRenderTarget_MetaData[];
#endif
		static void NewProp_bPreviewRenderTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewRenderTarget;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManagedRenderTargets_ValueProp;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_ManagedRenderTargets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagedRenderTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ManagedRenderTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "DisplayName", "Render Target Cube" },
		{ "Experimental", "" },
		{ "IncludePath", "NiagaraDataInterfaceRenderTargetCube.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Render Target" },
		{ "EditCondition", "!bInheritUserParameterSettings" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTargetCube, Size), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_OverrideRenderTargetFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/** When enabled overrides the format of the render target, otherwise uses the project default setting. */" },
		{ "EditCondition", "!bInheritUserParameterSettings && bOverrideFormat" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
		{ "ToolTip", "When enabled overrides the format of the render target, otherwise uses the project default setting." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_OverrideRenderTargetFormat = { "OverrideRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_OverrideRenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_OverrideRenderTargetFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings_MetaData[] = {
		{ "Category", "Render Target" },
		{ "Comment", "/**\n\x09When enabled texture parameters (size / etc) are taken from the user provided render target.\n\x09If no valid user parameter is set the system will be invalid.\n\x09Note: The resource will be recreated if UAV access is not available, which will reset the contents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
		{ "ToolTip", "When enabled texture parameters (size / etc) are taken from the user provided render target.\nIf no valid user parameter is set the system will be invalid.\nNote: The resource will be recreated if UAV access is not available, which will reset the contents." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTargetCube*)Obj)->bInheritUserParameterSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings = { "bInheritUserParameterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTargetCube), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Render Target" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTargetCube*)Obj)->bOverrideFormat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTargetCube), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRenderTargetCube*)Obj)->bPreviewRenderTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget = { "bPreviewRenderTarget", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceRenderTargetCube), &Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Render Target" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
		{ "ToolTip", "When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_RenderTargetUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_RenderTargetUserParameter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_ValueProp = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_Key_KeyProp = { "ManagedRenderTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRenderTargetCube.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRenderTargetCube, ManagedRenderTargets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_OverrideRenderTargetFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bInheritUserParameterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_bPreviewRenderTarget,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_RenderTargetUserParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::NewProp_ManagedRenderTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRenderTargetCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::ClassParams = {
		&UNiagaraDataInterfaceRenderTargetCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceRenderTargetCube, 1889030950);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRenderTargetCube>()
	{
		return UNiagaraDataInterfaceRenderTargetCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceRenderTargetCube(Z_Construct_UClass_UNiagaraDataInterfaceRenderTargetCube, &UNiagaraDataInterfaceRenderTargetCube::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceRenderTargetCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRenderTargetCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

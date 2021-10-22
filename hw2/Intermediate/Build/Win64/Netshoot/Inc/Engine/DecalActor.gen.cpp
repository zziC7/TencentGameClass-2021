// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DecalActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADecalActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADecalActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADecalActor::execCreateDynamicMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateDynamicMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADecalActor::execGetDecalMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDecalMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADecalActor::execSetDecalMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecalMaterial(Z_Param_NewDecalMaterial);
		P_NATIVE_END;
	}
	void ADecalActor::StaticRegisterNativesADecalActor()
	{
		UClass* Class = ADecalActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", &ADecalActor::execCreateDynamicMaterialInstance },
			{ "GetDecalMaterial", &ADecalActor::execGetDecalMaterial },
			{ "SetDecalMaterial", &ADecalActor::execSetDecalMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics
	{
		struct DecalActor_eventCreateDynamicMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalActor_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "CreateDynamicMaterialInstance", nullptr, nullptr, sizeof(DecalActor_eventCreateDynamicMaterialInstance_Parms), Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics
	{
		struct DecalActor_eventGetDecalMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalActor_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "GetDecalMaterial", nullptr, nullptr, sizeof(DecalActor_eventGetDecalMaterial_Parms), Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADecalActor_GetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADecalActor_GetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics
	{
		struct DecalActor_eventSetDecalMaterial_Parms
		{
			UMaterialInterface* NewDecalMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDecalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::NewProp_NewDecalMaterial = { "NewDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalActor_eventSetDecalMaterial_Parms, NewDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::NewProp_NewDecalMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Decal" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADecalActor, nullptr, "SetDecalMaterial", nullptr, nullptr, sizeof(DecalActor_eventSetDecalMaterial_Parms), Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADecalActor_SetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADecalActor_SetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADecalActor_NoRegister()
	{
		return ADecalActor::StaticClass();
	}
	struct Z_Construct_UClass_ADecalActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decal;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecalActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADecalActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADecalActor_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 529896003
		{ &Z_Construct_UFunction_ADecalActor_GetDecalMaterial, "GetDecalMaterial" }, // 1922113584
		{ &Z_Construct_UFunction_ADecalActor_SetDecalMaterial, "SetDecalMaterial" }, // 2573499605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecalActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* DecalActor contains a DecalComponent which can be used to render material modifications on top of existing geometry.\n*\n* @see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n* @see UDecalComponent\n*/" },
		{ "HideCategories", "Collision Attachment Actor Input Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/DecalActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "DecalActor contains a DecalComponent which can be used to render material modifications on top of existing geometry.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n@see UDecalComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Decal" },
		{ "Comment", "/** The decal component for this decal actor */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Decal,Rendering|Components|Decal" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "The decal component for this decal actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADecalActor, Decal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/* Reference to the editor only arrow visualization component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "Reference to the editor only arrow visualization component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADecalActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/* Reference to the billboard component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "Reference to the billboard component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADecalActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Comment", "// formerly we used this component to draw a box, now we use the DecalComponentVisualizer\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DecalActor.h" },
		{ "ToolTip", "formerly we used this component to draw a box, now we use the DecalComponentVisualizer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0040000820080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADecalActor, BoxComponent_DEPRECATED), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADecalActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_Decal,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADecalActor_Statics::NewProp_BoxComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecalActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecalActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecalActor_Statics::ClassParams = {
		&ADecalActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADecalActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecalActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecalActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecalActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecalActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecalActor, 4158092388);
	template<> ENGINE_API UClass* StaticClass<ADecalActor>()
	{
		return ADecalActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecalActor(Z_Construct_UClass_ADecalActor, &ADecalActor::StaticClass, TEXT("/Script/Engine"), TEXT("ADecalActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecalActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ADecalActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceLandscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	static UEnum* ENDILandscape_SourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENDILandscape_SourceMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDILandscape_SourceMode>()
	{
		return ENDILandscape_SourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENDILandscape_SourceMode(ENDILandscape_SourceMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENDILandscape_SourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Hash() { return 427840606U; }
	UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENDILandscape_SourceMode"), 0, Get_Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENDILandscape_SourceMode::Default", (int64)ENDILandscape_SourceMode::Default },
				{ "ENDILandscape_SourceMode::Source", (int64)ENDILandscape_SourceMode::Source },
				{ "ENDILandscape_SourceMode::AttachParent", (int64)ENDILandscape_SourceMode::AttachParent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
				{ "AttachParent.Name", "ENDILandscape_SourceMode::AttachParent" },
				{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
				{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when explicitly specified.\n\x09- When no source is specified, fall back on attached actor or component or world.\n\x09*/" },
				{ "Default.Name", "ENDILandscape_SourceMode::Default" },
				{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when explicitly specified.\n- When no source is specified, fall back on attached actor or component or world." },
				{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
				{ "Source.Comment", "/**\n\x09Only use \"Source\".\n\x09*/" },
				{ "Source.Name", "ENDILandscape_SourceMode::Source" },
				{ "Source.ToolTip", "Only use \"Source\"." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENDILandscape_SourceMode",
				"ENDILandscape_SourceMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLandscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceLandscape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Data Interface allowing sampling of a Landscape */" },
		{ "DisplayName", "Landscape Sample" },
		{ "IncludePath", "NiagaraDataInterfaceLandscape.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "ToolTip", "Data Interface allowing sampling of a Landscape" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape = { "SourceLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceLandscape), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceMode), Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceLandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams = {
		&UNiagaraDataInterfaceLandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceLandscape, 3062086117);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceLandscape>()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceLandscape(Z_Construct_UClass_UNiagaraDataInterfaceLandscape, &UNiagaraDataInterfaceLandscape::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceLandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceLandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/ClothConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon();
// End Cross Module References
	static UEnum* EClothMassMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothMassMode"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothMassMode>()
	{
		return EClothMassMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClothMassMode(EClothMassMode_StaticEnum, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("EClothMassMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Hash() { return 4180103356U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClothMassMode"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClothMassMode::UniformMass", (int64)EClothMassMode::UniformMass },
				{ "EClothMassMode::TotalMass", (int64)EClothMassMode::TotalMass },
				{ "EClothMassMode::Density", (int64)EClothMassMode::Density },
				{ "EClothMassMode::MaxClothMassMode", (int64)EClothMassMode::MaxClothMassMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Different mass modes deciding the setup process. */" },
				{ "Density.Comment", "/** The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area. */" },
				{ "Density.Name", "EClothMassMode::Density" },
				{ "Density.ToolTip", "The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area." },
				{ "MaxClothMassMode.Hidden", "" },
				{ "MaxClothMassMode.Name", "EClothMassMode::MaxClothMassMode" },
				{ "ModuleRelativePath", "Public/ClothConfig.h" },
				{ "ToolTip", "Different mass modes deciding the setup process." },
				{ "TotalMass.Comment", "/** The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area. */" },
				{ "TotalMass.Name", "EClothMassMode::TotalMass" },
				{ "TotalMass.ToolTip", "The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area." },
				{ "UniformMass.Comment", "/** The mass value is used to set the same mass for each particle. */" },
				{ "UniformMass.Name", "EClothMassMode::UniformMass" },
				{ "UniformMass.ToolTip", "The mass value is used to set the same mass for each particle." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
				nullptr,
				"EClothMassMode",
				"EClothMassMode",
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
	void UClothConfigCommon::StaticRegisterNativesUClothConfigCommon()
	{
	}
	UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister()
	{
		return UClothConfigCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common configuration base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams = {
		&UClothConfigCommon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothConfigCommon, 1306299022);
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothConfigCommon>()
	{
		return UClothConfigCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothConfigCommon(Z_Construct_UClass_UClothConfigCommon, &UClothConfigCommon::StaticClass, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("UClothConfigCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigCommon);
	void UClothSharedConfigCommon::StaticRegisterNativesUClothSharedConfigCommon()
	{
	}
	UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister()
	{
		return UClothSharedConfigCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothSharedConfigCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothSharedConfigCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common shared configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common shared configuration base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothSharedConfigCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothSharedConfigCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams = {
		&UClothSharedConfigCommon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothSharedConfigCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothSharedConfigCommon, 1562473387);
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothSharedConfigCommon>()
	{
		return UClothSharedConfigCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothSharedConfigCommon(Z_Construct_UClass_UClothSharedConfigCommon, &UClothSharedConfigCommon::StaticClass, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("UClothSharedConfigCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothSharedConfigCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRHandTracking/Private/OpenXRHandTrackingLiveLinkRemapAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandTrackingLiveLinkRemapAsset() {}
// Cross Module References
	OPENXRHANDTRACKING_API UEnum* Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB();
	UPackage* Z_Construct_UPackage__Script_OpenXRHandTracking();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
// End Cross Module References
	static UEnum* EQuatSwizzleAxisB_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, Z_Construct_UPackage__Script_OpenXRHandTracking(), TEXT("EQuatSwizzleAxisB"));
		}
		return Singleton;
	}
	template<> OPENXRHANDTRACKING_API UEnum* StaticEnum<EQuatSwizzleAxisB>()
	{
		return EQuatSwizzleAxisB_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuatSwizzleAxisB(EQuatSwizzleAxisB_StaticEnum, TEXT("/Script/OpenXRHandTracking"), TEXT("EQuatSwizzleAxisB"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Hash() { return 3783647012U; }
	UEnum* Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuatSwizzleAxisB"), 0, Get_Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuatSwizzleAxisB::X", (int64)EQuatSwizzleAxisB::X },
				{ "EQuatSwizzleAxisB::Y", (int64)EQuatSwizzleAxisB::Y },
				{ "EQuatSwizzleAxisB::Z", (int64)EQuatSwizzleAxisB::Z },
				{ "EQuatSwizzleAxisB::W", (int64)EQuatSwizzleAxisB::W },
				{ "EQuatSwizzleAxisB::MinusX", (int64)EQuatSwizzleAxisB::MinusX },
				{ "EQuatSwizzleAxisB::MinusY", (int64)EQuatSwizzleAxisB::MinusY },
				{ "EQuatSwizzleAxisB::MinusZ", (int64)EQuatSwizzleAxisB::MinusZ },
				{ "EQuatSwizzleAxisB::MinusW", (int64)EQuatSwizzleAxisB::MinusW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MinusW.DisplayName", "-W" },
				{ "MinusW.Name", "EQuatSwizzleAxisB::MinusW" },
				{ "MinusX.DisplayName", "-X" },
				{ "MinusX.Name", "EQuatSwizzleAxisB::MinusX" },
				{ "MinusY.DisplayName", "-Y" },
				{ "MinusY.Name", "EQuatSwizzleAxisB::MinusY" },
				{ "MinusZ.DisplayName", "-Z" },
				{ "MinusZ.Name", "EQuatSwizzleAxisB::MinusZ" },
				{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
				{ "W.DisplayName", "W" },
				{ "W.Name", "EQuatSwizzleAxisB::W" },
				{ "X.DisplayName", "X" },
				{ "X.Name", "EQuatSwizzleAxisB::X" },
				{ "Y.DisplayName", "Y" },
				{ "Y.Name", "EQuatSwizzleAxisB::Y" },
				{ "Z.DisplayName", "Z" },
				{ "Z.Name", "EQuatSwizzleAxisB::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
				nullptr,
				"EQuatSwizzleAxisB",
				"EQuatSwizzleAxisB",
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
	void UOpenXRHandTrackingLiveLinkRemapAsset::StaticRegisterNativesUOpenXRHandTrackingLiveLinkRemapAsset()
	{
	}
	UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister()
	{
		return UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMetacarpals_MetaData[];
#endif
		static void NewProp_bHasMetacarpals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMetacarpals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetargetRotationOnly_MetaData[];
#endif
		static void NewProp_bRetargetRotationOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetargetRotationOnly;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleX_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleY_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleZ_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleZ;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleW_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleW_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleW;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingBoneNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HandTrackingBoneNameMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * OpenXR HandTracking LiveLink remapping asset\n  */" },
		{ "IncludePath", "OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "OpenXR HandTracking LiveLink remapping asset" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If true, remap the full human hand skeleton including metacarpals */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "If true, remap the full human hand skeleton including metacarpals" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingLiveLinkRemapAsset*)Obj)->bHasMetacarpals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals = { "bHasMetacarpals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Only apply the orientation to each bone */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Only apply the orientation to each bone" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingLiveLinkRemapAsset*)Obj)->bRetargetRotationOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly = { "bRetargetRotationOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenXRHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX = { "SwizzleX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleX), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY = { "SwizzleY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleY), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ = { "SwizzleZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleZ), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW = { "SwizzleW", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleW), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp = { "HandTrackingBoneNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandTrackingLiveLinkRemapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::ClassParams = {
		&UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRHandTrackingLiveLinkRemapAsset, 2117377987);
	template<> OPENXRHANDTRACKING_API UClass* StaticClass<UOpenXRHandTrackingLiveLinkRemapAsset>()
	{
		return UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRHandTrackingLiveLinkRemapAsset(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset, &UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass, TEXT("/Script/OpenXRHandTracking"), TEXT("UOpenXRHandTrackingLiveLinkRemapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandTrackingLiveLinkRemapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

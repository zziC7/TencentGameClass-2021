// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkTimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimecodeProvider() {}
// Cross Module References
	LIVELINK_API UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	static UEnum* ELiveLinkTimecodeProviderEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, Z_Construct_UPackage__Script_LiveLink(), TEXT("ELiveLinkTimecodeProviderEvaluationType"));
		}
		return Singleton;
	}
	template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>()
	{
		return ELiveLinkTimecodeProviderEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveLinkTimecodeProviderEvaluationType(ELiveLinkTimecodeProviderEvaluationType_StaticEnum, TEXT("/Script/LiveLink"), TEXT("ELiveLinkTimecodeProviderEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Hash() { return 4163349229U; }
	UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveLinkTimecodeProviderEvaluationType"), 0, Get_Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveLinkTimecodeProviderEvaluationType::Lerp", (int64)ELiveLinkTimecodeProviderEvaluationType::Lerp },
				{ "ELiveLinkTimecodeProviderEvaluationType::Nearest", (int64)ELiveLinkTimecodeProviderEvaluationType::Nearest },
				{ "ELiveLinkTimecodeProviderEvaluationType::Latest", (int64)ELiveLinkTimecodeProviderEvaluationType::Latest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Latest.Comment", "/** Use the newest frame that was received. */" },
				{ "Latest.Name", "ELiveLinkTimecodeProviderEvaluationType::Latest" },
				{ "Latest.ToolTip", "Use the newest frame that was received." },
				{ "Lerp.Comment", "/** Interpolate, or extrapolate, between the 2 frames that are the closest to evaluation. */" },
				{ "Lerp.Name", "ELiveLinkTimecodeProviderEvaluationType::Lerp" },
				{ "Lerp.ToolTip", "Interpolate, or extrapolate, between the 2 frames that are the closest to evaluation." },
				{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
				{ "Nearest.Comment", "/** Use the frame that is closest to evaluation. */" },
				{ "Nearest.Name", "ELiveLinkTimecodeProviderEvaluationType::Nearest" },
				{ "Nearest.ToolTip", "Use the frame that is closest to evaluation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveLink,
				nullptr,
				"ELiveLinkTimecodeProviderEvaluationType",
				"ELiveLinkTimecodeProviderEvaluationType",
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
	void ULiveLinkTimecodeProvider::StaticRegisterNativesULiveLinkTimecodeProvider()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister()
	{
		return ULiveLinkTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Evaluation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Evaluation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrameRate_MetaData[];
#endif
		static void NewProp_bOverrideFrameRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BufferSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Fetch the latest frames from the LiveLink subject and create a Timecode from it.\n */" },
		{ "IncludePath", "LiveLinkTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Fetch the latest frames from the LiveLink subject and create a Timecode from it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The specific subject that we listen to. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The specific subject that we listen to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** How to evaluate the timecode. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "How to evaluate the timecode." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation = { "Evaluation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, Evaluation), Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit(void* Obj)
	{
		((ULiveLinkTimecodeProvider*)Obj)->bOverrideFrameRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate = { "bOverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkTimecodeProvider), &Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Override the frame rate at which this timecode provider will create its timecode value.\n\x09 * By default, we use the subject frame rate.\n\x09 */" },
		{ "EditCondition", "bOverrideFrameRate" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Override the frame rate at which this timecode provider will create its timecode value.\nBy default, we use the subject frame rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate = { "OverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, OverrideFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ClampMax", "10" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once." },
		{ "UIMax", "10" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkTimecodeProvider, BufferSize), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams = {
		&ULiveLinkTimecodeProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkTimecodeProvider, 3663149809);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimecodeProvider>()
	{
		return ULiveLinkTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkTimecodeProvider(Z_Construct_UClass_ULiveLinkTimecodeProvider, &ULiveLinkTimecodeProvider::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

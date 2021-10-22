// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBlendType() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
// End Cross Module References
	static UEnum* EMovieSceneBlendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBlendType"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBlendType>()
	{
		return EMovieSceneBlendType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneBlendType(EMovieSceneBlendType_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneBlendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Hash() { return 3493050531U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneBlendType"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneBlendType::Invalid", (int64)EMovieSceneBlendType::Invalid },
				{ "EMovieSceneBlendType::Absolute", (int64)EMovieSceneBlendType::Absolute },
				{ "EMovieSceneBlendType::Additive", (int64)EMovieSceneBlendType::Additive },
				{ "EMovieSceneBlendType::Relative", (int64)EMovieSceneBlendType::Relative },
				{ "EMovieSceneBlendType::AdditiveFromBase", (int64)EMovieSceneBlendType::AdditiveFromBase },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.Comment", "/** Blends all other weighted values together as an average of the total weight */" },
				{ "Absolute.Name", "EMovieSceneBlendType::Absolute" },
				{ "Absolute.ToolTip", "Blends all other weighted values together as an average of the total weight" },
				{ "Additive.Comment", "/** Applies this value as a sum total of all other additives */" },
				{ "Additive.Name", "EMovieSceneBlendType::Additive" },
				{ "Additive.ToolTip", "Applies this value as a sum total of all other additives" },
				{ "AdditiveFromBase.Comment", "/** Applies this value as an additive equal to the difference between the current value and the first value */" },
				{ "AdditiveFromBase.Name", "EMovieSceneBlendType::AdditiveFromBase" },
				{ "AdditiveFromBase.ToolTip", "Applies this value as an additive equal to the difference between the current value and the first value" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Movie scene blend type enumeration */" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EMovieSceneBlendType::Invalid" },
				{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
				{ "Relative.Comment", "/** Applies this value as a sum total of all other additives and the initial value before the animation */" },
				{ "Relative.Name", "EMovieSceneBlendType::Relative" },
				{ "Relative.ToolTip", "Applies this value as a sum total of all other additives and the initial value before the animation" },
				{ "ToolTip", "Movie scene blend type enumeration" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneBlendType",
				"EMovieSceneBlendType",
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
class UScriptStruct* FOptionalMovieSceneBlendType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, Z_Construct_UPackage__Script_MovieScene(), TEXT("OptionalMovieSceneBlendType"), sizeof(FOptionalMovieSceneBlendType), Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FOptionalMovieSceneBlendType>()
{
	return FOptionalMovieSceneBlendType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOptionalMovieSceneBlendType(FOptionalMovieSceneBlendType::StaticStruct, TEXT("/Script/MovieScene"), TEXT("OptionalMovieSceneBlendType"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType
{
	FScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType()
	{
		UScriptStruct::DeferCppStructOps<FOptionalMovieSceneBlendType>(FName(TEXT("OptionalMovieSceneBlendType")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFOptionalMovieSceneBlendType;
	struct Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Optional blend type structure */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "Optional blend type structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalMovieSceneBlendType>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_MetaData[] = {
		{ "Category", "Blend Type" },
		{ "Comment", "/** The actual blend type */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "The actual blend type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptionalMovieSceneBlendType, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Blend Type" },
		{ "Comment", "/** Boolean indicating whether BlendType is valid */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "Boolean indicating whether BlendType is valid" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOptionalMovieSceneBlendType*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOptionalMovieSceneBlendType), &Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"OptionalMovieSceneBlendType",
		sizeof(FOptionalMovieSceneBlendType),
		alignof(FOptionalMovieSceneBlendType),
		Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OptionalMovieSceneBlendType"), sizeof(FOptionalMovieSceneBlendType), Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Hash() { return 757845122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

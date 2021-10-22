// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer() {}
// Cross Module References
	MOVIESCENE_API UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieScene, nullptr, "OnMovieSceneSequencePlayerEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMovieScenePositionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePositionType, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePositionType"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePositionType>()
	{
		return EMovieScenePositionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieScenePositionType(EMovieScenePositionType_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieScenePositionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Hash() { return 80289285U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieScenePositionType"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieScenePositionType::Frame", (int64)EMovieScenePositionType::Frame },
				{ "EMovieScenePositionType::Time", (int64)EMovieScenePositionType::Time },
				{ "EMovieScenePositionType::MarkedFrame", (int64)EMovieScenePositionType::MarkedFrame },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Frame.Name", "EMovieScenePositionType::Frame" },
				{ "MarkedFrame.Name", "EMovieScenePositionType::MarkedFrame" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "Time.Name", "EMovieScenePositionType::Time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieScenePositionType",
				"EMovieScenePositionType",
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
	static UEnum* EUpdatePositionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdatePositionMethod"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EUpdatePositionMethod>()
	{
		return EUpdatePositionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdatePositionMethod(EUpdatePositionMethod_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EUpdatePositionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Hash() { return 2075747666U; }
	UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdatePositionMethod"), 0, Get_Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdatePositionMethod::Play", (int64)EUpdatePositionMethod::Play },
				{ "EUpdatePositionMethod::Jump", (int64)EUpdatePositionMethod::Jump },
				{ "EUpdatePositionMethod::Scrub", (int64)EUpdatePositionMethod::Scrub },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Enum used to define how to update to a particular time\n */" },
				{ "Jump.Comment", "/** Jump to a specified position (without triggering events in between), using the current player status */" },
				{ "Jump.Name", "EUpdatePositionMethod::Jump" },
				{ "Jump.ToolTip", "Jump to a specified position (without triggering events in between), using the current player status" },
				{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
				{ "Play.Comment", "/** Update from the current position to a specified position (including triggering events), using the current player status */" },
				{ "Play.Name", "EUpdatePositionMethod::Play" },
				{ "Play.ToolTip", "Update from the current position to a specified position (including triggering events), using the current player status" },
				{ "Scrub.Comment", "/** Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing */" },
				{ "Scrub.Name", "EUpdatePositionMethod::Scrub" },
				{ "Scrub.ToolTip", "Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing" },
				{ "ToolTip", "Enum used to define how to update to a particular time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EUpdatePositionMethod",
				"EUpdatePositionMethod",
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
class UScriptStruct* FMovieSceneSequencePlaybackParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackParams"), sizeof(FMovieSceneSequencePlaybackParams), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackParams>()
{
	return FMovieSceneSequencePlaybackParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequencePlaybackParams(FMovieSceneSequencePlaybackParams::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequencePlaybackParams"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackParams
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackParams()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSequencePlaybackParams>(FName(TEXT("MovieSceneSequencePlaybackParams")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackParams;
	struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkedFrame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PositionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Frame), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Time" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "unit", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::MarkedFrame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame = { "MarkedFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, MarkedFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, PositionType), Z_Construct_UEnum_MovieScene_EMovieScenePositionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, UpdateMethod), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequencePlaybackParams",
		sizeof(FMovieSceneSequencePlaybackParams),
		alignof(FMovieSceneSequencePlaybackParams),
		Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequencePlaybackParams"), sizeof(FMovieSceneSequencePlaybackParams), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Hash() { return 2468596015U; }
class UScriptStruct* FMovieSceneSequencePlaybackSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackSettings"), sizeof(FMovieSceneSequencePlaybackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackSettings>()
{
	return FMovieSceneSequencePlaybackSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequencePlaybackSettings(FMovieSceneSequencePlaybackSettings::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequencePlaybackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSequencePlaybackSettings>(FName(TEXT("MovieSceneSequencePlaybackSettings")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequencePlaybackSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[];
#endif
		static void NewProp_bRandomStartTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestoreState_MetaData[];
#endif
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[];
#endif
		static void NewProp_bDisableMovementInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[];
#endif
		static void NewProp_bDisableLookAtInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[];
#endif
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[];
#endif
		static void NewProp_bHideHud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideHud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCameraCuts_MetaData[];
#endif
		static void NewProp_bDisableCameraCuts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCameraCuts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseAtEnd_MetaData[];
#endif
		static void NewProp_bPauseAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseAtEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for the level sequence player actor.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Settings for the level sequence player actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Auto-play the sequence when created */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Auto-play the sequence when created" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, LoopCount), Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** The rate at which to playback the animation */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The rate at which to playback the animation" },
		{ "Units", "Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at the specified offset from the start of the sequence's playback range */" },
		{ "DisplayName", "Start Offset" },
		{ "EditCondition", "!bRandomStartTime" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback at the specified offset from the start of the sequence's playback range" },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at a random time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback at a random time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bRandomStartTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Flag used to specify whether actor states should be restored on stop */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Flag used to specify whether actor states should be restored on stop" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bRestoreState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Disable Input from player during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableMovementInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput = { "bDisableMovementInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable LookAt Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Disable LookAt Input from player during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableLookAtInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput = { "bDisableLookAtInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide Player Pawn during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Hide Player Pawn during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bHidePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide HUD during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Hide HUD during play" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bHideHud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud = { "bHideHud", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Disable camera cuts" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableCameraCuts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts = { "bDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Pause the sequence when playback reaches the end rather than stopping it */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Pause the sequence when playback reaches the end rather than stopping it" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit(void* Obj)
	{
		((FMovieSceneSequencePlaybackSettings*)Obj)->bPauseAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd = { "bPauseAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequencePlaybackSettings",
		sizeof(FMovieSceneSequencePlaybackSettings),
		alignof(FMovieSceneSequencePlaybackSettings),
		Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequencePlaybackSettings"), sizeof(FMovieSceneSequencePlaybackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Hash() { return 3294670403U; }
class UScriptStruct* FMovieSceneSequenceReplProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceReplProperties"), sizeof(FMovieSceneSequenceReplProperties), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceReplProperties>()
{
	return FMovieSceneSequenceReplProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceReplProperties(FMovieSceneSequenceReplProperties::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceReplProperties"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceReplProperties
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceReplProperties()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSequenceReplProperties>(FName(TEXT("MovieSceneSequenceReplProperties")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceReplProperties;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKnownPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastKnownStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownNumLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastKnownNumLoops;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties that are broadcast from server->clients for time/state synchronization\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Properties that are broadcast from server->clients for time/state synchronization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceReplProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData[] = {
		{ "Comment", "/** The last known position of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known position of the sequence on the server" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition = { "LastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData[] = {
		{ "Comment", "/** The last known playback status of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known playback status of the sequence on the server" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus = { "LastKnownStatus", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownStatus), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData[] = {
		{ "Comment", "/** The last known number of loops of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known number of loops of the sequence on the server" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops = { "LastKnownNumLoops", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownNumLoops), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceReplProperties",
		sizeof(FMovieSceneSequenceReplProperties),
		alignof(FMovieSceneSequenceReplProperties),
		Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceReplProperties"), sizeof(FMovieSceneSequenceReplProperties), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Hash() { return 3649406961U; }
class UScriptStruct* FMovieSceneSequenceLoopCount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceLoopCount"), sizeof(FMovieSceneSequenceLoopCount), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceLoopCount>()
{
	return FMovieSceneSequenceLoopCount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceLoopCount(FMovieSceneSequenceLoopCount::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceLoopCount"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceLoopCount
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceLoopCount()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneSequenceLoopCount>(FName(TEXT("MovieSceneSequenceLoopCount")));
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceLoopCount;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\n * Defined as a struct rather than an int so a property type customization can be bound to it\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\nDefined as a struct rather than an int so a property type customization can be bound to it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceLoopCount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceLoopCount, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceLoopCount",
		sizeof(FMovieSceneSequenceLoopCount),
		alignof(FMovieSceneSequenceLoopCount),
		Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceLoopCount"), sizeof(FMovieSceneSequenceLoopCount), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Hash() { return 817584880U; }
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_OnStopEvent)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_StoppedTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPC_OnStopEvent_Implementation(Z_Param_StoppedTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent)
	{
		P_GET_ENUM(EUpdatePositionMethod,Z_Param_Method);
		P_GET_STRUCT(FFrameTime,Z_Param_RelevantTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod(Z_Param_Method),Z_Param_RelevantTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetObjectBindings)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->GetObjectBindings(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetBoundObjects)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDisableCameraCuts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableCameraCuts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetDisableCameraCuts)
	{
		P_GET_UBOOL(Z_Param_bInDisableCameraCuts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableCameraCuts(Z_Param_bInDisableCameraCuts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->JumpToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ScrubToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToMarkedFrame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayToMarkedFrame(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToSeconds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayToSeconds(Z_Param_TimeInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execJumpToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrubToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrubToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayToFrame)
	{
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayToFrame(Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRestoreState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlaybackPosition)
	{
		P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackPosition(Z_Param_PlaybackParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayTo)
	{
		P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTo(Z_Param_PlaybackParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetTimeRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeRange(Z_Param_StartTime,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRange(Z_Param_StartFrame,Z_Param_Duration,Z_Param_SubFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetEndTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetEndTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRate)
	{
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRate(Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGoToEndAndStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToEndAndStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStopAtCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAtCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrub)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Scrub();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayLooping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLooping(Z_Param_NumLoops);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execChangePlaybackDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePlaybackDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	static FName NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent = FName(TEXT("RPC_ExplicitServerUpdateEvent"));
	void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime)
	{
		MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms Parms;
		Parms.Method=Method;
		Parms.RelevantTime=RelevantTime;
		ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent),&Parms);
	}
	static FName NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent = FName(TEXT("RPC_OnStopEvent"));
	void UMovieSceneSequencePlayer::RPC_OnStopEvent(FFrameTime StoppedTime)
	{
		MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms Parms;
		Parms.StoppedTime=StoppedTime;
		ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent),&Parms);
	}
	void UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer()
	{
		UClass* Class = UMovieSceneSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePlaybackDirection", &UMovieSceneSequencePlayer::execChangePlaybackDirection },
			{ "GetBoundObjects", &UMovieSceneSequencePlayer::execGetBoundObjects },
			{ "GetCurrentTime", &UMovieSceneSequencePlayer::execGetCurrentTime },
			{ "GetDisableCameraCuts", &UMovieSceneSequencePlayer::execGetDisableCameraCuts },
			{ "GetDuration", &UMovieSceneSequencePlayer::execGetDuration },
			{ "GetEndTime", &UMovieSceneSequencePlayer::execGetEndTime },
			{ "GetFrameDuration", &UMovieSceneSequencePlayer::execGetFrameDuration },
			{ "GetFrameRate", &UMovieSceneSequencePlayer::execGetFrameRate },
			{ "GetObjectBindings", &UMovieSceneSequencePlayer::execGetObjectBindings },
			{ "GetPlayRate", &UMovieSceneSequencePlayer::execGetPlayRate },
			{ "GetSequence", &UMovieSceneSequencePlayer::execGetSequence },
			{ "GetStartTime", &UMovieSceneSequencePlayer::execGetStartTime },
			{ "GoToEndAndStop", &UMovieSceneSequencePlayer::execGoToEndAndStop },
			{ "IsPaused", &UMovieSceneSequencePlayer::execIsPaused },
			{ "IsPlaying", &UMovieSceneSequencePlayer::execIsPlaying },
			{ "IsReversed", &UMovieSceneSequencePlayer::execIsReversed },
			{ "JumpToFrame", &UMovieSceneSequencePlayer::execJumpToFrame },
			{ "JumpToMarkedFrame", &UMovieSceneSequencePlayer::execJumpToMarkedFrame },
			{ "JumpToSeconds", &UMovieSceneSequencePlayer::execJumpToSeconds },
			{ "Pause", &UMovieSceneSequencePlayer::execPause },
			{ "Play", &UMovieSceneSequencePlayer::execPlay },
			{ "PlayLooping", &UMovieSceneSequencePlayer::execPlayLooping },
			{ "PlayReverse", &UMovieSceneSequencePlayer::execPlayReverse },
			{ "PlayTo", &UMovieSceneSequencePlayer::execPlayTo },
			{ "PlayToFrame", &UMovieSceneSequencePlayer::execPlayToFrame },
			{ "PlayToMarkedFrame", &UMovieSceneSequencePlayer::execPlayToMarkedFrame },
			{ "PlayToSeconds", &UMovieSceneSequencePlayer::execPlayToSeconds },
			{ "RestoreState", &UMovieSceneSequencePlayer::execRestoreState },
			{ "RPC_ExplicitServerUpdateEvent", &UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent },
			{ "RPC_OnStopEvent", &UMovieSceneSequencePlayer::execRPC_OnStopEvent },
			{ "Scrub", &UMovieSceneSequencePlayer::execScrub },
			{ "ScrubToFrame", &UMovieSceneSequencePlayer::execScrubToFrame },
			{ "ScrubToMarkedFrame", &UMovieSceneSequencePlayer::execScrubToMarkedFrame },
			{ "ScrubToSeconds", &UMovieSceneSequencePlayer::execScrubToSeconds },
			{ "SetDisableCameraCuts", &UMovieSceneSequencePlayer::execSetDisableCameraCuts },
			{ "SetFrameRange", &UMovieSceneSequencePlayer::execSetFrameRange },
			{ "SetFrameRate", &UMovieSceneSequencePlayer::execSetFrameRate },
			{ "SetPlaybackPosition", &UMovieSceneSequencePlayer::execSetPlaybackPosition },
			{ "SetPlayRate", &UMovieSceneSequencePlayer::execSetPlayRate },
			{ "SetTimeRange", &UMovieSceneSequencePlayer::execSetTimeRange },
			{ "Stop", &UMovieSceneSequencePlayer::execStop },
			{ "StopAtCurrentTime", &UMovieSceneSequencePlayer::execStopAtCurrentTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Changes the direction of playback (go in reverse if it was going forward, or vice versa) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ChangePlaybackDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics
	{
		struct MovieSceneSequencePlayer_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Retrieve all objects currently bound to the specified binding identifier */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Retrieve all objects currently bound to the specified binding identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetBoundObjects", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetBoundObjects_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetCurrentTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the current playback position\n\x09 * @return The current playback position\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the current playback position\n@return The current playback position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetCurrentTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics
	{
		struct MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDisableCameraCuts", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetDuration_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the total duration of the sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the total duration of the sequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDuration", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetDuration_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetEndTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetEndTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to finish playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to finish playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetEndTime", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetEndTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics
	{
		struct MovieSceneSequencePlayer_eventGetFrameDuration_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's duration in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameDuration", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetFrameDuration_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequencePlayer_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's display rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's display rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetFrameRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics
	{
		struct MovieSceneSequencePlayer_eventGetObjectBindings_Parms
		{
			UObject* InObject;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the object bindings for the requested object */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the object bindings for the requested object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetObjectBindings", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetObjectBindings_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics
	{
		struct MovieSceneSequencePlayer_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the playback rate of this player. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the playback rate of this player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetPlayRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics
	{
		struct MovieSceneSequencePlayer_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Access the sequence this player is playing\n\x09 * @return the sequence currently assigned to this player\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Access the sequence this player is playing\n@return the sequence currently assigned to this player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetSequence", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetSequence_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct MovieSceneSequencePlayer_eventGetStartTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetStartTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to start playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to start playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetStartTime", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventGetStartTime_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Go to end of the sequence and stop. Adheres to 'When Finished' section rules." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GoToEndAndStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics
	{
		struct MovieSceneSequencePlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is paused. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is paused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics
	{
		struct MovieSceneSequencePlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is actively playing. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is actively playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics
	{
		struct MovieSceneSequencePlayer_eventIsReversed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsReversed_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether playback is reversed. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether playback is reversed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsReversed", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventIsReversed_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventJumpToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Jump To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventJumpToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_InLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToMarkedFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventJumpToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventJumpToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventJumpToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "JumpToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Jump To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "JumpToSeconds", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventJumpToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Pause playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Pause playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Start playback forwards from the current time cursor position, using the current play rate. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback forwards from the current time cursor position, using the current play rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayLooping_Parms
		{
			int32 NumLoops;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayLooping_Parms, NumLoops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Start playback from the current time cursor position, looping the specified number of times.\n\x09 * @param NumLoops - The number of loops to play. -1 indicates infinite looping.\n\x09 */" },
		{ "CPP_Default_NumLoops", "-1" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback from the current time cursor position, looping the specified number of times.\n@param NumLoops - The number of loops to play. -1 indicates infinite looping." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayLooping", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventPlayLooping_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Reverse playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Reverse playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayReverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayTo_Parms
		{
			FMovieSceneSequencePlaybackParams PlaybackParams;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayTo_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Play from the current position to the requested position and pause. If requested position is before the current position, \n\x09 * playback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this \n\x09 * playback.\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to play to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Play from the current position to the requested position and pause. If requested position is before the current position,\nplayback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this\nplayback.\n\n@param PlaybackParams The position settings (ie. the position to play to)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayTo", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventPlayTo_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventPlayToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Play To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventPlayToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_InLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToMarkedFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventPlayToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventPlayToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PlayToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Play To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayToSeconds", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventPlayToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Restore any changes made by this player to their original state\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Restore any changes made by this player to their original state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RestoreState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelevantTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, Method), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime = { "RelevantTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, RelevantTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_ExplicitServerUpdateEvent", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoppedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime = { "StoppedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms, StoppedTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server when Stop() is called in order to differentiate Stops from Pauses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server when Stop() is called in order to differentiate Stops from Pauses." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_OnStopEvent", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Scrub playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Scrub playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Scrub", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneSequencePlayer_eventScrubToFrame_Parms
		{
			FFrameTime NewPosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToFrame_Parms, NewPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToFrame is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Scrub To (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventScrubToFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics
	{
		struct MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms
		{
			FString InLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_InLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToMarkedFrame is deprecated, use SetPlaybackPosition." },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToMarkedFrame", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventScrubToMarkedFrame_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics
	{
		struct MovieSceneSequencePlayer_eventScrubToSeconds_Parms
		{
			float TimeInSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventScrubToSeconds_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ScrubToSeconds is deprecated, use SetPlaybackPosition." },
		{ "DisplayName", "Scrub To (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ScrubToSeconds", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventScrubToSeconds_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics
	{
		struct MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms
		{
			bool bInDisableCameraCuts;
		};
		static void NewProp_bInDisableCameraCuts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInDisableCameraCuts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit(void* Obj)
	{
		((MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms*)Obj)->bInDisableCameraCuts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts = { "bInDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetDisableCameraCuts", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics
	{
		struct MovieSceneSequencePlayer_eventSetFrameRange_Parms
		{
			int32 StartFrame;
			int32 Duration;
			float SubFrames;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames = { "SubFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, SubFrames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\x09 *\n\x09 * @param StartFrame      The frame number to start playing back the sequence\n\x09 * @param Duration        The number of frames to play\n\x09 */" },
		{ "CPP_Default_SubFrames", "0.000000" },
		{ "DisplayName", "Set Play Range (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\n@param StartFrame      The frame number to start playing back the sequence\n@param Duration        The number of frames to play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRange", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetFrameRange_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneSequencePlayer_eventSetFrameRate_Parms
		{
			FFrameRate FrameRate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the frame-rate that this player should play with, making all frame numbers in the specified time-space\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the frame-rate that this player should play with, making all frame numbers in the specified time-space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRate", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetFrameRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics
	{
		struct MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms
		{
			FMovieSceneSequencePlaybackParams PlaybackParams;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing. \n\x09 * Triggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to set playback to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing.\nTriggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\n@param PlaybackParams The position settings (ie. the position to set playback to)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlaybackPosition", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics
	{
		struct MovieSceneSequencePlayer_eventSetPlayRate_Parms
		{
			float PlayRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the playback rate of this player. Negative values will play the animation in reverse.\n\x09 * @param PlayRate - The new rate of playback for the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the playback rate of this player. Negative values will play the animation in reverse.\n@param PlayRate - The new rate of playback for the animation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetPlayRate_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics
	{
		struct MovieSceneSequencePlayer_eventSetTimeRange_Parms
		{
			float StartTime;
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\x09 *\n\x09 * @param StartTime       The time to start playing back the sequence in seconds\n\x09 * @param Duration        The length to play for\n\x09 */" },
		{ "DisplayName", "Set Play Range (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\n@param StartTime       The time to start playing back the sequence in seconds\n@param Duration        The length to play for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetTimeRange", nullptr, nullptr, sizeof(MovieSceneSequencePlayer_eventSetTimeRange_Parms), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback without moving the cursor. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback without moving the cursor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "StopAtCurrentTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister()
	{
		return UMovieSceneSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayReverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSubFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSubFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNumLoops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSyncProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetSyncProps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_PlaybackClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 3193254994
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects, "GetBoundObjects" }, // 1039479104
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime, "GetCurrentTime" }, // 1077797969
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts, "GetDisableCameraCuts" }, // 2739535570
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration, "GetDuration" }, // 1083491191
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime, "GetEndTime" }, // 996360607
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration, "GetFrameDuration" }, // 3698908068
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate, "GetFrameRate" }, // 3150953715
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings, "GetObjectBindings" }, // 1149136812
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate, "GetPlayRate" }, // 880081859
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence, "GetSequence" }, // 835348159
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime, "GetStartTime" }, // 75287591
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop, "GoToEndAndStop" }, // 479045930
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused, "IsPaused" }, // 1527750286
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying, "IsPlaying" }, // 805153363
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed, "IsReversed" }, // 683740113
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToFrame, "JumpToFrame" }, // 3081844738
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToMarkedFrame, "JumpToMarkedFrame" }, // 4190221294
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_JumpToSeconds, "JumpToSeconds" }, // 1560532198
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause, "Pause" }, // 1843893684
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Play, "Play" }, // 2620282372
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping, "PlayLooping" }, // 1283521164
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse, "PlayReverse" }, // 2558002516
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo, "PlayTo" }, // 3029972948
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToFrame, "PlayToFrame" }, // 3296969895
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToMarkedFrame, "PlayToMarkedFrame" }, // 1005076902
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayToSeconds, "PlayToSeconds" }, // 1686128136
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState, "RestoreState" }, // 1998276666
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent, "RPC_ExplicitServerUpdateEvent" }, // 1119043572
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent, "RPC_OnStopEvent" }, // 2820739942
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub, "Scrub" }, // 2446266468
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToFrame, "ScrubToFrame" }, // 3634404954
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToMarkedFrame, "ScrubToMarkedFrame" }, // 1715050633
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ScrubToSeconds, "ScrubToSeconds" }, // 593782331
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts, "SetDisableCameraCuts" }, // 1151059062
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange, "SetFrameRange" }, // 656072170
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate, "SetFrameRate" }, // 490084983
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition, "SetPlaybackPosition" }, // 1058930976
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate, "SetPlayRate" }, // 3605540259
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange, "SetTimeRange" }, // 1275677789
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop, "Stop" }, // 1137799072
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime, "StopAtCurrentTime" }, // 3456149497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class that provides consistent player behaviour for various animation players\n */" },
		{ "IncludePath", "MovieSceneSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract class that provides consistent player behaviour for various animation players" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay = { "OnPlay", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlay), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played in reverse */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played in reverse" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse = { "OnPlayReverse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlayReverse), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is stopped */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is stopped" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnStop), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is paused */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is paused" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause = { "OnPause", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPause), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player finishes naturally (without explicitly calling stop) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player finishes naturally (without explicitly calling stop)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnFinished), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** Movie player status. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Movie player status." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, Status), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** Whether we're currently playing in reverse. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Whether we're currently playing in reverse." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((UMovieSceneSequencePlayer*)Obj)->bReversePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneSequencePlayer), &Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The sequence to play back" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames = { "DurationFrames", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationFrames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames = { "DurationSubFrames", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationSubFrames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData[] = {
		{ "Comment", "/** The number of times we have looped in the current playback */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The number of times we have looped in the current playback" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops = { "CurrentNumLoops", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Comment", "/** Specific playback settings for the animation. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Specific playback settings for the animation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData[] = {
		{ "Comment", "/** The root template instance we're evaluating */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The root template instance we're evaluating" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData[] = {
		{ "Comment", "/** Replicated playback status and current time that are replicated to clients */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Replicated playback status and current time that are replicated to clients" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps = { "NetSyncProps", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, NetSyncProps), Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData[] = {
		{ "Comment", "/** External client pointer in charge of playing back this sequence */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "External client pointer in charge of playing back this sequence" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient = { "PlaybackClient", nullptr, (EPropertyFlags)0x0024080000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackClient), Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData[] = {
		{ "Comment", "/** Global tick manager, held here to keep it alive while world sequences are in play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Global tick manager, held here to keep it alive while world sequences are in play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager = { "TickManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, TickManager), Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams = {
		&UMovieSceneSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSequencePlayer, 1858513651);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequencePlayer>()
	{
		return UMovieSceneSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequencePlayer(Z_Construct_UClass_UMovieSceneSequencePlayer, &UMovieSceneSequencePlayer::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequencePlayer"), false, nullptr, nullptr, nullptr);

	void UMovieSceneSequencePlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReversePlayback(TEXT("bReversePlayback"));
		static const FName Name_StartTime(TEXT("StartTime"));
		static const FName Name_DurationFrames(TEXT("DurationFrames"));
		static const FName Name_DurationSubFrames(TEXT("DurationSubFrames"));
		static const FName Name_PlaybackSettings(TEXT("PlaybackSettings"));
		static const FName Name_NetSyncProps(TEXT("NetSyncProps"));

		const bool bIsValid = true
			&& Name_bReversePlayback == ClassReps[(int32)ENetFields_Private::bReversePlayback].Property->GetFName()
			&& Name_StartTime == ClassReps[(int32)ENetFields_Private::StartTime].Property->GetFName()
			&& Name_DurationFrames == ClassReps[(int32)ENetFields_Private::DurationFrames].Property->GetFName()
			&& Name_DurationSubFrames == ClassReps[(int32)ENetFields_Private::DurationSubFrames].Property->GetFName()
			&& Name_PlaybackSettings == ClassReps[(int32)ENetFields_Private::PlaybackSettings].Property->GetFName()
			&& Name_NetSyncProps == ClassReps[(int32)ENetFields_Private::NetSyncProps].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMovieSceneSequencePlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

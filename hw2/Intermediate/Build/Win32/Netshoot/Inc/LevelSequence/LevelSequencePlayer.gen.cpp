// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer() {}
// Cross Module References
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics
	{
		struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms
		{
			UCameraComponent* CameraComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelSequence, nullptr, "OnLevelSequencePlayerCameraCutEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FLevelSequenceCameraSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceCameraSettings"), sizeof(FLevelSequenceCameraSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceCameraSettings>()
{
	return FLevelSequenceCameraSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceCameraSettings(FLevelSequenceCameraSettings::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceCameraSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceCameraSettings
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceCameraSettings()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequenceCameraSettings>(FName(TEXT("LevelSequenceCameraSettings")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceCameraSettings;
	struct Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAspectRatioAxisConstraint_MetaData[];
#endif
		static void NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAspectRatioAxisConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceCameraSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj)
	{
		((FLevelSequenceCameraSettings*)Obj)->bOverrideAspectRatioAxisConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint = { "bOverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceCameraSettings), &Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "EditCondition", "bOverrideAspectRatioAxisConstraint" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceCameraSettings, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceCameraSettings",
		sizeof(FLevelSequenceCameraSettings),
		alignof(FLevelSequenceCameraSettings),
		Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceCameraSettings"), sizeof(FLevelSequenceCameraSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Hash() { return 3372373281U; }
class UScriptStruct* FLevelSequencePlayerSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequencePlayerSnapshot>()
{
	return FLevelSequencePlayerSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequencePlayerSnapshot(FLevelSequencePlayerSnapshot::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequencePlayerSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequencePlayerSnapshot>(FName(TEXT("LevelSequencePlayerSnapshot")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot;
	struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MasterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentShotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotLocalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentShotLocalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotSourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentShotSourceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTimecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceTimecode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Frame snapshot information for a level sequence\n */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Frame snapshot information for a level sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName = { "MasterName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime = { "MasterTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName = { "CurrentShotName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime = { "CurrentShotLocalTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotLocalTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime = { "CurrentShotSourceTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotSourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode = { "SourceTimecode", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTimecode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, Settings), Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot = { "ActiveShot", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ActiveShot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID = { "ShotID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ShotID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequencePlayerSnapshot",
		sizeof(FLevelSequencePlayerSnapshot),
		alignof(FLevelSequencePlayerSnapshot),
		Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Hash() { return 2887774183U; }
class UScriptStruct* FLevelSequenceSnapshotSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceSnapshotSettings>()
{
	return FLevelSequenceSnapshotSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceSnapshotSettings(FLevelSequenceSnapshotSettings::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceSnapshotSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings()
	{
		UScriptStruct::DeferCppStructOps<FLevelSequenceSnapshotSettings>(FName(TEXT("LevelSequenceSnapshotSettings")));
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings;
	struct Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroPadAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZeroPadAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Zero pad frames */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Zero pad frames" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount = { "ZeroPadAmount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, ZeroPadAmount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Playback framerate */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Playback framerate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceSnapshotSettings",
		sizeof(FLevelSequenceSnapshotSettings),
		alignof(FLevelSequenceSnapshotSettings),
		Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Hash() { return 485746853U; }
	DEFINE_FUNCTION(ULevelSequencePlayer::execGetActiveCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetActiveCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlayer::execCreateLevelSequencePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings);
		P_GET_OBJECT_REF(ALevelSequenceActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequencePlayer**)Z_Param__Result=ULevelSequencePlayer::CreateLevelSequencePlayer(Z_Param_WorldContextObject,Z_Param_LevelSequence,Z_Param_Settings,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	void ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer()
	{
		UClass* Class = ULevelSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLevelSequencePlayer", &ULevelSequencePlayer::execCreateLevelSequencePlayer },
			{ "GetActiveCameraComponent", &ULevelSequencePlayer::execGetActiveCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics
	{
		struct LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			ULevelSequence* LevelSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ALevelSequenceActor* OutActor;
			ULevelSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, OutActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Create a new level sequence player.\n\x09 *\n\x09 * @param WorldContextObject Context object from which to retrieve a UWorld.\n\x09 * @param LevelSequence The level sequence to play.\n\x09 * @param Settings The desired playback settings\n\x09 * @param OutActor The level sequence actor created to play this sequence.\n\x09 */" },
		{ "DynamicOutputParam", "OutActor" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Create a new level sequence player.\n\n@param WorldContextObject Context object from which to retrieve a UWorld.\n@param LevelSequence The level sequence to play.\n@param Settings The desired playback settings\n@param OutActor The level sequence actor created to play this sequence." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, nullptr, "CreateLevelSequencePlayer", nullptr, nullptr, sizeof(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics
	{
		struct LevelSequencePlayer_eventGetActiveCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequencePlayer_eventGetActiveCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the active camera cut camera */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Get the active camera cut camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, nullptr, "GetActiveCameraComponent", nullptr, nullptr, sizeof(LevelSequencePlayer_eventGetActiveCameraComponent_Parms), Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraCut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraCut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer, "CreateLevelSequencePlayer" }, // 1170599305
		{ &Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent, "GetActiveCameraComponent" }, // 3871812254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n *\n * This class keeps track of playback state and provides functions for manipulating\n * an level sequence while its playing.\n */" },
		{ "IncludePath", "LevelSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n\nThis class keeps track of playback state and provides functions for manipulating\nan level sequence while its playing." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when there is a camera cut */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Event triggered when there is a camera cut" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut = { "OnCameraCut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequencePlayer, OnCameraCut), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams = {
		&ULevelSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequencePlayer, 1566818253);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequencePlayer>()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequencePlayer(Z_Construct_UClass_ULevelSequencePlayer, &ULevelSequencePlayer::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

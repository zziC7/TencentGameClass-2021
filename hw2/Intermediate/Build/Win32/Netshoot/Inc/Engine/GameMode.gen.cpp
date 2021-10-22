// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameMode::execSetBandwidthLimit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AsyncIOBandwidthLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBandwidthLimit(Z_Param_AsyncIOBandwidthLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execSay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Say(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execReadyToEndMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadyToEndMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execReadyToStartMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execAbortMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execRestartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execEndMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execStartMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execIsMatchInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameMode::execGetMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMatchState();
		P_NATIVE_END;
	}
	static FName NAME_AGameMode_K2_OnSetMatchState = FName(TEXT("K2_OnSetMatchState"));
	void AGameMode::K2_OnSetMatchState(FName NewState)
	{
		GameMode_eventK2_OnSetMatchState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_K2_OnSetMatchState),&Parms);
	}
	static FName NAME_AGameMode_ReadyToEndMatch = FName(TEXT("ReadyToEndMatch"));
	bool AGameMode::ReadyToEndMatch()
	{
		GameMode_eventReadyToEndMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_ReadyToEndMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameMode_ReadyToStartMatch = FName(TEXT("ReadyToStartMatch"));
	bool AGameMode::ReadyToStartMatch()
	{
		GameMode_eventReadyToStartMatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGameMode_ReadyToStartMatch),&Parms);
		return !!Parms.ReturnValue;
	}
	void AGameMode::StaticRegisterNativesAGameMode()
	{
		UClass* Class = AGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortMatch", &AGameMode::execAbortMatch },
			{ "EndMatch", &AGameMode::execEndMatch },
			{ "GetMatchState", &AGameMode::execGetMatchState },
			{ "IsMatchInProgress", &AGameMode::execIsMatchInProgress },
			{ "ReadyToEndMatch", &AGameMode::execReadyToEndMatch },
			{ "ReadyToStartMatch", &AGameMode::execReadyToStartMatch },
			{ "RestartGame", &AGameMode::execRestartGame },
			{ "Say", &AGameMode::execSay },
			{ "SetBandwidthLimit", &AGameMode::execSetBandwidthLimit },
			{ "StartMatch", &AGameMode::execStartMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameMode_AbortMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_AbortMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Report that a match has failed due to unrecoverable error */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Report that a match has failed due to unrecoverable error" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_AbortMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "AbortMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_AbortMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_AbortMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_AbortMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_AbortMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_EndMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_EndMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Transition from InProgress to WaitingPostMatch. You can call this manually, will also get called if ReadyToEndMatch returns true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_EndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "EndMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_EndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_EndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_EndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_EndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_GetMatchState_Statics
	{
		struct GameMode_eventGetMatchState_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameMode_GetMatchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameMode_eventGetMatchState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_GetMatchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_GetMatchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns the current match state, this is an accessor to protect the state machine flow */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns the current match state, this is an accessor to protect the state machine flow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_GetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "GetMatchState", nullptr, nullptr, sizeof(GameMode_eventGetMatchState_Parms), Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_GetMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_GetMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_GetMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics
	{
		struct GameMode_eventIsMatchInProgress_Parms
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
	void Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameMode_eventIsMatchInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameMode_eventIsMatchInProgress_Parms), &Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if the match state is InProgress or other gameplay state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if the match state is InProgress or other gameplay state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "IsMatchInProgress", nullptr, nullptr, sizeof(GameMode_eventIsMatchInProgress_Parms), Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_IsMatchInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_IsMatchInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameMode_eventK2_OnSetMatchState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Implementable event to respond to match state changes */" },
		{ "DisplayName", "OnSetMatchState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ScriptName", "OnSetMatchState" },
		{ "ToolTip", "Implementable event to respond to match state changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "K2_OnSetMatchState", nullptr, nullptr, sizeof(GameMode_eventK2_OnSetMatchState_Parms), Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_K2_OnSetMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_K2_OnSetMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameMode_eventReadyToEndMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameMode_eventReadyToEndMatch_Parms), &Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if ready to End Match. Games should override this */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if ready to End Match. Games should override this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "ReadyToEndMatch", nullptr, nullptr, sizeof(GameMode_eventReadyToEndMatch_Parms), Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_ReadyToEndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_ReadyToEndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameMode_eventReadyToStartMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameMode_eventReadyToStartMatch_Parms), &Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if ready to Start Match. Games should override this */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Returns true if ready to Start Match. Games should override this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "ReadyToStartMatch", nullptr, nullptr, sizeof(GameMode_eventReadyToStartMatch_Parms), Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_ReadyToStartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_ReadyToStartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_RestartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_RestartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Restart the game, by default travel to the current map */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Restart the game, by default travel to the current map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "RestartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_RestartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_RestartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_RestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_Say_Statics
	{
		struct GameMode_eventSay_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameMode_eventSay_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_Say_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_Say_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Exec command to broadcast a string to all players */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Exec command to broadcast a string to all players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_Say_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "Say", nullptr, nullptr, sizeof(GameMode_eventSay_Parms), Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_Say_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_Say_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_Say()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_Say_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics
	{
		struct GameMode_eventSetBandwidthLimit_Parms
		{
			float AsyncIOBandwidthLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncIOBandwidthLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::NewProp_AsyncIOBandwidthLimit = { "AsyncIOBandwidthLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameMode_eventSetBandwidthLimit_Parms, AsyncIOBandwidthLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::NewProp_AsyncIOBandwidthLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "SetBandwidthLimit", nullptr, nullptr, sizeof(GameMode_eventSetBandwidthLimit_Parms), Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_SetBandwidthLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_SetBandwidthLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameMode_StartMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameMode_StartMatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Transition from WaitingToStart to InProgress. You can call this manually, will also get called if ReadyToStartMatch returns true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameMode_StartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameMode, nullptr, "StartMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameMode_StartMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameMode_StartMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameMode_StartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameMode_StartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameMode_NoRegister()
	{
		return AGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MatchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayedStart_MetaData[];
#endif
		static void NewProp_bDelayedStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayedStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSpectators_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpectators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRespawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRespawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTravellingPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTravellingPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactivePlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InactivePlayerArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactivePlayerStateLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactivePlayerStateLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInactivePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInactivePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandleDedicatedServerReplays_MetaData[];
#endif
		static void NewProp_bHandleDedicatedServerReplays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandleDedicatedServerReplays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameMode_AbortMatch, "AbortMatch" }, // 380855941
		{ &Z_Construct_UFunction_AGameMode_EndMatch, "EndMatch" }, // 418907071
		{ &Z_Construct_UFunction_AGameMode_GetMatchState, "GetMatchState" }, // 1482509133
		{ &Z_Construct_UFunction_AGameMode_IsMatchInProgress, "IsMatchInProgress" }, // 2240714062
		{ &Z_Construct_UFunction_AGameMode_K2_OnSetMatchState, "K2_OnSetMatchState" }, // 2955413646
		{ &Z_Construct_UFunction_AGameMode_ReadyToEndMatch, "ReadyToEndMatch" }, // 1701613839
		{ &Z_Construct_UFunction_AGameMode_ReadyToStartMatch, "ReadyToStartMatch" }, // 1778270528
		{ &Z_Construct_UFunction_AGameMode_RestartGame, "RestartGame" }, // 747510542
		{ &Z_Construct_UFunction_AGameMode_Say, "Say" }, // 2438693130
		{ &Z_Construct_UFunction_AGameMode_SetBandwidthLimit, "SetBandwidthLimit" }, // 3248947787
		{ &Z_Construct_UFunction_AGameMode_StartMatch, "StartMatch" }, // 424848725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.\n * It has default behavior for picking spawn points and match state.\n * If you want a simpler base, inherit from GameModeBase instead.\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameMode.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode is a subclass of GameModeBase that behaves like a multiplayer match-based game.\nIt has default behavior for picking spawn points and match state.\nIf you want a simpler base, inherit from GameModeBase instead." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState_MetaData[] = {
		{ "Comment", "/** What match state we are currently in */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "What match state we are currently in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, MatchState), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Whether the game should immediately start when the first player logs in. Affects the default behavior of ReadyToStartMatch" },
	};
#endif
	void Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_SetBit(void* Obj)
	{
		((AGameMode*)Obj)->bDelayedStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart = { "bDelayedStart", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameMode), &Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Current number of spectators. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Current number of spectators." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators = { "NumSpectators", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, NumSpectators), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Current number of human players. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Current number of human players." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers = { "NumPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, NumPlayers), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** number of non-human players (AI controlled but participating as a player). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "number of non-human players (AI controlled but participating as a player)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots = { "NumBots", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, NumBots), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Minimum time before player can respawn after dying. */" },
		{ "DisplayName", "Minimum Respawn Delay" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Minimum time before player can respawn after dying." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay = { "MinRespawnDelay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, MinRespawnDelay), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Number of players that are still traveling from a previous map */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Number of players that are still traveling from a previous map" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers = { "NumTravellingPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, NumTravellingPlayers), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass_MetaData[] = {
		{ "Comment", "/** Contains strings describing localized game agnostic messages. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Contains strings describing localized game agnostic messages." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass = { "EngineMessageClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, EngineMessageClass), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_Inner = { "InactivePlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_MetaData[] = {
		{ "Comment", "/** PlayerStates of players who have disconnected from the server (saved in case they reconnect) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "PlayerStates of players who have disconnected from the server (saved in case they reconnect)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray = { "InactivePlayerArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, InactivePlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Time a playerstate will stick around in an inactive state after a player logout */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "Time a playerstate will stick around in an inactive state after a player logout" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan = { "InactivePlayerStateLifeSpan", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, InactivePlayerStateLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** The maximum number of inactive players before we kick the oldest ones out */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "The maximum number of inactive players before we kick the oldest ones out" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers = { "MaxInactivePlayers", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameMode, MaxInactivePlayers), METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_MetaData[] = {
		{ "Comment", "/** If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameMode.h" },
		{ "ToolTip", "If true, dedicated servers will record replays when HandleMatchHasStarted/HandleMatchHasStopped is called" },
	};
#endif
	void Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_SetBit(void* Obj)
	{
		((AGameMode*)Obj)->bHandleDedicatedServerReplays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays = { "bHandleDedicatedServerReplays", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameMode), &Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MatchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_bDelayedStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumSpectators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumBots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MinRespawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_NumTravellingPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_EngineMessageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_InactivePlayerStateLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_MaxInactivePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameMode_Statics::NewProp_bHandleDedicatedServerReplays,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameMode_Statics::ClassParams = {
		&AGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameMode, 4269793264);
	template<> ENGINE_API UClass* StaticClass<AGameMode>()
	{
		return AGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameMode(Z_Construct_UClass_AGameMode, &AGameMode::StaticClass, TEXT("/Script/Engine"), TEXT("AGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

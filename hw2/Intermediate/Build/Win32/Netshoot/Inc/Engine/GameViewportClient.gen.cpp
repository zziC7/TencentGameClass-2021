// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameViewportClient::execSetConsoleTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsoleTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportClient::execShowTitleSafeArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTitleSafeArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportClient::execSSSwapControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSSwapControllers();
		P_NATIVE_END;
	}
	void UGameViewportClient::StaticRegisterNativesUGameViewportClient()
	{
		UClass* Class = UGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetConsoleTarget", &UGameViewportClient::execSetConsoleTarget },
			{ "ShowTitleSafeArea", &UGameViewportClient::execShowTitleSafeArea },
			{ "SSSwapControllers", &UGameViewportClient::execSSSwapControllers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics
	{
		struct GameViewportClient_eventSetConsoleTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameViewportClient_eventSetConsoleTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the player which console commands will be executed in the context of. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Sets the player which console commands will be executed in the context of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SetConsoleTarget", nullptr, nullptr, sizeof(GameViewportClient_eventSetConsoleTarget_Parms), Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec for toggling the display of the title safe area\n\x09  * @deprecated Use the cvar \"r.DebugSafeZone.Mode=1\".\n\x09  */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the cvar \"r.DebugSafeZone.Mode=1." },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Exec for toggling the display of the title safe area\n@deprecated Use the cvar \"r.DebugSafeZone.Mode=1\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "ShowTitleSafeArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SSSwapControllers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_SSSwapControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameViewportClient_NoRegister()
	{
		return UGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportConsole_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportConsole;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreenPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSplitscreenPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameViewportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget, "SetConsoleTarget" }, // 2166705868
		{ &Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea, "ShowTitleSafeArea" }, // 257974959
		{ &Z_Construct_UFunction_UGameViewportClient_SSSwapControllers, "SSSwapControllers" }, // 2813305442
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A game viewport (FViewport) is a high-level abstract interface for the\n * platform specific rendering, audio, and input subsystems.\n * GameViewportClient is the engine's interface to a game viewport.\n * Exactly one GameViewportClient is created for each instance of the game.  The\n * only case (so far) where you might have a single instance of Engine, but\n * multiple instances of the game (and thus multiple GameViewportClients) is when\n * you have more than one PIE window running.\n *\n * Responsibilities:\n * propagating input events to the global interactions list\n *\n * @see UGameViewportClient\n */" },
		{ "IncludePath", "Engine/GameViewportClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "A game viewport (FViewport) is a high-level abstract interface for the\nplatform specific rendering, audio, and input subsystems.\nGameViewportClient is the engine's interface to a game viewport.\nExactly one GameViewportClient is created for each instance of the game.  The\nonly case (so far) where you might have a single instance of Engine, but\nmultiple instances of the game (and thus multiple GameViewportClients) is when\nyou have more than one PIE window running.\n\nResponsibilities:\npropagating input events to the global interactions list\n\n@see UGameViewportClient" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData[] = {
		{ "Comment", "/** The viewport's console.   Might be null on consoles */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The viewport's console.   Might be null on consoles" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole = { "ViewportConsole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameViewportClient, ViewportConsole), Z_Construct_UClass_UConsole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner = { "DebugProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugDisplayProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData[] = {
		{ "Comment", "/** Debug properties that have been added via one of the \"displayall\" commands */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Debug properties that have been added via one of the \"displayall\" commands" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties = { "DebugProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameViewportClient, DebugProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers = { "MaxSplitscreenPlayers", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameViewportClient, MaxSplitscreenPlayers), METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/* The relative world context for this viewport */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The relative world context for this viewport" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameViewportClient, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameViewportClient, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameViewportClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameViewportClient_Statics::ClassParams = {
		&UGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameViewportClient, 3548868943);
	template<> ENGINE_API UClass* StaticClass<UGameViewportClient>()
	{
		return UGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameViewportClient(Z_Construct_UClass_UGameViewportClient, &UGameViewportClient::StaticClass, TEXT("/Script/Engine"), TEXT("UGameViewportClient"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

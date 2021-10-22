// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef ENGINE_PlayerState_generated_h
#error "PlayerState.generated.h already included, missing '#pragma once' in PlayerState.h"
#endif
#define ENGINE_PlayerState_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOnlyASpectator); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execOnRep_UniqueId); \
	DECLARE_FUNCTION(execOnRep_PlayerId); \
	DECLARE_FUNCTION(execOnRep_bIsInactive); \
	DECLARE_FUNCTION(execOnRep_PlayerName); \
	DECLARE_FUNCTION(execOnRep_Score);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOnlyASpectator); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execOnRep_UniqueId); \
	DECLARE_FUNCTION(execOnRep_PlayerId); \
	DECLARE_FUNCTION(execOnRep_bIsInactive); \
	DECLARE_FUNCTION(execOnRep_PlayerName); \
	DECLARE_FUNCTION(execOnRep_Score);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_EVENT_PARMS \
	struct PlayerState_eventReceiveCopyProperties_Parms \
	{ \
		APlayerState* NewPlayerState; \
	}; \
	struct PlayerState_eventReceiveOverrideWith_Parms \
	{ \
		APlayerState* OldPlayerState; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend struct Z_Construct_UClass_APlayerState_Statics; \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Score=NETFIELD_REP_START, \
		PlayerId, \
		Ping, \
		bIsSpectator, \
		bOnlySpectator, \
		bIsABot, \
		bIsInactive, \
		bFromPreviousLevel, \
		StartTime, \
		UniqueId, \
		PlayerNamePrivate, \
		NETFIELD_REP_END=PlayerNamePrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend struct Z_Construct_UClass_APlayerState_Statics; \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Score=NETFIELD_REP_START, \
		PlayerId, \
		Ping, \
		bIsSpectator, \
		bOnlySpectator, \
		bIsABot, \
		bIsInactive, \
		bFromPreviousLevel, \
		StartTime, \
		UniqueId, \
		PlayerNamePrivate, \
		NETFIELD_REP_END=PlayerNamePrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnPrivate() { return STRUCT_OFFSET(APlayerState, PawnPrivate); } \
	FORCEINLINE static uint32 __PPO__PlayerNamePrivate() { return STRUCT_OFFSET(APlayerState, PlayerNamePrivate); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_63_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

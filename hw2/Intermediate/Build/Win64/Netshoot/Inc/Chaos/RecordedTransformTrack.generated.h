// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_RecordedTransformTrack_generated_h
#error "RecordedTransformTrack.generated.h already included, missing '#pragma once' in RecordedTransformTrack.h"
#endif
#define CHAOS_RecordedTransformTrack_generated_h

#define Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecordedTransformTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOS_API UScriptStruct* StaticStruct<struct FRecordedTransformTrack>();

#define Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecordedFrame_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


template<> CHAOS_API UScriptStruct* StaticStruct<struct FRecordedFrame>();

#define Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSolverTrailingData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


template<> CHAOS_API UScriptStruct* StaticStruct<struct FSolverTrailingData>();

#define Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSolverBreakingData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


template<> CHAOS_API UScriptStruct* StaticStruct<struct FSolverBreakingData>();

#define Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSolverCollisionData_Statics; \
	CHAOS_API static class UScriptStruct* StaticStruct();


template<> CHAOS_API UScriptStruct* StaticStruct<struct FSolverCollisionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_RecordedTransformTrack_h


#define FOREACH_ENUM_EGEOMETRYCOLLECTIONCACHETYPE(op) \
	op(EGeometryCollectionCacheType::None) \
	op(EGeometryCollectionCacheType::Record) \
	op(EGeometryCollectionCacheType::Play) \
	op(EGeometryCollectionCacheType::RecordAndPlay) 

enum class EGeometryCollectionCacheType : uint8;
template<> CHAOS_API UEnum* StaticEnum<EGeometryCollectionCacheType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

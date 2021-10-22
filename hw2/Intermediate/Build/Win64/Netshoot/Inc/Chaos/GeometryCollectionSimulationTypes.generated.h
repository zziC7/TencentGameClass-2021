// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_GeometryCollectionSimulationTypes_generated_h
#error "GeometryCollectionSimulationTypes.generated.h already included, missing '#pragma once' in GeometryCollectionSimulationTypes.h"
#endif
#define CHAOS_GeometryCollectionSimulationTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h


#define FOREACH_ENUM_EEMISSIONPATTERNTYPEENUM(op) \
	op(EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame) \
	op(EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand) \
	op(EEmissionPatternTypeEnum::Chaos_Max) 

enum class EEmissionPatternTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<EEmissionPatternTypeEnum>();

#define FOREACH_ENUM_EINITIALVELOCITYTYPEENUM(op) \
	op(EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined) \
	op(EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None) \
	op(EInitialVelocityTypeEnum::Chaos_Max) 

enum class EInitialVelocityTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<EInitialVelocityTypeEnum>();

#define FOREACH_ENUM_EGEOMETRYCOLLECTIONPHYSICSTYPEENUM(op) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque) \
	op(EGeometryCollectionPhysicsTypeEnum::Chaos_Max) 

enum class EGeometryCollectionPhysicsTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<EGeometryCollectionPhysicsTypeEnum>();

#define FOREACH_ENUM_EOBJECTSTATETYPEENUM(op) \
	op(EObjectStateTypeEnum::Chaos_NONE) \
	op(EObjectStateTypeEnum::Chaos_Object_Sleeping) \
	op(EObjectStateTypeEnum::Chaos_Object_Kinematic) \
	op(EObjectStateTypeEnum::Chaos_Object_Static) \
	op(EObjectStateTypeEnum::Chaos_Object_Dynamic) \
	op(EObjectStateTypeEnum::Chaos_Object_UserDefined) \
	op(EObjectStateTypeEnum::Chaos_Max) 

enum class EObjectStateTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<EObjectStateTypeEnum>();

#define FOREACH_ENUM_EIMPLICITTYPEENUM(op) \
	op(EImplicitTypeEnum::Chaos_Implicit_Box) \
	op(EImplicitTypeEnum::Chaos_Implicit_Sphere) \
	op(EImplicitTypeEnum::Chaos_Implicit_Capsule) \
	op(EImplicitTypeEnum::Chaos_Implicit_LevelSet) \
	op(EImplicitTypeEnum::Chaos_Implicit_None) \
	op(EImplicitTypeEnum::Chaos_Max) 

enum class EImplicitTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<EImplicitTypeEnum>();

#define FOREACH_ENUM_ECOLLISIONTYPEENUM(op) \
	op(ECollisionTypeEnum::Chaos_Volumetric) \
	op(ECollisionTypeEnum::Chaos_Surface_Volumetric) \
	op(ECollisionTypeEnum::Chaos_Max) 

enum class ECollisionTypeEnum : uint8;
template<> CHAOS_API UEnum* StaticEnum<ECollisionTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

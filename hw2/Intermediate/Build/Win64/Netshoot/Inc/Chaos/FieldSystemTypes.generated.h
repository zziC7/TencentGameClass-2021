// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_FieldSystemTypes_generated_h
#error "FieldSystemTypes.generated.h already included, missing '#pragma once' in FieldSystemTypes.h"
#endif
#define CHAOS_FieldSystemTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h


#define FOREACH_ENUM_EFIELDPHYSICSDEFAULTFIELDS(op) \
	op(Field_RadialIntMask) \
	op(Field_RadialFalloff) \
	op(Field_UniformVector) \
	op(Field_RadialVector) \
	op(Field_RadialVectorFalloff) \
	op(Field_EFieldPhysicsDefaultFields_Max) 
#define FOREACH_ENUM_EFIELDOUTPUTTYPE(op) \
	op(Field_Output_Vector) \
	op(Field_Output_Scalar) \
	op(Field_Output_Integer) \
	op(Field_Output_Max) 
#define FOREACH_ENUM_EFIELDINTEGERTYPE(op) \
	op(Integer_DynamicState) \
	op(Integer_ActivateDisabled) \
	op(Integer_CollisionGroup) \
	op(Integer_PositionAnimated) \
	op(Integer_PositionStatic) \
	op(Integer_TargetMax) 
#define FOREACH_ENUM_EFIELDSCALARTYPE(op) \
	op(Scalar_ExternalClusterStrain) \
	op(Scalar_Kill) \
	op(Scalar_DisableThreshold) \
	op(Scalar_SleepingThreshold) \
	op(Scalar_InternalClusterStrain) \
	op(Scalar_DynamicConstraint) \
	op(Scalar_TargetMax) 
#define FOREACH_ENUM_EFIELDVECTORTYPE(op) \
	op(Vector_LinearForce) \
	op(Vector_LinearVelocity) \
	op(Vector_AngularVelocity) \
	op(Vector_AngularTorque) \
	op(Vector_PositionTarget) \
	op(Vector_TargetMax) 
#define FOREACH_ENUM_EFIELDPHYSICSTYPE(op) \
	op(Field_None) \
	op(Field_DynamicState) \
	op(Field_LinearForce) \
	op(Field_ExternalClusterStrain) \
	op(Field_Kill) \
	op(Field_LinearVelocity) \
	op(Field_AngularVelociy) \
	op(Field_AngularTorque) \
	op(Field_InternalClusterStrain) \
	op(Field_DisableThreshold) \
	op(Field_SleepingThreshold) \
	op(Field_PositionStatic) \
	op(Field_PositionAnimated) \
	op(Field_PositionTarget) \
	op(Field_DynamicConstraint) \
	op(Field_CollisionGroup) \
	op(Field_ActivateDisabled) \
	op(Field_PhysicsType_Max) 
#define FOREACH_ENUM_EFIELDFALLOFFTYPE(op) \
	op(Field_FallOff_None) \
	op(Field_Falloff_Linear) \
	op(Field_Falloff_Inverse) \
	op(Field_Falloff_Squared) \
	op(Field_Falloff_Logarithmic) \
	op(Field_Falloff_Max) 
#define FOREACH_ENUM_EFIELDFILTERTYPE(op) \
	op(Field_Filter_Dynamic) \
	op(Field_Filter_Kinematic) \
	op(Field_Filter_Static) \
	op(Field_Filter_All) \
	op(Field_Filter_Max) 
#define FOREACH_ENUM_EFIELDRESOLUTIONTYPE(op) \
	op(Field_Resolution_Minimal) \
	op(Field_Resolution_DisabledParents) \
	op(Field_Resolution_Maximum) \
	op(Field_Resolution_Max) 
#define FOREACH_ENUM_EFIELDCULLINGOPERATIONTYPE(op) \
	op(Field_Culling_Inside) \
	op(Field_Culling_Outside) \
	op(Field_Culling_Operation_Max) 
#define FOREACH_ENUM_EFIELDOPERATIONTYPE(op) \
	op(Field_Multiply) \
	op(Field_Divide) \
	op(Field_Add) \
	op(Field_Substract) \
	op(Field_Operation_Max) 
#define FOREACH_ENUM_EWAVEFUNCTIONTYPE(op) \
	op(Field_Wave_Cosine) \
	op(Field_Wave_Gaussian) \
	op(Field_Wave_Falloff) \
	op(Field_Wave_Decay) \
	op(Field_Wave_Max) 
#define FOREACH_ENUM_ESETMASKCONDITIONTYPE(op) \
	op(Field_Set_Always) \
	op(Field_Set_IFF_NOT_Interior) \
	op(Field_Set_IFF_NOT_Exterior) \
	op(Field_MaskCondition_Max) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

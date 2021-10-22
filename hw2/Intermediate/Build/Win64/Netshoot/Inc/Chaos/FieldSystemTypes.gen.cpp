// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/Field/FieldSystemTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields();
	UPackage* Z_Construct_UPackage__Script_Chaos();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldOutputType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldResolutionType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldCullingOperationType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldOperationType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EWaveFunctionType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ESetMaskConditionType();
// End Cross Module References
	static UEnum* EFieldPhysicsDefaultFields_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldPhysicsDefaultFields"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldPhysicsDefaultFields>()
	{
		return EFieldPhysicsDefaultFields_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsDefaultFields(EFieldPhysicsDefaultFields_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldPhysicsDefaultFields"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Hash() { return 2713968246U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsDefaultFields"), 0, Get_Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_RadialIntMask", (int64)Field_RadialIntMask },
				{ "Field_RadialFalloff", (int64)Field_RadialFalloff },
				{ "Field_UniformVector", (int64)Field_UniformVector },
				{ "Field_RadialVector", (int64)Field_RadialVector },
				{ "Field_RadialVectorFalloff", (int64)Field_RadialVectorFalloff },
				{ "Field_EFieldPhysicsDefaultFields_Max", (int64)Field_EFieldPhysicsDefaultFields_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Hidden", "" },
				{ "Field_EFieldPhysicsDefaultFields_Max.Name", "Field_EFieldPhysicsDefaultFields_Max" },
				{ "Field_EFieldPhysicsDefaultFields_Max.ToolTip", "//256th entry" },
				{ "Field_RadialFalloff.Comment", "/**\n*\n*/" },
				{ "Field_RadialFalloff.DisplayName", "RadialFalloff" },
				{ "Field_RadialFalloff.Name", "Field_RadialFalloff" },
				{ "Field_RadialIntMask.Comment", "/**\n*\n*/" },
				{ "Field_RadialIntMask.DisplayName", "RadialIntMask" },
				{ "Field_RadialIntMask.Name", "Field_RadialIntMask" },
				{ "Field_RadialVector.Comment", "/**\n*\n*/" },
				{ "Field_RadialVector.DisplayName", "RadialVector" },
				{ "Field_RadialVector.Name", "Field_RadialVector" },
				{ "Field_RadialVectorFalloff.Comment", "/**\n*\n*/" },
				{ "Field_RadialVectorFalloff.DisplayName", "RadialVectorFalloff" },
				{ "Field_RadialVectorFalloff.Name", "Field_RadialVectorFalloff" },
				{ "Field_UniformVector.Comment", "/**\n*\n*/" },
				{ "Field_UniformVector.DisplayName", "UniformVector" },
				{ "Field_UniformVector.Name", "Field_UniformVector" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldPhysicsDefaultFields",
				"EFieldPhysicsDefaultFields",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldOutputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOutputType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldOutputType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldOutputType>()
	{
		return EFieldOutputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldOutputType(EFieldOutputType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldOutputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldOutputType_Hash() { return 1651664504U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldOutputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldOutputType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldOutputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Output_Vector", (int64)Field_Output_Vector },
				{ "Field_Output_Scalar", (int64)Field_Output_Scalar },
				{ "Field_Output_Integer", (int64)Field_Output_Integer },
				{ "Field_Output_Max", (int64)Field_Output_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines the type of the output*/" },
				{ "Field_Output_Integer.Comment", "/* Integer field type */" },
				{ "Field_Output_Integer.DisplayName", "Integer Field" },
				{ "Field_Output_Integer.Name", "Field_Output_Integer" },
				{ "Field_Output_Integer.ToolTip", "Integer field type" },
				{ "Field_Output_Max.Hidden", "" },
				{ "Field_Output_Max.Name", "Field_Output_Max" },
				{ "Field_Output_Scalar.Comment", "/* Scalar Field Type */" },
				{ "Field_Output_Scalar.DisplayName", "Scalar Field" },
				{ "Field_Output_Scalar.Name", "Field_Output_Scalar" },
				{ "Field_Output_Scalar.ToolTip", "Scalar Field Type" },
				{ "Field_Output_Vector.Comment", "/* Vector Field Type */" },
				{ "Field_Output_Vector.DisplayName", "Vector Field" },
				{ "Field_Output_Vector.Name", "Field_Output_Vector" },
				{ "Field_Output_Vector.ToolTip", "Vector Field Type" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
				{ "ToolTip", "Defines the type of the output" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldOutputType",
				"EFieldOutputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldIntegerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldIntegerType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldIntegerType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldIntegerType>()
	{
		return EFieldIntegerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldIntegerType(EFieldIntegerType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldIntegerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldIntegerType_Hash() { return 2919757862U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldIntegerType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldIntegerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Integer_DynamicState", (int64)Integer_DynamicState },
				{ "Integer_ActivateDisabled", (int64)Integer_ActivateDisabled },
				{ "Integer_CollisionGroup", (int64)Integer_CollisionGroup },
				{ "Integer_PositionAnimated", (int64)Integer_PositionAnimated },
				{ "Integer_PositionStatic", (int64)Integer_PositionStatic },
				{ "Integer_TargetMax", (int64)Integer_TargetMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Integer_ActivateDisabled.DisplayName", "Activate Disabled" },
				{ "Integer_ActivateDisabled.Name", "Integer_ActivateDisabled" },
				{ "Integer_ActivateDisabled.ToolTip", "Activate all the disabled particles for which the field value will be 0" },
				{ "Integer_CollisionGroup.DisplayName", "Collision Group" },
				{ "Integer_CollisionGroup.Name", "Integer_CollisionGroup" },
				{ "Integer_CollisionGroup.ToolTip", "Set the particles collision group." },
				{ "Integer_DynamicState.DisplayName", "Dynamic State" },
				{ "Integer_DynamicState.Name", "Integer_DynamicState" },
				{ "Integer_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
				{ "Integer_PositionAnimated.DisplayName", "Position Animated" },
				{ "Integer_PositionAnimated.Hidden", "" },
				{ "Integer_PositionAnimated.Name", "Integer_PositionAnimated" },
				{ "Integer_PositionAnimated.ToolTip", "Add a position constraint to the particles to follow its kinematic position" },
				{ "Integer_PositionStatic.DisplayName", "Position Static" },
				{ "Integer_PositionStatic.Hidden", "" },
				{ "Integer_PositionStatic.Name", "Integer_PositionStatic" },
				{ "Integer_PositionStatic.ToolTip", "Add a position constraint to the particles to remain static" },
				{ "Integer_TargetMax.Comment", "//~~~\n//256th entry\n" },
				{ "Integer_TargetMax.Hidden", "" },
				{ "Integer_TargetMax.Name", "Integer_TargetMax" },
				{ "Integer_TargetMax.ToolTip", "256th entry" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldIntegerType",
				"EFieldIntegerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldScalarType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldScalarType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldScalarType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldScalarType>()
	{
		return EFieldScalarType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldScalarType(EFieldScalarType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldScalarType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldScalarType_Hash() { return 1179426860U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldScalarType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldScalarType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Scalar_ExternalClusterStrain", (int64)Scalar_ExternalClusterStrain },
				{ "Scalar_Kill", (int64)Scalar_Kill },
				{ "Scalar_DisableThreshold", (int64)Scalar_DisableThreshold },
				{ "Scalar_SleepingThreshold", (int64)Scalar_SleepingThreshold },
				{ "Scalar_InternalClusterStrain", (int64)Scalar_InternalClusterStrain },
				{ "Scalar_DynamicConstraint", (int64)Scalar_DynamicConstraint },
				{ "Scalar_TargetMax", (int64)Scalar_TargetMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
				{ "Scalar_DisableThreshold.DisplayName", "Disable Threshold" },
				{ "Scalar_DisableThreshold.Name", "Scalar_DisableThreshold" },
				{ "Scalar_DisableThreshold.ToolTip", "Disable the particles if their linear and angular velocity are less than the threshold." },
				{ "Scalar_DynamicConstraint.DisplayName", "Dynamic Constraint" },
				{ "Scalar_DynamicConstraint.Hidden", "" },
				{ "Scalar_DynamicConstraint.Name", "Scalar_DynamicConstraint" },
				{ "Scalar_DynamicConstraint.ToolTip", "Add the particles to a spring constraint holding them together" },
				{ "Scalar_ExternalClusterStrain.DisplayName", "External Strain" },
				{ "Scalar_ExternalClusterStrain.Name", "Scalar_ExternalClusterStrain" },
				{ "Scalar_ExternalClusterStrain.ToolTip", "Apply an external strain over the particles. If this strain is over the internal one, the cluster will break." },
				{ "Scalar_InternalClusterStrain.DisplayName", "Internal Strain" },
				{ "Scalar_InternalClusterStrain.Name", "Scalar_InternalClusterStrain" },
				{ "Scalar_InternalClusterStrain.ToolTip", "Add a strain field to the particles internal one." },
				{ "Scalar_Kill.DisplayName", "Kill Particle" },
				{ "Scalar_Kill.Name", "Scalar_Kill" },
				{ "Scalar_Kill.ToolTip", "Disable the particles for which the field will be higher than 0." },
				{ "Scalar_SleepingThreshold.DisplayName", "Sleeping Threshold" },
				{ "Scalar_SleepingThreshold.Name", "Scalar_SleepingThreshold" },
				{ "Scalar_SleepingThreshold.ToolTip", "Set particles in sleeping mode if their linear and angular velocity are less than the threshold." },
				{ "Scalar_TargetMax.Comment", "//~~~\n//256th entry\n" },
				{ "Scalar_TargetMax.Hidden", "" },
				{ "Scalar_TargetMax.Name", "Scalar_TargetMax" },
				{ "Scalar_TargetMax.ToolTip", "256th entry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldScalarType",
				"EFieldScalarType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldVectorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldVectorType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldVectorType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldVectorType>()
	{
		return EFieldVectorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldVectorType(EFieldVectorType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldVectorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldVectorType_Hash() { return 3745859924U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldVectorType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldVectorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Vector_LinearForce", (int64)Vector_LinearForce },
				{ "Vector_LinearVelocity", (int64)Vector_LinearVelocity },
				{ "Vector_AngularVelocity", (int64)Vector_AngularVelocity },
				{ "Vector_AngularTorque", (int64)Vector_AngularTorque },
				{ "Vector_PositionTarget", (int64)Vector_PositionTarget },
				{ "Vector_TargetMax", (int64)Vector_TargetMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// TODO : Refactor these 3 enums to be in sync with the GetFieldTargetTypes\n" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
				{ "ToolTip", "TODO : Refactor these 3 enums to be in sync with the GetFieldTargetTypes" },
				{ "Vector_AngularTorque.DisplayName", "Angular Torque" },
				{ "Vector_AngularTorque.Name", "Vector_AngularTorque" },
				{ "Vector_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
				{ "Vector_AngularVelocity.DisplayName", "Angular Velocity" },
				{ "Vector_AngularVelocity.Name", "Vector_AngularVelocity" },
				{ "Vector_AngularVelocity.ToolTip", "Add a vector field to the particles angular velocity." },
				{ "Vector_LinearForce.DisplayName", "Linear Force" },
				{ "Vector_LinearForce.Name", "Vector_LinearForce" },
				{ "Vector_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
				{ "Vector_LinearVelocity.DisplayName", "Linear Velocity" },
				{ "Vector_LinearVelocity.Name", "Vector_LinearVelocity" },
				{ "Vector_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
				{ "Vector_PositionTarget.DisplayName", "Position Target" },
				{ "Vector_PositionTarget.Hidden", "" },
				{ "Vector_PositionTarget.Name", "Vector_PositionTarget" },
				{ "Vector_PositionTarget.ToolTip", "Add a position constraint to the particles to follow a target position" },
				{ "Vector_TargetMax.Comment", "//~~~\n//256th entry\n" },
				{ "Vector_TargetMax.Hidden", "" },
				{ "Vector_TargetMax.Name", "Vector_TargetMax" },
				{ "Vector_TargetMax.ToolTip", "256th entry" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldVectorType",
				"EFieldVectorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldPhysicsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldPhysicsType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldPhysicsType>()
	{
		return EFieldPhysicsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldPhysicsType(EFieldPhysicsType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldPhysicsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldPhysicsType_Hash() { return 2823530726U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldPhysicsType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldPhysicsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_None", (int64)Field_None },
				{ "Field_DynamicState", (int64)Field_DynamicState },
				{ "Field_LinearForce", (int64)Field_LinearForce },
				{ "Field_ExternalClusterStrain", (int64)Field_ExternalClusterStrain },
				{ "Field_Kill", (int64)Field_Kill },
				{ "Field_LinearVelocity", (int64)Field_LinearVelocity },
				{ "Field_AngularVelociy", (int64)Field_AngularVelociy },
				{ "Field_AngularTorque", (int64)Field_AngularTorque },
				{ "Field_InternalClusterStrain", (int64)Field_InternalClusterStrain },
				{ "Field_DisableThreshold", (int64)Field_DisableThreshold },
				{ "Field_SleepingThreshold", (int64)Field_SleepingThreshold },
				{ "Field_PositionStatic", (int64)Field_PositionStatic },
				{ "Field_PositionAnimated", (int64)Field_PositionAnimated },
				{ "Field_PositionTarget", (int64)Field_PositionTarget },
				{ "Field_DynamicConstraint", (int64)Field_DynamicConstraint },
				{ "Field_CollisionGroup", (int64)Field_CollisionGroup },
				{ "Field_ActivateDisabled", (int64)Field_ActivateDisabled },
				{ "Field_PhysicsType_Max", (int64)Field_PhysicsType_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_ActivateDisabled.Comment", "/**\n*\n*/" },
				{ "Field_ActivateDisabled.DisplayName", "Activate Disabled" },
				{ "Field_ActivateDisabled.Name", "Field_ActivateDisabled" },
				{ "Field_ActivateDisabled.ToolTip", "Activate all the disabled particles for which the field value will be 0" },
				{ "Field_AngularTorque.Comment", "/**\n*\n*/" },
				{ "Field_AngularTorque.DisplayName", "Angular Torque" },
				{ "Field_AngularTorque.Name", "Field_AngularTorque" },
				{ "Field_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
				{ "Field_AngularVelociy.Comment", "/**\n*\n*/" },
				{ "Field_AngularVelociy.DisplayName", "Angular Velocity" },
				{ "Field_AngularVelociy.Name", "Field_AngularVelociy" },
				{ "Field_AngularVelociy.ToolTip", "Add a vector field to the particles angular velocity." },
				{ "Field_CollisionGroup.Comment", "/**\n*\n*/" },
				{ "Field_CollisionGroup.DisplayName", "Collision Group" },
				{ "Field_CollisionGroup.Name", "Field_CollisionGroup" },
				{ "Field_CollisionGroup.ToolTip", "Set the particles collision group." },
				{ "Field_DisableThreshold.Comment", "/**\n*\n*/" },
				{ "Field_DisableThreshold.DisplayName", "Disable Threshold" },
				{ "Field_DisableThreshold.Name", "Field_DisableThreshold" },
				{ "Field_DisableThreshold.ToolTip", "Disable the particles if their linear and angular velocity are less than the threshold." },
				{ "Field_DynamicConstraint.Comment", "/**\n*\n*/" },
				{ "Field_DynamicConstraint.DisplayName", "Dynamic Constraint" },
				{ "Field_DynamicConstraint.Hidden", "" },
				{ "Field_DynamicConstraint.Name", "Field_DynamicConstraint" },
				{ "Field_DynamicConstraint.ToolTip", "Add the particles to a spring constraint holding them together" },
				{ "Field_DynamicState.Comment", "/**\n*\n*/" },
				{ "Field_DynamicState.DisplayName", "Dynamic State" },
				{ "Field_DynamicState.Name", "Field_DynamicState" },
				{ "Field_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
				{ "Field_ExternalClusterStrain.Comment", "/**\n*\n*/" },
				{ "Field_ExternalClusterStrain.DisplayName", "External Strain" },
				{ "Field_ExternalClusterStrain.Name", "Field_ExternalClusterStrain" },
				{ "Field_ExternalClusterStrain.ToolTip", "Apply an external strain over the particles. If this strain is over the internal one, the cluster will break." },
				{ "Field_InternalClusterStrain.Comment", "/**\n*\n*/" },
				{ "Field_InternalClusterStrain.DisplayName", "Internal Strain" },
				{ "Field_InternalClusterStrain.Name", "Field_InternalClusterStrain" },
				{ "Field_InternalClusterStrain.ToolTip", "Add a strain field to the particles internal one." },
				{ "Field_Kill.Comment", "/**\n*\n*/" },
				{ "Field_Kill.DisplayName", "Kill Particle" },
				{ "Field_Kill.Name", "Field_Kill" },
				{ "Field_Kill.ToolTip", "Disable the particles for which the field will be higher than 0." },
				{ "Field_LinearForce.Comment", "/**\n*\n*/" },
				{ "Field_LinearForce.DisplayName", "Linear Force" },
				{ "Field_LinearForce.Name", "Field_LinearForce" },
				{ "Field_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
				{ "Field_LinearVelocity.Comment", "/**\n*\n*/" },
				{ "Field_LinearVelocity.DisplayName", "Linear Velocity" },
				{ "Field_LinearVelocity.Name", "Field_LinearVelocity" },
				{ "Field_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
				{ "Field_None.Comment", "/**\n*\n*/" },
				{ "Field_None.Hidden", "" },
				{ "Field_None.Name", "Field_None" },
				{ "Field_PhysicsType_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_PhysicsType_Max.Hidden", "" },
				{ "Field_PhysicsType_Max.Name", "Field_PhysicsType_Max" },
				{ "Field_PhysicsType_Max.ToolTip", "//256th entry" },
				{ "Field_PositionAnimated.Comment", "/**\n*\n*/" },
				{ "Field_PositionAnimated.DisplayName", "Position Animated" },
				{ "Field_PositionAnimated.Hidden", "" },
				{ "Field_PositionAnimated.Name", "Field_PositionAnimated" },
				{ "Field_PositionAnimated.ToolTip", "Add a position constraint to the particles to follow its kinematic position" },
				{ "Field_PositionStatic.Comment", "/**\n*\n*/" },
				{ "Field_PositionStatic.DisplayName", "Position Static" },
				{ "Field_PositionStatic.Hidden", "" },
				{ "Field_PositionStatic.Name", "Field_PositionStatic" },
				{ "Field_PositionStatic.ToolTip", "Add a position constraint to the particles to remain static" },
				{ "Field_PositionTarget.Comment", "/**\n*\n*/" },
				{ "Field_PositionTarget.DisplayName", "Position Target" },
				{ "Field_PositionTarget.Hidden", "" },
				{ "Field_PositionTarget.Name", "Field_PositionTarget" },
				{ "Field_PositionTarget.ToolTip", "Add a position constraint to the particles to follow a target position" },
				{ "Field_SleepingThreshold.Comment", "/**\n*\n*/" },
				{ "Field_SleepingThreshold.DisplayName", "Sleeping Threshold" },
				{ "Field_SleepingThreshold.Name", "Field_SleepingThreshold" },
				{ "Field_SleepingThreshold.ToolTip", "Set particles in sleeping mode if their linear and angular velocity are less than the threshold." },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldPhysicsType",
				"EFieldPhysicsType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldFalloffType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFalloffType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldFalloffType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldFalloffType>()
	{
		return EFieldFalloffType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldFalloffType(EFieldFalloffType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldFalloffType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldFalloffType_Hash() { return 2466840410U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldFalloffType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldFalloffType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_FallOff_None", (int64)Field_FallOff_None },
				{ "Field_Falloff_Linear", (int64)Field_Falloff_Linear },
				{ "Field_Falloff_Inverse", (int64)Field_Falloff_Inverse },
				{ "Field_Falloff_Squared", (int64)Field_Falloff_Squared },
				{ "Field_Falloff_Logarithmic", (int64)Field_Falloff_Logarithmic },
				{ "Field_Falloff_Max", (int64)Field_Falloff_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Inverse.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Inverse.DisplayName", "Inverse" },
				{ "Field_Falloff_Inverse.Name", "Field_Falloff_Inverse" },
				{ "Field_Falloff_Inverse.ToolTip", "The falloff function will be proportional to 1.0/x" },
				{ "Field_Falloff_Linear.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Linear.DisplayName", "Linear" },
				{ "Field_Falloff_Linear.Name", "Field_Falloff_Linear" },
				{ "Field_Falloff_Linear.ToolTip", "The falloff function will be proportional to x" },
				{ "Field_Falloff_Logarithmic.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Logarithmic.DisplayName", "Logarithmic" },
				{ "Field_Falloff_Logarithmic.Name", "Field_Falloff_Logarithmic" },
				{ "Field_Falloff_Logarithmic.ToolTip", "The falloff function will be proportional to log(x)" },
				{ "Field_Falloff_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Falloff_Max.Hidden", "" },
				{ "Field_Falloff_Max.Name", "Field_Falloff_Max" },
				{ "Field_Falloff_Max.ToolTip", "//256th entry" },
				{ "Field_FallOff_None.Comment", "/**\n*\n*/" },
				{ "Field_FallOff_None.DisplayName", "None" },
				{ "Field_FallOff_None.Name", "Field_FallOff_None" },
				{ "Field_FallOff_None.ToolTip", "No falloff function is used" },
				{ "Field_Falloff_Squared.Comment", "/**\n*\n*/" },
				{ "Field_Falloff_Squared.DisplayName", "Squared" },
				{ "Field_Falloff_Squared.Name", "Field_Falloff_Squared" },
				{ "Field_Falloff_Squared.ToolTip", "The falloff function will be proportional to x*x" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldFalloffType",
				"EFieldFalloffType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFilterType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldFilterType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldFilterType>()
	{
		return EFieldFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldFilterType(EFieldFilterType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldFilterType_Hash() { return 712186232U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldFilterType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Filter_Dynamic", (int64)Field_Filter_Dynamic },
				{ "Field_Filter_Kinematic", (int64)Field_Filter_Kinematic },
				{ "Field_Filter_Static", (int64)Field_Filter_Static },
				{ "Field_Filter_All", (int64)Field_Filter_All },
				{ "Field_Filter_Max", (int64)Field_Filter_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Filter_All.Comment", "/**\n*\n*/" },
				{ "Field_Filter_All.DisplayName", "Maximum" },
				{ "Field_Filter_All.Name", "Field_Filter_All" },
				{ "Field_Filter_All.ToolTip", "Apply the field to all the solver particles" },
				{ "Field_Filter_Dynamic.Comment", "/**\n*\n*/" },
				{ "Field_Filter_Dynamic.DisplayName", "Dynamic" },
				{ "Field_Filter_Dynamic.Name", "Field_Filter_Dynamic" },
				{ "Field_Filter_Dynamic.ToolTip", "Apply the field to all the dynamic particles" },
				{ "Field_Filter_Kinematic.Comment", "/**\n*\n*/" },
				{ "Field_Filter_Kinematic.DisplayName", "Kinematic" },
				{ "Field_Filter_Kinematic.Name", "Field_Filter_Kinematic" },
				{ "Field_Filter_Kinematic.ToolTip", "Apply the field to all the kinematic particles" },
				{ "Field_Filter_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Filter_Max.Hidden", "" },
				{ "Field_Filter_Max.Name", "Field_Filter_Max" },
				{ "Field_Filter_Max.ToolTip", "//256th entry" },
				{ "Field_Filter_Static.Comment", "/**\n*\n*/" },
				{ "Field_Filter_Static.DisplayName", "Static" },
				{ "Field_Filter_Static.Name", "Field_Filter_Static" },
				{ "Field_Filter_Static.ToolTip", "Apply the field to all the static particles" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldFilterType",
				"EFieldFilterType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldResolutionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldResolutionType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldResolutionType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldResolutionType>()
	{
		return EFieldResolutionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldResolutionType(EFieldResolutionType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldResolutionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldResolutionType_Hash() { return 285986348U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldResolutionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldResolutionType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldResolutionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Resolution_Minimal", (int64)Field_Resolution_Minimal },
				{ "Field_Resolution_DisabledParents", (int64)Field_Resolution_DisabledParents },
				{ "Field_Resolution_Maximum", (int64)Field_Resolution_Maximum },
				{ "Field_Resolution_Max", (int64)Field_Resolution_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Resolution_DisabledParents.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_DisabledParents.DisplayName", "Parents" },
				{ "Field_Resolution_DisabledParents.Name", "Field_Resolution_DisabledParents" },
				{ "Field_Resolution_DisabledParents.ToolTip", "Apply the field to all the parent particles" },
				{ "Field_Resolution_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Resolution_Max.Hidden", "" },
				{ "Field_Resolution_Max.Name", "Field_Resolution_Max" },
				{ "Field_Resolution_Max.ToolTip", "//256th entry" },
				{ "Field_Resolution_Maximum.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_Maximum.DisplayName", "Maximum" },
				{ "Field_Resolution_Maximum.Name", "Field_Resolution_Maximum" },
				{ "Field_Resolution_Maximum.ToolTip", "Apply the field to all the solver particles" },
				{ "Field_Resolution_Minimal.Comment", "/**\n*\n*/" },
				{ "Field_Resolution_Minimal.DisplayName", "Minimum" },
				{ "Field_Resolution_Minimal.Name", "Field_Resolution_Minimal" },
				{ "Field_Resolution_Minimal.ToolTip", "Apply the field to all the active particles" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldResolutionType",
				"EFieldResolutionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldCullingOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldCullingOperationType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldCullingOperationType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldCullingOperationType>()
	{
		return EFieldCullingOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldCullingOperationType(EFieldCullingOperationType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldCullingOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Hash() { return 2752233951U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldCullingOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldCullingOperationType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Culling_Inside", (int64)Field_Culling_Inside },
				{ "Field_Culling_Outside", (int64)Field_Culling_Outside },
				{ "Field_Culling_Operation_Max", (int64)Field_Culling_Operation_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Culling_Inside.Comment", "/**\n*\n*/" },
				{ "Field_Culling_Inside.DisplayName", "Inside" },
				{ "Field_Culling_Inside.Name", "Field_Culling_Inside" },
				{ "Field_Culling_Inside.ToolTip", "Evaluate the input field if the result of the culling field is equal to 0" },
				{ "Field_Culling_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Culling_Operation_Max.Hidden", "" },
				{ "Field_Culling_Operation_Max.Name", "Field_Culling_Operation_Max" },
				{ "Field_Culling_Operation_Max.ToolTip", "//256th entry" },
				{ "Field_Culling_Outside.Comment", "/**\n*\n*/" },
				{ "Field_Culling_Outside.DisplayName", "Outside" },
				{ "Field_Culling_Outside.Name", "Field_Culling_Outside" },
				{ "Field_Culling_Outside.ToolTip", "Evaluate the input field if the result of the culling field is different from 0" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldCullingOperationType",
				"EFieldCullingOperationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFieldOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOperationType, Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldOperationType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldOperationType>()
	{
		return EFieldOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFieldOperationType(EFieldOperationType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EFieldOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EFieldOperationType_Hash() { return 1688504629U; }
	UEnum* Z_Construct_UEnum_Chaos_EFieldOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFieldOperationType"), 0, Get_Z_Construct_UEnum_Chaos_EFieldOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Multiply", (int64)Field_Multiply },
				{ "Field_Divide", (int64)Field_Divide },
				{ "Field_Add", (int64)Field_Add },
				{ "Field_Substract", (int64)Field_Substract },
				{ "Field_Operation_Max", (int64)Field_Operation_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Add.Comment", "/**\n*\n*/" },
				{ "Field_Add.DisplayName", "Add" },
				{ "Field_Add.Name", "Field_Add" },
				{ "Field_Add.ToolTip", "Add the fields output values : C = B + A" },
				{ "Field_Divide.Comment", "/**\n*\n*/" },
				{ "Field_Divide.DisplayName", "Divide" },
				{ "Field_Divide.Name", "Field_Divide" },
				{ "Field_Divide.ToolTip", "Divide the fields output values C = B / A" },
				{ "Field_Multiply.Comment", "/**\n*\n*/" },
				{ "Field_Multiply.DisplayName", "Multiply" },
				{ "Field_Multiply.Name", "Field_Multiply" },
				{ "Field_Multiply.ToolTip", "Multiply the fields output values C = B * A" },
				{ "Field_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Operation_Max.Hidden", "" },
				{ "Field_Operation_Max.Name", "Field_Operation_Max" },
				{ "Field_Operation_Max.ToolTip", "//256th entry" },
				{ "Field_Substract.Comment", "/**\n*\n*/" },
				{ "Field_Substract.DisplayName", "Subtract" },
				{ "Field_Substract.Name", "Field_Substract" },
				{ "Field_Substract.ToolTip", "Subtract the fields output values : C = B - A" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EFieldOperationType",
				"EFieldOperationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWaveFunctionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EWaveFunctionType, Z_Construct_UPackage__Script_Chaos(), TEXT("EWaveFunctionType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EWaveFunctionType>()
	{
		return EWaveFunctionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveFunctionType(EWaveFunctionType_StaticEnum, TEXT("/Script/Chaos"), TEXT("EWaveFunctionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EWaveFunctionType_Hash() { return 273232797U; }
	UEnum* Z_Construct_UEnum_Chaos_EWaveFunctionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveFunctionType"), 0, Get_Z_Construct_UEnum_Chaos_EWaveFunctionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Wave_Cosine", (int64)Field_Wave_Cosine },
				{ "Field_Wave_Gaussian", (int64)Field_Wave_Gaussian },
				{ "Field_Wave_Falloff", (int64)Field_Wave_Falloff },
				{ "Field_Wave_Decay", (int64)Field_Wave_Decay },
				{ "Field_Wave_Max", (int64)Field_Wave_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_Wave_Cosine.Comment", "/**\n*\n*/" },
				{ "Field_Wave_Cosine.DisplayName", "Cosine" },
				{ "Field_Wave_Cosine.Name", "Field_Wave_Cosine" },
				{ "Field_Wave_Cosine.ToolTip", "Cosine wave that will move in time." },
				{ "Field_Wave_Decay.Comment", "/**\n*\n*/" },
				{ "Field_Wave_Decay.DisplayName", "Decay" },
				{ "Field_Wave_Decay.Name", "Field_Wave_Decay" },
				{ "Field_Wave_Decay.ToolTip", "The magnitude of the field will decay in time." },
				{ "Field_Wave_Falloff.Comment", "/**\n*\n*/" },
				{ "Field_Wave_Falloff.DisplayName", "Falloff" },
				{ "Field_Wave_Falloff.Name", "Field_Wave_Falloff" },
				{ "Field_Wave_Falloff.ToolTip", "The radial falloff radius will move along temporal wave." },
				{ "Field_Wave_Gaussian.Comment", "/**\n*\n*/" },
				{ "Field_Wave_Gaussian.DisplayName", "Gaussian" },
				{ "Field_Wave_Gaussian.Name", "Field_Wave_Gaussian" },
				{ "Field_Wave_Gaussian.ToolTip", "Gaussian wave that will move in time." },
				{ "Field_Wave_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_Wave_Max.Hidden", "" },
				{ "Field_Wave_Max.Name", "Field_Wave_Max" },
				{ "Field_Wave_Max.ToolTip", "//256th entry" },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EWaveFunctionType",
				"EWaveFunctionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESetMaskConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ESetMaskConditionType, Z_Construct_UPackage__Script_Chaos(), TEXT("ESetMaskConditionType"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<ESetMaskConditionType>()
	{
		return ESetMaskConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESetMaskConditionType(ESetMaskConditionType_StaticEnum, TEXT("/Script/Chaos"), TEXT("ESetMaskConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_ESetMaskConditionType_Hash() { return 3280423311U; }
	UEnum* Z_Construct_UEnum_Chaos_ESetMaskConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESetMaskConditionType"), 0, Get_Z_Construct_UEnum_Chaos_ESetMaskConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Field_Set_Always", (int64)Field_Set_Always },
				{ "Field_Set_IFF_NOT_Interior", (int64)Field_Set_IFF_NOT_Interior },
				{ "Field_Set_IFF_NOT_Exterior", (int64)Field_Set_IFF_NOT_Exterior },
				{ "Field_MaskCondition_Max", (int64)Field_MaskCondition_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "Field_MaskCondition_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
				{ "Field_MaskCondition_Max.Hidden", "" },
				{ "Field_MaskCondition_Max.Name", "Field_MaskCondition_Max" },
				{ "Field_MaskCondition_Max.ToolTip", "//256th entry" },
				{ "Field_Set_Always.Comment", "/**\n*\n*/" },
				{ "Field_Set_Always.DisplayName", "Set Always" },
				{ "Field_Set_Always.Name", "Field_Set_Always" },
				{ "Field_Set_Always.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside a sphere / Exterior-value otherwise." },
				{ "Field_Set_IFF_NOT_Exterior.Comment", "/**\n*\n*/" },
				{ "Field_Set_IFF_NOT_Exterior.DisplayName", "Merge Exterior" },
				{ "Field_Set_IFF_NOT_Exterior.Name", "Field_Set_IFF_NOT_Exterior" },
				{ "Field_Set_IFF_NOT_Exterior.ToolTip", "The particle output value will be equal to Exterior-value if the particle position is outside the sphere or if the particle input value is already Exterior-Value / Interior-value otherwise." },
				{ "Field_Set_IFF_NOT_Interior.Comment", "/**\n*\n*/" },
				{ "Field_Set_IFF_NOT_Interior.DisplayName", "Merge Interior" },
				{ "Field_Set_IFF_NOT_Interior.Name", "Field_Set_IFF_NOT_Interior" },
				{ "Field_Set_IFF_NOT_Interior.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside the sphere or if the particle input value is already Interior-Value / Exterior-value otherwise." },
				{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"ESetMaskConditionType",
				"ESetMaskConditionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

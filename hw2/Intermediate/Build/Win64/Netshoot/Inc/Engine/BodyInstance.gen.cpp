// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/BodyInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstance() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDOFMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ESleepFamily();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
// End Cross Module References
	static UEnum* EDOFMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode, Z_Construct_UPackage__Script_Engine(), TEXT("EDOFMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDOFMode::Type>()
	{
		return EDOFMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDOFMode(EDOFMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EDOFMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDOFMode_Hash() { return 3421625906U; }
	UEnum* Z_Construct_UEnum_Engine_EDOFMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDOFMode"), 0, Get_Z_Construct_UEnum_Engine_EDOFMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDOFMode::Default", (int64)EDOFMode::Default },
				{ "EDOFMode::SixDOF", (int64)EDOFMode::SixDOF },
				{ "EDOFMode::YZPlane", (int64)EDOFMode::YZPlane },
				{ "EDOFMode::XZPlane", (int64)EDOFMode::XZPlane },
				{ "EDOFMode::XYPlane", (int64)EDOFMode::XYPlane },
				{ "EDOFMode::CustomPlane", (int64)EDOFMode::CustomPlane },
				{ "EDOFMode::None", (int64)EDOFMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomPlane.Comment", "/*Allows 2D movement along the plane of a given normal*/" },
				{ "CustomPlane.Name", "EDOFMode::CustomPlane" },
				{ "CustomPlane.ToolTip", "Allows 2D movement along the plane of a given normal" },
				{ "Default.Comment", "/*Inherits the degrees of freedom from the project settings.*/" },
				{ "Default.Name", "EDOFMode::Default" },
				{ "Default.ToolTip", "Inherits the degrees of freedom from the project settings." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "None.Comment", "/*No constraints.*/" },
				{ "None.Name", "EDOFMode::None" },
				{ "None.ToolTip", "No constraints." },
				{ "SixDOF.Comment", "/*Specifies which axis to freeze rotation and movement along.*/" },
				{ "SixDOF.Name", "EDOFMode::SixDOF" },
				{ "SixDOF.ToolTip", "Specifies which axis to freeze rotation and movement along." },
				{ "XYPlane.Comment", "/*Allows 2D movement along the X-Y plane.*/" },
				{ "XYPlane.Name", "EDOFMode::XYPlane" },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.Comment", "/*Allows 2D movement along the X-Z plane.*/" },
				{ "XZPlane.Name", "EDOFMode::XZPlane" },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.Comment", "/*Allows 2D movement along the Y-Z plane.*/" },
				{ "YZPlane.Name", "EDOFMode::YZPlane" },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDOFMode",
				"EDOFMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FBodyInstance>() == std::is_polymorphic<FBodyInstanceCore>(), "USTRUCT FBodyInstance cannot be polymorphic unless super FBodyInstanceCore is polymorphic");

class UScriptStruct* FBodyInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstance, Z_Construct_UPackage__Script_Engine(), TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBodyInstance>()
{
	return FBodyInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyInstance(FBodyInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("BodyInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBodyInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFBodyInstance()
	{
		UScriptStruct::DeferCppStructOps<FBodyInstance>(FName(TEXT("BodyInstance")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFBodyInstance;
	struct Z_Construct_UScriptStruct_FBodyInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SleepFamily_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SleepFamily;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DOFMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DOFMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[];
#endif
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAnalyticCollisions_MetaData[];
#endif
		static void NewProp_bIgnoreAnalyticCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAnalyticCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[];
#endif
		static void NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTranslation_MetaData[];
#endif
		static void NewProp_bLockTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockRotation_MetaData[];
#endif
		static void NewProp_bLockRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXTranslation_MetaData[];
#endif
		static void NewProp_bLockXTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYTranslation_MetaData[];
#endif
		static void NewProp_bLockYTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZTranslation_MetaData[];
#endif
		static void NewProp_bLockZTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXRotation_MetaData[];
#endif
		static void NewProp_bLockXRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYRotation_MetaData[];
#endif
		static void NewProp_bLockYRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZRotation_MetaData[];
#endif
		static void NewProp_bLockZRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxAngularVelocity_MetaData[];
#endif
		static void NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxDepenetrationVelocity_MetaData[];
#endif
		static void NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWalkableSlopeOnInstance_MetaData[];
#endif
		static void NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWalkableSlopeOnInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateWhenSubStepping_MetaData[];
#endif
		static void NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateWhenSubStepping;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSolverIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PositionSolverIterationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocitySolverIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocitySolverIterationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionResponses_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionResponses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassInKgOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassInKgOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDOFPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDOFPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMNudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMNudge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSleepThresholdMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomSleepThresholdMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizationThresholdMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabilizationThresholdMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Container for a physics representation of an object */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Enum indicating what type of object this should be considered as when it moves */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Enum indicating what type of object this should be considered as when it moves" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, ObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/**\n\x09* Type of collision enabled.\n\x09* \n\x09*\x09No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n\x09*\x09Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n\x09*\x09Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n\x09*\x09""Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Type of collision enabled.\n\n      No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n      Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n      Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n      Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** The set of values used in considering when put this body to sleep. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The set of values used in considering when put this body to sleep." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily = { "SleepFamily", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, SleepFamily), Z_Construct_UEnum_PhysicsCore_ESleepFamily, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Locks physical movement along specified axis.*/" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Locks physical movement along specified axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode = { "DOFMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, DOFMode), Z_Construct_UEnum_Engine_EDOFMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true Continuous Collision Detection (CCD) will be used for this component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bUseCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If true ignore analytic collisions and treat objects as a general implicit surface */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true ignore analytic collisions and treat objects as a general implicit surface" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bIgnoreAnalyticCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions = { "bIgnoreAnalyticCollisions", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\x09Should 'Hit' events fire when this object collides during physics simulation. */" },
		{ "DisplayName", "Simulation Generates Hit Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bNotifyRigidBodyCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision = { "bNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] When a Locked Axis Mode is selected, will lock translation on the specified axis*/" },
		{ "DisplayName", "Lock Axis Translation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] When a Locked Axis Mode is selected, will lock translation on the specified axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation = { "bLockTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] When a Locked Axis Mode is selected, will lock rotation to the specified axis*/" },
		{ "DisplayName", "Lock Axis Rotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] When a Locked Axis Mode is selected, will lock rotation to the specified axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation = { "bLockRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the X-axis*/" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the X-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockXTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation = { "bLockXTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the Y-axis*/" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the Y-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockYTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation = { "bLockYTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock translation along the Z-axis*/" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock translation along the Z-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockZTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation = { "bLockZTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the X-axis*/" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the X-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockXRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation = { "bLockXRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the Y-axis*/" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the Y-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockYRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation = { "bLockYRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [Physx Only] Lock rotation about the Z-axis*/" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[Physx Only] Lock rotation about the Z-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockZRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation = { "bLockZRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Override the default max angular velocity */" },
		{ "editcondition", "bSimulatePhysics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Override the default max angular velocity" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideMaxAngularVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity = { "bOverrideMaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [PhysX Only] Whether this body instance has its own custom MaxDepenetrationVelocity*/" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] Whether this body instance has its own custom MaxDepenetrationVelocity" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideMaxDepenetrationVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity = { "bOverrideMaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Whether this instance of the object has its own custom walkable slope override setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Whether this instance of the object has its own custom walkable slope override setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideWalkableSlopeOnInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance = { "bOverrideWalkableSlopeOnInstance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData[] = {
		{ "Comment", "/** \n\x09 * Internal flag to allow us to quickly check whether we should interpolate when substepping \n\x09 * e.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them\n\x09 * at a sub-position.\n\x09 * This is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Internal flag to allow us to quickly check whether we should interpolate when substepping\ne.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them\nat a sub-position.\nThis is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bInterpolateWhenSubStepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping = { "bInterpolateWhenSubStepping", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels = { "ResponseToChannels", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, ResponseToChannels_DEPRECATED), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Collision Profile Name **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Collision Profile Name *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, CollisionProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [PhysX Only] This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount = { "PositionSolverIterationCount", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, PositionSolverIterationCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [PhysX Only] This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount = { "VelocitySolverIterationCount", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, VelocitySolverIterationCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Custom Channels for Responses*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses = { "CollisionResponses", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, CollisionResponses), Z_Construct_UScriptStruct_FCollisionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [PhysX Only] The maximum velocity used to depenetrate this object*/" },
		{ "editcondition", "bOverrideMaxDepenetrationVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "[PhysX Only] The maximum velocity used to depenetrate this object" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity = { "MaxDepenetrationVelocity", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**Mass of the body in KG. By default we compute this based on physical material and mass scale.\n\x09*@see bOverrideMass to set this directly */" },
		{ "DisplayName", "MassInKg" },
		{ "editcondition", "bOverrideMass" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Mass of the body in KG. By default we compute this based on physical material and mass scale.\n@see bOverrideMass to set this directly" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride = { "MassInKgOverride", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, MassInKgOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** 'Drag' force added to reduce linear movement */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce linear movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** 'Drag' force added to reduce angular movement */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce angular movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, AngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Locks physical movement along a custom plane for a given normal.*/" },
		{ "DisplayName", "Plane Normal" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Locks physical movement along a custom plane for a given normal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal = { "CustomDOFPlaneNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, CustomDOFPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** User specified offset for the center of mass of this object, from the calculated location */" },
		{ "DisplayName", "Center Of Mass Offset" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "User specified offset for the center of mass of this object, from the calculated location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge = { "COMNudge", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, COMNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Per-instance scaling of mass */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of mass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, MassScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Per-instance scaling of inertia (bigger number means  it'll be harder to rotate) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of inertia (bigger number means  it'll be harder to rotate)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale = { "InertiaTensorScale", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09* Custom walkable slope override setting for this instance.\n\x09* @see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()\n\x09*/" },
		{ "editcondition", "bOverrideWalkableSlopeOnInstance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom walkable slope override setting for this instance.\n@see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\x09""Allows you to override the PhysicalMaterial to use for simple collision on this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride = { "PhysMaterialOverride", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** The maximum angular velocity for this instance [degrees/s]*/" },
		{ "editcondition", "bOverrideMaxAngularVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The maximum angular velocity for this instance [degrees/s]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, MaxAngularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier = { "CustomSleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, CustomSleepThresholdMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier = { "StabilizationThresholdMultiplier", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, StabilizationThresholdMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData[] = {
		{ "Comment", "/** Provide appropriate interface for doing this instead of allowing BlueprintReadWrite **/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Provide appropriate interface for doing this instead of allowing BlueprintReadWrite *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight = { "PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyInstance, PhysicsBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bIgnoreAnalyticCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBodyInstanceCore,
		&NewStructOps,
		"BodyInstance",
		sizeof(FBodyInstance),
		alignof(FBodyInstance),
		Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_Hash() { return 3073168946U; }
class UScriptStruct* FCollisionResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionResponse>()
{
	return FCollisionResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionResponse(FCollisionResponse::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse()
	{
		UScriptStruct::DeferCppStructOps<FCollisionResponse>(FName(TEXT("CollisionResponse")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionResponse;
	struct Z_Construct_UScriptStruct_FCollisionResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResponseArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */// we have to still load them until resave\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with. // we have to still load them until resave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels = { "ResponseToChannels", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponse, ResponseToChannels), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner = { "ResponseArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "/** Custom Channels for Responses */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray = { "ResponseArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionResponse, ResponseArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollisionResponse",
		sizeof(FCollisionResponse),
		alignof(FCollisionResponse),
		Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_Hash() { return 3899740592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

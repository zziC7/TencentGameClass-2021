// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/MovementComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static UEnum* EPlaneConstraintAxisSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, Z_Construct_UPackage__Script_Engine(), TEXT("EPlaneConstraintAxisSetting"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPlaneConstraintAxisSetting>()
	{
		return EPlaneConstraintAxisSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting_StaticEnum, TEXT("/Script/Engine"), TEXT("EPlaneConstraintAxisSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting_Hash() { return 1465004351U; }
	UEnum* Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlaneConstraintAxisSetting"), 0, Get_Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaneConstraintAxisSetting::Custom", (int64)EPlaneConstraintAxisSetting::Custom },
				{ "EPlaneConstraintAxisSetting::X", (int64)EPlaneConstraintAxisSetting::X },
				{ "EPlaneConstraintAxisSetting::Y", (int64)EPlaneConstraintAxisSetting::Y },
				{ "EPlaneConstraintAxisSetting::Z", (int64)EPlaneConstraintAxisSetting::Z },
				{ "EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting", (int64)EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\n * so that movement along the locked axis is not be possible.\n */" },
				{ "Custom.Comment", "/** Lock movement to a user-defined axis. */" },
				{ "Custom.Name", "EPlaneConstraintAxisSetting::Custom" },
				{ "Custom.ToolTip", "Lock movement to a user-defined axis." },
				{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
				{ "ToolTip", "Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\nso that movement along the locked axis is not be possible." },
				{ "UseGlobalPhysicsSetting.Comment", "/** Use the global physics project setting. */" },
				{ "UseGlobalPhysicsSetting.Name", "EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting" },
				{ "UseGlobalPhysicsSetting.ToolTip", "Use the global physics project setting." },
				{ "X.Comment", "/** Lock movement in the X axis. */" },
				{ "X.Name", "EPlaneConstraintAxisSetting::X" },
				{ "X.ToolTip", "Lock movement in the X axis." },
				{ "Y.Comment", "/** Lock movement in the Y axis. */" },
				{ "Y.Name", "EPlaneConstraintAxisSetting::Y" },
				{ "Y.ToolTip", "Lock movement in the Y axis." },
				{ "Z.Comment", "/** Lock movement in the Z axis. */" },
				{ "Z.Name", "EPlaneConstraintAxisSetting::Z" },
				{ "Z.ToolTip", "Lock movement in the Z axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPlaneConstraintAxisSetting",
				"EPlaneConstraintAxisSetting",
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
	DEFINE_FUNCTION(UMovementComponent::execSnapUpdatedComponentToPlane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapUpdatedComponentToPlane();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execConstrainNormalToPlane)
	{
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConstrainNormalToPlane(Z_Param_Normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execConstrainLocationToPlane)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConstrainLocationToPlane(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execConstrainDirectionToPlane)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConstrainDirectionToPlane(Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetPlaneConstraintOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetPlaneConstraintNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlaneConstraintNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetPlaneConstraintEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaneConstraintEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetPlaneConstraintOrigin)
	{
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaneConstraintOrigin(Z_Param_PlaneOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetPlaneConstraintFromVectors)
	{
		P_GET_STRUCT(FVector,Z_Param_Forward);
		P_GET_STRUCT(FVector,Z_Param_Up);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaneConstraintFromVectors(Z_Param_Forward,Z_Param_Up);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetPlaneConstraintNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaneConstraintNormal(Z_Param_PlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetPlaneConstraintAxisSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlaneConstraintAxisSetting*)Z_Param__Result=P_THIS->GetPlaneConstraintAxisSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetPlaneConstraintAxisSetting)
	{
		P_GET_ENUM(EPlaneConstraintAxisSetting,Z_Param_NewAxisSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting(Z_Param_NewAxisSetting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execK2_MoveUpdatedComponent)
	{
		P_GET_STRUCT(FVector,Z_Param_Delta);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_MoveUpdatedComponent(Z_Param_Delta,Z_Param_NewRotation,Z_Param_Out_OutHit,Z_Param_bSweep,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execSetUpdatedComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_NewUpdatedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execPhysicsVolumeChanged)
	{
		P_GET_OBJECT(APhysicsVolume,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsVolumeChanged(Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetPhysicsVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APhysicsVolume**)Z_Param__Result=P_THIS->GetPhysicsVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execStopMovementImmediately)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovementImmediately();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execIsExceedingMaxSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExceedingMaxSpeed(Z_Param_MaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execK2_GetModifiedMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetModifiedMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execK2_GetMaxSpeedModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetMaxSpeedModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetMaxSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovementComponent::execGetGravityZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityZ();
		P_NATIVE_END;
	}
	void UMovementComponent::StaticRegisterNativesUMovementComponent()
	{
		UClass* Class = UMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstrainDirectionToPlane", &UMovementComponent::execConstrainDirectionToPlane },
			{ "ConstrainLocationToPlane", &UMovementComponent::execConstrainLocationToPlane },
			{ "ConstrainNormalToPlane", &UMovementComponent::execConstrainNormalToPlane },
			{ "GetGravityZ", &UMovementComponent::execGetGravityZ },
			{ "GetMaxSpeed", &UMovementComponent::execGetMaxSpeed },
			{ "GetPhysicsVolume", &UMovementComponent::execGetPhysicsVolume },
			{ "GetPlaneConstraintAxisSetting", &UMovementComponent::execGetPlaneConstraintAxisSetting },
			{ "GetPlaneConstraintNormal", &UMovementComponent::execGetPlaneConstraintNormal },
			{ "GetPlaneConstraintOrigin", &UMovementComponent::execGetPlaneConstraintOrigin },
			{ "IsExceedingMaxSpeed", &UMovementComponent::execIsExceedingMaxSpeed },
			{ "K2_GetMaxSpeedModifier", &UMovementComponent::execK2_GetMaxSpeedModifier },
			{ "K2_GetModifiedMaxSpeed", &UMovementComponent::execK2_GetModifiedMaxSpeed },
			{ "K2_MoveUpdatedComponent", &UMovementComponent::execK2_MoveUpdatedComponent },
			{ "PhysicsVolumeChanged", &UMovementComponent::execPhysicsVolumeChanged },
			{ "SetPlaneConstraintAxisSetting", &UMovementComponent::execSetPlaneConstraintAxisSetting },
			{ "SetPlaneConstraintEnabled", &UMovementComponent::execSetPlaneConstraintEnabled },
			{ "SetPlaneConstraintFromVectors", &UMovementComponent::execSetPlaneConstraintFromVectors },
			{ "SetPlaneConstraintNormal", &UMovementComponent::execSetPlaneConstraintNormal },
			{ "SetPlaneConstraintOrigin", &UMovementComponent::execSetPlaneConstraintOrigin },
			{ "SetUpdatedComponent", &UMovementComponent::execSetUpdatedComponent },
			{ "SnapUpdatedComponentToPlane", &UMovementComponent::execSnapUpdatedComponentToPlane },
			{ "StopMovementImmediately", &UMovementComponent::execStopMovementImmediately },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics
	{
		struct MovementComponent_eventConstrainDirectionToPlane_Parms
		{
			FVector Direction;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainDirectionToPlane_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainDirectionToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/**\n\x09 * Constrain a direction vector to the plane constraint, if enabled.\n\x09 * @see SetPlaneConstraint\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Constrain a direction vector to the plane constraint, if enabled.\n@see SetPlaneConstraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "ConstrainDirectionToPlane", nullptr, nullptr, sizeof(MovementComponent_eventConstrainDirectionToPlane_Parms), Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics
	{
		struct MovementComponent_eventConstrainLocationToPlane_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainLocationToPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainLocationToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Constrain a position vector to the plane constraint, if enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Constrain a position vector to the plane constraint, if enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "ConstrainLocationToPlane", nullptr, nullptr, sizeof(MovementComponent_eventConstrainLocationToPlane_Parms), Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics
	{
		struct MovementComponent_eventConstrainNormalToPlane_Parms
		{
			FVector Normal;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainNormalToPlane_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventConstrainNormalToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Constrain a normal vector (of unit length) to the plane constraint, if enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Constrain a normal vector (of unit length) to the plane constraint, if enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "ConstrainNormalToPlane", nullptr, nullptr, sizeof(MovementComponent_eventConstrainNormalToPlane_Parms), Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics
	{
		struct MovementComponent_eventGetGravityZ_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetGravityZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Returns gravity that affects this component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Returns gravity that affects this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetGravityZ", nullptr, nullptr, sizeof(MovementComponent_eventGetGravityZ_Parms), Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetGravityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetGravityZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics
	{
		struct MovementComponent_eventGetMaxSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Returns maximum speed of component in current movement mode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Returns maximum speed of component in current movement mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetMaxSpeed", nullptr, nullptr, sizeof(MovementComponent_eventGetMaxSpeed_Parms), Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics
	{
		struct MovementComponent_eventGetPhysicsVolume_Parms
		{
			APhysicsVolume* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetPhysicsVolume_Parms, ReturnValue), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Returns the PhysicsVolume this MovementComponent is using, or the world's default physics volume if none. **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Returns the PhysicsVolume this MovementComponent is using, or the world's default physics volume if none. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetPhysicsVolume", nullptr, nullptr, sizeof(MovementComponent_eventGetPhysicsVolume_Parms), Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics
	{
		struct MovementComponent_eventGetPlaneConstraintAxisSetting_Parms
		{
			EPlaneConstraintAxisSetting ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintAxisSetting_Parms, ReturnValue), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/**\n\x09 * Get the plane constraint axis setting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Get the plane constraint axis setting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetPlaneConstraintAxisSetting", nullptr, nullptr, sizeof(MovementComponent_eventGetPlaneConstraintAxisSetting_Parms), Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics
	{
		struct MovementComponent_eventGetPlaneConstraintNormal_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Returns the normal of the plane that constrains movement, enforced if the plane constraint is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Returns the normal of the plane that constrains movement, enforced if the plane constraint is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetPlaneConstraintNormal", nullptr, nullptr, sizeof(MovementComponent_eventGetPlaneConstraintNormal_Parms), Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics
	{
		struct MovementComponent_eventGetPlaneConstraintOrigin_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventGetPlaneConstraintOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/**\n\x09 * Get the plane constraint origin. This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n\x09 * @return The origin of the plane that constrains movement, if the plane constraint is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Get the plane constraint origin. This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n@return The origin of the plane that constrains movement, if the plane constraint is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "GetPlaneConstraintOrigin", nullptr, nullptr, sizeof(MovementComponent_eventGetPlaneConstraintOrigin_Parms), Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics
	{
		struct MovementComponent_eventIsExceedingMaxSpeed_Parms
		{
			float MaxSpeed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventIsExceedingMaxSpeed_Parms, MaxSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovementComponent_eventIsExceedingMaxSpeed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovementComponent_eventIsExceedingMaxSpeed_Parms), &Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/**\n\x09 * Returns true if the current velocity is exceeding the given max speed (usually the result of GetMaxSpeed()), within a small error tolerance.\n\x09 * Note that under normal circumstances updates cause by acceleration will not cause this to be true, however external forces or changes in the max speed limit\n\x09 * can cause the max speed to be violated.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Returns true if the current velocity is exceeding the given max speed (usually the result of GetMaxSpeed()), within a small error tolerance.\nNote that under normal circumstances updates cause by acceleration will not cause this to be true, however external forces or changes in the max speed limit\ncan cause the max speed to be violated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "IsExceedingMaxSpeed", nullptr, nullptr, sizeof(MovementComponent_eventIsExceedingMaxSpeed_Parms), Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics
	{
		struct MovementComponent_eventK2_GetMaxSpeedModifier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventK2_GetMaxSpeedModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Returns a scalar applied to the maximum velocity that the component can currently move. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMaxSpeedModifier() is deprecated, apply your own modifiers to GetMaxSpeed() if desired." },
		{ "DisplayName", "GetMaxSpeedModifier" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ScriptName", "GetMaxSpeedModifier" },
		{ "ToolTip", "Returns a scalar applied to the maximum velocity that the component can currently move." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "K2_GetMaxSpeedModifier", nullptr, nullptr, sizeof(MovementComponent_eventK2_GetMaxSpeedModifier_Parms), Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics
	{
		struct MovementComponent_eventK2_GetModifiedMaxSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventK2_GetModifiedMaxSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Returns the result of GetMaxSpeed() * GetMaxSpeedModifier(). */" },
		{ "DeprecationMessage", "GetModifiedMaxSpeed() is deprecated, apply your own modifiers to GetMaxSpeed() if desired." },
		{ "DisplayName", "GetModifiedMaxSpeed" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ScriptName", "GetModifiedMaxSpeed" },
		{ "ToolTip", "Returns the result of GetMaxSpeed() * GetMaxSpeedModifier()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "K2_GetModifiedMaxSpeed", nullptr, nullptr, sizeof(MovementComponent_eventK2_GetModifiedMaxSpeed_Parms), Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics
	{
		struct MovementComponent_eventK2_MoveUpdatedComponent_Parms
		{
			FVector Delta;
			FRotator NewRotation;
			FHitResult OutHit;
			bool bSweep;
			bool bTeleport;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventK2_MoveUpdatedComponent_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovementComponent_eventK2_MoveUpdatedComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bTeleport" },
		{ "Category", "Components|Movement" },
		{ "Comment", "/**\n\x09 * Moves our UpdatedComponent by the given Delta, and sets rotation to NewRotation.\n\x09 * Respects the plane constraint, if enabled.\n\x09 * @return True if some movement occurred, false if no movement occurred. Result of any impact will be stored in OutHit.\n\x09 */" },
		{ "CPP_Default_bSweep", "true" },
		{ "CPP_Default_bTeleport", "false" },
		{ "DisplayName", "MoveUpdatedComponent" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ScriptName", "MoveUpdatedComponent" },
		{ "ToolTip", "Moves our UpdatedComponent by the given Delta, and sets rotation to NewRotation.\nRespects the plane constraint, if enabled.\n@return True if some movement occurred, false if no movement occurred. Result of any impact will be stored in OutHit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "K2_MoveUpdatedComponent", nullptr, nullptr, sizeof(MovementComponent_eventK2_MoveUpdatedComponent_Parms), Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics
	{
		struct MovementComponent_eventPhysicsVolumeChanged_Parms
		{
			APhysicsVolume* NewVolume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventPhysicsVolumeChanged_Parms, NewVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate when PhysicsVolume of UpdatedComponent has been changed **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Delegate when PhysicsVolume of UpdatedComponent has been changed *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "PhysicsVolumeChanged", nullptr, nullptr, sizeof(MovementComponent_eventPhysicsVolumeChanged_Parms), Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics
	{
		struct MovementComponent_eventSetPlaneConstraintAxisSetting_Parms
		{
			EPlaneConstraintAxisSetting NewAxisSetting;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewAxisSetting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewAxisSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::NewProp_NewAxisSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::NewProp_NewAxisSetting = { "NewAxisSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintAxisSetting_Parms, NewAxisSetting), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::NewProp_NewAxisSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::NewProp_NewAxisSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/**\n\x09 * Set the plane constraint axis setting.\n\x09 * Changing this setting will modify the current value of PlaneConstraintNormal.\n\x09 * \n\x09 * @param  NewAxisSetting New plane constraint axis setting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Set the plane constraint axis setting.\nChanging this setting will modify the current value of PlaneConstraintNormal.\n\n@param  NewAxisSetting New plane constraint axis setting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetPlaneConstraintAxisSetting", nullptr, nullptr, sizeof(MovementComponent_eventSetPlaneConstraintAxisSetting_Parms), Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics
	{
		struct MovementComponent_eventSetPlaneConstraintEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((MovementComponent_eventSetPlaneConstraintEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovementComponent_eventSetPlaneConstraintEnabled_Parms), &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Sets whether or not the plane constraint is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Sets whether or not the plane constraint is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetPlaneConstraintEnabled", nullptr, nullptr, sizeof(MovementComponent_eventSetPlaneConstraintEnabled_Parms), Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics
	{
		struct MovementComponent_eventSetPlaneConstraintFromVectors_Parms
		{
			FVector Forward;
			FVector Up;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintFromVectors_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintFromVectors_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::NewProp_Up,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Uses the Forward and Up vectors to compute the plane that constrains movement, enforced if the plane constraint is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Uses the Forward and Up vectors to compute the plane that constrains movement, enforced if the plane constraint is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetPlaneConstraintFromVectors", nullptr, nullptr, sizeof(MovementComponent_eventSetPlaneConstraintFromVectors_Parms), Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics
	{
		struct MovementComponent_eventSetPlaneConstraintNormal_Parms
		{
			FVector PlaneNormal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintNormal_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::NewProp_PlaneNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/**\n\x09 * Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.\n\x09 * Changing the normal automatically sets PlaneConstraintAxisSetting to \"Custom\".\n\x09 *\n\x09 * @param PlaneNormal\x09The normal of the plane. If non-zero in length, it will be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.\nChanging the normal automatically sets PlaneConstraintAxisSetting to \"Custom\".\n\n@param PlaneNormal   The normal of the plane. If non-zero in length, it will be normalized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetPlaneConstraintNormal", nullptr, nullptr, sizeof(MovementComponent_eventSetPlaneConstraintNormal_Parms), Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics
	{
		struct MovementComponent_eventSetPlaneConstraintOrigin_Parms
		{
			FVector PlaneOrigin;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::NewProp_PlaneOrigin = { "PlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetPlaneConstraintOrigin_Parms, PlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::NewProp_PlaneOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetPlaneConstraintOrigin", nullptr, nullptr, sizeof(MovementComponent_eventSetPlaneConstraintOrigin_Parms), Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics
	{
		struct MovementComponent_eventSetUpdatedComponent_Parms
		{
			USceneComponent* NewUpdatedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewUpdatedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewUpdatedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent = { "NewUpdatedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovementComponent_eventSetUpdatedComponent_Parms, NewUpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Assign the component we move and update. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Assign the component we move and update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SetUpdatedComponent", nullptr, nullptr, sizeof(MovementComponent_eventSetUpdatedComponent_Parms), Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement|Planar" },
		{ "Comment", "/** Snap the updated component to the plane constraint, if enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Snap the updated component to the plane constraint, if enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "SnapUpdatedComponentToPlane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "Comment", "/** Stops movement immediately (zeroes velocity, usually zeros acceleration for components with acceleration). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Stops movement immediately (zeroes velocity, usually zeros acceleration for components with acceleration)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementComponent, nullptr, "StopMovementImmediately", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovementComponent_StopMovementImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovementComponent_StopMovementImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovementComponent_NoRegister()
	{
		return UMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedPrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnlyIfRendered_MetaData[];
#endif
		static void NewProp_bUpdateOnlyIfRendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnlyIfRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateTickRegistration_MetaData[];
#endif
		static void NewProp_bAutoUpdateTickRegistration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateTickRegistration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickBeforeOwner_MetaData[];
#endif
		static void NewProp_bTickBeforeOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickBeforeOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterUpdatedComponent_MetaData[];
#endif
		static void NewProp_bAutoRegisterUpdatedComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterUpdatedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConstrainToPlane_MetaData[];
#endif
		static void NewProp_bConstrainToPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainToPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToPlaneAtStart_MetaData[];
#endif
		static void NewProp_bSnapToPlaneAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToPlaneAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterPhysicsVolumeUpdates_MetaData[];
#endif
		static void NewProp_bAutoRegisterPhysicsVolumeUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterPhysicsVolumeUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentShouldUpdatePhysicsVolume_MetaData[];
#endif
		static void NewProp_bComponentShouldUpdatePhysicsVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentShouldUpdatePhysicsVolume;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneConstraintAxisSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintAxisSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneConstraintAxisSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementComponent_ConstrainDirectionToPlane, "ConstrainDirectionToPlane" }, // 3536381914
		{ &Z_Construct_UFunction_UMovementComponent_ConstrainLocationToPlane, "ConstrainLocationToPlane" }, // 1763822476
		{ &Z_Construct_UFunction_UMovementComponent_ConstrainNormalToPlane, "ConstrainNormalToPlane" }, // 2422347532
		{ &Z_Construct_UFunction_UMovementComponent_GetGravityZ, "GetGravityZ" }, // 1348742963
		{ &Z_Construct_UFunction_UMovementComponent_GetMaxSpeed, "GetMaxSpeed" }, // 1211439141
		{ &Z_Construct_UFunction_UMovementComponent_GetPhysicsVolume, "GetPhysicsVolume" }, // 3199339347
		{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintAxisSetting, "GetPlaneConstraintAxisSetting" }, // 3954226926
		{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintNormal, "GetPlaneConstraintNormal" }, // 2322134214
		{ &Z_Construct_UFunction_UMovementComponent_GetPlaneConstraintOrigin, "GetPlaneConstraintOrigin" }, // 138578642
		{ &Z_Construct_UFunction_UMovementComponent_IsExceedingMaxSpeed, "IsExceedingMaxSpeed" }, // 1626494657
		{ &Z_Construct_UFunction_UMovementComponent_K2_GetMaxSpeedModifier, "K2_GetMaxSpeedModifier" }, // 492444978
		{ &Z_Construct_UFunction_UMovementComponent_K2_GetModifiedMaxSpeed, "K2_GetModifiedMaxSpeed" }, // 1303781022
		{ &Z_Construct_UFunction_UMovementComponent_K2_MoveUpdatedComponent, "K2_MoveUpdatedComponent" }, // 1864791612
		{ &Z_Construct_UFunction_UMovementComponent_PhysicsVolumeChanged, "PhysicsVolumeChanged" }, // 89083713
		{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintAxisSetting, "SetPlaneConstraintAxisSetting" }, // 2111990867
		{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintEnabled, "SetPlaneConstraintEnabled" }, // 4260449881
		{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintFromVectors, "SetPlaneConstraintFromVectors" }, // 3367521253
		{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintNormal, "SetPlaneConstraintNormal" }, // 1155796758
		{ &Z_Construct_UFunction_UMovementComponent_SetPlaneConstraintOrigin, "SetPlaneConstraintOrigin" }, // 603558036
		{ &Z_Construct_UFunction_UMovementComponent_SetUpdatedComponent, "SetUpdatedComponent" }, // 1773178233
		{ &Z_Construct_UFunction_UMovementComponent_SnapUpdatedComponentToPlane, "SnapUpdatedComponentToPlane" }, // 1644848806
		{ &Z_Construct_UFunction_UMovementComponent_StopMovementImmediately, "StopMovementImmediately" }, // 3804276185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * MovementComponent is an abstract component class that defines functionality for moving a PrimitiveComponent (our UpdatedComponent) each tick.\n * Base functionality includes:\n *    - Restricting movement to a plane or axis.\n *    - Utility functions for special handling of collision results (SlideAlongSurface(), ComputeSlideVector(), TwoWallAdjust()).\n *    - Utility functions for moving when there may be initial penetration (SafeMoveUpdatedComponent(), ResolvePenetration()).\n *    - Automatically registering the component tick and finding a component to move on the owning Actor.\n * Normally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\n * During swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision.\n */" },
		{ "IncludePath", "GameFramework/MovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "MovementComponent is an abstract component class that defines functionality for moving a PrimitiveComponent (our UpdatedComponent) each tick.\nBase functionality includes:\n   - Restricting movement to a plane or axis.\n   - Utility functions for special handling of collision results (SlideAlongSurface(), ComputeSlideVector(), TwoWallAdjust()).\n   - Utility functions for moving when there may be initial penetration (SafeMoveUpdatedComponent(), ResolvePenetration()).\n   - Automatically registering the component tick and finding a component to move on the owning Actor.\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nDuring swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedComponent_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * The component we move and update.\n\x09 * If this is null at startup and bAutoRegisterUpdatedComponent is true, the owning Actor's root component will automatically be set as our UpdatedComponent at startup.\n\x09 * @see bAutoRegisterUpdatedComponent, SetUpdatedComponent(), UpdatedPrimitive\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "The component we move and update.\nIf this is null at startup and bAutoRegisterUpdatedComponent is true, the owning Actor's root component will automatically be set as our UpdatedComponent at startup.\n@see bAutoRegisterUpdatedComponent, SetUpdatedComponent(), UpdatedPrimitive" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedComponent = { "UpdatedComponent", nullptr, (EPropertyFlags)0x001000000028201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedPrimitive = { "UpdatedPrimitive", nullptr, (EPropertyFlags)0x001000000028201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, UpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedPrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** Current velocity of updated component. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Current velocity of updated component." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintNormal_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/**\n\x09 * The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled.\n\x09 * If for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0.\n\x09 * This is recalculated whenever PlaneConstraintAxisSetting changes. It is normalized once the component is registered with the game world.\n\x09 * @see bConstrainToPlane, SetPlaneConstraintNormal(), SetPlaneConstraintFromVectors()\n\x09 */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled.\nIf for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0.\nThis is recalculated whenever PlaneConstraintAxisSetting changes. It is normalized once the component is registered with the game world.\n@see bConstrainToPlane, SetPlaneConstraintNormal(), SetPlaneConstraintFromVectors()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintNormal = { "PlaneConstraintNormal", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, PlaneConstraintNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintOrigin_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/**\n\x09 * The origin of the plane that constrains movement, if plane constraint is enabled. \n\x09 * This defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n\x09 * @see bConstrainToPlane, SetPlaneConstraintOrigin().\n\x09 */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "The origin of the plane that constrains movement, if plane constraint is enabled.\nThis defines the behavior of snapping a position to the plane, such as by SnapUpdatedComponentToPlane().\n@see bConstrainToPlane, SetPlaneConstraintOrigin()." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintOrigin = { "PlaneConstraintOrigin", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, PlaneConstraintOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/** If true, skips TickComponent() if UpdatedComponent was not recently rendered. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, skips TickComponent() if UpdatedComponent was not recently rendered." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bUpdateOnlyIfRendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered = { "bUpdateOnlyIfRendered", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * If true, whenever the updated component is changed, this component will enable or disable its tick dependent on whether it has something to update.\n\x09 * This will NOT enable tick at startup if bAutoActivate is false, because presumably you have a good reason for not wanting it to start ticking initially.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, whenever the updated component is changed, this component will enable or disable its tick dependent on whether it has something to update.\nThis will NOT enable tick at startup if bAutoActivate is false, because presumably you have a good reason for not wanting it to start ticking initially." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bAutoUpdateTickRegistration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration = { "bAutoUpdateTickRegistration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * If true, after registration we will add a tick dependency to tick before our owner (if we can both tick).\n\x09 * This is important when our tick causes an update in the owner's position, so that when the owner ticks it uses the most recent position without lag.\n\x09 * Disabling this can improve performance if both objects tick but the order of ticks doesn't matter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, after registration we will add a tick dependency to tick before our owner (if we can both tick).\nThis is important when our tick causes an update in the owner's position, so that when the owner ticks it uses the most recent position without lag.\nDisabling this can improve performance if both objects tick but the order of ticks doesn't matter." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bTickBeforeOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner = { "bTickBeforeOwner", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/** If true, registers the owner's Root component as the UpdatedComponent if there is not one currently assigned. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, registers the owner's Root component as the UpdatedComponent if there is not one currently assigned." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bAutoRegisterUpdatedComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent = { "bAutoRegisterUpdatedComponent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/**\n\x09 * If true, movement will be constrained to a plane.\n\x09 * @see PlaneConstraintNormal, PlaneConstraintOrigin, PlaneConstraintAxisSetting\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, movement will be constrained to a plane.\n@see PlaneConstraintNormal, PlaneConstraintOrigin, PlaneConstraintAxisSetting" },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bConstrainToPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane = { "bConstrainToPlane", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/** If true and plane constraints are enabled, then the updated component will be snapped to the plane when first attached. */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true and plane constraints are enabled, then the updated component will be snapped to the plane when first attached." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bSnapToPlaneAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart = { "bSnapToPlaneAtStart", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * If true, then applies the value of bComponentShouldUpdatePhysicsVolume to the UpdatedComponent. If false, will not change bShouldUpdatePhysicsVolume on the UpdatedComponent at all.\n\x09 * @see bComponentShouldUpdatePhysicsVolume\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, then applies the value of bComponentShouldUpdatePhysicsVolume to the UpdatedComponent. If false, will not change bShouldUpdatePhysicsVolume on the UpdatedComponent at all.\n@see bComponentShouldUpdatePhysicsVolume" },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bAutoRegisterPhysicsVolumeUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates = { "bAutoRegisterPhysicsVolumeUpdates", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "Comment", "/**\n\x09 * If true, enables bShouldUpdatePhysicsVolume on the UpdatedComponent during initialization from SetUpdatedComponent(), otherwise disables such updates.\n\x09 * Only enabled if bAutoRegisterPhysicsVolumeUpdates is true.\n\x09 * WARNING: UpdatePhysicsVolume is potentially expensive if overlap events are also *disabled* because it requires a separate query against all physics volumes in the world.\n\x09 */" },
		{ "editcondition", "bAutoRegisterPhysicsVolumeUpdates" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "If true, enables bShouldUpdatePhysicsVolume on the UpdatedComponent during initialization from SetUpdatedComponent(), otherwise disables such updates.\nOnly enabled if bAutoRegisterPhysicsVolumeUpdates is true.\nWARNING: UpdatePhysicsVolume is potentially expensive if overlap events are also *disabled* because it requires a separate query against all physics volumes in the world." },
	};
#endif
	void Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume_SetBit(void* Obj)
	{
		((UMovementComponent*)Obj)->bComponentShouldUpdatePhysicsVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume = { "bComponentShouldUpdatePhysicsVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovementComponent), &Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/**\n\x09 * Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\n\x09 * so that movement along the locked axis is not be possible.\n\x09 * @see SetPlaneConstraintAxisSetting\n\x09 */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Classes/GameFramework/MovementComponent.h" },
		{ "ToolTip", "Setting that controls behavior when movement is restricted to a 2D plane defined by a specific axis/normal,\nso that movement along the locked axis is not be possible.\n@see SetPlaneConstraintAxisSetting" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting = { "PlaneConstraintAxisSetting", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovementComponent, PlaneConstraintAxisSetting), Z_Construct_UEnum_Engine_EPlaneConstraintAxisSetting, METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_UpdatedPrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bUpdateOnlyIfRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoUpdateTickRegistration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bTickBeforeOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterUpdatedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bConstrainToPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bSnapToPlaneAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bAutoRegisterPhysicsVolumeUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_bComponentShouldUpdatePhysicsVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementComponent_Statics::NewProp_PlaneConstraintAxisSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovementComponent_Statics::ClassParams = {
		&UMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovementComponent, 3263168844);
	template<> ENGINE_API UClass* StaticClass<UMovementComponent>()
	{
		return UMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovementComponent(Z_Construct_UClass_UMovementComponent, &UMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovementComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/GeometryCollection/GeometryCollectionSimulationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSimulationTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum();
	UPackage* Z_Construct_UPackage__Script_Chaos();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum();
// End Cross Module References
	static UEnum* EEmissionPatternTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("EEmissionPatternTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EEmissionPatternTypeEnum>()
	{
		return EEmissionPatternTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmissionPatternTypeEnum(EEmissionPatternTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("EEmissionPatternTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Hash() { return 2636105983U; }
	UEnum* Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmissionPatternTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame },
				{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand },
				{ "EEmissionPatternTypeEnum::Chaos_Max", (int64)EEmissionPatternTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Emission_Pattern_First_Frame.DisplayName", "First Frame" },
				{ "Chaos_Emission_Pattern_First_Frame.Name", "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame" },
				{ "Chaos_Emission_Pattern_On_Demand.DisplayName", "On Demand" },
				{ "Chaos_Emission_Pattern_On_Demand.Name", "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand" },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "EEmissionPatternTypeEnum::Chaos_Max" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EEmissionPatternTypeEnum",
				"EEmissionPatternTypeEnum",
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
	static UEnum* EInitialVelocityTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("EInitialVelocityTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EInitialVelocityTypeEnum>()
	{
		return EInitialVelocityTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialVelocityTypeEnum(EInitialVelocityTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("EInitialVelocityTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Hash() { return 3164083041U; }
	UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialVelocityTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined },
				{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None },
				{ "EInitialVelocityTypeEnum::Chaos_Max", (int64)EInitialVelocityTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Initial_Velocity_None.Comment", "//Chaos_Initial_Velocity_Field UMETA(DisplayName = \"Field\"),\n" },
				{ "Chaos_Initial_Velocity_None.DisplayName", "None" },
				{ "Chaos_Initial_Velocity_None.Name", "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None" },
				{ "Chaos_Initial_Velocity_None.ToolTip", "Chaos_Initial_Velocity_Field UMETA(DisplayName = \"Field\")," },
				{ "Chaos_Initial_Velocity_User_Defined.Comment", "//Chaos_Initial_Velocity_Animation UMETA(DisplayName = \"Animation\"),\n" },
				{ "Chaos_Initial_Velocity_User_Defined.DisplayName", "User Defined" },
				{ "Chaos_Initial_Velocity_User_Defined.Name", "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined" },
				{ "Chaos_Initial_Velocity_User_Defined.ToolTip", "Chaos_Initial_Velocity_Animation UMETA(DisplayName = \"Animation\")," },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "EInitialVelocityTypeEnum::Chaos_Max" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EInitialVelocityTypeEnum",
				"EInitialVelocityTypeEnum",
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
	static UEnum* EGeometryCollectionPhysicsTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("EGeometryCollectionPhysicsTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EGeometryCollectionPhysicsTypeEnum>()
	{
		return EGeometryCollectionPhysicsTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGeometryCollectionPhysicsTypeEnum(EGeometryCollectionPhysicsTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("EGeometryCollectionPhysicsTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Hash() { return 4000559624U; }
	UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGeometryCollectionPhysicsTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque },
				{ "EGeometryCollectionPhysicsTypeEnum::Chaos_Max", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_AngularTorque.DisplayName", "Angular Torque" },
				{ "Chaos_AngularTorque.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque" },
				{ "Chaos_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
				{ "Chaos_AngularVelocity.DisplayName", "Angular Velocity" },
				{ "Chaos_AngularVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity" },
				{ "Chaos_AngularVelocity.ToolTip", "Add a vector field to the particles angular velocity." },
				{ "Chaos_CollisionGroup.DisplayName", "Collision Group" },
				{ "Chaos_CollisionGroup.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup" },
				{ "Chaos_CollisionGroup.ToolTip", "Set the particles collision group." },
				{ "Chaos_DynamicState.DisplayName", "Dynamic State" },
				{ "Chaos_DynamicState.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState" },
				{ "Chaos_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
				{ "Chaos_InitialAngularVelocity.DisplayName", "Initial Angular Velocity" },
				{ "Chaos_InitialAngularVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity" },
				{ "Chaos_InitialAngularVelocity.ToolTip", "Initial particles angular velocity." },
				{ "Chaos_InitialLinearVelocity.DisplayName", "Initial Linear Velocity" },
				{ "Chaos_InitialLinearVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity" },
				{ "Chaos_InitialLinearVelocity.ToolTip", "Initial particles linear velocity." },
				{ "Chaos_LinearForce.DisplayName", "Linear Force" },
				{ "Chaos_LinearForce.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce" },
				{ "Chaos_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
				{ "Chaos_LinearVelocity.DisplayName", "Linear Velocity" },
				{ "Chaos_LinearVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity" },
				{ "Chaos_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_Max" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EGeometryCollectionPhysicsTypeEnum",
				"EGeometryCollectionPhysicsTypeEnum",
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
	static UEnum* EObjectStateTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("EObjectStateTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EObjectStateTypeEnum>()
	{
		return EObjectStateTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectStateTypeEnum(EObjectStateTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("EObjectStateTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Hash() { return 1207702748U; }
	UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectStateTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectStateTypeEnum::Chaos_NONE", (int64)EObjectStateTypeEnum::Chaos_NONE },
				{ "EObjectStateTypeEnum::Chaos_Object_Sleeping", (int64)EObjectStateTypeEnum::Chaos_Object_Sleeping },
				{ "EObjectStateTypeEnum::Chaos_Object_Kinematic", (int64)EObjectStateTypeEnum::Chaos_Object_Kinematic },
				{ "EObjectStateTypeEnum::Chaos_Object_Static", (int64)EObjectStateTypeEnum::Chaos_Object_Static },
				{ "EObjectStateTypeEnum::Chaos_Object_Dynamic", (int64)EObjectStateTypeEnum::Chaos_Object_Dynamic },
				{ "EObjectStateTypeEnum::Chaos_Object_UserDefined", (int64)EObjectStateTypeEnum::Chaos_Object_UserDefined },
				{ "EObjectStateTypeEnum::Chaos_Max", (int64)EObjectStateTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "EObjectStateTypeEnum::Chaos_Max" },
				{ "Chaos_NONE.Hidden", "" },
				{ "Chaos_NONE.Name", "EObjectStateTypeEnum::Chaos_NONE" },
				{ "Chaos_Object_Dynamic.Comment", "/*Chaos::EObjectStateType::Static*/" },
				{ "Chaos_Object_Dynamic.DisplayName", "Dynamic" },
				{ "Chaos_Object_Dynamic.Name", "EObjectStateTypeEnum::Chaos_Object_Dynamic" },
				{ "Chaos_Object_Dynamic.ToolTip", "Chaos::EObjectStateType::Static" },
				{ "Chaos_Object_Kinematic.Comment", "/*Chaos::EObjectStateType::Sleeping*/" },
				{ "Chaos_Object_Kinematic.DisplayName", "Kinematic" },
				{ "Chaos_Object_Kinematic.Name", "EObjectStateTypeEnum::Chaos_Object_Kinematic" },
				{ "Chaos_Object_Kinematic.ToolTip", "Chaos::EObjectStateType::Sleeping" },
				{ "Chaos_Object_Sleeping.DisplayName", "Sleeping" },
				{ "Chaos_Object_Sleeping.Name", "EObjectStateTypeEnum::Chaos_Object_Sleeping" },
				{ "Chaos_Object_Static.Comment", "/*Chaos::EObjectStateType::Kinematic*/" },
				{ "Chaos_Object_Static.DisplayName", "Static" },
				{ "Chaos_Object_Static.Name", "EObjectStateTypeEnum::Chaos_Object_Static" },
				{ "Chaos_Object_Static.ToolTip", "Chaos::EObjectStateType::Kinematic" },
				{ "Chaos_Object_UserDefined.Comment", "/*Chaos::EObjectStateType::Dynamic*/" },
				{ "Chaos_Object_UserDefined.DisplayName", "User Defined" },
				{ "Chaos_Object_UserDefined.Name", "EObjectStateTypeEnum::Chaos_Object_UserDefined" },
				{ "Chaos_Object_UserDefined.ToolTip", "Chaos::EObjectStateType::Dynamic" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EObjectStateTypeEnum",
				"EObjectStateTypeEnum",
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
	static UEnum* EImplicitTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EImplicitTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("EImplicitTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EImplicitTypeEnum>()
	{
		return EImplicitTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImplicitTypeEnum(EImplicitTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("EImplicitTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Hash() { return 2803559475U; }
	UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImplicitTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImplicitTypeEnum::Chaos_Implicit_Box", (int64)EImplicitTypeEnum::Chaos_Implicit_Box },
				{ "EImplicitTypeEnum::Chaos_Implicit_Sphere", (int64)EImplicitTypeEnum::Chaos_Implicit_Sphere },
				{ "EImplicitTypeEnum::Chaos_Implicit_Capsule", (int64)EImplicitTypeEnum::Chaos_Implicit_Capsule },
				{ "EImplicitTypeEnum::Chaos_Implicit_LevelSet", (int64)EImplicitTypeEnum::Chaos_Implicit_LevelSet },
				{ "EImplicitTypeEnum::Chaos_Implicit_None", (int64)EImplicitTypeEnum::Chaos_Implicit_None },
				{ "EImplicitTypeEnum::Chaos_Max", (int64)EImplicitTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Implicit_Box.DisplayName", "Box" },
				{ "Chaos_Implicit_Box.Name", "EImplicitTypeEnum::Chaos_Implicit_Box" },
				{ "Chaos_Implicit_Capsule.DisplayName", "Capsule" },
				{ "Chaos_Implicit_Capsule.Name", "EImplicitTypeEnum::Chaos_Implicit_Capsule" },
				{ "Chaos_Implicit_LevelSet.DisplayName", "Level Set" },
				{ "Chaos_Implicit_LevelSet.Name", "EImplicitTypeEnum::Chaos_Implicit_LevelSet" },
				{ "Chaos_Implicit_None.DisplayName", "None" },
				{ "Chaos_Implicit_None.Name", "EImplicitTypeEnum::Chaos_Implicit_None" },
				{ "Chaos_Implicit_Sphere.DisplayName", "Sphere" },
				{ "Chaos_Implicit_Sphere.Name", "EImplicitTypeEnum::Chaos_Implicit_Sphere" },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "EImplicitTypeEnum::Chaos_Max" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"EImplicitTypeEnum",
				"EImplicitTypeEnum",
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
	static UEnum* ECollisionTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ECollisionTypeEnum, Z_Construct_UPackage__Script_Chaos(), TEXT("ECollisionTypeEnum"));
		}
		return Singleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<ECollisionTypeEnum>()
	{
		return ECollisionTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionTypeEnum(ECollisionTypeEnum_StaticEnum, TEXT("/Script/Chaos"), TEXT("ECollisionTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Hash() { return 779496222U; }
	UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Chaos();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionTypeEnum"), 0, Get_Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionTypeEnum::Chaos_Volumetric", (int64)ECollisionTypeEnum::Chaos_Volumetric },
				{ "ECollisionTypeEnum::Chaos_Surface_Volumetric", (int64)ECollisionTypeEnum::Chaos_Surface_Volumetric },
				{ "ECollisionTypeEnum::Chaos_Max", (int64)ECollisionTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "ECollisionTypeEnum::Chaos_Max" },
				{ "Chaos_Surface_Volumetric.DisplayName", "Particle-Implicit" },
				{ "Chaos_Surface_Volumetric.Name", "ECollisionTypeEnum::Chaos_Surface_Volumetric" },
				{ "Chaos_Volumetric.DisplayName", "Implicit-Implicit" },
				{ "Chaos_Volumetric.Name", "ECollisionTypeEnum::Chaos_Volumetric" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
				nullptr,
				"ECollisionTypeEnum",
				"ECollisionTypeEnum",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTypes() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard();
// End Cross Module References
	static UEnum* ENiagaraOrientationAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraOrientationAxis"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraOrientationAxis>()
	{
		return ENiagaraOrientationAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraOrientationAxis(ENiagaraOrientationAxis_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraOrientationAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Hash() { return 1896047494U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraOrientationAxis"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraOrientationAxis::XAxis", (int64)ENiagaraOrientationAxis::XAxis },
				{ "ENiagaraOrientationAxis::YAxis", (int64)ENiagaraOrientationAxis::YAxis },
				{ "ENiagaraOrientationAxis::ZAxis", (int64)ENiagaraOrientationAxis::ZAxis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "XAxis.DisplayName", "X Axis" },
				{ "XAxis.Name", "ENiagaraOrientationAxis::XAxis" },
				{ "YAxis.DisplayName", "Y Axis" },
				{ "YAxis.Name", "ENiagaraOrientationAxis::YAxis" },
				{ "ZAxis.DisplayName", "Z Axis" },
				{ "ZAxis.Name", "ENiagaraOrientationAxis::ZAxis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraOrientationAxis",
				"ENiagaraOrientationAxis",
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
	static UEnum* ENiagaraPythonUpdateScriptReference_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPythonUpdateScriptReference"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPythonUpdateScriptReference>()
	{
		return ENiagaraPythonUpdateScriptReference_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraPythonUpdateScriptReference(ENiagaraPythonUpdateScriptReference_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraPythonUpdateScriptReference"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Hash() { return 3685891646U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraPythonUpdateScriptReference"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraPythonUpdateScriptReference::None", (int64)ENiagaraPythonUpdateScriptReference::None },
				{ "ENiagaraPythonUpdateScriptReference::ScriptAsset", (int64)ENiagaraPythonUpdateScriptReference::ScriptAsset },
				{ "ENiagaraPythonUpdateScriptReference::DirectTextEntry", (int64)ENiagaraPythonUpdateScriptReference::DirectTextEntry },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DirectTextEntry.Name", "ENiagaraPythonUpdateScriptReference::DirectTextEntry" },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Name", "ENiagaraPythonUpdateScriptReference::None" },
				{ "ScriptAsset.Name", "ENiagaraPythonUpdateScriptReference::ScriptAsset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraPythonUpdateScriptReference",
				"ENiagaraPythonUpdateScriptReference",
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
	static UEnum* ENiagaraCoordinateSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCoordinateSpace"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCoordinateSpace>()
	{
		return ENiagaraCoordinateSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraCoordinateSpace(ENiagaraCoordinateSpace_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraCoordinateSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Hash() { return 3895572535U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraCoordinateSpace"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraCoordinateSpace::Simulation", (int64)ENiagaraCoordinateSpace::Simulation },
				{ "ENiagaraCoordinateSpace::World", (int64)ENiagaraCoordinateSpace::World },
				{ "ENiagaraCoordinateSpace::Local", (int64)ENiagaraCoordinateSpace::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.Comment", "/** Use the local coordinate space*/" },
				{ "Local.Name", "ENiagaraCoordinateSpace::Local" },
				{ "Local.ToolTip", "Use the local coordinate space" },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "Simulation.Comment", "/** Use the coordinate space specified by the Emitter*/" },
				{ "Simulation.Name", "ENiagaraCoordinateSpace::Simulation" },
				{ "Simulation.ToolTip", "Use the coordinate space specified by the Emitter" },
				{ "World.Comment", "/** Use the world coordinate space*/" },
				{ "World.Name", "ENiagaraCoordinateSpace::World" },
				{ "World.ToolTip", "Use the world coordinate space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraCoordinateSpace",
				"ENiagaraCoordinateSpace",
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
	static UEnum* ENiagaraExecutionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionState>()
	{
		return ENiagaraExecutionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraExecutionState(ENiagaraExecutionState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraExecutionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Hash() { return 3058118900U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExecutionState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExecutionState::Active", (int64)ENiagaraExecutionState::Active },
				{ "ENiagaraExecutionState::Inactive", (int64)ENiagaraExecutionState::Inactive },
				{ "ENiagaraExecutionState::InactiveClear", (int64)ENiagaraExecutionState::InactiveClear },
				{ "ENiagaraExecutionState::Complete", (int64)ENiagaraExecutionState::Complete },
				{ "ENiagaraExecutionState::Disabled", (int64)ENiagaraExecutionState::Disabled },
				{ "ENiagaraExecutionState::Num", (int64)ENiagaraExecutionState::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "/**  Run all scripts. Allow spawning.*/" },
				{ "Active.Name", "ENiagaraExecutionState::Active" },
				{ "Active.ToolTip", "Run all scripts. Allow spawning." },
				{ "Complete.Comment", "/** Complete. When the system or all emitters are complete the effect is considered finished. */" },
				{ "Complete.Name", "ENiagaraExecutionState::Complete" },
				{ "Complete.ToolTip", "Complete. When the system or all emitters are complete the effect is considered finished." },
				{ "Disabled.Comment", "/** Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system. */" },
				{ "Disabled.Hidden", "" },
				{ "Disabled.Name", "ENiagaraExecutionState::Disabled" },
				{ "Disabled.ToolTip", "Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system." },
				{ "Inactive.Comment", "/** Run all scripts but suppress any new spawning.*/" },
				{ "Inactive.Name", "ENiagaraExecutionState::Inactive" },
				{ "Inactive.ToolTip", "Run all scripts but suppress any new spawning." },
				{ "InactiveClear.Comment", "/** Clear all existing particles and move to inactive.*/" },
				{ "InactiveClear.Name", "ENiagaraExecutionState::InactiveClear" },
				{ "InactiveClear.ToolTip", "Clear all existing particles and move to inactive." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "Num.Comment", "// insert new states before\n" },
				{ "Num.Hidden", "" },
				{ "Num.Name", "ENiagaraExecutionState::Num" },
				{ "Num.ToolTip", "insert new states before" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraExecutionState",
				"ENiagaraExecutionState",
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
	static UEnum* ENiagaraExecutionStateSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionStateSource"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionStateSource>()
	{
		return ENiagaraExecutionStateSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraExecutionStateSource(ENiagaraExecutionStateSource_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraExecutionStateSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Hash() { return 4020555700U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraExecutionStateSource"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraExecutionStateSource::Scalability", (int64)ENiagaraExecutionStateSource::Scalability },
				{ "ENiagaraExecutionStateSource::Internal", (int64)ENiagaraExecutionStateSource::Internal },
				{ "ENiagaraExecutionStateSource::Owner", (int64)ENiagaraExecutionStateSource::Owner },
				{ "ENiagaraExecutionStateSource::InternalCompletion", (int64)ENiagaraExecutionStateSource::InternalCompletion },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \nThe source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence. \nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion\n*/" },
				{ "Internal.Comment", "//State set by Scalability logic. Lowest precedence.\n" },
				{ "Internal.Name", "ENiagaraExecutionStateSource::Internal" },
				{ "Internal.ToolTip", "State set by Scalability logic. Lowest precedence." },
				{ "InternalCompletion.Comment", "//State requested by the owner. Takes precedence over everything but internal completion logic.\n" },
				{ "InternalCompletion.Name", "ENiagaraExecutionStateSource::InternalCompletion" },
				{ "InternalCompletion.ToolTip", "State requested by the owner. Takes precedence over everything but internal completion logic." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "Owner.Comment", "//Misc internal state. For example becoming inactive after we finish our set loops.\n" },
				{ "Owner.Name", "ENiagaraExecutionStateSource::Owner" },
				{ "Owner.ToolTip", "Misc internal state. For example becoming inactive after we finish our set loops." },
				{ "Scalability.Name", "ENiagaraExecutionStateSource::Scalability" },
				{ "ToolTip", "The source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence.\nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraExecutionStateSource",
				"ENiagaraExecutionStateSource",
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
	static UEnum* ENiagaraNumericOutputTypeSelectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraNumericOutputTypeSelectionMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraNumericOutputTypeSelectionMode>()
	{
		return ENiagaraNumericOutputTypeSelectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraNumericOutputTypeSelectionMode(ENiagaraNumericOutputTypeSelectionMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraNumericOutputTypeSelectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Hash() { return 1928698617U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraNumericOutputTypeSelectionMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraNumericOutputTypeSelectionMode::None", (int64)ENiagaraNumericOutputTypeSelectionMode::None },
				{ "ENiagaraNumericOutputTypeSelectionMode::Largest", (int64)ENiagaraNumericOutputTypeSelectionMode::Largest },
				{ "ENiagaraNumericOutputTypeSelectionMode::Smallest", (int64)ENiagaraNumericOutputTypeSelectionMode::Smallest },
				{ "ENiagaraNumericOutputTypeSelectionMode::Scalar", (int64)ENiagaraNumericOutputTypeSelectionMode::Scalar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs. */" },
				{ "Largest.Comment", "/** Select the largest of the numeric inputs. */" },
				{ "Largest.Name", "ENiagaraNumericOutputTypeSelectionMode::Largest" },
				{ "Largest.ToolTip", "Select the largest of the numeric inputs." },
				{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
				{ "None.Comment", "/** Output type selection not supported. */" },
				{ "None.Hidden", "" },
				{ "None.Name", "ENiagaraNumericOutputTypeSelectionMode::None" },
				{ "None.ToolTip", "Output type selection not supported." },
				{ "Scalar.Comment", "/** Selects the base scalar type for this numeric inputs. */" },
				{ "Scalar.Name", "ENiagaraNumericOutputTypeSelectionMode::Scalar" },
				{ "Scalar.ToolTip", "Selects the base scalar type for this numeric inputs." },
				{ "Smallest.Comment", "/** Select the smallest of the numeric inputs. */" },
				{ "Smallest.Name", "ENiagaraNumericOutputTypeSelectionMode::Smallest" },
				{ "Smallest.ToolTip", "Select the smallest of the numeric inputs." },
				{ "ToolTip", "Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraNumericOutputTypeSelectionMode",
				"ENiagaraNumericOutputTypeSelectionMode",
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

static_assert(std::is_polymorphic<FNiagaraVariable>() == std::is_polymorphic<FNiagaraVariableBase>(), "USTRUCT FNiagaraVariable cannot be polymorphic unless super FNiagaraVariableBase is polymorphic");

class UScriptStruct* FNiagaraVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariable"), sizeof(FNiagaraVariable), Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariable>()
{
	return FNiagaraVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariable(FNiagaraVariable::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariable"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariable>(FName(TEXT("NiagaraVariable")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariable;
	struct Z_Construct_UScriptStruct_FNiagaraVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VarData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VarData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariable>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner = { "VarData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData[] = {
		{ "Comment", "//This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\n//TODO: Remove storage here entirely and move everything to an FNiagaraParameterStore.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\nTODO: Remove storage here entirely and move everything to an FNiagaraParameterStore." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData = { "VarData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariable, VarData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraVariableBase,
		&NewStructOps,
		"NiagaraVariable",
		sizeof(FNiagaraVariable),
		alignof(FNiagaraVariable),
		Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariable"), sizeof(FNiagaraVariable), Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariable_Hash() { return 1695622461U; }
class UScriptStruct* FNiagaraVariableBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableBase, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableBase"), sizeof(FNiagaraVariableBase), Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableBase>()
{
	return FNiagaraVariableBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableBase(FNiagaraVariableBase::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableBase"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariableBase>(FName(TEXT("NiagaraVariableBase")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableBase;
	struct Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDefHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeDefHandle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeDef;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableBase, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle = { "TypeDefHandle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableBase, TypeDefHandle), Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef = { "TypeDef", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableBase, TypeDef_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableBase",
		sizeof(FNiagaraVariableBase),
		alignof(FNiagaraVariableBase),
		Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableBase"), sizeof(FNiagaraVariableBase), Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableBase_Hash() { return 1046323903U; }
class UScriptStruct* FNiagaraTypeDefinitionHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinitionHandle"), sizeof(FNiagaraTypeDefinitionHandle), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinitionHandle>()
{
	return FNiagaraTypeDefinitionHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTypeDefinitionHandle(FNiagaraTypeDefinitionHandle::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTypeDefinitionHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinitionHandle
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinitionHandle()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraTypeDefinitionHandle>(FName(TEXT("NiagaraTypeDefinitionHandle")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinitionHandle;
	struct Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegisteredTypeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinitionHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex = { "RegisteredTypeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinitionHandle, RegisteredTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeDefinitionHandle",
		sizeof(FNiagaraTypeDefinitionHandle),
		alignof(FNiagaraTypeDefinitionHandle),
		Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTypeDefinitionHandle"), sizeof(FNiagaraTypeDefinitionHandle), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Hash() { return 1616418208U; }
class UScriptStruct* FNiagaraTypeDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinition, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinition"), sizeof(FNiagaraTypeDefinition), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinition>()
{
	return FNiagaraTypeDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTypeDefinition(FNiagaraTypeDefinition::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTypeDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraTypeDefinition>(FName(TEXT("NiagaraTypeDefinition")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeDefinition;
	struct Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassStructOrEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassStructOrEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_UnderlyingType;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/*\n\x09Underlying type for this variable, use FUnderlyingType to determine type without casting\n\x09This can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\n\x09In occasional situations this may be a UClass when we're dealing with DataInterface etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Underlying type for this variable, use FUnderlyingType to determine type without casting\nThis can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\nIn occasional situations this may be a UClass when we're dealing with DataInterface etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum = { "ClassStructOrEnum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, ClassStructOrEnum), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// See enumeration FUnderlyingType for possible values\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "See enumeration FUnderlyingType for possible values" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, UnderlyingType), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Struct_DEPRECATED), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Enum_DEPRECATED), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeDefinition",
		sizeof(FNiagaraTypeDefinition),
		alignof(FNiagaraTypeDefinition),
		Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTypeDefinition"), sizeof(FNiagaraTypeDefinition), Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Hash() { return 1585005907U; }
class UScriptStruct* FNiagaraVariableMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableMetaData"), sizeof(FNiagaraVariableMetaData), Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableMetaData>()
{
	return FNiagaraVariableMetaData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableMetaData(FNiagaraVariableMetaData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariableMetaData>(FName(TEXT("NiagaraVariableMetaData")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableMetaData;
	struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvancedDisplay_MetaData[];
#endif
		static void NewProp_bAdvancedDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvancedDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorSortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInlineEditConditionToggle_MetaData[];
#endif
		static void NewProp_bInlineEditConditionToggle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInlineEditConditionToggle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleCondition;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyMetaData_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertyMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[];
#endif
		static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableMetaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this input is advanced and should only be visible if expanded inputs have been expanded. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this input is advanced and should only be visible if expanded inputs have been expanded." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bAdvancedDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay = { "bAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order in the editor stacks. Use a smaller number to push it to the top. Defaults to zero." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority = { "EditorSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditorSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a \n\x09""checkbox inline with the input which was designated as its edit condition. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a\n      checkbox inline with the input which was designated as its edit condition." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bInlineEditConditionToggle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle = { "bInlineEditConditionToggle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally editable based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally editable based on the value of another input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition = { "EditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, EditCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally visible based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally visible based on the value of another input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition = { "VisibleCondition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, VisibleCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp = { "PropertyMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Property Metadata" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Property Metadata" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, PropertyMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "If set, this attribute is visually displayed as a child under the given parent attribute. Currently, only static switches are supported as parent attributes!" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute = { "ParentAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, ParentAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "/** A unique identifier for the variable that can be used by function call nodes to find renamed variables. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "A unique identifier for the variable that can be used by function call nodes to find renamed variables." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData[] = {
		{ "Comment", "/** This is a read-only variable that designates if the metadata is tied to a static switch or not.\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "This is a read-only variable that designates if the metadata is tied to a static switch or not.\nDEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bIsStaticSwitch_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "Comment", "/** The default value to use when creating new pins or stack entries for a static switch parameter\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The default value to use when creating new pins or stack entries for a static switch parameter\nDEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableMetaData, StaticSwitchDefaultValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableMetaData",
		sizeof(FNiagaraVariableMetaData),
		alignof(FNiagaraVariableMetaData),
		Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableMetaData"), sizeof(FNiagaraVariableMetaData), Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Hash() { return 2280938166U; }
class UScriptStruct* FNiagaraInputConditionMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInputConditionMetadata"), sizeof(FNiagaraInputConditionMetadata), Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInputConditionMetadata>()
{
	return FNiagaraInputConditionMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraInputConditionMetadata(FNiagaraInputConditionMetadata::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraInputConditionMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraInputConditionMetadata>(FName(TEXT("NiagaraInputConditionMetadata")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraInputConditionMetadata;
	struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines options for conditionally editing and showing script inputs in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Defines options for conditionally editing and showing script inputs in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The name of the input to use for matching the target values. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The name of the input to use for matching the target values." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner = { "TargetValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues = { "TargetValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInputConditionMetadata, TargetValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInputConditionMetadata",
		sizeof(FNiagaraInputConditionMetadata),
		alignof(FNiagaraInputConditionMetadata),
		Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraInputConditionMetadata"), sizeof(FNiagaraInputConditionMetadata), Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Hash() { return 3730955059U; }
class UScriptStruct* FNiagaraCompileHashVisitorDebugInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompileHashVisitorDebugInfo"), sizeof(FNiagaraCompileHashVisitorDebugInfo), Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompileHashVisitorDebugInfo>()
{
	return FNiagaraCompileHashVisitorDebugInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo(FNiagaraCompileHashVisitorDebugInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraCompileHashVisitorDebugInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraCompileHashVisitorDebugInfo>(FName(TEXT("NiagaraCompileHashVisitorDebugInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileHashVisitorDebugInfo;
	struct Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyKeys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHashVisitorDebugInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, Object), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner = { "PropertyKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys = { "PropertyKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner = { "PropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues = { "PropertyValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCompileHashVisitorDebugInfo",
		sizeof(FNiagaraCompileHashVisitorDebugInfo),
		alignof(FNiagaraCompileHashVisitorDebugInfo),
		Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCompileHashVisitorDebugInfo"), sizeof(FNiagaraCompileHashVisitorDebugInfo), Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Hash() { return 3864367535U; }
class UScriptStruct* FNiagaraTypeLayoutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeLayoutInfo"), sizeof(FNiagaraTypeLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeLayoutInfo>()
{
	return FNiagaraTypeLayoutInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraTypeLayoutInfo(FNiagaraTypeLayoutInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraTypeLayoutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraTypeLayoutInfo>(FName(TEXT("NiagaraTypeLayoutInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraTypeLayoutInfo;
	struct Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatComponentByteOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatComponentByteOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatComponentRegisterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatComponentRegisterOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentByteOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentByteOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentRegisterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentRegisterOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HalfComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfComponentByteOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HalfComponentByteOffsets;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HalfComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfComponentRegisterOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HalfComponentRegisterOffsets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about how this type should be laid out in an FNiagaraDataSet */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Information about how this type should be laid out in an FNiagaraDataSet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeLayoutInfo>();
	}
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each float component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each float component in a structured layout." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each float component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each float component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each int32 component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each int32 component in a structured layout." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each int32 component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each int32 component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_Inner = { "HalfComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each half component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each half component in a structured layout." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets = { "HalfComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_Inner = { "HalfComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each half component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each half component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets = { "HalfComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeLayoutInfo",
		sizeof(FNiagaraTypeLayoutInfo),
		alignof(FNiagaraTypeLayoutInfo),
		Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraTypeLayoutInfo"), sizeof(FNiagaraTypeLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Hash() { return 3012088520U; }
class UScriptStruct* FNiagaraID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraID, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraID"), sizeof(FNiagaraID), Get_Z_Construct_UScriptStruct_FNiagaraID_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraID>()
{
	return FNiagaraID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraID(FNiagaraID::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraID"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraID
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraID()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraID>(FName(TEXT("NiagaraID")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraID;
	struct Z_Construct_UScriptStruct_FNiagaraID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcquireTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Niagara ID" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09Index in the indirection table for this particle. Allows fast access to this particles data.\n\x09Is always unique among currently living particles but will be reused after the particle dies.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Index in the indirection table for this particle. Allows fast access to this particles data.\nIs always unique among currently living particles but will be reused after the particle dies." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraID, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09""A unique tag for when this ID was acquired. \n\x09""Allows us to differentiate between particles when one dies and another reuses it's Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "A unique tag for when this ID was acquired.\nAllows us to differentiate between particles when one dies and another reuses it's Index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag = { "AcquireTag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraID, AcquireTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraID",
		sizeof(FNiagaraID),
		alignof(FNiagaraID),
		Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraID"), sizeof(FNiagaraID), Get_Z_Construct_UScriptStruct_FNiagaraID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraID_Hash() { return 2791113329U; }
class UScriptStruct* FNiagaraSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSpawnInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSpawnInfo"), sizeof(FNiagaraSpawnInfo), Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSpawnInfo>()
{
	return FNiagaraSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSpawnInfo(FNiagaraSpawnInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraSpawnInfo>(FName(TEXT("NiagaraSpawnInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSpawnInfo;
	struct Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpStartDt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpStartDt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervalDt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervalDt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data controlling the spawning of particles */" },
		{ "DisplayName", "Spawn Info" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraClearEachFrame", "true" },
		{ "ToolTip", "Data controlling the spawning of particles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** How many particles to spawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "How many particles to spawn." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time at which to spawn the first particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time at which to spawn the first particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt = { "InterpStartDt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, InterpStartDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time between each particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time between each particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt = { "IntervalDt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, IntervalDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/**\n\x09 * An integer used to identify this spawn info.\n\x09 * Typically this is unused.\n\x09 * An example usage is when using multiple spawn modules to spawn from multiple discreet locations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "An integer used to identify this spawn info.\nTypically this is unused.\nAn example usage is when using multiple spawn modules to spawn from multiple discreet locations." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup = { "SpawnGroup", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, SpawnGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSpawnInfo",
		sizeof(FNiagaraSpawnInfo),
		alignof(FNiagaraSpawnInfo),
		Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSpawnInfo"), sizeof(FNiagaraSpawnInfo), Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Hash() { return 3412674136U; }
class UScriptStruct* FNiagaraAssetVersion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraAssetVersion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetVersion, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraAssetVersion"), sizeof(FNiagaraAssetVersion), Get_Z_Construct_UScriptStruct_FNiagaraAssetVersion_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraAssetVersion>()
{
	return FNiagaraAssetVersion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraAssetVersion(FNiagaraAssetVersion::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraAssetVersion"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraAssetVersion
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraAssetVersion()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraAssetVersion>(FName(TEXT("NiagaraAssetVersion")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraAssetVersion;
	struct Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MajorVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MajorVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinorVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinorVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VersionGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInVersionSelector_MetaData[];
#endif
		static void NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInVersionSelector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAssetVersion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The major version is used to track breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The major version is used to track breaking changes between asset versions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion = { "MajorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraAssetVersion, MajorVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The minor version is used to track non-breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The minor version is used to track non-breaking changes between asset versions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion = { "MinorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraAssetVersion, MinorVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid = { "VersionGuid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraAssetVersion, VersionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData[] = {
		{ "Comment", "/** If false then this version is not visible in the version selector dropdown menu of the stack. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If false then this version is not visible in the version selector dropdown menu of the stack." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj)
	{
		((FNiagaraAssetVersion*)Obj)->bIsVisibleInVersionSelector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector = { "bIsVisibleInVersionSelector", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraAssetVersion), &Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraAssetVersion",
		sizeof(FNiagaraAssetVersion),
		alignof(FNiagaraAssetVersion),
		Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraAssetVersion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraAssetVersion"), sizeof(FNiagaraAssetVersion), Get_Z_Construct_UScriptStruct_FNiagaraAssetVersion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraAssetVersion_Hash() { return 1778980690U; }
class UScriptStruct* FNiagaraMatrix::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMatrix, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMatrix"), sizeof(FNiagaraMatrix), Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMatrix>()
{
	return FNiagaraMatrix::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMatrix(FNiagaraMatrix::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMatrix"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraMatrix>(FName(TEXT("NiagaraMatrix")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMatrix;
	struct Z_Construct_UScriptStruct_FNiagaraMatrix_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Row3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Matrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMatrix>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row0), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row1), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row2), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMatrix, Row3), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMatrix",
		sizeof(FNiagaraMatrix),
		alignof(FNiagaraMatrix),
		Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMatrix"), sizeof(FNiagaraMatrix), Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMatrix_Hash() { return 1423089701U; }
class UScriptStruct* FNiagaraParameterMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterMap, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterMap"), sizeof(FNiagaraParameterMap), Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterMap>()
{
	return FNiagaraParameterMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraParameterMap(FNiagaraParameterMap::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraParameterMap"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraParameterMap>(FName(TEXT("NiagaraParameterMap")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraParameterMap;
	struct Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterMap",
		sizeof(FNiagaraParameterMap),
		alignof(FNiagaraParameterMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraParameterMap"), sizeof(FNiagaraParameterMap), Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraParameterMap_Hash() { return 3384528110U; }
class UScriptStruct* FNiagaraNumeric::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNumeric, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraNumeric"), sizeof(FNiagaraNumeric), Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraNumeric>()
{
	return FNiagaraNumeric::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraNumeric(FNiagaraNumeric::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraNumeric"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraNumeric>(FName(TEXT("NiagaraNumeric")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraNumeric;
	struct Z_Construct_UScriptStruct_FNiagaraNumeric_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNumeric>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraNumeric",
		sizeof(FNiagaraNumeric),
		alignof(FNiagaraNumeric),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraNumeric"), sizeof(FNiagaraNumeric), Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraNumeric_Hash() { return 325443120U; }
class UScriptStruct* FNiagaraHalfVector4::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector4_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector4, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector4"), sizeof(FNiagaraHalfVector4), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector4_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector4>()
{
	return FNiagaraHalfVector4::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraHalfVector4(FNiagaraHalfVector4::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraHalfVector4"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector4
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector4()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraHalfVector4>(FName(TEXT("NiagaraHalfVector4")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector4;
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_w;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector4" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector4>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector4, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector4, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector4, z), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector4, w), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector4",
		sizeof(FNiagaraHalfVector4),
		alignof(FNiagaraHalfVector4),
		Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector4_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraHalfVector4"), sizeof(FNiagaraHalfVector4), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector4_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector4_Hash() { return 3182265651U; }
class UScriptStruct* FNiagaraHalfVector3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector3, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector3"), sizeof(FNiagaraHalfVector3), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector3_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector3>()
{
	return FNiagaraHalfVector3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraHalfVector3(FNiagaraHalfVector3::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraHalfVector3"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector3
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector3()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraHalfVector3>(FName(TEXT("NiagaraHalfVector3")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector3;
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector3" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector3, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector3, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector3, z), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector3",
		sizeof(FNiagaraHalfVector3),
		alignof(FNiagaraHalfVector3),
		Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraHalfVector3"), sizeof(FNiagaraHalfVector3), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector3_Hash() { return 2605933597U; }
class UScriptStruct* FNiagaraHalfVector2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector2, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector2"), sizeof(FNiagaraHalfVector2), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector2_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector2>()
{
	return FNiagaraHalfVector2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraHalfVector2(FNiagaraHalfVector2::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraHalfVector2"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector2
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector2()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraHalfVector2>(FName(TEXT("NiagaraHalfVector2")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalfVector2;
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector2" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector2, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalfVector2, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector2",
		sizeof(FNiagaraHalfVector2),
		alignof(FNiagaraHalfVector2),
		Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraHalfVector2"), sizeof(FNiagaraHalfVector2), Get_Z_Construct_UScriptStruct_FNiagaraHalfVector2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalfVector2_Hash() { return 3215697194U; }
class UScriptStruct* FNiagaraHalf::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalf_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalf, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalf"), sizeof(FNiagaraHalf), Get_Z_Construct_UScriptStruct_FNiagaraHalf_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalf>()
{
	return FNiagaraHalf::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraHalf(FNiagaraHalf::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraHalf"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalf
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalf()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraHalf>(FName(TEXT("NiagaraHalf")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraHalf;
	struct Z_Construct_UScriptStruct_FNiagaraHalf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalf>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraHalf, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalf",
		sizeof(FNiagaraHalf),
		alignof(FNiagaraHalf),
		Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalf_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraHalf"), sizeof(FNiagaraHalf), Get_Z_Construct_UScriptStruct_FNiagaraHalf_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraHalf_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraHalf_Hash() { return 1949507657U; }
class UScriptStruct* FNiagaraBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBool, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBool"), sizeof(FNiagaraBool), Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBool>()
{
	return FNiagaraBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraBool(FNiagaraBool::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraBool"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraBool>(FName(TEXT("NiagaraBool")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraBool;
	struct Z_Construct_UScriptStruct_FNiagaraBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "bool" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Must be either FNiagaraBool::True or FNiagaraBool::False.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Must be either FNiagaraBool::True or FNiagaraBool::False." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBool, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBool",
		sizeof(FNiagaraBool),
		alignof(FNiagaraBool),
		Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraBool"), sizeof(FNiagaraBool), Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraBool_Hash() { return 652397531U; }
class UScriptStruct* FNiagaraInt32::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInt32, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInt32"), sizeof(FNiagaraInt32), Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInt32>()
{
	return FNiagaraInt32::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraInt32(FNiagaraInt32::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraInt32"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraInt32>(FName(TEXT("NiagaraInt32")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraInt32;
	struct Z_Construct_UScriptStruct_FNiagaraInt32_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "int32" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInt32>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraInt32, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInt32",
		sizeof(FNiagaraInt32),
		alignof(FNiagaraInt32),
		Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraInt32"), sizeof(FNiagaraInt32), Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraInt32_Hash() { return 2315255228U; }
class UScriptStruct* FNiagaraFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFloat, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFloat"), sizeof(FNiagaraFloat), Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFloat>()
{
	return FNiagaraFloat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraFloat(FNiagaraFloat::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraFloat>(FName(TEXT("NiagaraFloat")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraFloat;
	struct Z_Construct_UScriptStruct_FNiagaraFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "float" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFloat",
		sizeof(FNiagaraFloat),
		alignof(FNiagaraFloat),
		Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraFloat"), sizeof(FNiagaraFloat), Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraFloat_Hash() { return 4228391713U; }
class UScriptStruct* FNiagaraWildcard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraWildcard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWildcard, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWildcard"), sizeof(FNiagaraWildcard), Get_Z_Construct_UScriptStruct_FNiagaraWildcard_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWildcard>()
{
	return FNiagaraWildcard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraWildcard(FNiagaraWildcard::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraWildcard"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraWildcard
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraWildcard()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraWildcard>(FName(TEXT("NiagaraWildcard")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraWildcard;
	struct Z_Construct_UScriptStruct_FNiagaraWildcard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// basic type struct definitions\n" },
		{ "DisplayName", "Wildcard" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "basic type struct definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWildcard>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraWildcard",
		sizeof(FNiagaraWildcard),
		alignof(FNiagaraWildcard),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraWildcard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraWildcard"), sizeof(FNiagaraWildcard), Get_Z_Construct_UScriptStruct_FNiagaraWildcard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraWildcard_Hash() { return 521934248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

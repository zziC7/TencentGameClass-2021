// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCommon() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBindingSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
// End Cross Module References
	static UEnum* ENiagaraFunctionDebugState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraFunctionDebugState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraFunctionDebugState>()
	{
		return ENiagaraFunctionDebugState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraFunctionDebugState(ENiagaraFunctionDebugState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraFunctionDebugState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Hash() { return 1039814666U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraFunctionDebugState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraFunctionDebugState::NoDebug", (int64)ENiagaraFunctionDebugState::NoDebug },
				{ "ENiagaraFunctionDebugState::Basic", (int64)ENiagaraFunctionDebugState::Basic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ENiagaraFunctionDebugState::Basic" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "NoDebug.Name", "ENiagaraFunctionDebugState::NoDebug" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraFunctionDebugState",
				"ENiagaraFunctionDebugState",
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
	static UEnum* ENiagaraSystemInstanceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemInstanceState"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemInstanceState>()
	{
		return ENiagaraSystemInstanceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSystemInstanceState(ENiagaraSystemInstanceState_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSystemInstanceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Hash() { return 436052745U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSystemInstanceState"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSystemInstanceState::None", (int64)ENiagaraSystemInstanceState::None },
				{ "ENiagaraSystemInstanceState::PendingSpawn", (int64)ENiagaraSystemInstanceState::PendingSpawn },
				{ "ENiagaraSystemInstanceState::PendingSpawnPaused", (int64)ENiagaraSystemInstanceState::PendingSpawnPaused },
				{ "ENiagaraSystemInstanceState::Spawning", (int64)ENiagaraSystemInstanceState::Spawning },
				{ "ENiagaraSystemInstanceState::Running", (int64)ENiagaraSystemInstanceState::Running },
				{ "ENiagaraSystemInstanceState::Paused", (int64)ENiagaraSystemInstanceState::Paused },
				{ "ENiagaraSystemInstanceState::Num", (int64)ENiagaraSystemInstanceState::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "None.Name", "ENiagaraSystemInstanceState::None" },
				{ "Num.Name", "ENiagaraSystemInstanceState::Num" },
				{ "Paused.Name", "ENiagaraSystemInstanceState::Paused" },
				{ "PendingSpawn.Name", "ENiagaraSystemInstanceState::PendingSpawn" },
				{ "PendingSpawnPaused.Name", "ENiagaraSystemInstanceState::PendingSpawnPaused" },
				{ "Running.Name", "ENiagaraSystemInstanceState::Running" },
				{ "Spawning.Name", "ENiagaraSystemInstanceState::Spawning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSystemInstanceState",
				"ENiagaraSystemInstanceState",
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
	static UEnum* ENCPoolMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENCPoolMethod, Z_Construct_UPackage__Script_Niagara(), TEXT("ENCPoolMethod"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENCPoolMethod>()
	{
		return ENCPoolMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENCPoolMethod(ENCPoolMethod_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENCPoolMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENCPoolMethod_Hash() { return 2151166309U; }
	UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENCPoolMethod"), 0, Get_Z_Construct_UEnum_Niagara_ENCPoolMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENCPoolMethod::None", (int64)ENCPoolMethod::None },
				{ "ENCPoolMethod::AutoRelease", (int64)ENCPoolMethod::AutoRelease },
				{ "ENCPoolMethod::ManualRelease", (int64)ENCPoolMethod::ManualRelease },
				{ "ENCPoolMethod::ManualRelease_OnComplete", (int64)ENCPoolMethod::ManualRelease_OnComplete },
				{ "ENCPoolMethod::FreeInPool", (int64)ENCPoolMethod::FreeInPool },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoRelease.Comment", "/**\n\x09* The component is allocated from the pool and will be automatically released back to it.\n\x09* User need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\n\x09* This method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget.\n\x09*/" },
				{ "AutoRelease.Name", "ENCPoolMethod::AutoRelease" },
				{ "AutoRelease.ToolTip", "The component is allocated from the pool and will be automatically released back to it.\nUser need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\nThis method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget." },
				{ "FreeInPool.Comment", "/**\n\x09Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way.\n\x09*/" },
				{ "FreeInPool.Hidden", "" },
				{ "FreeInPool.Name", "ENCPoolMethod::FreeInPool" },
				{ "FreeInPool.ToolTip", "Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way." },
				{ "ManualRelease.Comment", "/**\n\x09* NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\n\x09* Interaction with the NC after it has been released are unsafe.\n\x09* This method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime.\n\x09*/" },
				{ "ManualRelease.Name", "ENCPoolMethod::ManualRelease" },
				{ "ManualRelease.ToolTip", "NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\nInteraction with the NC after it has been released are unsafe.\nThis method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime." },
				{ "ManualRelease_OnComplete.Comment", "/**\n\x09Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool.\n\x09*/" },
				{ "ManualRelease_OnComplete.Hidden", "" },
				{ "ManualRelease_OnComplete.Name", "ENCPoolMethod::ManualRelease_OnComplete" },
				{ "ManualRelease_OnComplete.ToolTip", "Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "None.Comment", "/**\n\x09* The component will be created fresh and not allocated from the pool.\n\x09*/" },
				{ "None.Name", "ENCPoolMethod::None" },
				{ "None.ToolTip", "The component will be created fresh and not allocated from the pool." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENCPoolMethod",
				"ENCPoolMethod",
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
	static UEnum* ENiagaraLegacyTrailWidthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraLegacyTrailWidthMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLegacyTrailWidthMode>()
	{
		return ENiagaraLegacyTrailWidthMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraLegacyTrailWidthMode(ENiagaraLegacyTrailWidthMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraLegacyTrailWidthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Hash() { return 421469637U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraLegacyTrailWidthMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraLegacyTrailWidthMode::FromCentre", (int64)ENiagaraLegacyTrailWidthMode::FromCentre },
				{ "ENiagaraLegacyTrailWidthMode::FromFirst", (int64)ENiagaraLegacyTrailWidthMode::FromFirst },
				{ "ENiagaraLegacyTrailWidthMode::FromSecond", (int64)ENiagaraLegacyTrailWidthMode::FromSecond },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \nControls the way that the width scale property affects animation trails. \nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara.\n*/" },
				{ "FromCentre.Name", "ENiagaraLegacyTrailWidthMode::FromCentre" },
				{ "FromFirst.Name", "ENiagaraLegacyTrailWidthMode::FromFirst" },
				{ "FromSecond.Name", "ENiagaraLegacyTrailWidthMode::FromSecond" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "Controls the way that the width scale property affects animation trails.\nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraLegacyTrailWidthMode",
				"ENiagaraLegacyTrailWidthMode",
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
	static UEnum* ENiagaraRendererSourceDataMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererSourceDataMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererSourceDataMode>()
	{
		return ENiagaraRendererSourceDataMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRendererSourceDataMode(ENiagaraRendererSourceDataMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRendererSourceDataMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Hash() { return 2322376826U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRendererSourceDataMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRendererSourceDataMode::Particles", (int64)ENiagaraRendererSourceDataMode::Particles },
				{ "ENiagaraRendererSourceDataMode::Emitter", (int64)ENiagaraRendererSourceDataMode::Emitter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** This enum decides how a renderer will attempt to process the incoming data from the stack.*/" },
				{ "Emitter.Comment", "/** The renderer will draw only one element per Emitter. It can only pull in data from Emitter/User/or System namespaces when drawing the single element. */" },
				{ "Emitter.Name", "ENiagaraRendererSourceDataMode::Emitter" },
				{ "Emitter.ToolTip", "The renderer will draw only one element per Emitter. It can only pull in data from Emitter/User/or System namespaces when drawing the single element." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particles.Comment", "/** The renderer will draw particle data, but can potentially pull in data from the Emitter/User/or System namespaces when drawing each Particle.*/" },
				{ "Particles.Name", "ENiagaraRendererSourceDataMode::Particles" },
				{ "Particles.ToolTip", "The renderer will draw particle data, but can potentially pull in data from the Emitter/User/or System namespaces when drawing each Particle." },
				{ "ToolTip", "This enum decides how a renderer will attempt to process the incoming data from the stack." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRendererSourceDataMode",
				"ENiagaraRendererSourceDataMode",
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
	static UEnum* ENiagaraBindingSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBindingSource, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBindingSource"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBindingSource>()
	{
		return ENiagaraBindingSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraBindingSource(ENiagaraBindingSource_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraBindingSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Hash() { return 356875127U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBindingSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraBindingSource"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ImplicitFromSource", (int64)ImplicitFromSource },
				{ "ExplicitParticles", (int64)ExplicitParticles },
				{ "ExplicitEmitter", (int64)ExplicitEmitter },
				{ "ExplicitSystem", (int64)ExplicitSystem },
				{ "ExplicitUser", (int64)ExplicitUser },
				{ "MaxBindingSource", (int64)MaxBindingSource },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExplicitEmitter.Name", "ExplicitEmitter" },
				{ "ExplicitParticles.Name", "ExplicitParticles" },
				{ "ExplicitSystem.Name", "ExplicitSystem" },
				{ "ExplicitUser.Name", "ExplicitUser" },
				{ "ImplicitFromSource.Name", "ImplicitFromSource" },
				{ "MaxBindingSource.Name", "MaxBindingSource" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraBindingSource",
				"ENiagaraBindingSource",
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
	static UEnum* ENiagaraIterationSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraIterationSource, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraIterationSource"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraIterationSource>()
	{
		return ENiagaraIterationSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraIterationSource(ENiagaraIterationSource_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraIterationSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraIterationSource_Hash() { return 1056200419U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraIterationSource"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraIterationSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraIterationSource::Particles", (int64)ENiagaraIterationSource::Particles },
				{ "ENiagaraIterationSource::DataInterface", (int64)ENiagaraIterationSource::DataInterface },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DataInterface.Name", "ENiagaraIterationSource::DataInterface" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particles.Name", "ENiagaraIterationSource::Particles" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraIterationSource",
				"ENiagaraIterationSource",
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
	static UEnum* ENiagaraScriptGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptGroup"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptGroup>()
	{
		return ENiagaraScriptGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptGroup(ENiagaraScriptGroup_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Hash() { return 2953346640U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptGroup"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptGroup::Particle", (int64)ENiagaraScriptGroup::Particle },
				{ "ENiagaraScriptGroup::Emitter", (int64)ENiagaraScriptGroup::Emitter },
				{ "ENiagaraScriptGroup::System", (int64)ENiagaraScriptGroup::System },
				{ "ENiagaraScriptGroup::Max", (int64)ENiagaraScriptGroup::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Emitter.Name", "ENiagaraScriptGroup::Emitter" },
				{ "Max.Name", "ENiagaraScriptGroup::Max" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particle.Name", "ENiagaraScriptGroup::Particle" },
				{ "System.Name", "ENiagaraScriptGroup::System" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptGroup",
				"ENiagaraScriptGroup",
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
	static UEnum* ENiagaraScriptContextStaticSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptContextStaticSwitch"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptContextStaticSwitch>()
	{
		return ENiagaraScriptContextStaticSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptContextStaticSwitch(ENiagaraScriptContextStaticSwitch_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptContextStaticSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Hash() { return 841083353U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptContextStaticSwitch"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptContextStaticSwitch::System", (int64)ENiagaraScriptContextStaticSwitch::System },
				{ "ENiagaraScriptContextStaticSwitch::Emitter", (int64)ENiagaraScriptContextStaticSwitch::Emitter },
				{ "ENiagaraScriptContextStaticSwitch::Particle", (int64)ENiagaraScriptContextStaticSwitch::Particle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different execution contexts for a niagara script. */" },
				{ "Emitter.Comment", "/** The script is called in a emitter context. */" },
				{ "Emitter.Name", "ENiagaraScriptContextStaticSwitch::Emitter" },
				{ "Emitter.ToolTip", "The script is called in a emitter context." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Particle.Comment", "/** The script is called in a particle context. */" },
				{ "Particle.Name", "ENiagaraScriptContextStaticSwitch::Particle" },
				{ "Particle.ToolTip", "The script is called in a particle context." },
				{ "System.Comment", "/** The script is called in a system context. */" },
				{ "System.Name", "ENiagaraScriptContextStaticSwitch::System" },
				{ "System.ToolTip", "The script is called in a system context." },
				{ "ToolTip", "Defines different execution contexts for a niagara script." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptContextStaticSwitch",
				"ENiagaraScriptContextStaticSwitch",
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
	static UEnum* ENiagaraCompileUsageStaticSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCompileUsageStaticSwitch"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCompileUsageStaticSwitch>()
	{
		return ENiagaraCompileUsageStaticSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraCompileUsageStaticSwitch(ENiagaraCompileUsageStaticSwitch_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraCompileUsageStaticSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Hash() { return 883160785U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraCompileUsageStaticSwitch"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraCompileUsageStaticSwitch::Spawn", (int64)ENiagaraCompileUsageStaticSwitch::Spawn },
				{ "ENiagaraCompileUsageStaticSwitch::Update", (int64)ENiagaraCompileUsageStaticSwitch::Update },
				{ "ENiagaraCompileUsageStaticSwitch::Event", (int64)ENiagaraCompileUsageStaticSwitch::Event },
				{ "ENiagaraCompileUsageStaticSwitch::SimulationStage", (int64)ENiagaraCompileUsageStaticSwitch::SimulationStage },
				{ "ENiagaraCompileUsageStaticSwitch::Default", (int64)ENiagaraCompileUsageStaticSwitch::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different usages for a niagara script. */" },
				{ "Default.Comment", "/** The default value if the compiler cannot map the compilation context. */" },
				{ "Default.Name", "ENiagaraCompileUsageStaticSwitch::Default" },
				{ "Default.ToolTip", "The default value if the compiler cannot map the compilation context." },
				{ "Event.Comment", "/** The script is called in an event context. */" },
				{ "Event.Name", "ENiagaraCompileUsageStaticSwitch::Event" },
				{ "Event.ToolTip", "The script is called in an event context." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "SimulationStage.Comment", "/** The script is called as part of a simulation stage. */" },
				{ "SimulationStage.Name", "ENiagaraCompileUsageStaticSwitch::SimulationStage" },
				{ "SimulationStage.ToolTip", "The script is called as part of a simulation stage." },
				{ "Spawn.Comment", "/** The script is called during the spawn phase. */" },
				{ "Spawn.Name", "ENiagaraCompileUsageStaticSwitch::Spawn" },
				{ "Spawn.ToolTip", "The script is called during the spawn phase." },
				{ "ToolTip", "Defines different usages for a niagara script." },
				{ "Update.Comment", "/** The script is called during the update phase. */" },
				{ "Update.Name", "ENiagaraCompileUsageStaticSwitch::Update" },
				{ "Update.ToolTip", "The script is called during the update phase." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraCompileUsageStaticSwitch",
				"ENiagaraCompileUsageStaticSwitch",
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
	static UEnum* ENiagaraScriptUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptUsage"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptUsage>()
	{
		return ENiagaraScriptUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptUsage(ENiagaraScriptUsage_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Hash() { return 1505542857U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptUsage"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptUsage::Function", (int64)ENiagaraScriptUsage::Function },
				{ "ENiagaraScriptUsage::Module", (int64)ENiagaraScriptUsage::Module },
				{ "ENiagaraScriptUsage::DynamicInput", (int64)ENiagaraScriptUsage::DynamicInput },
				{ "ENiagaraScriptUsage::ParticleSpawnScript", (int64)ENiagaraScriptUsage::ParticleSpawnScript },
				{ "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated", (int64)ENiagaraScriptUsage::ParticleSpawnScriptInterpolated },
				{ "ENiagaraScriptUsage::ParticleUpdateScript", (int64)ENiagaraScriptUsage::ParticleUpdateScript },
				{ "ENiagaraScriptUsage::ParticleEventScript", (int64)ENiagaraScriptUsage::ParticleEventScript },
				{ "ENiagaraScriptUsage::ParticleSimulationStageScript", (int64)ENiagaraScriptUsage::ParticleSimulationStageScript },
				{ "ENiagaraScriptUsage::ParticleGPUComputeScript", (int64)ENiagaraScriptUsage::ParticleGPUComputeScript },
				{ "ENiagaraScriptUsage::EmitterSpawnScript", (int64)ENiagaraScriptUsage::EmitterSpawnScript },
				{ "ENiagaraScriptUsage::EmitterUpdateScript", (int64)ENiagaraScriptUsage::EmitterUpdateScript },
				{ "ENiagaraScriptUsage::SystemSpawnScript", (int64)ENiagaraScriptUsage::SystemSpawnScript },
				{ "ENiagaraScriptUsage::SystemUpdateScript", (int64)ENiagaraScriptUsage::SystemUpdateScript },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines different usages for a niagara script. */" },
				{ "DynamicInput.Comment", "/** The script defines a dynamic input for use in particle, emitter, or system scripts. */" },
				{ "DynamicInput.Name", "ENiagaraScriptUsage::DynamicInput" },
				{ "DynamicInput.ToolTip", "The script defines a dynamic input for use in particle, emitter, or system scripts." },
				{ "EmitterSpawnScript.Comment", "/** The script is called once when the emitter spawns. */" },
				{ "EmitterSpawnScript.Name", "ENiagaraScriptUsage::EmitterSpawnScript" },
				{ "EmitterSpawnScript.ToolTip", "The script is called once when the emitter spawns." },
				{ "EmitterUpdateScript.Comment", "/** The script is called every frame to tick the emitter. */" },
				{ "EmitterUpdateScript.Name", "ENiagaraScriptUsage::EmitterUpdateScript" },
				{ "EmitterUpdateScript.ToolTip", "The script is called every frame to tick the emitter." },
				{ "Function.Comment", "/** The script defines a function for use in modules. */" },
				{ "Function.Name", "ENiagaraScriptUsage::Function" },
				{ "Function.ToolTip", "The script defines a function for use in modules." },
				{ "Module.Comment", "/** The script defines a module for use in particle, emitter, or system scripts. */" },
				{ "Module.Name", "ENiagaraScriptUsage::Module" },
				{ "Module.ToolTip", "The script defines a module for use in particle, emitter, or system scripts." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ParticleEventScript.Comment", "/** The script is called to update particles in response to an event. */" },
				{ "ParticleEventScript.Name", "ENiagaraScriptUsage::ParticleEventScript" },
				{ "ParticleEventScript.ToolTip", "The script is called to update particles in response to an event." },
				{ "ParticleGPUComputeScript.Comment", "/** The script is called to update particles on the GPU. */" },
				{ "ParticleGPUComputeScript.Hidden", "" },
				{ "ParticleGPUComputeScript.Name", "ENiagaraScriptUsage::ParticleGPUComputeScript" },
				{ "ParticleGPUComputeScript.ToolTip", "The script is called to update particles on the GPU." },
				{ "ParticleSimulationStageScript.Comment", "/** The script is called as a particle simulation stage. */" },
				{ "ParticleSimulationStageScript.Name", "ENiagaraScriptUsage::ParticleSimulationStageScript" },
				{ "ParticleSimulationStageScript.ToolTip", "The script is called as a particle simulation stage." },
				{ "ParticleSpawnScript.Comment", "/** The script is called when spawning particles. */" },
				{ "ParticleSpawnScript.Name", "ENiagaraScriptUsage::ParticleSpawnScript" },
				{ "ParticleSpawnScript.ToolTip", "The script is called when spawning particles." },
				{ "ParticleSpawnScriptInterpolated.Comment", "/** Particle spawn script that handles intra-frame spawning and also pulls in the update script. */" },
				{ "ParticleSpawnScriptInterpolated.Hidden", "" },
				{ "ParticleSpawnScriptInterpolated.Name", "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated" },
				{ "ParticleSpawnScriptInterpolated.ToolTip", "Particle spawn script that handles intra-frame spawning and also pulls in the update script." },
				{ "ParticleUpdateScript.Comment", "/** The script is called to update particles every frame. */" },
				{ "ParticleUpdateScript.Name", "ENiagaraScriptUsage::ParticleUpdateScript" },
				{ "ParticleUpdateScript.ToolTip", "The script is called to update particles every frame." },
				{ "SystemSpawnScript.Comment", "/** The script is called once when the system spawns. */" },
				{ "SystemSpawnScript.Name", "ENiagaraScriptUsage::SystemSpawnScript" },
				{ "SystemSpawnScript.ToolTip", "The script is called once when the system spawns." },
				{ "SystemUpdateScript.Comment", "/** The script is called every frame to tick the system. */" },
				{ "SystemUpdateScript.Name", "ENiagaraScriptUsage::SystemUpdateScript" },
				{ "SystemUpdateScript.ToolTip", "The script is called every frame to tick the system." },
				{ "ToolTip", "Defines different usages for a niagara script." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptUsage",
				"ENiagaraScriptUsage",
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
	static UEnum* ENiagaraScriptCompileStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptCompileStatus"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptCompileStatus>()
	{
		return ENiagaraScriptCompileStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraScriptCompileStatus(ENiagaraScriptCompileStatus_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraScriptCompileStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Hash() { return 2113548519U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScriptCompileStatus"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScriptCompileStatus::NCS_Unknown", (int64)ENiagaraScriptCompileStatus::NCS_Unknown },
				{ "ENiagaraScriptCompileStatus::NCS_Dirty", (int64)ENiagaraScriptCompileStatus::NCS_Dirty },
				{ "ENiagaraScriptCompileStatus::NCS_Error", (int64)ENiagaraScriptCompileStatus::NCS_Error },
				{ "ENiagaraScriptCompileStatus::NCS_UpToDate", (int64)ENiagaraScriptCompileStatus::NCS_UpToDate },
				{ "ENiagaraScriptCompileStatus::NCS_BeingCreated", (int64)ENiagaraScriptCompileStatus::NCS_BeingCreated },
				{ "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings },
				{ "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings },
				{ "ENiagaraScriptCompileStatus::NCS_MAX", (int64)ENiagaraScriptCompileStatus::NCS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Enumerates states a Niagara script can be in.\n*/" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "NCS_BeingCreated.Comment", "/** Niagara script is in the process of being created for the first time. */" },
				{ "NCS_BeingCreated.Name", "ENiagaraScriptCompileStatus::NCS_BeingCreated" },
				{ "NCS_BeingCreated.ToolTip", "Niagara script is in the process of being created for the first time." },
				{ "NCS_ComputeUpToDateWithWarnings.Comment", "/** Niagara script has been compiled for compute since it was last modified. There are warnings. */" },
				{ "NCS_ComputeUpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings" },
				{ "NCS_ComputeUpToDateWithWarnings.ToolTip", "Niagara script has been compiled for compute since it was last modified. There are warnings." },
				{ "NCS_Dirty.Comment", "/** Niagara script has been modified but not recompiled. */" },
				{ "NCS_Dirty.Name", "ENiagaraScriptCompileStatus::NCS_Dirty" },
				{ "NCS_Dirty.ToolTip", "Niagara script has been modified but not recompiled." },
				{ "NCS_Error.Comment", "/** Niagara script tried but failed to be compiled. */" },
				{ "NCS_Error.Name", "ENiagaraScriptCompileStatus::NCS_Error" },
				{ "NCS_Error.ToolTip", "Niagara script tried but failed to be compiled." },
				{ "NCS_MAX.Name", "ENiagaraScriptCompileStatus::NCS_MAX" },
				{ "NCS_Unknown.Comment", "/** Niagara script is in an unknown state. */" },
				{ "NCS_Unknown.Name", "ENiagaraScriptCompileStatus::NCS_Unknown" },
				{ "NCS_Unknown.ToolTip", "Niagara script is in an unknown state." },
				{ "NCS_UpToDate.Comment", "/** Niagara script has been compiled since it was last modified. */" },
				{ "NCS_UpToDate.Name", "ENiagaraScriptCompileStatus::NCS_UpToDate" },
				{ "NCS_UpToDate.ToolTip", "Niagara script has been compiled since it was last modified." },
				{ "NCS_UpToDateWithWarnings.Comment", "/** Niagara script has been compiled since it was last modified. There are warnings. */" },
				{ "NCS_UpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings" },
				{ "NCS_UpToDateWithWarnings.ToolTip", "Niagara script has been compiled since it was last modified. There are warnings." },
				{ "ToolTip", "Enumerates states a Niagara script can be in." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraScriptCompileStatus",
				"ENiagaraScriptCompileStatus",
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
	static UEnum* ENiagaraInputNodeUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraInputNodeUsage"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInputNodeUsage>()
	{
		return ENiagaraInputNodeUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraInputNodeUsage(ENiagaraInputNodeUsage_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraInputNodeUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Hash() { return 1091507346U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraInputNodeUsage"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraInputNodeUsage::Undefined", (int64)ENiagaraInputNodeUsage::Undefined },
				{ "ENiagaraInputNodeUsage::Parameter", (int64)ENiagaraInputNodeUsage::Parameter },
				{ "ENiagaraInputNodeUsage::Attribute", (int64)ENiagaraInputNodeUsage::Attribute },
				{ "ENiagaraInputNodeUsage::SystemConstant", (int64)ENiagaraInputNodeUsage::SystemConstant },
				{ "ENiagaraInputNodeUsage::TranslatorConstant", (int64)ENiagaraInputNodeUsage::TranslatorConstant },
				{ "ENiagaraInputNodeUsage::RapidIterationParameter", (int64)ENiagaraInputNodeUsage::RapidIterationParameter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attribute.Name", "ENiagaraInputNodeUsage::Attribute" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Parameter.Name", "ENiagaraInputNodeUsage::Parameter" },
				{ "RapidIterationParameter.Name", "ENiagaraInputNodeUsage::RapidIterationParameter" },
				{ "SystemConstant.Name", "ENiagaraInputNodeUsage::SystemConstant" },
				{ "TranslatorConstant.Name", "ENiagaraInputNodeUsage::TranslatorConstant" },
				{ "Undefined.Hidden", "" },
				{ "Undefined.Name", "ENiagaraInputNodeUsage::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraInputNodeUsage",
				"ENiagaraInputNodeUsage",
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
	static UEnum* ENiagaraDataSetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataSetType, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataSetType"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataSetType>()
	{
		return ENiagaraDataSetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDataSetType(ENiagaraDataSetType_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDataSetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Hash() { return 4131632831U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDataSetType"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDataSetType::ParticleData", (int64)ENiagaraDataSetType::ParticleData },
				{ "ENiagaraDataSetType::Shared", (int64)ENiagaraDataSetType::Shared },
				{ "ENiagaraDataSetType::Event", (int64)ENiagaraDataSetType::Event },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Event.Name", "ENiagaraDataSetType::Event" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ParticleData.Name", "ENiagaraDataSetType::ParticleData" },
				{ "Shared.Name", "ENiagaraDataSetType::Shared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDataSetType",
				"ENiagaraDataSetType",
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
	static UEnum* ENiagaraStatDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatDisplayMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatDisplayMode>()
	{
		return ENiagaraStatDisplayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraStatDisplayMode(ENiagaraStatDisplayMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraStatDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Hash() { return 3119839782U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraStatDisplayMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraStatDisplayMode::Percent", (int64)ENiagaraStatDisplayMode::Percent },
				{ "ENiagaraStatDisplayMode::Absolute", (int64)ENiagaraStatDisplayMode::Absolute },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.Name", "ENiagaraStatDisplayMode::Absolute" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Percent.Name", "ENiagaraStatDisplayMode::Percent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraStatDisplayMode",
				"ENiagaraStatDisplayMode",
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
	static UEnum* ENiagaraStatEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatEvaluationType"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatEvaluationType>()
	{
		return ENiagaraStatEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraStatEvaluationType(ENiagaraStatEvaluationType_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraStatEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Hash() { return 3434201184U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraStatEvaluationType"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraStatEvaluationType::Average", (int64)ENiagaraStatEvaluationType::Average },
				{ "ENiagaraStatEvaluationType::Maximum", (int64)ENiagaraStatEvaluationType::Maximum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.Name", "ENiagaraStatEvaluationType::Average" },
				{ "Maximum.Name", "ENiagaraStatEvaluationType::Maximum" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraStatEvaluationType",
				"ENiagaraStatEvaluationType",
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
	static UEnum* ENiagaraAgeUpdateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraAgeUpdateMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAgeUpdateMode>()
	{
		return ENiagaraAgeUpdateMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraAgeUpdateMode(ENiagaraAgeUpdateMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraAgeUpdateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Hash() { return 124706974U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraAgeUpdateMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraAgeUpdateMode::TickDeltaTime", (int64)ENiagaraAgeUpdateMode::TickDeltaTime },
				{ "ENiagaraAgeUpdateMode::DesiredAge", (int64)ENiagaraAgeUpdateMode::DesiredAge },
				{ "ENiagaraAgeUpdateMode::DesiredAgeNoSeek", (int64)ENiagaraAgeUpdateMode::DesiredAgeNoSeek },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Defines modes for updating the component's age. */" },
				{ "DesiredAge.Comment", "/** Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime*/" },
				{ "DesiredAge.Name", "ENiagaraAgeUpdateMode::DesiredAge" },
				{ "DesiredAge.ToolTip", "Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime" },
				{ "DesiredAgeNoSeek.Comment", "/** Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n\x09or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n\x09This mode is useful for continuous effects controlled by sequencer. */" },
				{ "DesiredAgeNoSeek.Name", "ENiagaraAgeUpdateMode::DesiredAgeNoSeek" },
				{ "DesiredAgeNoSeek.ToolTip", "Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n      or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n      This mode is useful for continuous effects controlled by sequencer." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "TickDeltaTime.Comment", "/** Update the age using the delta time supplied to the component tick function. */" },
				{ "TickDeltaTime.Name", "ENiagaraAgeUpdateMode::TickDeltaTime" },
				{ "TickDeltaTime.ToolTip", "Update the age using the delta time supplied to the component tick function." },
				{ "ToolTip", "Defines modes for updating the component's age." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraAgeUpdateMode",
				"ENiagaraAgeUpdateMode",
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
	static UEnum* ENiagaraSimTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimTarget, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSimTarget"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSimTarget>()
	{
		return ENiagaraSimTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSimTarget(ENiagaraSimTarget_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSimTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Hash() { return 2738480656U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSimTarget"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSimTarget::CPUSim", (int64)ENiagaraSimTarget::CPUSim },
				{ "ENiagaraSimTarget::GPUComputeSim", (int64)ENiagaraSimTarget::GPUComputeSim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CPUSim.Name", "ENiagaraSimTarget::CPUSim" },
				{ "GPUComputeSim.Name", "ENiagaraSimTarget::GPUComputeSim" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSimTarget",
				"ENiagaraSimTarget",
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
	static UEnum* ENiagaraRendererMotionVectorSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererMotionVectorSetting"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererMotionVectorSetting>()
	{
		return ENiagaraRendererMotionVectorSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraRendererMotionVectorSetting(ENiagaraRendererMotionVectorSetting_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraRendererMotionVectorSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Hash() { return 2917973044U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraRendererMotionVectorSetting"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraRendererMotionVectorSetting::AutoDetect", (int64)ENiagaraRendererMotionVectorSetting::AutoDetect },
				{ "ENiagaraRendererMotionVectorSetting::Precise", (int64)ENiagaraRendererMotionVectorSetting::Precise },
				{ "ENiagaraRendererMotionVectorSetting::Approximate", (int64)ENiagaraRendererMotionVectorSetting::Approximate },
				{ "ENiagaraRendererMotionVectorSetting::Disable", (int64)ENiagaraRendererMotionVectorSetting::Disable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Approximate.Comment", "/** Force motion vectors to be approximate for this renderer (higher performance, lower particle memory usage). */" },
				{ "Approximate.Name", "ENiagaraRendererMotionVectorSetting::Approximate" },
				{ "Approximate.ToolTip", "Force motion vectors to be approximate for this renderer (higher performance, lower particle memory usage)." },
				{ "AutoDetect.Comment", "/** Determines the best method to employ when generating motion vectors (accurate vs. approximate) based on project and renderer settings */" },
				{ "AutoDetect.Name", "ENiagaraRendererMotionVectorSetting::AutoDetect" },
				{ "AutoDetect.ToolTip", "Determines the best method to employ when generating motion vectors (accurate vs. approximate) based on project and renderer settings" },
				{ "Comment", "/** How a given Niagara renderer should handle motion vector generation. */" },
				{ "Disable.Comment", "/** Do not generate motion vectors (i.e. render the object as though it is stationary). */" },
				{ "Disable.Name", "ENiagaraRendererMotionVectorSetting::Disable" },
				{ "Disable.ToolTip", "Do not generate motion vectors (i.e. render the object as though it is stationary)." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Precise.Comment", "/** Force motion vectors to be precise for this renderer. */" },
				{ "Precise.Name", "ENiagaraRendererMotionVectorSetting::Precise" },
				{ "Precise.ToolTip", "Force motion vectors to be precise for this renderer." },
				{ "ToolTip", "How a given Niagara renderer should handle motion vector generation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraRendererMotionVectorSetting",
				"ENiagaraRendererMotionVectorSetting",
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
	static UEnum* ENiagaraDefaultRendererMotionVectorSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultRendererMotionVectorSetting"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultRendererMotionVectorSetting>()
	{
		return ENiagaraDefaultRendererMotionVectorSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDefaultRendererMotionVectorSetting(ENiagaraDefaultRendererMotionVectorSetting_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDefaultRendererMotionVectorSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Hash() { return 2130115211U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDefaultRendererMotionVectorSetting"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDefaultRendererMotionVectorSetting::Precise", (int64)ENiagaraDefaultRendererMotionVectorSetting::Precise },
				{ "ENiagaraDefaultRendererMotionVectorSetting::Approximate", (int64)ENiagaraDefaultRendererMotionVectorSetting::Approximate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Approximate.Comment", "/**\n\x09 * Approximates the motion vectors from current velocity.\n\x09 * Saves memory and performance, but can result in lower quality motion blur and/or anti-aliasing.\n\x09 */" },
				{ "Approximate.Name", "ENiagaraDefaultRendererMotionVectorSetting::Approximate" },
				{ "Approximate.ToolTip", "Approximates the motion vectors from current velocity.\nSaves memory and performance, but can result in lower quality motion blur and/or anti-aliasing." },
				{ "Comment", "/** How to handle how Niagara rendered effects should generate motion vectors by default (can still be overridden on a case-by-case basis) */" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "Precise.Comment", "/**\n\x09 * Motion vectors generated are precise (ideal for motion blur and temporal anti-aliasing).\n\x09 * Requires relevant emitters to store more data per particle, and may affect vertex processing performance.\n\x09 */" },
				{ "Precise.Name", "ENiagaraDefaultRendererMotionVectorSetting::Precise" },
				{ "Precise.ToolTip", "Motion vectors generated are precise (ideal for motion blur and temporal anti-aliasing).\nRequires relevant emitters to store more data per particle, and may affect vertex processing performance." },
				{ "ToolTip", "How to handle how Niagara rendered effects should generate motion vectors by default (can still be overridden on a case-by-case basis)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDefaultRendererMotionVectorSetting",
				"ENiagaraDefaultRendererMotionVectorSetting",
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
	static UEnum* ENiagaraDefaultMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultMode>()
	{
		return ENiagaraDefaultMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraDefaultMode(ENiagaraDefaultMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraDefaultMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Hash() { return 3642536957U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraDefaultMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraDefaultMode::Value", (int64)ENiagaraDefaultMode::Value },
				{ "ENiagaraDefaultMode::Binding", (int64)ENiagaraDefaultMode::Binding },
				{ "ENiagaraDefaultMode::Custom", (int64)ENiagaraDefaultMode::Custom },
				{ "ENiagaraDefaultMode::FailIfPreviouslyNotSet", (int64)ENiagaraDefaultMode::FailIfPreviouslyNotSet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binding.Comment", "// Default initialize using a dropdown widget in the Selected Details panel. \n" },
				{ "Binding.Name", "ENiagaraDefaultMode::Binding" },
				{ "Binding.ToolTip", "Default initialize using a dropdown widget in the Selected Details panel." },
				{ "Comment", "// TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node. \n// TODO: Should we add an \"Uninitialized\" entry, or is that too much friction? \n" },
				{ "Custom.Comment", "// Default initialization is done using a sub-graph.\n" },
				{ "Custom.Name", "ENiagaraDefaultMode::Custom" },
				{ "Custom.ToolTip", "Default initialization is done using a sub-graph." },
				{ "FailIfPreviouslyNotSet.Comment", "// Fail compilation if this value has not been set previously in the stack.\n" },
				{ "FailIfPreviouslyNotSet.Name", "ENiagaraDefaultMode::FailIfPreviouslyNotSet" },
				{ "FailIfPreviouslyNotSet.ToolTip", "Fail compilation if this value has not been set previously in the stack." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node.\nTODO: Should we add an \"Uninitialized\" entry, or is that too much friction?" },
				{ "Value.Comment", "// Default initialize using a value widget in the Selected Details panel. \n" },
				{ "Value.Name", "ENiagaraDefaultMode::Value" },
				{ "Value.ToolTip", "Default initialize using a value widget in the Selected Details panel." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraDefaultMode",
				"ENiagaraDefaultMode",
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
	static UEnum* ENiagaraMipMapGeneration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMipMapGeneration"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMipMapGeneration>()
	{
		return ENiagaraMipMapGeneration_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraMipMapGeneration(ENiagaraMipMapGeneration_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraMipMapGeneration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Hash() { return 794953119U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMipMapGeneration"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMipMapGeneration::Disabled", (int64)ENiagaraMipMapGeneration::Disabled },
				{ "ENiagaraMipMapGeneration::PostStage", (int64)ENiagaraMipMapGeneration::PostStage },
				{ "ENiagaraMipMapGeneration::PostSimulate", (int64)ENiagaraMipMapGeneration::PostSimulate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disabled.Comment", "/** Mips will not be created or automatically generated. */" },
				{ "Disabled.Name", "ENiagaraMipMapGeneration::Disabled" },
				{ "Disabled.ToolTip", "Mips will not be created or automatically generated." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "PostSimulate.Comment", "/** Mips will be generated after all stages have been run if the interface was written to. */" },
				{ "PostSimulate.Name", "ENiagaraMipMapGeneration::PostSimulate" },
				{ "PostSimulate.ToolTip", "Mips will be generated after all stages have been run if the interface was written to." },
				{ "PostStage.Comment", "/** Mips will be generated after each stage where the interfaces is written to. */" },
				{ "PostStage.Name", "ENiagaraMipMapGeneration::PostStage" },
				{ "PostStage.ToolTip", "Mips will be generated after each stage where the interfaces is written to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraMipMapGeneration",
				"ENiagaraMipMapGeneration",
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
	static UEnum* ENiagaraGpuBufferFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraGpuBufferFormat"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraGpuBufferFormat>()
	{
		return ENiagaraGpuBufferFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraGpuBufferFormat(ENiagaraGpuBufferFormat_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraGpuBufferFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Hash() { return 751090345U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraGpuBufferFormat"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraGpuBufferFormat::Float", (int64)ENiagaraGpuBufferFormat::Float },
				{ "ENiagaraGpuBufferFormat::HalfFloat", (int64)ENiagaraGpuBufferFormat::HalfFloat },
				{ "ENiagaraGpuBufferFormat::UnsignedNormalizedByte", (int64)ENiagaraGpuBufferFormat::UnsignedNormalizedByte },
				{ "ENiagaraGpuBufferFormat::Max", (int64)ENiagaraGpuBufferFormat::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Niagara supported buffer formats on the GPU. */" },
				{ "Float.Comment", "/** 32-bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
				{ "Float.Name", "ENiagaraGpuBufferFormat::Float" },
				{ "Float.ToolTip", "32-bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
				{ "HalfFloat.Comment", "/** 16-bit per channel floating point, range [-65504, 65504] */" },
				{ "HalfFloat.Name", "ENiagaraGpuBufferFormat::HalfFloat" },
				{ "HalfFloat.ToolTip", "16-bit per channel floating point, range [-65504, 65504]" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "ENiagaraGpuBufferFormat::Max" },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "Niagara supported buffer formats on the GPU." },
				{ "UnsignedNormalizedByte.Comment", "/** 8-bit per channel fixed point, range [0, 1]. */" },
				{ "UnsignedNormalizedByte.Name", "ENiagaraGpuBufferFormat::UnsignedNormalizedByte" },
				{ "UnsignedNormalizedByte.ToolTip", "8-bit per channel fixed point, range [0, 1]." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraGpuBufferFormat",
				"ENiagaraGpuBufferFormat",
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
	static UEnum* ENiagaraTickBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraTickBehavior"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraTickBehavior>()
	{
		return ENiagaraTickBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraTickBehavior(ENiagaraTickBehavior_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraTickBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Hash() { return 2188466189U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraTickBehavior"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraTickBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraTickBehavior::UsePrereqs", (int64)ENiagaraTickBehavior::UsePrereqs },
				{ "ENiagaraTickBehavior::UseComponentTickGroup", (int64)ENiagaraTickBehavior::UseComponentTickGroup },
				{ "ENiagaraTickBehavior::ForceTickFirst", (int64)ENiagaraTickBehavior::ForceTickFirst },
				{ "ENiagaraTickBehavior::ForceTickLast", (int64)ENiagaraTickBehavior::ForceTickLast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Niagara ticking behaviour */" },
				{ "ForceTickFirst.Comment", "/** Niagara will tick in the first tick group (default is TG_PrePhysics). */" },
				{ "ForceTickFirst.Name", "ENiagaraTickBehavior::ForceTickFirst" },
				{ "ForceTickFirst.ToolTip", "Niagara will tick in the first tick group (default is TG_PrePhysics)." },
				{ "ForceTickLast.Comment", "/** Niagara will tick in the last tick group (default is TG_LastDemotable). */" },
				{ "ForceTickLast.Name", "ENiagaraTickBehavior::ForceTickLast" },
				{ "ForceTickLast.ToolTip", "Niagara will tick in the last tick group (default is TG_LastDemotable)." },
				{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
				{ "ToolTip", "Niagara ticking behaviour" },
				{ "UseComponentTickGroup.Comment", "/** Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component. */" },
				{ "UseComponentTickGroup.Name", "ENiagaraTickBehavior::UseComponentTickGroup" },
				{ "UseComponentTickGroup.ToolTip", "Niagara will ignore prereqs (attachments / data interface dependencies) and use the tick group set on the component." },
				{ "UsePrereqs.Comment", "/** Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option. */" },
				{ "UsePrereqs.Name", "ENiagaraTickBehavior::UsePrereqs" },
				{ "UsePrereqs.ToolTip", "Niagara will tick after all prereqs have ticked for attachements / data interfaces, this is the safest option." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraTickBehavior",
				"ENiagaraTickBehavior",
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
class UScriptStruct* FNiagaraScalabilityState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityState, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScalabilityState"), sizeof(FNiagaraScalabilityState), Get_Z_Construct_UScriptStruct_FNiagaraScalabilityState_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScalabilityState>()
{
	return FNiagaraScalabilityState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScalabilityState(FNiagaraScalabilityState::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScalabilityState"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityState
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityState()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraScalabilityState>(FName(TEXT("NiagaraScalabilityState")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScalabilityState;
	struct Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Significance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Significance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCulled_MetaData[];
#endif
		static void NewProp_bCulled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCulled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviousCulled_MetaData[];
#endif
		static void NewProp_bPreviousCulled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviousCulled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCulledByDistance_MetaData[];
#endif
		static void NewProp_bCulledByDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCulledByDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCulledByInstanceCount_MetaData[];
#endif
		static void NewProp_bCulledByInstanceCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCulledByInstanceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCulledByVisibility_MetaData[];
#endif
		static void NewProp_bCulledByVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCulledByVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCulledByGlobalBudget_MetaData[];
#endif
		static void NewProp_bCulledByGlobalBudget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCulledByGlobalBudget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScalabilityState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance = { "Significance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScalabilityState, Significance), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bCulled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled = { "bCulled", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bPreviousCulled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled = { "bPreviousCulled", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bCulledByDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance = { "bCulledByDistance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bCulledByInstanceCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount = { "bCulledByInstanceCount", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bCulledByVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility = { "bCulledByVisibility", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_SetBit(void* Obj)
	{
		((FNiagaraScalabilityState*)Obj)->bCulledByGlobalBudget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget = { "bCulledByGlobalBudget", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraScalabilityState), &Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_Significance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bPreviousCulled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByInstanceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::NewProp_bCulledByGlobalBudget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScalabilityState",
		sizeof(FNiagaraScalabilityState),
		alignof(FNiagaraScalabilityState),
		Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScalabilityState"), sizeof(FNiagaraScalabilityState), Get_Z_Construct_UScriptStruct_FNiagaraScalabilityState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScalabilityState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScalabilityState_Hash() { return 3976041023U; }
class UScriptStruct* FNiagaraCompileDependency::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileDependency_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileDependency, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompileDependency"), sizeof(FNiagaraCompileDependency), Get_Z_Construct_UScriptStruct_FNiagaraCompileDependency_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompileDependency>()
{
	return FNiagaraCompileDependency::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraCompileDependency(FNiagaraCompileDependency::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraCompileDependency"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileDependency
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileDependency()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraCompileDependency>(FName(TEXT("NiagaraCompileDependency")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraCompileDependency;
	struct Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkerErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LinkerErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinGuid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackGuids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DependentVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DependentVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Records necessary information to verify that this will link properly and trace where that linkage dependency exists. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Records necessary information to verify that this will link properly and trace where that linkage dependency exists." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileDependency>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData[] = {
		{ "Comment", "/* The message itself*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The message itself" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage = { "LinkerErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileDependency, LinkerErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** The node guid that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The node guid that generated the compile event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileDependency, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData[] = {
		{ "Comment", "/** The pin persistent id that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The pin persistent id that generated the compile event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid = { "PinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileDependency, PinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_Inner = { "StackGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData[] = {
		{ "Comment", "/** The compile stack frame of node id's*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The compile stack frame of node id's" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids = { "StackGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileDependency, StackGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData[] = {
		{ "Comment", "/** The variable we are dependent on.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The variable we are dependent on." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable = { "DependentVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraCompileDependency, DependentVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCompileDependency",
		sizeof(FNiagaraCompileDependency),
		alignof(FNiagaraCompileDependency),
		Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileDependency_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraCompileDependency"), sizeof(FNiagaraCompileDependency), Get_Z_Construct_UScriptStruct_FNiagaraCompileDependency_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraCompileDependency_Hash() { return 1943262867U; }
class UScriptStruct* FNiagaraRandInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRandInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRandInfo"), sizeof(FNiagaraRandInfo), Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRandInfo>()
{
	return FNiagaraRandInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraRandInfo(FNiagaraRandInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraRandInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraRandInfo>(FName(TEXT("NiagaraRandInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraRandInfo;
	struct Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRandInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1 = { "Seed1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed1), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2 = { "Seed2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed2), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3 = { "Seed3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed3), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRandInfo",
		sizeof(FNiagaraRandInfo),
		alignof(FNiagaraRandInfo),
		Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraRandInfo"), sizeof(FNiagaraRandInfo), Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraRandInfo_Hash() { return 3248085988U; }
class UScriptStruct* FNiagaraUserParameterBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUserParameterBinding"), sizeof(FNiagaraUserParameterBinding), Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUserParameterBinding>()
{
	return FNiagaraUserParameterBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraUserParameterBinding(FNiagaraUserParameterBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraUserParameterBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraUserParameterBinding>(FName(TEXT("NiagaraUserParameterBinding")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraUserParameterBinding;
	struct Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserParameterBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "User Parameter" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraUserParameterBinding, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraUserParameterBinding",
		sizeof(FNiagaraUserParameterBinding),
		alignof(FNiagaraUserParameterBinding),
		Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraUserParameterBinding"), sizeof(FNiagaraUserParameterBinding), Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Hash() { return 920482990U; }
class UScriptStruct* FNiagaraScriptVariableBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptVariableBinding"), sizeof(FNiagaraScriptVariableBinding), Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptVariableBinding>()
{
	return FNiagaraScriptVariableBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptVariableBinding(FNiagaraScriptVariableBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptVariableBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraScriptVariableBinding>(FName(TEXT("NiagaraScriptVariableBinding")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptVariableBinding;
	struct Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Primarily a wrapper around an FName to be used for customizations in the Selected Details panel \n    to select a default binding to initialize module inputs. The customization implementation\n    is FNiagaraScriptVariableBindingCustomization. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Primarily a wrapper around an FName to be used for customizations in the Selected Details panel\n   to select a default binding to initialize module inputs. The customization implementation\n   is FNiagaraScriptVariableBindingCustomization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptVariableBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptVariableBinding, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptVariableBinding",
		sizeof(FNiagaraScriptVariableBinding),
		alignof(FNiagaraScriptVariableBinding),
		Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptVariableBinding"), sizeof(FNiagaraScriptVariableBinding), Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Hash() { return 2302638061U; }
class UScriptStruct* FNiagaraVariableDataInterfaceBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableDataInterfaceBinding"), sizeof(FNiagaraVariableDataInterfaceBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableDataInterfaceBinding>()
{
	return FNiagaraVariableDataInterfaceBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableDataInterfaceBinding(FNiagaraVariableDataInterfaceBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableDataInterfaceBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariableDataInterfaceBinding>(FName(TEXT("NiagaraVariableDataInterfaceBinding")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableDataInterfaceBinding;
	struct Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableDataInterfaceBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableDataInterfaceBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableDataInterfaceBinding",
		sizeof(FNiagaraVariableDataInterfaceBinding),
		alignof(FNiagaraVariableDataInterfaceBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableDataInterfaceBinding"), sizeof(FNiagaraVariableDataInterfaceBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Hash() { return 280704072U; }
class UScriptStruct* FNiagaraMaterialAttributeBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMaterialAttributeBinding"), sizeof(FNiagaraMaterialAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMaterialAttributeBinding>()
{
	return FNiagaraMaterialAttributeBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraMaterialAttributeBinding(FNiagaraMaterialAttributeBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraMaterialAttributeBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMaterialAttributeBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraMaterialAttributeBinding()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraMaterialAttributeBinding>(FName(TEXT("NiagaraMaterialAttributeBinding")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraMaterialAttributeBinding;
	struct Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolvedNiagaraVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResolvedNiagaraVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraChildVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraChildVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMaterialAttributeBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable = { "NiagaraVariable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, NiagaraVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable = { "ResolvedNiagaraVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable = { "NiagaraChildVariable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, NiagaraChildVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMaterialAttributeBinding",
		sizeof(FNiagaraMaterialAttributeBinding),
		alignof(FNiagaraMaterialAttributeBinding),
		Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraMaterialAttributeBinding"), sizeof(FNiagaraMaterialAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Hash() { return 3388130756U; }
class UScriptStruct* FNiagaraVariableAttributeBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableAttributeBinding"), sizeof(FNiagaraVariableAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableAttributeBinding>()
{
	return FNiagaraVariableAttributeBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableAttributeBinding(FNiagaraVariableAttributeBinding::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableAttributeBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariableAttributeBinding>(FName(TEXT("NiagaraVariableAttributeBinding")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableAttributeBinding;
	struct Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamMapVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamMapVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSetVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataSetVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootVariable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CachedDisplayName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingSourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BindingSourceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBindingExistsOnSource_MetaData[];
#endif
		static void NewProp_bBindingExistsOnSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBindingExistsOnSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCachedParticleValue_MetaData[];
#endif
		static void NewProp_bIsCachedParticleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCachedParticleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableAttributeBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData[] = {
		{ "Comment", "/** The fully expressed namespace for the variable. If an emitter namespace, this will include the Emitter's unique name.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The fully expressed namespace for the variable. If an emitter namespace, this will include the Emitter's unique name." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable = { "ParamMapVariable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, ParamMapVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData[] = {
		{ "Comment", "/** The version of the namespace to be found in an attribute table lookup. I.e. without Particles or Emitter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The version of the namespace to be found in an attribute table lookup. I.e. without Particles or Emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable = { "DataSetVariable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, DataSetVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData[] = {
		{ "Comment", "/** The namespace and default value explicitly set by the user. If meant to be derived from the source mode, it will be without a namespace.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The namespace and default value explicitly set by the user. If meant to be derived from the source mode, it will be without a namespace." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable = { "RootVariable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, RootVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "Comment", "/** Old variable brought in from previous setup. Generally ignored other than postload work.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Old variable brought in from previous setup. Generally ignored other than postload work." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName = { "CachedDisplayName", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, CachedDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData[] = {
		{ "Comment", "/** Captures the state of the namespace when the variable is set. Allows us to make later decisions about how to reconstititue the namespace.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Captures the state of the namespace when the variable is set. Allows us to make later decisions about how to reconstititue the namespace." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode = { "BindingSourceMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, BindingSourceMode), Z_Construct_UEnum_Niagara_ENiagaraBindingSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData[] = {
		{ "Comment", "/** Determine if this varible is accessible by the associated emitter passed into CacheValues.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Determine if this varible is accessible by the associated emitter passed into CacheValues." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_SetBit(void* Obj)
	{
		((FNiagaraVariableAttributeBinding*)Obj)->bBindingExistsOnSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource = { "bBindingExistsOnSource", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVariableAttributeBinding), &Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData[] = {
		{ "Comment", "/** When CacheValues is called, was this a particle attribute?*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "When CacheValues is called, was this a particle attribute?" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_SetBit(void* Obj)
	{
		((FNiagaraVariableAttributeBinding*)Obj)->bIsCachedParticleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue = { "bIsCachedParticleValue", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraVariableAttributeBinding), &Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableAttributeBinding",
		sizeof(FNiagaraVariableAttributeBinding),
		alignof(FNiagaraVariableAttributeBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableAttributeBinding"), sizeof(FNiagaraVariableAttributeBinding), Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Hash() { return 1991506535U; }
class UScriptStruct* FNiagaraVariableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableInfo"), sizeof(FNiagaraVariableInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableInfo>()
{
	return FNiagaraVariableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableInfo(FNiagaraVariableInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraVariableInfo>(FName(TEXT("NiagaraVariableInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableInfo;
	struct Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines all you need to know about a variable.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Defines all you need to know about a variable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, Definition), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableInfo",
		sizeof(FNiagaraVariableInfo),
		alignof(FNiagaraVariableInfo),
		Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableInfo"), sizeof(FNiagaraVariableInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableInfo_Hash() { return 1491398714U; }
class UScriptStruct* FNiagaraSystemUpdateContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemUpdateContext"), sizeof(FNiagaraSystemUpdateContext), Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemUpdateContext>()
{
	return FNiagaraSystemUpdateContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraSystemUpdateContext(FNiagaraSystemUpdateContext::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraSystemUpdateContext"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraSystemUpdateContext>(FName(TEXT("NiagaraSystemUpdateContext")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraSystemUpdateContext;
	struct Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentsToReset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentsToReInit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReInit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReInit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentsToNotifySimDestroy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsToNotifySimDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentsToNotifySimDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemSimsToDestroy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemSimsToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SystemSimsToDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nHelper for reseting/reinitializing Niagara systems currently active when they are being edited. \nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate().\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Helper for reseting/reinitializing Niagara systems currently active when they are being edited.\nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemUpdateContext>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReInit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_Inner = { "ComponentsToNotifySimDestroy", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy = { "ComponentsToNotifySimDestroy", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraSystemUpdateContext, SystemSimsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemUpdateContext",
		sizeof(FNiagaraSystemUpdateContext),
		alignof(FNiagaraSystemUpdateContext),
		Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraSystemUpdateContext"), sizeof(FNiagaraSystemUpdateContext), Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Hash() { return 510795787U; }
class UScriptStruct* FVMExternalFunctionBindingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("VMExternalFunctionBindingInfo"), sizeof(FVMExternalFunctionBindingInfo), Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMExternalFunctionBindingInfo>()
{
	return FVMExternalFunctionBindingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMExternalFunctionBindingInfo(FVMExternalFunctionBindingInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("VMExternalFunctionBindingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo()
	{
		UScriptStruct::DeferCppStructOps<FVMExternalFunctionBindingInfo>(FName(TEXT("VMExternalFunctionBindingInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFVMExternalFunctionBindingInfo;
	struct Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputParamLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputParamLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputParamLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionSpecifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionSpecifiers;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specifiers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specifiers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Specifiers;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMExternalFunctionBindingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner = { "InputParamLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations = { "InputParamLocations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, InputParamLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, NumOutputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMFunctionSpecifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, FunctionSpecifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp = { "Specifiers", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp = { "Specifiers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers = { "Specifiers", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Specifiers_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMExternalFunctionBindingInfo",
		sizeof(FVMExternalFunctionBindingInfo),
		alignof(FVMExternalFunctionBindingInfo),
		Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMExternalFunctionBindingInfo"), sizeof(FVMExternalFunctionBindingInfo), Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Hash() { return 288871369U; }
class UScriptStruct* FVMFunctionSpecifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMFunctionSpecifier, Z_Construct_UPackage__Script_Niagara(), TEXT("VMFunctionSpecifier"), sizeof(FVMFunctionSpecifier), Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMFunctionSpecifier>()
{
	return FVMFunctionSpecifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMFunctionSpecifier(FVMFunctionSpecifier::StaticStruct, TEXT("/Script/Niagara"), TEXT("VMFunctionSpecifier"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier
{
	FScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier()
	{
		UScriptStruct::DeferCppStructOps<FVMFunctionSpecifier>(FName(TEXT("VMFunctionSpecifier")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFVMFunctionSpecifier;
	struct Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMFunctionSpecifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMFunctionSpecifier, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMFunctionSpecifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMFunctionSpecifier",
		sizeof(FVMFunctionSpecifier),
		alignof(FVMFunctionSpecifier),
		Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMFunctionSpecifier"), sizeof(FVMFunctionSpecifier), Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMFunctionSpecifier_Hash() { return 3534141806U; }
class UScriptStruct* FNiagaraStatScope::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatScope, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStatScope"), sizeof(FNiagaraStatScope), Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStatScope>()
{
	return FNiagaraStatScope::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraStatScope(FNiagaraStatScope::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraStatScope"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraStatScope>(FName(TEXT("NiagaraStatScope")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraStatScope;
	struct Z_Construct_UScriptStruct_FNiagaraStatScope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStatScope>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraStatScope, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraStatScope, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraStatScope",
		sizeof(FNiagaraStatScope),
		alignof(FNiagaraStatScope),
		Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraStatScope"), sizeof(FNiagaraStatScope), Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraStatScope_Hash() { return 3403748624U; }
class UScriptStruct* FNiagaraScriptDataInterfaceCompileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceCompileInfo"), sizeof(FNiagaraScriptDataInterfaceCompileInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceCompileInfo>()
{
	return FNiagaraScriptDataInterfaceCompileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo(FNiagaraScriptDataInterfaceCompileInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataInterfaceCompileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraScriptDataInterfaceCompileInfo>(FName(TEXT("NiagaraScriptDataInterfaceCompileInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceCompileInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredFunctions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaceholder_MetaData[];
#endif
		static void NewProp_bIsPlaceholder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaceholder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceCompileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit(void* Obj)
	{
		((FNiagaraScriptDataInterfaceCompileInfo*)Obj)->bIsPlaceholder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder = { "bIsPlaceholder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraScriptDataInterfaceCompileInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceCompileInfo",
		sizeof(FNiagaraScriptDataInterfaceCompileInfo),
		alignof(FNiagaraScriptDataInterfaceCompileInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataInterfaceCompileInfo"), sizeof(FNiagaraScriptDataInterfaceCompileInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Hash() { return 4264536079U; }
class UScriptStruct* FNiagaraScriptDataInterfaceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceInfo"), sizeof(FNiagaraScriptDataInterfaceInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceInfo>()
{
	return FNiagaraScriptDataInterfaceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataInterfaceInfo(FNiagaraScriptDataInterfaceInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataInterfaceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraScriptDataInterfaceInfo>(FName(TEXT("NiagaraScriptDataInterfaceInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataInterfaceInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceInfo",
		sizeof(FNiagaraScriptDataInterfaceInfo),
		alignof(FNiagaraScriptDataInterfaceInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataInterfaceInfo"), sizeof(FNiagaraScriptDataInterfaceInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Hash() { return 3688297536U; }
class UScriptStruct* FNiagaraFunctionSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFunctionSignature, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFunctionSignature"), sizeof(FNiagaraFunctionSignature), Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFunctionSignature>()
{
	return FNiagaraFunctionSignature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraFunctionSignature(FNiagaraFunctionSignature::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraFunctionSignature"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraFunctionSignature>(FName(TEXT("NiagaraFunctionSignature")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraFunctionSignature;
	struct Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresContext_MetaData[];
#endif
		static void NewProp_bRequiresContext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresExecPin_MetaData[];
#endif
		static void NewProp_bRequiresExecPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresExecPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMemberFunction_MetaData[];
#endif
		static void NewProp_bMemberFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMemberFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FunctionVersion;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsCPU_MetaData[];
#endif
		static void NewProp_bSupportsCPU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsCPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsGPU_MetaData[];
#endif
		static void NewProp_bSupportsGPU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsGPU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteFunction_MetaData[];
#endif
		static void NewProp_bWriteFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftDeprecatedFunction_MetaData[];
#endif
		static void NewProp_bSoftDeprecatedFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftDeprecatedFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompileTagGenerator_MetaData[];
#endif
		static void NewProp_bIsCompileTagGenerator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompileTagGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextStageMinIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContextStageMinIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextStageMaxIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContextStageMaxIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FunctionSpecifiers;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InputDescriptions_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InputDescriptions;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutputDescriptions_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutputDescriptions;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFunctionSignature>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Name of the function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData[] = {
		{ "Comment", "/** Input parameters to this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters to this function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** Input parameters of this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters of this function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Comment", "/** Id of the owner is this is a member function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Id of the owner is this is a member function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bRequiresContext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext = { "bRequiresContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData[] = {
		{ "Comment", "/** Does this function need an exec pin for control flow because it has internal side effects that be seen by the script VM and could therefore be optimized out? If so, set to true. Default is false. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Does this function need an exec pin for control flow because it has internal side effects that be seen by the script VM and could therefore be optimized out? If so, set to true. Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bRequiresExecPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin = { "bRequiresExecPin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData[] = {
		{ "Comment", "/** True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bMemberFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction = { "bMemberFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Comment", "/** Is this function experimental? */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Is this function experimental?" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bExperimental = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, ExperimentalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData[] = {
		{ "Comment", "/** Per function version, it is up to the discretion of the function as to what the version means. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Per function version, it is up to the discretion of the function as to what the version means." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion = { "FunctionVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData[] = {
		{ "Comment", "/** Support running on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the CPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsCPU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU = { "bSupportsCPU", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData[] = {
		{ "Comment", "/** Support running on the GPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the GPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsGPU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU = { "bSupportsGPU", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData[] = {
		{ "Comment", "/** Writes to the variable this is bound to */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Writes to the variable this is bound to" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bWriteFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction = { "bWriteFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData[] = {
		{ "Comment", "/** Whether or not this function should show up in normal usage. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Whether or not this function should show up in normal usage." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSoftDeprecatedFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction = { "bSoftDeprecatedFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData[] = {
		{ "Comment", "/** Whether or not this function should be treated as a compile tag. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Whether or not this function should be treated as a compile tag." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bIsCompileTagGenerator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator = { "bIsCompileTagGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData[] = {
		{ "Comment", "/** Hidden functions can not be placed but may be bound and used.  This is useful to hide functionality while developing. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Hidden functions can not be placed but may be bound and used.  This is useful to hide functionality while developing." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ENiagaraScriptUsage" },
		{ "Comment", "/** Bitmask for which scripts are supported for this function. Use UNiagaraScript::MakeSupportedUsageContextBitmask to make the bitmask. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Bitmask for which scripts are supported for this function. Use UNiagaraScript::MakeSupportedUsageContextBitmask to make the bitmask." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, ModuleUsageBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMinIndex_MetaData[] = {
		{ "Comment", "/** When using simulation stages and bRequiresContext is true this will be the index of the stage that is associated with the function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "When using simulation stages and bRequiresContext is true this will be the index of the stage that is associated with the function." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMinIndex = { "ContextStageMinIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, ContextStageMinIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMinIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMinIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMaxIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMaxIndex = { "ContextStageMaxIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, ContextStageMaxIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMaxIndex_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp = { "FunctionSpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "Comment", "/** Function specifiers verified at bind time. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Function specifiers verified at bind time." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionSpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_ValueProp = { "InputDescriptions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_Key_KeyProp = { "InputDescriptions_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions = { "InputDescriptions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, InputDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_ValueProp = { "OutputDescriptions", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_Key_KeyProp = { "OutputDescriptions_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions = { "OutputDescriptions", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraFunctionSignature, OutputDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMinIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageMaxIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFunctionSignature",
		sizeof(FNiagaraFunctionSignature),
		alignof(FNiagaraFunctionSignature),
		Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraFunctionSignature"), sizeof(FNiagaraFunctionSignature), Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Hash() { return 3256612746U; }
class UScriptStruct* FNiagaraScriptDataUsageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataUsageInfo"), sizeof(FNiagaraScriptDataUsageInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataUsageInfo>()
{
	return FNiagaraScriptDataUsageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraScriptDataUsageInfo(FNiagaraScriptDataUsageInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraScriptDataUsageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraScriptDataUsageInfo>(FName(TEXT("NiagaraScriptDataUsageInfo")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptDataUsageInfo;
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[];
#endif
		static void NewProp_bReadsAttributeData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataUsageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData[] = {
		{ "Comment", "/** If true, this script reads attribute data. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "If true, this script reads attribute data." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
	{
		((FNiagaraScriptDataUsageInfo*)Obj)->bReadsAttributeData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraScriptDataUsageInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataUsageInfo",
		sizeof(FNiagaraScriptDataUsageInfo),
		alignof(FNiagaraScriptDataUsageInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraScriptDataUsageInfo"), sizeof(FNiagaraScriptDataUsageInfo), Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Hash() { return 3059028941U; }
class UScriptStruct* FNiagaraDataSetProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetProperties"), sizeof(FNiagaraDataSetProperties), Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetProperties>()
{
	return FNiagaraDataSetProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataSetProperties(FNiagaraDataSetProperties::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDataSetProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDataSetProperties>(FName(TEXT("NiagaraDataSetProperties")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetProperties;
	struct Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetProperties, ID), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetProperties, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetProperties",
		sizeof(FNiagaraDataSetProperties),
		alignof(FNiagaraDataSetProperties),
		Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataSetProperties"), sizeof(FNiagaraDataSetProperties), Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Hash() { return 1356222320U; }
class UScriptStruct* FNiagaraDataSetID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetID, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetID"), sizeof(FNiagaraDataSetID), Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetID>()
{
	return FNiagaraDataSetID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataSetID(FNiagaraDataSetID::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDataSetID"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID()
	{
		UScriptStruct::DeferCppStructOps<FNiagaraDataSetID>(FName(TEXT("NiagaraDataSetID")));
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetID;
	struct Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetID, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetID, Type), Z_Construct_UEnum_Niagara_ENiagaraDataSetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetID",
		sizeof(FNiagaraDataSetID),
		alignof(FNiagaraDataSetID),
		Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataSetID"), sizeof(FNiagaraDataSetID), Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetID_Hash() { return 422111518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

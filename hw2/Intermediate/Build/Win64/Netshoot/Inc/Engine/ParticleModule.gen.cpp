// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleModule.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModule() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModuleType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EParticleSourceSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSourceSelectionMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSourceSelectionMethod>()
	{
		return EParticleSourceSelectionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSourceSelectionMethod(EParticleSourceSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSourceSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Hash() { return 1771321634U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSourceSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSSM_Random", (int64)EPSSM_Random },
				{ "EPSSM_Sequential", (int64)EPSSM_Sequential },
				{ "EPSSM_MAX", (int64)EPSSM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** \n *\x09Particle Selection Method, for any emitters that utilize particles\n *\x09""as the source points.\n */" },
				{ "EPSSM_MAX.Name", "EPSSM_MAX" },
				{ "EPSSM_Random.Comment", "/** Random\x09\x09- select a particle at random\x09\x09*/" },
				{ "EPSSM_Random.DisplayName", "Random" },
				{ "EPSSM_Random.Name", "EPSSM_Random" },
				{ "EPSSM_Random.ToolTip", "Random         - select a particle at random" },
				{ "EPSSM_Sequential.Comment", "/** Sequential\x09- select a particle in order\x09\x09*/" },
				{ "EPSSM_Sequential.DisplayName", "Sequential" },
				{ "EPSSM_Sequential.Name", "EPSSM_Sequential" },
				{ "EPSSM_Sequential.ToolTip", "Sequential     - select a particle in order" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
				{ "ToolTip", "Particle Selection Method, for any emitters that utilize particles\nas the source points." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSourceSelectionMethod",
				"EParticleSourceSelectionMethod",
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
	static UEnum* EModuleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModuleType, Z_Construct_UPackage__Script_Engine(), TEXT("EModuleType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EModuleType>()
	{
		return EModuleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModuleType(EModuleType_StaticEnum, TEXT("/Script/Engine"), TEXT("EModuleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EModuleType_Hash() { return 3450918559U; }
	UEnum* Z_Construct_UEnum_Engine_EModuleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModuleType"), 0, Get_Z_Construct_UEnum_Engine_EModuleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPMT_General", (int64)EPMT_General },
				{ "EPMT_TypeData", (int64)EPMT_TypeData },
				{ "EPMT_Beam", (int64)EPMT_Beam },
				{ "EPMT_Trail", (int64)EPMT_Trail },
				{ "EPMT_Spawn", (int64)EPMT_Spawn },
				{ "EPMT_Required", (int64)EPMT_Required },
				{ "EPMT_Event", (int64)EPMT_Event },
				{ "EPMT_Light", (int64)EPMT_Light },
				{ "EPMT_SubUV", (int64)EPMT_SubUV },
				{ "EPMT_MAX", (int64)EPMT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** ModuleType\n *\x09Indicates the kind of emitter the module can be applied to.\n *\x09ie, EPMT_Beam - only applies to beam emitters.\n *\n *\x09The TypeData field is present to speed up finding the TypeData module.\n */" },
				{ "EPMT_Beam.Comment", "/** Beam - only applied to beam emitters\x09\x09\x09*/" },
				{ "EPMT_Beam.DisplayName", "Beam" },
				{ "EPMT_Beam.Name", "EPMT_Beam" },
				{ "EPMT_Beam.ToolTip", "Beam - only applied to beam emitters" },
				{ "EPMT_Event.Comment", "/** Event - event related modules\x09\x09\x09\x09\x09*/" },
				{ "EPMT_Event.DisplayName", "Event" },
				{ "EPMT_Event.Name", "EPMT_Event" },
				{ "EPMT_Event.ToolTip", "Event - event related modules" },
				{ "EPMT_General.Comment", "/** General - all emitter types can use it\x09\x09\x09*/" },
				{ "EPMT_General.DisplayName", "General" },
				{ "EPMT_General.Name", "EPMT_General" },
				{ "EPMT_General.ToolTip", "General - all emitter types can use it" },
				{ "EPMT_Light.Comment", "/** Light related modules\x09\x09\x09\x09\x09\x09\x09*/" },
				{ "EPMT_Light.DisplayName", "Light" },
				{ "EPMT_Light.Name", "EPMT_Light" },
				{ "EPMT_Light.ToolTip", "Light related modules" },
				{ "EPMT_MAX.Name", "EPMT_MAX" },
				{ "EPMT_Required.Comment", "/** Required - all emitter types REQUIRE it\x09\x09\x09*/" },
				{ "EPMT_Required.DisplayName", "Required" },
				{ "EPMT_Required.Name", "EPMT_Required" },
				{ "EPMT_Required.ToolTip", "Required - all emitter types REQUIRE it" },
				{ "EPMT_Spawn.Comment", "/** Spawn - all emitter types REQUIRE it\x09\x09\x09*/" },
				{ "EPMT_Spawn.DisplayName", "Spawn" },
				{ "EPMT_Spawn.Name", "EPMT_Spawn" },
				{ "EPMT_Spawn.ToolTip", "Spawn - all emitter types REQUIRE it" },
				{ "EPMT_SubUV.Comment", "/** SubUV related modules\x09\x09\x09\x09\x09\x09\x09*/" },
				{ "EPMT_SubUV.DisplayName", "SubUV" },
				{ "EPMT_SubUV.Name", "EPMT_SubUV" },
				{ "EPMT_SubUV.ToolTip", "SubUV related modules" },
				{ "EPMT_Trail.Comment", "/** Trail - only applied to trail emitters\x09\x09\x09*/" },
				{ "EPMT_Trail.DisplayName", "Trail" },
				{ "EPMT_Trail.Name", "EPMT_Trail" },
				{ "EPMT_Trail.ToolTip", "Trail - only applied to trail emitters" },
				{ "EPMT_TypeData.Comment", "/** TypeData - TypeData modules\x09\x09\x09\x09\x09\x09*/" },
				{ "EPMT_TypeData.DisplayName", "Type Data" },
				{ "EPMT_TypeData.Name", "EPMT_TypeData" },
				{ "EPMT_TypeData.ToolTip", "TypeData - TypeData modules" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
				{ "ToolTip", "ModuleType\n   Indicates the kind of emitter the module can be applied to.\n   ie, EPMT_Beam - only applies to beam emitters.\n\n   The TypeData field is present to speed up finding the TypeData module." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EModuleType",
				"EModuleType",
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
class UScriptStruct* FParticleRandomSeedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleRandomSeedInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleRandomSeedInfo"), sizeof(FParticleRandomSeedInfo), Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleRandomSeedInfo>()
{
	return FParticleRandomSeedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleRandomSeedInfo(FParticleRandomSeedInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleRandomSeedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo()
	{
		UScriptStruct::DeferCppStructOps<FParticleRandomSeedInfo>(FName(TEXT("ParticleRandomSeedInfo")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo;
	struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetSeedFromInstance_MetaData[];
#endif
		static void NewProp_bGetSeedFromInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetSeedFromInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSeedIsIndex_MetaData[];
#endif
		static void NewProp_bInstanceSeedIsIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSeedIsIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetSeedOnEmitterLooping_MetaData[];
#endif
		static void NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetSeedOnEmitterLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomlySelectSeedArray_MetaData[];
#endif
		static void NewProp_bRandomlySelectSeedArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomlySelectSeedArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomSeeds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleRandomSeedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** The name to expose to the placed instances for setting this seed */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The name to expose to the placed instances for setting this seed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleRandomSeedInfo, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the module will attempt to get the seed from the owner\n\x09 *\x09instance. If that fails, it will fall back to getting it from\n\x09 *\x09the RandomSeeds array.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module will attempt to get the seed from the owner\ninstance. If that fails, it will fall back to getting it from\nthe RandomSeeds array." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bGetSeedFromInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance = { "bGetSeedFromInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the seed value retrieved from the instance will be an\n\x09 *\x09index into the array of seeds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the seed value retrieved from the instance will be an\nindex into the array of seeds." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bInstanceSeedIsIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex = { "bInstanceSeedIsIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, then reset the seed upon the emitter looping.\n\x09 *\x09""For looping environmental effects this should likely be set to false to avoid\n\x09 *\x09""a repeating pattern.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then reset the seed upon the emitter looping.\nFor looping environmental effects this should likely be set to false to avoid\na repeating pattern." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bResetSeedOnEmitterLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping = { "bResetSeedOnEmitterLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/**\n\x09*\x09If true, then randomly select a seed entry from the RandomSeeds array\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then randomly select a seed entry from the RandomSeeds array" },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bRandomlySelectSeedArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray = { "bRandomlySelectSeedArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner = { "RandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09The random seed values to utilize for the module. \n\x09 *\x09More than 1 means the instance will randomly select one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The random seed values to utilize for the module.\nMore than 1 means the instance will randomly select one." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds = { "RandomSeeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleRandomSeedInfo, RandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleRandomSeedInfo",
		sizeof(FParticleRandomSeedInfo),
		alignof(FParticleRandomSeedInfo),
		Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleRandomSeedInfo"), sizeof(FParticleRandomSeedInfo), Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Hash() { return 3752840106U; }
class UScriptStruct* FParticleCurvePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleCurvePair, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleCurvePair"), sizeof(FParticleCurvePair), Get_Z_Construct_UScriptStruct_FParticleCurvePair_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleCurvePair>()
{
	return FParticleCurvePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleCurvePair(FParticleCurvePair::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleCurvePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair()
	{
		UScriptStruct::DeferCppStructOps<FParticleCurvePair>(FName(TEXT("ParticleCurvePair")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair;
	struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleCurvePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleCurvePair, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleCurvePair, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleCurvePair",
		sizeof(FParticleCurvePair),
		alignof(FParticleCurvePair),
		Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleCurvePair"), sizeof(FParticleCurvePair), Get_Z_Construct_UScriptStruct_FParticleCurvePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_Hash() { return 3312291842U; }
	void UParticleModule::StaticRegisterNativesUParticleModule()
	{
	}
	UClass* Z_Construct_UClass_UParticleModule_NoRegister()
	{
		return UParticleModule::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnModule_MetaData[];
#endif
		static void NewProp_bSpawnModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateModule_MetaData[];
#endif
		static void NewProp_bUpdateModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinalUpdateModule_MetaData[];
#endif
		static void NewProp_bFinalUpdateModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinalUpdateModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateForGPUEmitter_MetaData[];
#endif
		static void NewProp_bUpdateForGPUEmitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateForGPUEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurvesAsColor_MetaData[];
#endif
		static void NewProp_bCurvesAsColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurvesAsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b3DDrawMode_MetaData[];
#endif
		static void NewProp_b3DDrawMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b3DDrawMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupported3DDrawMode_MetaData[];
#endif
		static void NewProp_bSupported3DDrawMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupported3DDrawMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDuplicate_MetaData[];
#endif
		static void NewProp_LODDuplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LODDuplicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsRandomSeed_MetaData[];
#endif
		static void NewProp_bSupportsRandomSeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresLoopingNotification_MetaData[];
#endif
		static void NewProp_bRequiresLoopingNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresLoopingNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODValidity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODValidity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleEditorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModuleEditorColor;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleModule.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Spawning\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Spawning" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSpawnModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule = { "bSpawnModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Updating\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Updating" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule = { "bUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during final update\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during final update" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bFinalUpdateModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule = { "bFinalUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during update and/or final update for GPU emitters*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during update and/or final update for GPU emitters" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateForGPUEmitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter = { "bUpdateForGPUEmitter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData[] = {
		{ "Comment", "/** If true, the module displays FVector curves as colors\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module displays FVector curves as colors" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bCurvesAsColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor = { "bCurvesAsColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** If true, the module should render its 3D visualization helper\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should render its 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->b3DDrawMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode = { "b3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData[] = {
		{ "Comment", "/** If true, the module supports rendering a 3D visualization helper\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports rendering a 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupported3DDrawMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode = { "bSupported3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** If true, the module is enabled\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module is enabled" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** If true, the module has had editing enabled on it\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module has had editing enabled on it" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09If true, this flag indicates that auto-generation for LOD will result in\n\x09*\x09""an exact duplicate of the module, regardless of the percentage.\n\x09*\x09If false, it will result in a module with different settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, this flag indicates that auto-generation for LOD will result in\nan exact duplicate of the module, regardless of the percentage.\nIf false, it will result in a module with different settings." },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->LODDuplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate = { "LODDuplicate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData[] = {
		{ "Comment", "/** If true, the module supports RandomSeed setting */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports RandomSeed setting" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupportsRandomSeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed = { "bSupportsRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData[] = {
		{ "Comment", "/** If true, the module should be told when looping */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should be told when looping" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bRequiresLoopingNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification = { "bRequiresLoopingNotification", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The LOD levels this module is present in.\n\x09 *\x09""Bit-flags are used to indicate validity for a given LOD level.\n\x09 *\x09""For example, if\n\x09 *\x09\x09((1 << Level) & LODValidity) != 0\n\x09 *\x09then the module is used in that LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The LOD levels this module is present in.\nBit-flags are used to indicate validity for a given LOD level.\nFor example, if\n        ((1 << Level) & LODValidity) != 0\nthen the module is used in that LOD." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity = { "LODValidity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModule, LODValidity), nullptr, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** The color to draw the modules curves in the curve editor. \n\x09 *\x09If bCurvesAsColor is true, it overrides this value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The color to draw the modules curves in the curve editor.\n    If bCurvesAsColor is true, it overrides this value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor = { "ModuleEditorColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModule, ModuleEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModule_Statics::ClassParams = {
		&UParticleModule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModule, 4018662723);
	template<> ENGINE_API UClass* StaticClass<UParticleModule>()
	{
		return UParticleModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModule(Z_Construct_UClass_UParticleModule, &UParticleModule::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

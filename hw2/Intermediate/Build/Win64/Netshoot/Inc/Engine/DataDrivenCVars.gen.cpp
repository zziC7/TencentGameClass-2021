// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/DataDrivenCVars/DataDrivenCVars.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataDrivenCVars() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FDataDrivenCVarType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics
	{
		struct DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms
		{
			FString CVarName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::NewProp_CVarName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataDrivenCVarEngineSubsystem, nullptr, "OnDataDrivenCVarChanged__DelegateSignature", nullptr, nullptr, sizeof(DataDrivenCVarEngineSubsystem_eventOnDataDrivenCVarChanged_Parms), Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* FDataDrivenCVarType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_FDataDrivenCVarType, Z_Construct_UPackage__Script_Engine(), TEXT("FDataDrivenCVarType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<FDataDrivenCVarType>()
	{
		return FDataDrivenCVarType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FDataDrivenCVarType(FDataDrivenCVarType_StaticEnum, TEXT("/Script/Engine"), TEXT("FDataDrivenCVarType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_FDataDrivenCVarType_Hash() { return 1169615987U; }
	UEnum* Z_Construct_UEnum_Engine_FDataDrivenCVarType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FDataDrivenCVarType"), 0, Get_Z_Construct_UEnum_Engine_FDataDrivenCVarType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FDataDrivenCVarType::CVarFloat", (int64)FDataDrivenCVarType::CVarFloat },
				{ "FDataDrivenCVarType::CVarInt", (int64)FDataDrivenCVarType::CVarInt },
				{ "FDataDrivenCVarType::CVarBool", (int64)FDataDrivenCVarType::CVarBool },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "CVarBool.Comment", "/**\n *\n */" },
				{ "CVarBool.Name", "FDataDrivenCVarType::CVarBool" },
				{ "CVarFloat.Comment", "/**\n *\n */" },
				{ "CVarFloat.Name", "FDataDrivenCVarType::CVarFloat" },
				{ "CVarInt.Comment", "/**\n *\n */" },
				{ "CVarInt.Name", "FDataDrivenCVarType::CVarInt" },
				{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"FDataDrivenCVarType",
				"FDataDrivenCVarType",
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
class UScriptStruct* FDataDrivenConsoleVariable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable, Z_Construct_UPackage__Script_Engine(), TEXT("DataDrivenConsoleVariable"), sizeof(FDataDrivenConsoleVariable), Get_Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataDrivenConsoleVariable>()
{
	return FDataDrivenConsoleVariable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataDrivenConsoleVariable(FDataDrivenConsoleVariable::StaticStruct, TEXT("/Script/Engine"), TEXT("DataDrivenConsoleVariable"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDataDrivenConsoleVariable
{
	FScriptStruct_Engine_StaticRegisterNativesFDataDrivenConsoleVariable()
	{
		UScriptStruct::DeferCppStructOps<FDataDrivenConsoleVariable>(FName(TEXT("DataDrivenConsoleVariable")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFDataDrivenConsoleVariable;
	struct Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValueFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValueFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValueInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValueInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValueBool_MetaData[];
#endif
		static void NewProp_DefaultValueBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValueBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDrivenConsoleVariable>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "InlineCategoryProperty", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDrivenConsoleVariable, Type), Z_Construct_UEnum_Engine_FDataDrivenCVarType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDrivenConsoleVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDrivenConsoleVariable, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarFloat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat = { "DefaultValueFloat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDrivenConsoleVariable, DefaultValueFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarInt" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt = { "DefaultValueInt", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataDrivenConsoleVariable, DefaultValueInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "EditCondition", "Type == FDataDrivenCVarType::CVarBool" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_SetBit(void* Obj)
	{
		((FDataDrivenConsoleVariable*)Obj)->DefaultValueBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool = { "DefaultValueBool", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDataDrivenConsoleVariable), &Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::NewProp_DefaultValueBool,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataDrivenConsoleVariable",
		sizeof(FDataDrivenConsoleVariable),
		alignof(FDataDrivenConsoleVariable),
		Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenConsoleVariable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataDrivenConsoleVariable"), sizeof(FDataDrivenConsoleVariable), Get_Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataDrivenConsoleVariable_Hash() { return 4050348241U; }
	void UDataDrivenCVarEngineSubsystem::StaticRegisterNativesUDataDrivenCVarEngineSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_NoRegister()
	{
		return UDataDrivenCVarEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDataDrivenCVarDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataDrivenCVarDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature, "OnDataDrivenCVarChanged__DelegateSignature" }, // 1922254352
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "DataDrivenCVars" },
		{ "IncludePath", "DataDrivenCVars/DataDrivenCVars.h" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate = { "OnDataDrivenCVarDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataDrivenCVarEngineSubsystem, OnDataDrivenCVarDelegate), Z_Construct_UDelegateFunction_UDataDrivenCVarEngineSubsystem_OnDataDrivenCVarChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::NewProp_OnDataDrivenCVarDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataDrivenCVarEngineSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::ClassParams = {
		&UDataDrivenCVarEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataDrivenCVarEngineSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataDrivenCVarEngineSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataDrivenCVarEngineSubsystem, 2821686050);
	template<> ENGINE_API UClass* StaticClass<UDataDrivenCVarEngineSubsystem>()
	{
		return UDataDrivenCVarEngineSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataDrivenCVarEngineSubsystem(Z_Construct_UClass_UDataDrivenCVarEngineSubsystem, &UDataDrivenCVarEngineSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UDataDrivenCVarEngineSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataDrivenCVarEngineSubsystem);
	void UDataDrivenConsoleVariableSettings::StaticRegisterNativesUDataDrivenConsoleVariableSettings()
	{
	}
	UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings_NoRegister()
	{
		return UDataDrivenConsoleVariableSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CVarsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVarsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CVarsArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Data Driven CVars" },
		{ "IncludePath", "DataDrivenCVars/DataDrivenCVars.h" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_Inner = { "CVarsArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDataDrivenConsoleVariable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData[] = {
		{ "Category", "DataDrivenCVar" },
		{ "ModuleRelativePath", "Classes/DataDrivenCVars/DataDrivenCVars.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray = { "CVarsArray", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataDrivenConsoleVariableSettings, CVarsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::NewProp_CVarsArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataDrivenConsoleVariableSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::ClassParams = {
		&UDataDrivenConsoleVariableSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataDrivenConsoleVariableSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataDrivenConsoleVariableSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataDrivenConsoleVariableSettings, 2070308604);
	template<> ENGINE_API UClass* StaticClass<UDataDrivenConsoleVariableSettings>()
	{
		return UDataDrivenConsoleVariableSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataDrivenConsoleVariableSettings(Z_Construct_UClass_UDataDrivenConsoleVariableSettings, &UDataDrivenConsoleVariableSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UDataDrivenConsoleVariableSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataDrivenConsoleVariableSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

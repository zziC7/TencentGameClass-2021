// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionCustom.h"
#include "Serialization/StructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustom() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDefine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustom();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* ECustomMaterialOutputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomMaterialOutputType, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomMaterialOutputType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomMaterialOutputType>()
	{
		return ECustomMaterialOutputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMaterialOutputType(ECustomMaterialOutputType_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomMaterialOutputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Hash() { return 464819714U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomMaterialOutputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMaterialOutputType"), 0, Get_Z_Construct_UEnum_Engine_ECustomMaterialOutputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMOT_Float1", (int64)CMOT_Float1 },
				{ "CMOT_Float2", (int64)CMOT_Float2 },
				{ "CMOT_Float3", (int64)CMOT_Float3 },
				{ "CMOT_Float4", (int64)CMOT_Float4 },
				{ "CMOT_MaterialAttributes", (int64)CMOT_MaterialAttributes },
				{ "CMOT_MAX", (int64)CMOT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CMOT_Float1.Name", "CMOT_Float1" },
				{ "CMOT_Float2.Name", "CMOT_Float2" },
				{ "CMOT_Float3.Name", "CMOT_Float3" },
				{ "CMOT_Float4.Name", "CMOT_Float4" },
				{ "CMOT_MaterialAttributes.Name", "CMOT_MaterialAttributes" },
				{ "CMOT_MAX.Name", "CMOT_MAX" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECustomMaterialOutputType",
				"ECustomMaterialOutputType",
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
class UScriptStruct* FCustomDefine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomDefine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDefine, Z_Construct_UPackage__Script_Engine(), TEXT("CustomDefine"), sizeof(FCustomDefine), Get_Z_Construct_UScriptStruct_FCustomDefine_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomDefine>()
{
	return FCustomDefine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomDefine(FCustomDefine::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomDefine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomDefine
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomDefine()
	{
		UScriptStruct::DeferCppStructOps<FCustomDefine>(FName(TEXT("CustomDefine")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomDefine;
	struct Z_Construct_UScriptStruct_FCustomDefine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefineValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDefine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomDefine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDefine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName = { "DefineName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDefine, DefineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue = { "DefineValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomDefine, DefineValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDefine_Statics::NewProp_DefineValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDefine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomDefine",
		sizeof(FCustomDefine),
		alignof(FCustomDefine),
		Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomDefine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDefine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomDefine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomDefine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomDefine"), sizeof(FCustomDefine), Get_Z_Construct_UScriptStruct_FCustomDefine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomDefine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomDefine_Hash() { return 942343491U; }
class UScriptStruct* FCustomOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomOutput, Z_Construct_UPackage__Script_Engine(), TEXT("CustomOutput"), sizeof(FCustomOutput), Get_Z_Construct_UScriptStruct_FCustomOutput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomOutput>()
{
	return FCustomOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomOutput(FCustomOutput::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomOutput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomOutput
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomOutput()
	{
		UScriptStruct::DeferCppStructOps<FCustomOutput>(FName(TEXT("CustomOutput")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomOutput;
	struct Z_Construct_UScriptStruct_FCustomOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomOutput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "CustomOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "CustomOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomOutput, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOutput_Statics::NewProp_OutputType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomOutput",
		sizeof(FCustomOutput),
		alignof(FCustomOutput),
		Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomOutput"), sizeof(FCustomOutput), Get_Z_Construct_UScriptStruct_FCustomOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomOutput_Hash() { return 3234840122U; }
class UScriptStruct* FCustomInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomInput, Z_Construct_UPackage__Script_Engine(), TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomInput>()
{
	return FCustomInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomInput(FCustomInput::StaticStruct, TEXT("/Script/Engine"), TEXT("CustomInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCustomInput
{
	FScriptStruct_Engine_StaticRegisterNativesFCustomInput()
	{
		UScriptStruct::DeferCppStructOps<FCustomInput>(FName(TEXT("CustomInput")));
	}
} ScriptStruct_Engine_StaticRegisterNativesFCustomInput;
	struct Z_Construct_UScriptStruct_FCustomInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_InputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInput_Statics::NewProp_Input,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomInput",
		sizeof(FCustomInput),
		alignof(FCustomInput),
		Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomInput"), sizeof(FCustomInput), Get_Z_Construct_UScriptStruct_FCustomInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomInput_Hash() { return 342718217U; }
	void UMaterialExpressionCustom::StaticRegisterNativesUMaterialExpressionCustom()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCustom_NoRegister()
	{
		return UMaterialExpressionCustom::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCustom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalOutputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalDefines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDefines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalDefines;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncludeFilePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeFilePaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCustom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCustom.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Code), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, OutputType), Z_Construct_UEnum_Engine_ECustomMaterialOutputType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_Inner = { "AdditionalOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs = { "AdditionalOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, AdditionalOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_Inner = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomDefine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, AdditionalDefines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_Inner = { "IncludeFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_MetaData[] = {
		{ "Category", "MaterialExpressionCustom" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths = { "IncludeFilePaths", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCustom, IncludeFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_OutputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_AdditionalDefines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustom_Statics::NewProp_IncludeFilePaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCustom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams = {
		&UMaterialExpressionCustom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCustom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionCustom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionCustom, 3447775868);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCustom>()
	{
		return UMaterialExpressionCustom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCustom(Z_Construct_UClass_UMaterialExpressionCustom, &UMaterialExpressionCustom::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCustom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustom);
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionCustom)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

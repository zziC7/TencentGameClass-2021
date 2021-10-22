// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/TemplateSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceActor() {}
// Cross Module References
	TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
// End Cross Module References
class UScriptStruct* FTemplateSequenceBindingOverrideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TEMPLATESEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData, Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSequenceBindingOverrideData"), sizeof(FTemplateSequenceBindingOverrideData), Get_Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Hash());
	}
	return Singleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSequenceBindingOverrideData>()
{
	return FTemplateSequenceBindingOverrideData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateSequenceBindingOverrideData(FTemplateSequenceBindingOverrideData::StaticStruct, TEXT("/Script/TemplateSequence"), TEXT("TemplateSequenceBindingOverrideData"), false, nullptr, nullptr);
static struct FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceBindingOverrideData
{
	FScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceBindingOverrideData()
	{
		UScriptStruct::DeferCppStructOps<FTemplateSequenceBindingOverrideData>(FName(TEXT("TemplateSequenceBindingOverrideData")));
	}
} ScriptStruct_TemplateSequence_StaticRegisterNativesFTemplateSequenceBindingOverrideData;
	struct Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[];
#endif
		static void NewProp_bOverridesDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Template sequence binding override data\n *\n * This is similar to FMovieSceneBindingOverrideData, but works only for a template sequence's root object,\n * so we don't need it to store the object binding ID.\n */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Template sequence binding override data\n\nThis is similar to FMovieSceneBindingOverrideData, but works only for a template sequence's root object,\nso we don't need it to store the object binding ID." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSequenceBindingOverrideData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object binding to override. */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Specifies the object binding to override." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateSequenceBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true). */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true)." },
	};
#endif
	void Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
	{
		((FTemplateSequenceBindingOverrideData*)Obj)->bOverridesDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTemplateSequenceBindingOverrideData), &Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
		nullptr,
		&NewStructOps,
		"TemplateSequenceBindingOverrideData",
		sizeof(FTemplateSequenceBindingOverrideData),
		alignof(FTemplateSequenceBindingOverrideData),
		Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TemplateSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateSequenceBindingOverrideData"), sizeof(FTemplateSequenceBindingOverrideData), Get_Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Hash() { return 3338009285U; }
	DEFINE_FUNCTION(ATemplateSequenceActor::execSetBinding)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bOverridesDefault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinding(Z_Param_Actor,Z_Param_bOverridesDefault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemplateSequenceActor::execGetSequencePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTemplateSequencePlayer**)Z_Param__Result=P_THIS->GetSequencePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemplateSequenceActor::execSetSequence)
	{
		P_GET_OBJECT(UTemplateSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemplateSequenceActor::execLoadSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTemplateSequence**)Z_Param__Result=P_THIS->LoadSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemplateSequenceActor::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTemplateSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void ATemplateSequenceActor::StaticRegisterNativesATemplateSequenceActor()
	{
		UClass* Class = ATemplateSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSequence", &ATemplateSequenceActor::execGetSequence },
			{ "GetSequencePlayer", &ATemplateSequenceActor::execGetSequencePlayer },
			{ "LoadSequence", &ATemplateSequenceActor::execLoadSequence },
			{ "SetBinding", &ATemplateSequenceActor::execSetBinding },
			{ "SetSequence", &ATemplateSequenceActor::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics
	{
		struct TemplateSequenceActor_eventGetSequence_Parms
		{
			UTemplateSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the template sequence being played by this actor.\n\x09 *\n\x09 * @return the template sequence, or nullptr if it is not assigned or cannot be loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the template sequence being played by this actor.\n\n@return the template sequence, or nullptr if it is not assigned or cannot be loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "GetSequence", nullptr, nullptr, sizeof(TemplateSequenceActor_eventGetSequence_Parms), Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATemplateSequenceActor_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics
	{
		struct TemplateSequenceActor_eventGetSequencePlayer_Parms
		{
			UTemplateSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Get the actor's sequence player, or nullptr if it not yet initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the actor's sequence player, or nullptr if it not yet initialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "GetSequencePlayer", nullptr, nullptr, sizeof(TemplateSequenceActor_eventGetSequencePlayer_Parms), Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics
	{
		struct TemplateSequenceActor_eventLoadSequence_Parms
		{
			UTemplateSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequenceActor_eventLoadSequence_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the template sequence being played by this actor.\n\x09 *\n\x09 * @return the template sequence, or nullptr if it is not assigned or cannot be loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the template sequence being played by this actor.\n\n@return the template sequence, or nullptr if it is not assigned or cannot be loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "LoadSequence", nullptr, nullptr, sizeof(TemplateSequenceActor_eventLoadSequence_Parms), Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics
	{
		struct TemplateSequenceActor_eventSetBinding_Parms
		{
			AActor* Actor;
			bool bOverridesDefault;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bOverridesDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequenceActor_eventSetBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
	{
		((TemplateSequenceActor_eventSetBinding_Parms*)Obj)->bOverridesDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TemplateSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Set the actor to play the template sequence onto, by setting up an override for the template\n\x09 * sequence's root object binding.\n\x09 */" },
		{ "CPP_Default_bOverridesDefault", "true" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Set the actor to play the template sequence onto, by setting up an override for the template\nsequence's root object binding." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "SetBinding", nullptr, nullptr, sizeof(TemplateSequenceActor_eventSetBinding_Parms), Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATemplateSequenceActor_SetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics
	{
		struct TemplateSequenceActor_eventSetSequence_Parms
		{
			UTemplateSequence* InSequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the template sequence being played by this actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Set the template sequence being played by this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "SetSequence", nullptr, nullptr, sizeof(TemplateSequenceActor_eventSetSequence_Parms), Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATemplateSequenceActor_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister()
	{
		return ATemplateSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ATemplateSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATemplateSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATemplateSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemplateSequenceActor_GetSequence, "GetSequence" }, // 2725730549
		{ &Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 2362167113
		{ &Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence, "LoadSequence" }, // 3279219548
		{ &Z_Construct_UFunction_ATemplateSequenceActor_SetBinding, "SetBinding" }, // 212188327
		{ &Z_Construct_UFunction_ATemplateSequenceActor_SetSequence, "SetSequence" }, // 731623480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemplateSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor responsible for controlling a specific template sequence in the world.\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input" },
		{ "IncludePath", "TemplateSequenceActor.h" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific template sequence in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATemplateSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x001200000008203c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATemplateSequenceActor, SequencePlayer), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence_MetaData[] = {
		{ "AllowedClasses", "TemplateSequence" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence = { "TemplateSequence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATemplateSequenceActor, TemplateSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The override for the template sequence's root object binding. See SetBinding. */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "The override for the template sequence's root object binding. See SetBinding." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride = { "BindingOverride", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATemplateSequenceActor, BindingOverride), Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData, METADATA_PARAMS(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATemplateSequenceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister, (int32)VTABLE_OFFSET(ATemplateSequenceActor, IMovieSceneSequenceActor), false },
			{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ATemplateSequenceActor, IMovieScenePlaybackClient), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATemplateSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemplateSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATemplateSequenceActor_Statics::ClassParams = {
		&ATemplateSequenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATemplateSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATemplateSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATemplateSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATemplateSequenceActor, 413443604);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<ATemplateSequenceActor>()
	{
		return ATemplateSequenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATemplateSequenceActor(Z_Construct_UClass_ATemplateSequenceActor, &ATemplateSequenceActor::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("ATemplateSequenceActor"), false, nullptr, nullptr, nullptr);

	void ATemplateSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SequencePlayer(TEXT("SequencePlayer"));

		const bool bIsValid = true
			&& Name_SequencePlayer == ClassReps[(int32)ENetFields_Private::SequencePlayer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATemplateSequenceActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATemplateSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

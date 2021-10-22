// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActor)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetBoundActor(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActors)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetBoundActors(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObject)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetBoundObject(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObjects)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	static FName NAME_ULevelSequenceDirector_OnCreated = FName(TEXT("OnCreated"));
	void ULevelSequenceDirector::OnCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceDirector_OnCreated),NULL);
	}
	void ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector()
	{
		UClass* Class = ULevelSequenceDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundActor", &ULevelSequenceDirector::execGetBoundActor },
			{ "GetBoundActors", &ULevelSequenceDirector::execGetBoundActors },
			{ "GetBoundObject", &ULevelSequenceDirector::execGetBoundObject },
			{ "GetBoundObjects", &ULevelSequenceDirector::execGetBoundObjects },
			{ "GetSequence", &ULevelSequenceDirector::execGetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics
	{
		struct LevelSequenceDirector_eventGetBoundActor_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/**\n\x09 * Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActor", nullptr, nullptr, sizeof(LevelSequenceDirector_eventGetBoundActor_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics
	{
		struct LevelSequenceDirector_eventGetBoundActors_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/**\n\x09 * Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActors", nullptr, nullptr, sizeof(LevelSequenceDirector_eventGetBoundActors_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics
	{
		struct LevelSequenceDirector_eventGetBoundObject_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/**\n\x09 * Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObject", nullptr, nullptr, sizeof(LevelSequenceDirector_eventGetBoundObject_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics
	{
		struct LevelSequenceDirector_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/**\n\x09 * Resolve the bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObjects", nullptr, nullptr, sizeof(LevelSequenceDirector_eventGetBoundObjects_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics
	{
		struct LevelSequenceDirector_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceDirector_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/*\n\x09 * Get the current sequence that this director is playing back within \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "* Get the current sequence that this director is playing back within" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetSequence", nullptr, nullptr, sizeof(LevelSequenceDirector_eventGetSequence_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/** Called when this director is created */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Called when this director is created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "OnCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_OnCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubSequenceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScenePlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieScenePlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor, "GetBoundActor" }, // 882931280
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors, "GetBoundActors" }, // 4255395819
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject, "GetBoundObject" }, // 2719078579
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects, "GetBoundObjects" }, // 176979131
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetSequence, "GetSequence" }, // 1342647135
		{ &Z_Construct_UFunction_ULevelSequenceDirector_OnCreated, "OnCreated" }, // 2733061862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/** Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceDirector, Player), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData[] = {
		{ "Comment", "/** The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID = { "SubSequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceDirector, SubSequenceID), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData[] = {
		{ "Comment", "/** Native player interface index - stored by index so that it can be reinstanced correctly */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Native player interface index - stored by index so that it can be reinstanced correctly" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex = { "MovieScenePlayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceDirector, MovieScenePlayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams = {
		&ULevelSequenceDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceDirector, 3791940056);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceDirector>()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceDirector(Z_Construct_UClass_ULevelSequenceDirector, &ULevelSequenceDirector::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceDirector);
	void ULegacyLevelSequenceDirectorBlueprint::StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint()
	{
	}
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyLevelSequenceDirectorBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams = {
		&ULegacyLevelSequenceDirectorBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegacyLevelSequenceDirectorBlueprint, 2404126639);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULegacyLevelSequenceDirectorBlueprint>()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegacyLevelSequenceDirectorBlueprint(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint, &ULegacyLevelSequenceDirectorBlueprint::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULegacyLevelSequenceDirectorBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyLevelSequenceDirectorBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

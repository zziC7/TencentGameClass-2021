// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSequence::execRemoveMetaDataByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMetaDataByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequence::execCopyMetaData)
	{
		P_GET_OBJECT(UObject,Z_Param_InMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CopyMetaData(Z_Param_InMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequence::execFindOrAddMetaDataByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindOrAddMetaDataByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequence::execFindMetaDataByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindMetaDataByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	void ULevelSequence::StaticRegisterNativesULevelSequence()
	{
		UClass* Class = ULevelSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyMetaData", &ULevelSequence::execCopyMetaData },
			{ "FindMetaDataByClass", &ULevelSequence::execFindMetaDataByClass },
			{ "FindOrAddMetaDataByClass", &ULevelSequence::execFindOrAddMetaDataByClass },
			{ "RemoveMetaDataByClass", &ULevelSequence::execRemoveMetaDataByClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics
	{
		struct LevelSequence_eventCopyMetaData_Parms
		{
			UObject* InMetaData;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, InMetaData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type\n\x09* Meta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.\n\x09* @param InMetaData - Existing Metadata Object that you wish to copy into this Level Sequence.\n\x09* @return The newly copied instance of the Metadata that now exists on this sequence.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type\nMeta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.\n@param InMetaData - Existing Metadata Object that you wish to copy into this Level Sequence.\n@return The newly copied instance of the Metadata that now exists on this sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "CopyMetaData", nullptr, nullptr, sizeof(LevelSequence_eventCopyMetaData_Parms), Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_CopyMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics
	{
		struct LevelSequence_eventFindMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Find meta-data of a particular type for this level sequence instance.\n\x09* @param InClass - Class that you wish to find the metadata object for.\n\x09* @return An instance of this class if it already exists as metadata on this Level Sequence, otherwise null.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance.\n@param InClass - Class that you wish to find the metadata object for.\n@return An instance of this class if it already exists as metadata on this Level Sequence, otherwise null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindMetaDataByClass", nullptr, nullptr, sizeof(LevelSequence_eventFindMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics
	{
		struct LevelSequence_eventFindOrAddMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.\n\x09* @param InClass - Class that you wish to find or create the metadata object for.\n\x09* @return An instance of this class as metadata on this Level Sequence.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.\n@param InClass - Class that you wish to find or create the metadata object for.\n@return An instance of this class as metadata on this Level Sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindOrAddMetaDataByClass", nullptr, nullptr, sizeof(LevelSequence_eventFindOrAddMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics
	{
		struct LevelSequence_eventRemoveMetaDataByClass_Parms
		{
			TSubclassOf<UObject>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequence_eventRemoveMetaDataByClass_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Remove meta-data of a particular type for this level sequence instance, if it exists\n\x09* @param InClass - The class type that you wish to remove the metadata for\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Remove meta-data of a particular type for this level sequence instance, if it exists\n@param InClass - The class type that you wish to remove the metadata for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "RemoveMetaDataByClass", nullptr, nullptr, sizeof(LevelSequence_eventRemoveMetaDataByClass_Parms), Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
	{
		return ULevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossessedObjects_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PossessedObjects_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PossessedObjects;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaDataObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataObjects;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequence_CopyMetaData, "CopyMetaData" }, // 673215785
		{ &Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass, "FindMetaDataByClass" }, // 592134041
		{ &Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass, "FindOrAddMetaDataByClass" }, // 3648336613
		{ &Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass, "RemoveMetaDataByClass" }, // 3970958771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene animation for Actors.\n */" },
		{ "IncludePath", "LevelSequence.h" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Movie scene animation for Actors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "/** Legacy object references - should be read-only. Not deprecated because they need to still be saved */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Legacy object references - should be read-only. Not deprecated because they need to still be saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, ObjectReferences), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData[] = {
		{ "Comment", "/** References to bound objects. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "References to bound objects." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences = { "BindingReferences", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, BindingReferences), Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp = { "PossessedObjects", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLevelSequenceObject, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp = { "PossessedObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData[] = {
		{ "Comment", "/** Deprecated property housing old possessed object bindings */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Deprecated property housing old possessed object bindings" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects = { "PossessedObjects", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, PossessedObjects_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData[] = {
		{ "Comment", "/** A pointer to the director blueprint that generates this sequence's DirectorClass. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this sequence's DirectorClass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, DirectorBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The class that is used to spawn this level sequence's director instance.\n\x09 * Director instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "The class that is used to spawn this level sequence's director instance.\nDirector instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, DirectorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData[] = {
		{ "Comment", "/** Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, MetaDataObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequence, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULevelSequence_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(ULevelSequence, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequence_Statics::ClassParams = {
		&ULevelSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequence_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequence, 2298827677);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequence>()
	{
		return ULevelSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequence(Z_Construct_UClass_ULevelSequence, &ULevelSequence::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

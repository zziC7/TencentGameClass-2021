// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Classes/GameplayTagAssetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagAssetInterface() {}
// Cross Module References
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(IGameplayTagAssetInterface::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameplayTagAssetInterface::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameplayTagAssetInterface::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameplayTagAssetInterface::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	void UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface()
	{
		UClass* Class = UGameplayTagAssetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedGameplayTags", &IGameplayTagAssetInterface::execGetOwnedGameplayTags },
			{ "HasAllMatchingGameplayTags", &IGameplayTagAssetInterface::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &IGameplayTagAssetInterface::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &IGameplayTagAssetInterface::execHasMatchingGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics
	{
		struct GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Get any owned gameplay tags on the asset\n\x09 * \n\x09 * @param OutTags\x09[OUT] Set of tags on the asset\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
		{ "ToolTip", "Get any owned gameplay tags on the asset\n\n@param OutTags       [OUT] Set of tags on the asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(GameplayTagAssetInterface_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics
	{
		struct GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the asset has gameplay tags that matches against all of the specified tags (expands to include parents of asset tags)\n\x09 * \n\x09 * @param TagContainer\x09\x09\x09Tag container to check for a match\n\x09 * \n\x09 * @return True if the asset has matches all of the gameplay tags, will be true if container is empty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
		{ "ToolTip", "Check if the asset has gameplay tags that matches against all of the specified tags (expands to include parents of asset tags)\n\n@param TagContainer                  Tag container to check for a match\n\n@return True if the asset has matches all of the gameplay tags, will be true if container is empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(GameplayTagAssetInterface_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics
	{
		struct GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the asset has gameplay tags that matches against any of the specified tags (expands to include parents of asset tags)\n\x09 * \n\x09 * @param TagContainer\x09\x09\x09Tag container to check for a match\n\x09 * \n\x09 * @return True if the asset has matches any of the gameplay tags, will be false if container is empty\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
		{ "ToolTip", "Check if the asset has gameplay tags that matches against any of the specified tags (expands to include parents of asset tags)\n\n@param TagContainer                  Tag container to check for a match\n\n@return True if the asset has matches any of the gameplay tags, will be false if container is empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(GameplayTagAssetInterface_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics
	{
		struct GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the asset has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)\n\x09 * \n\x09 * @param TagToCheck\x09Tag to check for a match\n\x09 * \n\x09 * @return True if the asset has a gameplay tag that matches, false if not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
		{ "ToolTip", "Check if the asset has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)\n\n@param TagToCheck    Tag to check for a match\n\n@return True if the asset has a gameplay tag that matches, false if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagAssetInterface, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(GameplayTagAssetInterface_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister()
	{
		return UGameplayTagAssetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagAssetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagAssetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTagAssetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagAssetInterface_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 2074716032
		{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 2354766917
		{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 57493604
		{ &Z_Construct_UFunction_UGameplayTagAssetInterface_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 249753094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagAssetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagAssetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagAssetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayTagAssetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagAssetInterface_Statics::ClassParams = {
		&UGameplayTagAssetInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagAssetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagAssetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagAssetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagAssetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagAssetInterface, 3788867543);
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UGameplayTagAssetInterface>()
	{
		return UGameplayTagAssetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagAssetInterface(Z_Construct_UClass_UGameplayTagAssetInterface, &UGameplayTagAssetInterface::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagAssetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagAssetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPreset() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
// End Cross Module References
	DEFINE_FUNCTION(ULiveLinkPreset::execBuildFromClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFromClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkPreset::execAddToClient)
	{
		P_GET_UBOOL(Z_Param_bRecreatePresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToClient(Z_Param_bRecreatePresets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkPreset::execApplyToClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyToClient();
		P_NATIVE_END;
	}
	void ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset()
	{
		UClass* Class = ULiveLinkPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToClient", &ULiveLinkPreset::execAddToClient },
			{ "ApplyToClient", &ULiveLinkPreset::execApplyToClient },
			{ "BuildFromClient", &ULiveLinkPreset::execBuildFromClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics
	{
		struct LiveLinkPreset_eventAddToClient_Parms
		{
			bool bRecreatePresets;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecreatePresets_MetaData[];
#endif
		static void NewProp_bRecreatePresets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecreatePresets;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventAddToClient_Parms*)Obj)->bRecreatePresets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets = { "bRecreatePresets", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventAddToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\x09 *\n\x09 * @param bRecreatePresets\x09When true, if subjects and sources from this preset already exist, we will recreate them.\n\x09 *\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "CPP_Default_bRecreatePresets", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\n@param bRecreatePresets      When true, if subjects and sources from this preset already exist, we will recreate them.\n\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "AddToClient", nullptr, nullptr, sizeof(LiveLinkPreset_eventAddToClient_Parms), Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_AddToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics
	{
		struct LiveLinkPreset_eventApplyToClient_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventApplyToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkPreset_eventApplyToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Remove all previous sources and subjects and add the sources and subjects from this preset.\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Remove all previous sources and subjects and add the sources and subjects from this preset.\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClient", nullptr, nullptr, sizeof(LiveLinkPreset_eventApplyToClient_Parms), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reset this preset and build the list of sources and subjects from the client. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Reset this preset and build the list of sources and subjects from the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "BuildFromClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister()
	{
		return ULiveLinkPreset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkPreset_AddToClient, "AddToClient" }, // 1307879072
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient, "ApplyToClient" }, // 3526674442
		{ &Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient, "BuildFromClient" }, // 1127869221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkPreset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSourcePreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkPreset, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkPreset, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams = {
		&ULiveLinkPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkPreset, 1779612147);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkPreset>()
	{
		return ULiveLinkPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkPreset(Z_Construct_UClass_ULiveLinkPreset, &ULiveLinkPreset::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
